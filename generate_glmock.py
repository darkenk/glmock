#!/usr/bin/python
# Copyright (C) 2014, Dariusz Kluska <darkenk@gmail.com>
# Copyright (C) 2014, Sebastian Gozdz <ssabuss@gmail.com>
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# * Redistributions of source code must retain the above copyright notice, this
#   list of conditions and the following disclaimer.
#
# * Redistributions in binary form must reproduce the above copyright notice,
#   this list of conditions and the following disclaimer in the documentation
#   and/or other materials provided with the distribution.
#
# * Neither the name of the {organization} nor the names of its
#   contributors may be used to endorse or promote products derived from
#   this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
# SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
# OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
import getopt
import sys
import clang.cindex
import re

cpp_file = []
hpp_file = []


def append_mock_method_decl(return_val, function_name, args_decl):
    if len(args_decl) == 0:
        no_of_args = 0
    else:
        no_of_args = len(args_decl.split(','))
    hpp_file.append('    MOCK_METHOD' + str(no_of_args) + '( ' + function_name + ', ' + return_val + \
          ' (' + args_decl + ') );')


def append_function_impl(return_val, mock_function_name, function_name, args_decl, args):
    cpp_file.append(return_val + ' ' + function_name + '(' + args_decl + ')')
    cpp_file.append('{')
    cpp_file.append(' '*4 + 'return getMock()->' + mock_function_name + '(' + args + ');')
    cpp_file.append('}')


def get_function_args(node):
    # arguments for function which is declared
    args_decl = ''
    # arguments for function which is called
    args = ''
    i = 0
    for c in node.get_children():
        if c.kind == clang.cindex.CursorKind.PARM_DECL:
            arg_type = str(c.type.spelling)
            arg_type = re.sub('\[.*\]', '*', arg_type)
            arg_name = c.displayname
            if len(arg_name) == 0:
                arg_name = 'arg' + str(i)
                i += 1
            args_decl += arg_type + ' ' + arg_name + ', '
            args += arg_name + ', '
    args = args[:-2]
    args_decl = args_decl[:-2]
    ret = [args_decl, args]
    return ret


def traverse_function(node):
    function_name = str(node.spelling)
    mock_function_name = remove_prefix_from_function(str(node.spelling))
    return_val = node.type.get_result().spelling
    args = get_function_args(node)
    if len(args[0].split(',')) < 11:
        append_function_impl(return_val, mock_function_name, function_name, args[0], args[1])
        append_mock_method_decl(return_val, mock_function_name, args[0])


def traverse_pointer_to_function(node):
    return_val = str(node.type.get_canonical().spelling)
    pos = return_val.find('(*)')
    if pos == -1:
        return
    return_val = return_val[:pos]
    args = []
    function_name = ''
    for c in node.get_children():
        if c.kind.is_reference():
            func = c.get_definition()
            function_name = node.displayname
            args = get_function_args(func)
    if len(args[0].split(',')) < 11:
        function_def = node.type.spelling + ' ' + function_name + ' = '
        function_name = 'mock' + remove_prefix_from_function(function_name)
        function_def += function_name + ';\n'
        mock_function_name = function_name[4:]
        append_function_impl(return_val, mock_function_name, function_name, args[0], args[1])
        append_mock_method_decl(return_val, mock_function_name, args[0])
        cpp_file.append(function_def)


def remove_prefix_from_function(function_name):
    if function_name.startswith('__glew'):
        function_name = 'gl_' + function_name[6:]
    elif function_name.startswith('glu'):
        function_name = 'glu_' + function_name[3:]
    elif function_name.startswith('glew'):
        function_name = 'glew_' + function_name[4:]
    elif function_name.startswith('gl'):
        function_name = 'gl_' + function_name[2:]
    else:
        print(function_name)

    return function_name


def traverse(node, level):
    if node.kind == clang.cindex.CursorKind.FUNCTION_DECL and \
        node.type.kind == clang.cindex.TypeKind.FUNCTIONPROTO:
        traverse_function(node)
        return
    elif node.kind == clang.cindex.CursorKind.VAR_DECL:
        traverse_pointer_to_function(node)
        return
    for c in node.get_children():
        level += 1
        traverse(c, level)
        level -= 1


def write_to_file(filename, content):
    f = open(filename, 'w')
    for line in content:
        f.write(line + '\n')
    f.close()


def display_node(node, level):
    print ('  '*level + 'K:%s S:%s D:%s TK:%s TS:%s') % \
    (node.kind, node.spelling, node.displayname, node.type.kind, node.type.spelling)
    if clang.cindex.TypeKind.TYPEDEF == node.type.kind:
        level += 1
        t = node.type.get_canonical();
        print ('  '*level + 'TK:%s TS:%s') % \
        (t.kind, t.spelling)
        level -= 1
    if node.kind == clang.cindex.CursorKind.TYPE_REF:
        level += 1
        display_node(node.get_definition(), level)
        level -= 1
    for c in node.get_children():
        level += 1
        display_node(c, level)
        level -= 1

def create_header_of_cpp_file(file_name,class_name):
    cpp_file.append('#include "'+file_name+'.hpp"')
    cpp_file.append('#include <pthread.h>')
    cpp_file.append('#include <map>\n')
    cpp_file.append('static std::map<pthread_t, '+class_name+'* > gMap;')
    cpp_file.append('static pthread_mutex_t gMutex = PTHREAD_MUTEX_INITIALIZER;\n')
    cpp_file.append(class_name+'::'+class_name+'()')
    cpp_file.append('{')
    cpp_file.append('    pthread_mutex_lock(&gMutex);')
    cpp_file.append('    gMap.insert(std::pair<pthread_t, '+class_name+'* >(pthread_self(), this));')
    cpp_file.append('    pthread_mutex_unlock(&gMutex);')
    cpp_file.append('}\n')
    cpp_file.append(class_name+'::~'+class_name+'()')
    cpp_file.append('{')
    cpp_file.append('    pthread_mutex_lock(&gMutex);')
    cpp_file.append('    gMap.erase(pthread_self());')
    cpp_file.append('    pthread_mutex_unlock(&gMutex);')
    cpp_file.append('}\n')
    cpp_file.append('static '+class_name+'* getMock()')
    cpp_file.append('{')
    cpp_file.append('    pthread_mutex_lock(&gMutex);')
    cpp_file.append('    std::map<pthread_t, '+class_name+'*>::iterator it = gMap.find(pthread_self());')
    cpp_file.append('    if (it == gMap.end()) {')
    cpp_file.append('        std::cerr << "Initialize Mock first" << std::endl;')
    cpp_file.append('        pthread_mutex_unlock(&gMutex);')
    cpp_file.append('        std::abort();')
    cpp_file.append('    }')
    cpp_file.append('    pthread_mutex_unlock(&gMutex);')
    cpp_file.append('    return it->second;')
    cpp_file.append('}\n')


def create_header_of_hpp_file(file_name, class_name, header_file):
    hpp_file.append('#ifndef __'+file_name.upper()+'_HPP__')
    hpp_file.append('#define __'+file_name.upper()+'_HPP__\n')
    hpp_file.append('#include <gmock/gmock.h>\n')
    hpp_file.append('#include <' + header_file + '>\n')
    hpp_file.append('class '+class_name+' {')
    hpp_file.append('public:')
    hpp_file.append('    '+class_name+'();')
    hpp_file.append('    ~'+class_name+'();')


def create_end_of_hpp_file(file_name):
    hpp_file.append('};')
    hpp_file.append('#endif /* __'+file_name.upper()+'_HPP__ */')


def usage():
    print('-file=filename \t file to parse. default /usr/include/GL/glew.h')
    print('-include=filename \t include in glmock.cpp. default GL/glew.h')


def read_defines_from_glew(glew_location):
    f = open(glew_location, 'r')
    defines = []
    for line in f:
        if line.startswith('#ifndef GL_') and \
                False == line.startswith('#ifndef GL_VERSION') and \
                False == line.startswith('#ifndef GL_ARB_vertex_buffer_object'):
            line = line.replace('#ifndef GL_', '-DGL_')
            line = line.replace('\n', '=1')
            defines.append(line)
    return defines


def __main__():
    try:
        opts, args = getopt.getopt(sys.argv[1:], "hf:i:o:c:", ["help", "file=", "include=", "output=", "class="])
    except getopt.GetoptError as err:
        print str(err)
        usage()
        sys.exit(2)
    file_to_parse = '/usr/include/GL/glew.h'
    header_file = None
    output_file_name = 'glmock'
    class_name = 'GLMock'
    for o, a in opts:
        if o in ("-h", "--help"):
            usage()
            sys.exit()
        elif o in ("-f", "--file"):
            file_to_parse = a
        elif o in("-i", "--include"):
            header_file = a
        elif o in("-o", "--output"):
            output_file_name = a
        elif o in("-c", "--class"):
            class_name = a
        else:
            assert False, "unhandled option"

    if header_file is None:
        header_file = 'GL' + file_to_parse.split('GL', 1)[1]

    print ('Using header file: ' + header_file)
    print ('Parsing file: ' + file_to_parse)
    print ('Output files: ' + output_file_name + '.(cpp/hpp)')
    print ('Class name: ' + class_name)
    create_header_of_cpp_file(output_file_name,class_name)
    create_header_of_hpp_file(output_file_name, class_name, header_file)

    defines = []
    if file_to_parse.endswith('glew.h'):
        defines = read_defines_from_glew(file_to_parse)
    print defines
    index = clang.cindex.Index.create()
    tu = index.parse(file_to_parse, defines)
    traverse(tu.cursor, 0)
    create_end_of_hpp_file(output_file_name)
    write_to_file(output_file_name+'.cpp', cpp_file)
    write_to_file(output_file_name+'.hpp', hpp_file)


__main__()
