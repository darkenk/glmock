#include "glmock.hpp"
#include <pthread.h>
#include <map>

std::map<pthread_t, GlMock* > gMap;

GlMock::GlMock()
{
    pthread_t id = pthread_self();
    gMap.insert(std::pair<pthread_t, GlMock* >(id, this));
}

GlMock::~GlMock()
{
    gMap.erase(pthread_self());
}

static GlMock* getGlMock()
{
    return gMap.at(pthread_self());
}

void glAccum(GLenum op, GLfloat value)
{
    return getGlMock()->gl_Accum(op, value);
}
void glAlphaFunc(GLenum func, GLclampf ref)
{
    return getGlMock()->gl_AlphaFunc(func, ref);
}
GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return getGlMock()->gl_AreTexturesResident(n, textures, residences);
}
void glArrayElement(GLint i)
{
    return getGlMock()->gl_ArrayElement(i);
}
void glBegin(GLenum mode)
{
    return getGlMock()->gl_Begin(mode);
}
void glBindTexture(GLenum target, GLuint texture)
{
    return getGlMock()->gl_BindTexture(target, texture);
}
void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
    return getGlMock()->gl_Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}
void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return getGlMock()->gl_BlendFunc(sfactor, dfactor);
}
void glCallList(GLuint list)
{
    return getGlMock()->gl_CallList(list);
}
void glCallLists(GLsizei n, GLenum type, const GLvoid * lists)
{
    return getGlMock()->gl_CallLists(n, type, lists);
}
void glClear(GLbitfield mask)
{
    return getGlMock()->gl_Clear(mask);
}
void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return getGlMock()->gl_ClearAccum(red, green, blue, alpha);
}
void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
    return getGlMock()->gl_ClearColor(red, green, blue, alpha);
}
void glClearDepth(GLclampd depth)
{
    return getGlMock()->gl_ClearDepth(depth);
}
void glClearIndex(GLfloat c)
{
    return getGlMock()->gl_ClearIndex(c);
}
void glClearStencil(GLint s)
{
    return getGlMock()->gl_ClearStencil(s);
}
void glClipPlane(GLenum plane, const GLdouble * equation)
{
    return getGlMock()->gl_ClipPlane(plane, equation);
}
void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return getGlMock()->gl_Color3b(red, green, blue);
}
void glColor3bv(const GLbyte * v)
{
    return getGlMock()->gl_Color3bv(v);
}
void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return getGlMock()->gl_Color3d(red, green, blue);
}
void glColor3dv(const GLdouble * v)
{
    return getGlMock()->gl_Color3dv(v);
}
void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return getGlMock()->gl_Color3f(red, green, blue);
}
void glColor3fv(const GLfloat * v)
{
    return getGlMock()->gl_Color3fv(v);
}
void glColor3i(GLint red, GLint green, GLint blue)
{
    return getGlMock()->gl_Color3i(red, green, blue);
}
void glColor3iv(const GLint * v)
{
    return getGlMock()->gl_Color3iv(v);
}
void glColor3s(GLshort red, GLshort green, GLshort blue)
{
    return getGlMock()->gl_Color3s(red, green, blue);
}
void glColor3sv(const GLshort * v)
{
    return getGlMock()->gl_Color3sv(v);
}
void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return getGlMock()->gl_Color3ub(red, green, blue);
}
void glColor3ubv(const GLubyte * v)
{
    return getGlMock()->gl_Color3ubv(v);
}
void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return getGlMock()->gl_Color3ui(red, green, blue);
}
void glColor3uiv(const GLuint * v)
{
    return getGlMock()->gl_Color3uiv(v);
}
void glColor3us(GLushort red, GLushort green, GLushort blue)
{
    return getGlMock()->gl_Color3us(red, green, blue);
}
void glColor3usv(const GLushort * v)
{
    return getGlMock()->gl_Color3usv(v);
}
void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
    return getGlMock()->gl_Color4b(red, green, blue, alpha);
}
void glColor4bv(const GLbyte * v)
{
    return getGlMock()->gl_Color4bv(v);
}
void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
    return getGlMock()->gl_Color4d(red, green, blue, alpha);
}
void glColor4dv(const GLdouble * v)
{
    return getGlMock()->gl_Color4dv(v);
}
void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return getGlMock()->gl_Color4f(red, green, blue, alpha);
}
void glColor4fv(const GLfloat * v)
{
    return getGlMock()->gl_Color4fv(v);
}
void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
    return getGlMock()->gl_Color4i(red, green, blue, alpha);
}
void glColor4iv(const GLint * v)
{
    return getGlMock()->gl_Color4iv(v);
}
void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
    return getGlMock()->gl_Color4s(red, green, blue, alpha);
}
void glColor4sv(const GLshort * v)
{
    return getGlMock()->gl_Color4sv(v);
}
void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
    return getGlMock()->gl_Color4ub(red, green, blue, alpha);
}
void glColor4ubv(const GLubyte * v)
{
    return getGlMock()->gl_Color4ubv(v);
}
void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return getGlMock()->gl_Color4ui(red, green, blue, alpha);
}
void glColor4uiv(const GLuint * v)
{
    return getGlMock()->gl_Color4uiv(v);
}
void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
    return getGlMock()->gl_Color4us(red, green, blue, alpha);
}
void glColor4usv(const GLushort * v)
{
    return getGlMock()->gl_Color4usv(v);
}
void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return getGlMock()->gl_ColorMask(red, green, blue, alpha);
}
void glColorMaterial(GLenum face, GLenum mode)
{
    return getGlMock()->gl_ColorMaterial(face, mode);
}
void glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
    return getGlMock()->gl_ColorPointer(size, type, stride, pointer);
}
void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
    return getGlMock()->gl_CopyPixels(x, y, width, height, type);
}
void glCopyTexImage1D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border)
{
    return getGlMock()->gl_CopyTexImage1D(target, level, internalFormat, x, y, width, border);
}
void glCopyTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return getGlMock()->gl_CopyTexImage2D(target, level, internalFormat, x, y, width, height, border);
}
void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return getGlMock()->gl_CopyTexSubImage1D(target, level, xoffset, x, y, width);
}
void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}
void glCullFace(GLenum mode)
{
    return getGlMock()->gl_CullFace(mode);
}
void glDeleteLists(GLuint list, GLsizei range)
{
    return getGlMock()->gl_DeleteLists(list, range);
}
void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return getGlMock()->gl_DeleteTextures(n, textures);
}
void glDepthFunc(GLenum func)
{
    return getGlMock()->gl_DepthFunc(func);
}
void glDepthMask(GLboolean flag)
{
    return getGlMock()->gl_DepthMask(flag);
}
void glDepthRange(GLclampd zNear, GLclampd zFar)
{
    return getGlMock()->gl_DepthRange(zNear, zFar);
}
void glDisable(GLenum cap)
{
    return getGlMock()->gl_Disable(cap);
}
void glDisableClientState(GLenum array)
{
    return getGlMock()->gl_DisableClientState(array);
}
void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return getGlMock()->gl_DrawArrays(mode, first, count);
}
void glDrawBuffer(GLenum mode)
{
    return getGlMock()->gl_DrawBuffer(mode);
}
void glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices)
{
    return getGlMock()->gl_DrawElements(mode, count, type, indices);
}
void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels)
{
    return getGlMock()->gl_DrawPixels(width, height, format, type, pixels);
}
void glEdgeFlag(GLboolean flag)
{
    return getGlMock()->gl_EdgeFlag(flag);
}
void glEdgeFlagPointer(GLsizei stride, const GLvoid * pointer)
{
    return getGlMock()->gl_EdgeFlagPointer(stride, pointer);
}
void glEdgeFlagv(const GLboolean * flag)
{
    return getGlMock()->gl_EdgeFlagv(flag);
}
void glEnable(GLenum cap)
{
    return getGlMock()->gl_Enable(cap);
}
void glEnableClientState(GLenum array)
{
    return getGlMock()->gl_EnableClientState(array);
}
void glEnd()
{
    return getGlMock()->gl_End();
}
void glEndList()
{
    return getGlMock()->gl_EndList();
}
void glEvalCoord1d(GLdouble u)
{
    return getGlMock()->gl_EvalCoord1d(u);
}
void glEvalCoord1dv(const GLdouble * u)
{
    return getGlMock()->gl_EvalCoord1dv(u);
}
void glEvalCoord1f(GLfloat u)
{
    return getGlMock()->gl_EvalCoord1f(u);
}
void glEvalCoord1fv(const GLfloat * u)
{
    return getGlMock()->gl_EvalCoord1fv(u);
}
void glEvalCoord2d(GLdouble u, GLdouble v)
{
    return getGlMock()->gl_EvalCoord2d(u, v);
}
void glEvalCoord2dv(const GLdouble * u)
{
    return getGlMock()->gl_EvalCoord2dv(u);
}
void glEvalCoord2f(GLfloat u, GLfloat v)
{
    return getGlMock()->gl_EvalCoord2f(u, v);
}
void glEvalCoord2fv(const GLfloat * u)
{
    return getGlMock()->gl_EvalCoord2fv(u);
}
void glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
    return getGlMock()->gl_EvalMesh1(mode, i1, i2);
}
void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
    return getGlMock()->gl_EvalMesh2(mode, i1, i2, j1, j2);
}
void glEvalPoint1(GLint i)
{
    return getGlMock()->gl_EvalPoint1(i);
}
void glEvalPoint2(GLint i, GLint j)
{
    return getGlMock()->gl_EvalPoint2(i, j);
}
void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer)
{
    return getGlMock()->gl_FeedbackBuffer(size, type, buffer);
}
void glFinish()
{
    return getGlMock()->gl_Finish();
}
void glFlush()
{
    return getGlMock()->gl_Flush();
}
void glFogf(GLenum pname, GLfloat param)
{
    return getGlMock()->gl_Fogf(pname, param);
}
void glFogfv(GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_Fogfv(pname, params);
}
void glFogi(GLenum pname, GLint param)
{
    return getGlMock()->gl_Fogi(pname, param);
}
void glFogiv(GLenum pname, const GLint * params)
{
    return getGlMock()->gl_Fogiv(pname, params);
}
void glFrontFace(GLenum mode)
{
    return getGlMock()->gl_FrontFace(mode);
}
void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return getGlMock()->gl_Frustum(left, right, bottom, top, zNear, zFar);
}
GLuint glGenLists(GLsizei range)
{
    return getGlMock()->gl_GenLists(range);
}
void glGenTextures(GLsizei n, GLuint * textures)
{
    return getGlMock()->gl_GenTextures(n, textures);
}
void glGetBooleanv(GLenum pname, GLboolean * params)
{
    return getGlMock()->gl_GetBooleanv(pname, params);
}
void glGetClipPlane(GLenum plane, GLdouble * equation)
{
    return getGlMock()->gl_GetClipPlane(plane, equation);
}
void glGetDoublev(GLenum pname, GLdouble * params)
{
    return getGlMock()->gl_GetDoublev(pname, params);
}
GLenum glGetError()
{
    return getGlMock()->gl_GetError();
}
void glGetFloatv(GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetFloatv(pname, params);
}
void glGetIntegerv(GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetIntegerv(pname, params);
}
void glGetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetLightfv(light, pname, params);
}
void glGetLightiv(GLenum light, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetLightiv(light, pname, params);
}
void glGetMapdv(GLenum target, GLenum query, GLdouble * v)
{
    return getGlMock()->gl_GetMapdv(target, query, v);
}
void glGetMapfv(GLenum target, GLenum query, GLfloat * v)
{
    return getGlMock()->gl_GetMapfv(target, query, v);
}
void glGetMapiv(GLenum target, GLenum query, GLint * v)
{
    return getGlMock()->gl_GetMapiv(target, query, v);
}
void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetMaterialfv(face, pname, params);
}
void glGetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetMaterialiv(face, pname, params);
}
void glGetPixelMapfv(GLenum map, GLfloat * values)
{
    return getGlMock()->gl_GetPixelMapfv(map, values);
}
void glGetPixelMapuiv(GLenum map, GLuint * values)
{
    return getGlMock()->gl_GetPixelMapuiv(map, values);
}
void glGetPixelMapusv(GLenum map, GLushort * values)
{
    return getGlMock()->gl_GetPixelMapusv(map, values);
}
void glGetPointerv(GLenum pname, GLvoid ** params)
{
    return getGlMock()->gl_GetPointerv(pname, params);
}
void glGetPolygonStipple(GLubyte * mask)
{
    return getGlMock()->gl_GetPolygonStipple(mask);
}
const GLubyte * glGetString(GLenum name)
{
    return getGlMock()->gl_GetString(name);
}
void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetTexEnvfv(target, pname, params);
}
void glGetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetTexEnviv(target, pname, params);
}
void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
    return getGlMock()->gl_GetTexGendv(coord, pname, params);
}
void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetTexGenfv(coord, pname, params);
}
void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetTexGeniv(coord, pname, params);
}
void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid * pixels)
{
    return getGlMock()->gl_GetTexImage(target, level, format, type, pixels);
}
void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetTexLevelParameterfv(target, level, pname, params);
}
void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetTexLevelParameteriv(target, level, pname, params);
}
void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetTexParameterfv(target, pname, params);
}
void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetTexParameteriv(target, pname, params);
}
void glHint(GLenum target, GLenum mode)
{
    return getGlMock()->gl_Hint(target, mode);
}
void glIndexMask(GLuint mask)
{
    return getGlMock()->gl_IndexMask(mask);
}
void glIndexPointer(GLenum type, GLsizei stride, const GLvoid * pointer)
{
    return getGlMock()->gl_IndexPointer(type, stride, pointer);
}
void glIndexd(GLdouble c)
{
    return getGlMock()->gl_Indexd(c);
}
void glIndexdv(const GLdouble * c)
{
    return getGlMock()->gl_Indexdv(c);
}
void glIndexf(GLfloat c)
{
    return getGlMock()->gl_Indexf(c);
}
void glIndexfv(const GLfloat * c)
{
    return getGlMock()->gl_Indexfv(c);
}
void glIndexi(GLint c)
{
    return getGlMock()->gl_Indexi(c);
}
void glIndexiv(const GLint * c)
{
    return getGlMock()->gl_Indexiv(c);
}
void glIndexs(GLshort c)
{
    return getGlMock()->gl_Indexs(c);
}
void glIndexsv(const GLshort * c)
{
    return getGlMock()->gl_Indexsv(c);
}
void glIndexub(GLubyte c)
{
    return getGlMock()->gl_Indexub(c);
}
void glIndexubv(const GLubyte * c)
{
    return getGlMock()->gl_Indexubv(c);
}
void glInitNames()
{
    return getGlMock()->gl_InitNames();
}
void glInterleavedArrays(GLenum format, GLsizei stride, const GLvoid * pointer)
{
    return getGlMock()->gl_InterleavedArrays(format, stride, pointer);
}
GLboolean glIsEnabled(GLenum cap)
{
    return getGlMock()->gl_IsEnabled(cap);
}
GLboolean glIsList(GLuint list)
{
    return getGlMock()->gl_IsList(list);
}
GLboolean glIsTexture(GLuint texture)
{
    return getGlMock()->gl_IsTexture(texture);
}
void glLightModelf(GLenum pname, GLfloat param)
{
    return getGlMock()->gl_LightModelf(pname, param);
}
void glLightModelfv(GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_LightModelfv(pname, params);
}
void glLightModeli(GLenum pname, GLint param)
{
    return getGlMock()->gl_LightModeli(pname, param);
}
void glLightModeliv(GLenum pname, const GLint * params)
{
    return getGlMock()->gl_LightModeliv(pname, params);
}
void glLightf(GLenum light, GLenum pname, GLfloat param)
{
    return getGlMock()->gl_Lightf(light, pname, param);
}
void glLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_Lightfv(light, pname, params);
}
void glLighti(GLenum light, GLenum pname, GLint param)
{
    return getGlMock()->gl_Lighti(light, pname, param);
}
void glLightiv(GLenum light, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_Lightiv(light, pname, params);
}
void glLineStipple(GLint factor, GLushort pattern)
{
    return getGlMock()->gl_LineStipple(factor, pattern);
}
void glLineWidth(GLfloat width)
{
    return getGlMock()->gl_LineWidth(width);
}
void glListBase(GLuint base)
{
    return getGlMock()->gl_ListBase(base);
}
void glLoadIdentity()
{
    return getGlMock()->gl_LoadIdentity();
}
void glLoadMatrixd(const GLdouble * m)
{
    return getGlMock()->gl_LoadMatrixd(m);
}
void glLoadMatrixf(const GLfloat * m)
{
    return getGlMock()->gl_LoadMatrixf(m);
}
void glLoadName(GLuint name)
{
    return getGlMock()->gl_LoadName(name);
}
void glLogicOp(GLenum opcode)
{
    return getGlMock()->gl_LogicOp(opcode);
}
void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return getGlMock()->gl_Map1d(target, u1, u2, stride, order, points);
}
void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return getGlMock()->gl_Map1f(target, u1, u2, stride, order, points);
}
void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return getGlMock()->gl_Map2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}
void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return getGlMock()->gl_Map2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}
void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
    return getGlMock()->gl_MapGrid1d(un, u1, u2);
}
void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
    return getGlMock()->gl_MapGrid1f(un, u1, u2);
}
void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
    return getGlMock()->gl_MapGrid2d(un, u1, u2, vn, v1, v2);
}
void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
    return getGlMock()->gl_MapGrid2f(un, u1, u2, vn, v1, v2);
}
void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
    return getGlMock()->gl_Materialf(face, pname, param);
}
void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_Materialfv(face, pname, params);
}
void glMateriali(GLenum face, GLenum pname, GLint param)
{
    return getGlMock()->gl_Materiali(face, pname, param);
}
void glMaterialiv(GLenum face, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_Materialiv(face, pname, params);
}
void glMatrixMode(GLenum mode)
{
    return getGlMock()->gl_MatrixMode(mode);
}
void glMultMatrixd(const GLdouble * m)
{
    return getGlMock()->gl_MultMatrixd(m);
}
void glMultMatrixf(const GLfloat * m)
{
    return getGlMock()->gl_MultMatrixf(m);
}
void glNewList(GLuint list, GLenum mode)
{
    return getGlMock()->gl_NewList(list, mode);
}
void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
    return getGlMock()->gl_Normal3b(nx, ny, nz);
}
void glNormal3bv(const GLbyte * v)
{
    return getGlMock()->gl_Normal3bv(v);
}
void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
    return getGlMock()->gl_Normal3d(nx, ny, nz);
}
void glNormal3dv(const GLdouble * v)
{
    return getGlMock()->gl_Normal3dv(v);
}
void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
    return getGlMock()->gl_Normal3f(nx, ny, nz);
}
void glNormal3fv(const GLfloat * v)
{
    return getGlMock()->gl_Normal3fv(v);
}
void glNormal3i(GLint nx, GLint ny, GLint nz)
{
    return getGlMock()->gl_Normal3i(nx, ny, nz);
}
void glNormal3iv(const GLint * v)
{
    return getGlMock()->gl_Normal3iv(v);
}
void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
    return getGlMock()->gl_Normal3s(nx, ny, nz);
}
void glNormal3sv(const GLshort * v)
{
    return getGlMock()->gl_Normal3sv(v);
}
void glNormalPointer(GLenum type, GLsizei stride, const GLvoid * pointer)
{
    return getGlMock()->gl_NormalPointer(type, stride, pointer);
}
void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return getGlMock()->gl_Ortho(left, right, bottom, top, zNear, zFar);
}
void glPassThrough(GLfloat token)
{
    return getGlMock()->gl_PassThrough(token);
}
void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values)
{
    return getGlMock()->gl_PixelMapfv(map, mapsize, values);
}
void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values)
{
    return getGlMock()->gl_PixelMapuiv(map, mapsize, values);
}
void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values)
{
    return getGlMock()->gl_PixelMapusv(map, mapsize, values);
}
void glPixelStoref(GLenum pname, GLfloat param)
{
    return getGlMock()->gl_PixelStoref(pname, param);
}
void glPixelStorei(GLenum pname, GLint param)
{
    return getGlMock()->gl_PixelStorei(pname, param);
}
void glPixelTransferf(GLenum pname, GLfloat param)
{
    return getGlMock()->gl_PixelTransferf(pname, param);
}
void glPixelTransferi(GLenum pname, GLint param)
{
    return getGlMock()->gl_PixelTransferi(pname, param);
}
void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
    return getGlMock()->gl_PixelZoom(xfactor, yfactor);
}
void glPointSize(GLfloat size)
{
    return getGlMock()->gl_PointSize(size);
}
void glPolygonMode(GLenum face, GLenum mode)
{
    return getGlMock()->gl_PolygonMode(face, mode);
}
void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return getGlMock()->gl_PolygonOffset(factor, units);
}
void glPolygonStipple(const GLubyte * mask)
{
    return getGlMock()->gl_PolygonStipple(mask);
}
void glPopAttrib()
{
    return getGlMock()->gl_PopAttrib();
}
void glPopClientAttrib()
{
    return getGlMock()->gl_PopClientAttrib();
}
void glPopMatrix()
{
    return getGlMock()->gl_PopMatrix();
}
void glPopName()
{
    return getGlMock()->gl_PopName();
}
void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLclampf * priorities)
{
    return getGlMock()->gl_PrioritizeTextures(n, textures, priorities);
}
void glPushAttrib(GLbitfield mask)
{
    return getGlMock()->gl_PushAttrib(mask);
}
void glPushClientAttrib(GLbitfield mask)
{
    return getGlMock()->gl_PushClientAttrib(mask);
}
void glPushMatrix()
{
    return getGlMock()->gl_PushMatrix();
}
void glPushName(GLuint name)
{
    return getGlMock()->gl_PushName(name);
}
void glRasterPos2d(GLdouble x, GLdouble y)
{
    return getGlMock()->gl_RasterPos2d(x, y);
}
void glRasterPos2dv(const GLdouble * v)
{
    return getGlMock()->gl_RasterPos2dv(v);
}
void glRasterPos2f(GLfloat x, GLfloat y)
{
    return getGlMock()->gl_RasterPos2f(x, y);
}
void glRasterPos2fv(const GLfloat * v)
{
    return getGlMock()->gl_RasterPos2fv(v);
}
void glRasterPos2i(GLint x, GLint y)
{
    return getGlMock()->gl_RasterPos2i(x, y);
}
void glRasterPos2iv(const GLint * v)
{
    return getGlMock()->gl_RasterPos2iv(v);
}
void glRasterPos2s(GLshort x, GLshort y)
{
    return getGlMock()->gl_RasterPos2s(x, y);
}
void glRasterPos2sv(const GLshort * v)
{
    return getGlMock()->gl_RasterPos2sv(v);
}
void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_RasterPos3d(x, y, z);
}
void glRasterPos3dv(const GLdouble * v)
{
    return getGlMock()->gl_RasterPos3dv(v);
}
void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_RasterPos3f(x, y, z);
}
void glRasterPos3fv(const GLfloat * v)
{
    return getGlMock()->gl_RasterPos3fv(v);
}
void glRasterPos3i(GLint x, GLint y, GLint z)
{
    return getGlMock()->gl_RasterPos3i(x, y, z);
}
void glRasterPos3iv(const GLint * v)
{
    return getGlMock()->gl_RasterPos3iv(v);
}
void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
    return getGlMock()->gl_RasterPos3s(x, y, z);
}
void glRasterPos3sv(const GLshort * v)
{
    return getGlMock()->gl_RasterPos3sv(v);
}
void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_RasterPos4d(x, y, z, w);
}
void glRasterPos4dv(const GLdouble * v)
{
    return getGlMock()->gl_RasterPos4dv(v);
}
void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return getGlMock()->gl_RasterPos4f(x, y, z, w);
}
void glRasterPos4fv(const GLfloat * v)
{
    return getGlMock()->gl_RasterPos4fv(v);
}
void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
    return getGlMock()->gl_RasterPos4i(x, y, z, w);
}
void glRasterPos4iv(const GLint * v)
{
    return getGlMock()->gl_RasterPos4iv(v);
}
void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return getGlMock()->gl_RasterPos4s(x, y, z, w);
}
void glRasterPos4sv(const GLshort * v)
{
    return getGlMock()->gl_RasterPos4sv(v);
}
void glReadBuffer(GLenum mode)
{
    return getGlMock()->gl_ReadBuffer(mode);
}
void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels)
{
    return getGlMock()->gl_ReadPixels(x, y, width, height, format, type, pixels);
}
void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
    return getGlMock()->gl_Rectd(x1, y1, x2, y2);
}
void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
    return getGlMock()->gl_Rectdv(v1, v2);
}
void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
    return getGlMock()->gl_Rectf(x1, y1, x2, y2);
}
void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
    return getGlMock()->gl_Rectfv(v1, v2);
}
void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
    return getGlMock()->gl_Recti(x1, y1, x2, y2);
}
void glRectiv(const GLint * v1, const GLint * v2)
{
    return getGlMock()->gl_Rectiv(v1, v2);
}
void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
    return getGlMock()->gl_Rects(x1, y1, x2, y2);
}
void glRectsv(const GLshort * v1, const GLshort * v2)
{
    return getGlMock()->gl_Rectsv(v1, v2);
}
GLint glRenderMode(GLenum mode)
{
    return getGlMock()->gl_RenderMode(mode);
}
void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_Rotated(angle, x, y, z);
}
void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_Rotatef(angle, x, y, z);
}
void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_Scaled(x, y, z);
}
void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_Scalef(x, y, z);
}
void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_Scissor(x, y, width, height);
}
void glSelectBuffer(GLsizei size, GLuint * buffer)
{
    return getGlMock()->gl_SelectBuffer(size, buffer);
}
void glShadeModel(GLenum mode)
{
    return getGlMock()->gl_ShadeModel(mode);
}
void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return getGlMock()->gl_StencilFunc(func, ref, mask);
}
void glStencilMask(GLuint mask)
{
    return getGlMock()->gl_StencilMask(mask);
}
void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return getGlMock()->gl_StencilOp(fail, zfail, zpass);
}
void glTexCoord1d(GLdouble s)
{
    return getGlMock()->gl_TexCoord1d(s);
}
void glTexCoord1dv(const GLdouble * v)
{
    return getGlMock()->gl_TexCoord1dv(v);
}
void glTexCoord1f(GLfloat s)
{
    return getGlMock()->gl_TexCoord1f(s);
}
void glTexCoord1fv(const GLfloat * v)
{
    return getGlMock()->gl_TexCoord1fv(v);
}
void glTexCoord1i(GLint s)
{
    return getGlMock()->gl_TexCoord1i(s);
}
void glTexCoord1iv(const GLint * v)
{
    return getGlMock()->gl_TexCoord1iv(v);
}
void glTexCoord1s(GLshort s)
{
    return getGlMock()->gl_TexCoord1s(s);
}
void glTexCoord1sv(const GLshort * v)
{
    return getGlMock()->gl_TexCoord1sv(v);
}
void glTexCoord2d(GLdouble s, GLdouble t)
{
    return getGlMock()->gl_TexCoord2d(s, t);
}
void glTexCoord2dv(const GLdouble * v)
{
    return getGlMock()->gl_TexCoord2dv(v);
}
void glTexCoord2f(GLfloat s, GLfloat t)
{
    return getGlMock()->gl_TexCoord2f(s, t);
}
void glTexCoord2fv(const GLfloat * v)
{
    return getGlMock()->gl_TexCoord2fv(v);
}
void glTexCoord2i(GLint s, GLint t)
{
    return getGlMock()->gl_TexCoord2i(s, t);
}
void glTexCoord2iv(const GLint * v)
{
    return getGlMock()->gl_TexCoord2iv(v);
}
void glTexCoord2s(GLshort s, GLshort t)
{
    return getGlMock()->gl_TexCoord2s(s, t);
}
void glTexCoord2sv(const GLshort * v)
{
    return getGlMock()->gl_TexCoord2sv(v);
}
void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
    return getGlMock()->gl_TexCoord3d(s, t, r);
}
void glTexCoord3dv(const GLdouble * v)
{
    return getGlMock()->gl_TexCoord3dv(v);
}
void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
    return getGlMock()->gl_TexCoord3f(s, t, r);
}
void glTexCoord3fv(const GLfloat * v)
{
    return getGlMock()->gl_TexCoord3fv(v);
}
void glTexCoord3i(GLint s, GLint t, GLint r)
{
    return getGlMock()->gl_TexCoord3i(s, t, r);
}
void glTexCoord3iv(const GLint * v)
{
    return getGlMock()->gl_TexCoord3iv(v);
}
void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
    return getGlMock()->gl_TexCoord3s(s, t, r);
}
void glTexCoord3sv(const GLshort * v)
{
    return getGlMock()->gl_TexCoord3sv(v);
}
void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return getGlMock()->gl_TexCoord4d(s, t, r, q);
}
void glTexCoord4dv(const GLdouble * v)
{
    return getGlMock()->gl_TexCoord4dv(v);
}
void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return getGlMock()->gl_TexCoord4f(s, t, r, q);
}
void glTexCoord4fv(const GLfloat * v)
{
    return getGlMock()->gl_TexCoord4fv(v);
}
void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
    return getGlMock()->gl_TexCoord4i(s, t, r, q);
}
void glTexCoord4iv(const GLint * v)
{
    return getGlMock()->gl_TexCoord4iv(v);
}
void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
    return getGlMock()->gl_TexCoord4s(s, t, r, q);
}
void glTexCoord4sv(const GLshort * v)
{
    return getGlMock()->gl_TexCoord4sv(v);
}
void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
    return getGlMock()->gl_TexCoordPointer(size, type, stride, pointer);
}
void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
    return getGlMock()->gl_TexEnvf(target, pname, param);
}
void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_TexEnvfv(target, pname, params);
}
void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
    return getGlMock()->gl_TexEnvi(target, pname, param);
}
void glTexEnviv(GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_TexEnviv(target, pname, params);
}
void glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
    return getGlMock()->gl_TexGend(coord, pname, param);
}
void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params)
{
    return getGlMock()->gl_TexGendv(coord, pname, params);
}
void glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
    return getGlMock()->gl_TexGenf(coord, pname, param);
}
void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_TexGenfv(coord, pname, params);
}
void glTexGeni(GLenum coord, GLenum pname, GLint param)
{
    return getGlMock()->gl_TexGeni(coord, pname, param);
}
void glTexGeniv(GLenum coord, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_TexGeniv(coord, pname, params);
}
void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid * pixels)
{
    return getGlMock()->gl_TexImage1D(target, level, internalformat, width, border, format, type, pixels);
}
void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels)
{
    return getGlMock()->gl_TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}
void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return getGlMock()->gl_TexParameterf(target, pname, param);
}
void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_TexParameterfv(target, pname, params);
}
void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return getGlMock()->gl_TexParameteri(target, pname, param);
}
void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_TexParameteriv(target, pname, params);
}
void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels)
{
    return getGlMock()->gl_TexSubImage1D(target, level, xoffset, width, format, type, pixels);
}
void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels)
{
    return getGlMock()->gl_TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}
void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_Translated(x, y, z);
}
void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_Translatef(x, y, z);
}
void glVertex2d(GLdouble x, GLdouble y)
{
    return getGlMock()->gl_Vertex2d(x, y);
}
void glVertex2dv(const GLdouble * v)
{
    return getGlMock()->gl_Vertex2dv(v);
}
void glVertex2f(GLfloat x, GLfloat y)
{
    return getGlMock()->gl_Vertex2f(x, y);
}
void glVertex2fv(const GLfloat * v)
{
    return getGlMock()->gl_Vertex2fv(v);
}
void glVertex2i(GLint x, GLint y)
{
    return getGlMock()->gl_Vertex2i(x, y);
}
void glVertex2iv(const GLint * v)
{
    return getGlMock()->gl_Vertex2iv(v);
}
void glVertex2s(GLshort x, GLshort y)
{
    return getGlMock()->gl_Vertex2s(x, y);
}
void glVertex2sv(const GLshort * v)
{
    return getGlMock()->gl_Vertex2sv(v);
}
void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_Vertex3d(x, y, z);
}
void glVertex3dv(const GLdouble * v)
{
    return getGlMock()->gl_Vertex3dv(v);
}
void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_Vertex3f(x, y, z);
}
void glVertex3fv(const GLfloat * v)
{
    return getGlMock()->gl_Vertex3fv(v);
}
void glVertex3i(GLint x, GLint y, GLint z)
{
    return getGlMock()->gl_Vertex3i(x, y, z);
}
void glVertex3iv(const GLint * v)
{
    return getGlMock()->gl_Vertex3iv(v);
}
void glVertex3s(GLshort x, GLshort y, GLshort z)
{
    return getGlMock()->gl_Vertex3s(x, y, z);
}
void glVertex3sv(const GLshort * v)
{
    return getGlMock()->gl_Vertex3sv(v);
}
void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_Vertex4d(x, y, z, w);
}
void glVertex4dv(const GLdouble * v)
{
    return getGlMock()->gl_Vertex4dv(v);
}
void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return getGlMock()->gl_Vertex4f(x, y, z, w);
}
void glVertex4fv(const GLfloat * v)
{
    return getGlMock()->gl_Vertex4fv(v);
}
void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
    return getGlMock()->gl_Vertex4i(x, y, z, w);
}
void glVertex4iv(const GLint * v)
{
    return getGlMock()->gl_Vertex4iv(v);
}
void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return getGlMock()->gl_Vertex4s(x, y, z, w);
}
void glVertex4sv(const GLshort * v)
{
    return getGlMock()->gl_Vertex4sv(v);
}
void glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
    return getGlMock()->gl_VertexPointer(size, type, stride, pointer);
}
void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_Viewport(x, y, width, height);
}
void gluBeginCurve(GLUnurbs * nurb)
{
    return getGlMock()->glu_BeginCurve(nurb);
}
void gluBeginPolygon(GLUtesselator * tess)
{
    return getGlMock()->glu_BeginPolygon(tess);
}
void gluBeginSurface(GLUnurbs * nurb)
{
    return getGlMock()->glu_BeginSurface(nurb);
}
void gluBeginTrim(GLUnurbs * nurb)
{
    return getGlMock()->glu_BeginTrim(nurb);
}
GLint gluBuild1DMipmapLevels(GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void * data)
{
    return getGlMock()->glu_Build1DMipmapLevels(target, internalFormat, width, format, type, level, base, max, data);
}
GLint gluBuild1DMipmaps(GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, const void * data)
{
    return getGlMock()->glu_Build1DMipmaps(target, internalFormat, width, format, type, data);
}
GLint gluBuild2DMipmapLevels(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void * data)
{
    return getGlMock()->glu_Build2DMipmapLevels(target, internalFormat, width, height, format, type, level, base, max, data);
}
GLint gluBuild2DMipmaps(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * data)
{
    return getGlMock()->glu_Build2DMipmaps(target, internalFormat, width, height, format, type, data);
}
GLint gluBuild3DMipmaps(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
    return getGlMock()->glu_Build3DMipmaps(target, internalFormat, width, height, depth, format, type, data);
}
GLboolean gluCheckExtension(const GLubyte * extName, const GLubyte * extString)
{
    return getGlMock()->glu_CheckExtension(extName, extString);
}
void gluCylinder(GLUquadric * quad, GLdouble base, GLdouble top, GLdouble height, GLint slices, GLint stacks)
{
    return getGlMock()->glu_Cylinder(quad, base, top, height, slices, stacks);
}
void gluDeleteNurbsRenderer(GLUnurbs * nurb)
{
    return getGlMock()->glu_DeleteNurbsRenderer(nurb);
}
void gluDeleteQuadric(GLUquadric * quad)
{
    return getGlMock()->glu_DeleteQuadric(quad);
}
void gluDeleteTess(GLUtesselator * tess)
{
    return getGlMock()->glu_DeleteTess(tess);
}
void gluDisk(GLUquadric * quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops)
{
    return getGlMock()->glu_Disk(quad, inner, outer, slices, loops);
}
void gluEndCurve(GLUnurbs * nurb)
{
    return getGlMock()->glu_EndCurve(nurb);
}
void gluEndPolygon(GLUtesselator * tess)
{
    return getGlMock()->glu_EndPolygon(tess);
}
void gluEndSurface(GLUnurbs * nurb)
{
    return getGlMock()->glu_EndSurface(nurb);
}
void gluEndTrim(GLUnurbs * nurb)
{
    return getGlMock()->glu_EndTrim(nurb);
}
const GLubyte * gluErrorString(GLenum error)
{
    return getGlMock()->glu_ErrorString(error);
}
void gluGetNurbsProperty(GLUnurbs * nurb, GLenum property, GLfloat * data)
{
    return getGlMock()->glu_GetNurbsProperty(nurb, property, data);
}
const GLubyte * gluGetString(GLenum name)
{
    return getGlMock()->glu_GetString(name);
}
void gluGetTessProperty(GLUtesselator * tess, GLenum which, GLdouble * data)
{
    return getGlMock()->glu_GetTessProperty(tess, which, data);
}
void gluLoadSamplingMatrices(GLUnurbs * nurb, const GLfloat * model, const GLfloat * perspective, const GLint * view)
{
    return getGlMock()->glu_LoadSamplingMatrices(nurb, model, perspective, view);
}
void gluLookAt(GLdouble eyeX, GLdouble eyeY, GLdouble eyeZ, GLdouble centerX, GLdouble centerY, GLdouble centerZ, GLdouble upX, GLdouble upY, GLdouble upZ)
{
    return getGlMock()->glu_LookAt(eyeX, eyeY, eyeZ, centerX, centerY, centerZ, upX, upY, upZ);
}
GLUnurbs * gluNewNurbsRenderer()
{
    return getGlMock()->glu_NewNurbsRenderer();
}
GLUquadric * gluNewQuadric()
{
    return getGlMock()->glu_NewQuadric();
}
GLUtesselator * gluNewTess()
{
    return getGlMock()->glu_NewTess();
}
void gluNextContour(GLUtesselator * tess, GLenum type)
{
    return getGlMock()->glu_NextContour(tess, type);
}
void gluNurbsCallback(GLUnurbs * nurb, GLenum which, _GLUfuncptr CallBackFunc)
{
    return getGlMock()->glu_NurbsCallback(nurb, which, CallBackFunc);
}
void gluNurbsCallbackData(GLUnurbs * nurb, GLvoid * userData)
{
    return getGlMock()->glu_NurbsCallbackData(nurb, userData);
}
void gluNurbsCallbackDataEXT(GLUnurbs * nurb, GLvoid * userData)
{
    return getGlMock()->glu_NurbsCallbackDataEXT(nurb, userData);
}
void gluNurbsCurve(GLUnurbs * nurb, GLint knotCount, GLfloat * knots, GLint stride, GLfloat * control, GLint order, GLenum type)
{
    return getGlMock()->glu_NurbsCurve(nurb, knotCount, knots, stride, control, order, type);
}
void gluNurbsProperty(GLUnurbs * nurb, GLenum property, GLfloat value)
{
    return getGlMock()->glu_NurbsProperty(nurb, property, value);
}
void gluOrtho2D(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top)
{
    return getGlMock()->glu_Ortho2D(left, right, bottom, top);
}
void gluPartialDisk(GLUquadric * quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops, GLdouble start, GLdouble sweep)
{
    return getGlMock()->glu_PartialDisk(quad, inner, outer, slices, loops, start, sweep);
}
void gluPerspective(GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar)
{
    return getGlMock()->glu_Perspective(fovy, aspect, zNear, zFar);
}
void gluPickMatrix(GLdouble x, GLdouble y, GLdouble delX, GLdouble delY, GLint * viewport)
{
    return getGlMock()->glu_PickMatrix(x, y, delX, delY, viewport);
}
GLint gluProject(GLdouble objX, GLdouble objY, GLdouble objZ, const GLdouble * model, const GLdouble * proj, const GLint * view, GLdouble * winX, GLdouble * winY, GLdouble * winZ)
{
    return getGlMock()->glu_Project(objX, objY, objZ, model, proj, view, winX, winY, winZ);
}
void gluPwlCurve(GLUnurbs * nurb, GLint count, GLfloat * data, GLint stride, GLenum type)
{
    return getGlMock()->glu_PwlCurve(nurb, count, data, stride, type);
}
void gluQuadricCallback(GLUquadric * quad, GLenum which, _GLUfuncptr CallBackFunc)
{
    return getGlMock()->glu_QuadricCallback(quad, which, CallBackFunc);
}
void gluQuadricDrawStyle(GLUquadric * quad, GLenum draw)
{
    return getGlMock()->glu_QuadricDrawStyle(quad, draw);
}
void gluQuadricNormals(GLUquadric * quad, GLenum normal)
{
    return getGlMock()->glu_QuadricNormals(quad, normal);
}
void gluQuadricOrientation(GLUquadric * quad, GLenum orientation)
{
    return getGlMock()->glu_QuadricOrientation(quad, orientation);
}
void gluQuadricTexture(GLUquadric * quad, GLboolean texture)
{
    return getGlMock()->glu_QuadricTexture(quad, texture);
}
GLint gluScaleImage(GLenum format, GLsizei wIn, GLsizei hIn, GLenum typeIn, const void * dataIn, GLsizei wOut, GLsizei hOut, GLenum typeOut, GLvoid * dataOut)
{
    return getGlMock()->glu_ScaleImage(format, wIn, hIn, typeIn, dataIn, wOut, hOut, typeOut, dataOut);
}
void gluSphere(GLUquadric * quad, GLdouble radius, GLint slices, GLint stacks)
{
    return getGlMock()->glu_Sphere(quad, radius, slices, stacks);
}
void gluTessBeginContour(GLUtesselator * tess)
{
    return getGlMock()->glu_TessBeginContour(tess);
}
void gluTessBeginPolygon(GLUtesselator * tess, GLvoid * data)
{
    return getGlMock()->glu_TessBeginPolygon(tess, data);
}
void gluTessCallback(GLUtesselator * tess, GLenum which, _GLUfuncptr CallBackFunc)
{
    return getGlMock()->glu_TessCallback(tess, which, CallBackFunc);
}
void gluTessEndContour(GLUtesselator * tess)
{
    return getGlMock()->glu_TessEndContour(tess);
}
void gluTessEndPolygon(GLUtesselator * tess)
{
    return getGlMock()->glu_TessEndPolygon(tess);
}
void gluTessNormal(GLUtesselator * tess, GLdouble valueX, GLdouble valueY, GLdouble valueZ)
{
    return getGlMock()->glu_TessNormal(tess, valueX, valueY, valueZ);
}
void gluTessProperty(GLUtesselator * tess, GLenum which, GLdouble data)
{
    return getGlMock()->glu_TessProperty(tess, which, data);
}
void gluTessVertex(GLUtesselator * tess, GLdouble * location, GLvoid * data)
{
    return getGlMock()->glu_TessVertex(tess, location, data);
}
GLint gluUnProject(GLdouble winX, GLdouble winY, GLdouble winZ, const GLdouble * model, const GLdouble * proj, const GLint * view, GLdouble * objX, GLdouble * objY, GLdouble * objZ)
{
    return getGlMock()->glu_UnProject(winX, winY, winZ, model, proj, view, objX, objY, objZ);
}
void  mockgl_CopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}
PFNGLCOPYTEXSUBIMAGE3DPROC __glewCopyTexSubImage3D = mockgl_CopyTexSubImage3D;

void  mockgl_DrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices)
{
    return getGlMock()->gl_DrawRangeElements(mode, start, end, count, type, indices);
}
PFNGLDRAWRANGEELEMENTSPROC __glewDrawRangeElements = mockgl_DrawRangeElements;

void  mockgl_TexImage3D(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels)
{
    return getGlMock()->gl_TexImage3D(target, level, internalFormat, width, height, depth, border, format, type, pixels);
}
PFNGLTEXIMAGE3DPROC __glewTexImage3D = mockgl_TexImage3D;

void  mockgl_ActiveTexture(GLenum texture)
{
    return getGlMock()->gl_ActiveTexture(texture);
}
PFNGLACTIVETEXTUREPROC __glewActiveTexture = mockgl_ActiveTexture;

void  mockgl_ClientActiveTexture(GLenum texture)
{
    return getGlMock()->gl_ClientActiveTexture(texture);
}
PFNGLCLIENTACTIVETEXTUREPROC __glewClientActiveTexture = mockgl_ClientActiveTexture;

void  mockgl_CompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid * data)
{
    return getGlMock()->gl_CompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}
PFNGLCOMPRESSEDTEXIMAGE1DPROC __glewCompressedTexImage1D = mockgl_CompressedTexImage1D;

void  mockgl_CompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data)
{
    return getGlMock()->gl_CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}
PFNGLCOMPRESSEDTEXIMAGE2DPROC __glewCompressedTexImage2D = mockgl_CompressedTexImage2D;

void  mockgl_CompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid * data)
{
    return getGlMock()->gl_CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}
PFNGLCOMPRESSEDTEXIMAGE3DPROC __glewCompressedTexImage3D = mockgl_CompressedTexImage3D;

void  mockgl_CompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid * data)
{
    return getGlMock()->gl_CompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}
PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC __glewCompressedTexSubImage1D = mockgl_CompressedTexSubImage1D;

void  mockgl_CompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data)
{
    return getGlMock()->gl_CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC __glewCompressedTexSubImage2D = mockgl_CompressedTexSubImage2D;

void  mockgl_GetCompressedTexImage(GLenum target, GLint lod, GLvoid * img)
{
    return getGlMock()->gl_GetCompressedTexImage(target, lod, img);
}
PFNGLGETCOMPRESSEDTEXIMAGEPROC __glewGetCompressedTexImage = mockgl_GetCompressedTexImage;

void  mockgl_LoadTransposeMatrixd(const GLdouble * m)
{
    return getGlMock()->gl_LoadTransposeMatrixd(m);
}
PFNGLLOADTRANSPOSEMATRIXDPROC __glewLoadTransposeMatrixd = mockgl_LoadTransposeMatrixd;

void  mockgl_LoadTransposeMatrixf(const GLfloat * m)
{
    return getGlMock()->gl_LoadTransposeMatrixf(m);
}
PFNGLLOADTRANSPOSEMATRIXFPROC __glewLoadTransposeMatrixf = mockgl_LoadTransposeMatrixf;

void  mockgl_MultTransposeMatrixd(const GLdouble * m)
{
    return getGlMock()->gl_MultTransposeMatrixd(m);
}
PFNGLMULTTRANSPOSEMATRIXDPROC __glewMultTransposeMatrixd = mockgl_MultTransposeMatrixd;

void  mockgl_MultTransposeMatrixf(const GLfloat * m)
{
    return getGlMock()->gl_MultTransposeMatrixf(m);
}
PFNGLMULTTRANSPOSEMATRIXFPROC __glewMultTransposeMatrixf = mockgl_MultTransposeMatrixf;

void  mockgl_MultiTexCoord1d(GLenum target, GLdouble s)
{
    return getGlMock()->gl_MultiTexCoord1d(target, s);
}
PFNGLMULTITEXCOORD1DPROC __glewMultiTexCoord1d = mockgl_MultiTexCoord1d;

void  mockgl_MultiTexCoord1dv(GLenum target, const GLdouble * v)
{
    return getGlMock()->gl_MultiTexCoord1dv(target, v);
}
PFNGLMULTITEXCOORD1DVPROC __glewMultiTexCoord1dv = mockgl_MultiTexCoord1dv;

void  mockgl_MultiTexCoord1f(GLenum target, GLfloat s)
{
    return getGlMock()->gl_MultiTexCoord1f(target, s);
}
PFNGLMULTITEXCOORD1FPROC __glewMultiTexCoord1f = mockgl_MultiTexCoord1f;

void  mockgl_MultiTexCoord1fv(GLenum target, const GLfloat * v)
{
    return getGlMock()->gl_MultiTexCoord1fv(target, v);
}
PFNGLMULTITEXCOORD1FVPROC __glewMultiTexCoord1fv = mockgl_MultiTexCoord1fv;

void  mockgl_MultiTexCoord1i(GLenum target, GLint s)
{
    return getGlMock()->gl_MultiTexCoord1i(target, s);
}
PFNGLMULTITEXCOORD1IPROC __glewMultiTexCoord1i = mockgl_MultiTexCoord1i;

void  mockgl_MultiTexCoord1iv(GLenum target, const GLint * v)
{
    return getGlMock()->gl_MultiTexCoord1iv(target, v);
}
PFNGLMULTITEXCOORD1IVPROC __glewMultiTexCoord1iv = mockgl_MultiTexCoord1iv;

void  mockgl_MultiTexCoord1s(GLenum target, GLshort s)
{
    return getGlMock()->gl_MultiTexCoord1s(target, s);
}
PFNGLMULTITEXCOORD1SPROC __glewMultiTexCoord1s = mockgl_MultiTexCoord1s;

void  mockgl_MultiTexCoord1sv(GLenum target, const GLshort * v)
{
    return getGlMock()->gl_MultiTexCoord1sv(target, v);
}
PFNGLMULTITEXCOORD1SVPROC __glewMultiTexCoord1sv = mockgl_MultiTexCoord1sv;

void  mockgl_MultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
    return getGlMock()->gl_MultiTexCoord2d(target, s, t);
}
PFNGLMULTITEXCOORD2DPROC __glewMultiTexCoord2d = mockgl_MultiTexCoord2d;

void  mockgl_MultiTexCoord2dv(GLenum target, const GLdouble * v)
{
    return getGlMock()->gl_MultiTexCoord2dv(target, v);
}
PFNGLMULTITEXCOORD2DVPROC __glewMultiTexCoord2dv = mockgl_MultiTexCoord2dv;

void  mockgl_MultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
    return getGlMock()->gl_MultiTexCoord2f(target, s, t);
}
PFNGLMULTITEXCOORD2FPROC __glewMultiTexCoord2f = mockgl_MultiTexCoord2f;

void  mockgl_MultiTexCoord2fv(GLenum target, const GLfloat * v)
{
    return getGlMock()->gl_MultiTexCoord2fv(target, v);
}
PFNGLMULTITEXCOORD2FVPROC __glewMultiTexCoord2fv = mockgl_MultiTexCoord2fv;

void  mockgl_MultiTexCoord2i(GLenum target, GLint s, GLint t)
{
    return getGlMock()->gl_MultiTexCoord2i(target, s, t);
}
PFNGLMULTITEXCOORD2IPROC __glewMultiTexCoord2i = mockgl_MultiTexCoord2i;

void  mockgl_MultiTexCoord2iv(GLenum target, const GLint * v)
{
    return getGlMock()->gl_MultiTexCoord2iv(target, v);
}
PFNGLMULTITEXCOORD2IVPROC __glewMultiTexCoord2iv = mockgl_MultiTexCoord2iv;

void  mockgl_MultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
    return getGlMock()->gl_MultiTexCoord2s(target, s, t);
}
PFNGLMULTITEXCOORD2SPROC __glewMultiTexCoord2s = mockgl_MultiTexCoord2s;

void  mockgl_MultiTexCoord2sv(GLenum target, const GLshort * v)
{
    return getGlMock()->gl_MultiTexCoord2sv(target, v);
}
PFNGLMULTITEXCOORD2SVPROC __glewMultiTexCoord2sv = mockgl_MultiTexCoord2sv;

void  mockgl_MultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return getGlMock()->gl_MultiTexCoord3d(target, s, t, r);
}
PFNGLMULTITEXCOORD3DPROC __glewMultiTexCoord3d = mockgl_MultiTexCoord3d;

void  mockgl_MultiTexCoord3dv(GLenum target, const GLdouble * v)
{
    return getGlMock()->gl_MultiTexCoord3dv(target, v);
}
PFNGLMULTITEXCOORD3DVPROC __glewMultiTexCoord3dv = mockgl_MultiTexCoord3dv;

void  mockgl_MultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return getGlMock()->gl_MultiTexCoord3f(target, s, t, r);
}
PFNGLMULTITEXCOORD3FPROC __glewMultiTexCoord3f = mockgl_MultiTexCoord3f;

void  mockgl_MultiTexCoord3fv(GLenum target, const GLfloat * v)
{
    return getGlMock()->gl_MultiTexCoord3fv(target, v);
}
PFNGLMULTITEXCOORD3FVPROC __glewMultiTexCoord3fv = mockgl_MultiTexCoord3fv;

void  mockgl_MultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
    return getGlMock()->gl_MultiTexCoord3i(target, s, t, r);
}
PFNGLMULTITEXCOORD3IPROC __glewMultiTexCoord3i = mockgl_MultiTexCoord3i;

void  mockgl_MultiTexCoord3iv(GLenum target, const GLint * v)
{
    return getGlMock()->gl_MultiTexCoord3iv(target, v);
}
PFNGLMULTITEXCOORD3IVPROC __glewMultiTexCoord3iv = mockgl_MultiTexCoord3iv;

void  mockgl_MultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return getGlMock()->gl_MultiTexCoord3s(target, s, t, r);
}
PFNGLMULTITEXCOORD3SPROC __glewMultiTexCoord3s = mockgl_MultiTexCoord3s;

void  mockgl_MultiTexCoord3sv(GLenum target, const GLshort * v)
{
    return getGlMock()->gl_MultiTexCoord3sv(target, v);
}
PFNGLMULTITEXCOORD3SVPROC __glewMultiTexCoord3sv = mockgl_MultiTexCoord3sv;

void  mockgl_MultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return getGlMock()->gl_MultiTexCoord4d(target, s, t, r, q);
}
PFNGLMULTITEXCOORD4DPROC __glewMultiTexCoord4d = mockgl_MultiTexCoord4d;

void  mockgl_MultiTexCoord4dv(GLenum target, const GLdouble * v)
{
    return getGlMock()->gl_MultiTexCoord4dv(target, v);
}
PFNGLMULTITEXCOORD4DVPROC __glewMultiTexCoord4dv = mockgl_MultiTexCoord4dv;

void  mockgl_MultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return getGlMock()->gl_MultiTexCoord4f(target, s, t, r, q);
}
PFNGLMULTITEXCOORD4FPROC __glewMultiTexCoord4f = mockgl_MultiTexCoord4f;

void  mockgl_MultiTexCoord4fv(GLenum target, const GLfloat * v)
{
    return getGlMock()->gl_MultiTexCoord4fv(target, v);
}
PFNGLMULTITEXCOORD4FVPROC __glewMultiTexCoord4fv = mockgl_MultiTexCoord4fv;

void  mockgl_MultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return getGlMock()->gl_MultiTexCoord4i(target, s, t, r, q);
}
PFNGLMULTITEXCOORD4IPROC __glewMultiTexCoord4i = mockgl_MultiTexCoord4i;

void  mockgl_MultiTexCoord4iv(GLenum target, const GLint * v)
{
    return getGlMock()->gl_MultiTexCoord4iv(target, v);
}
PFNGLMULTITEXCOORD4IVPROC __glewMultiTexCoord4iv = mockgl_MultiTexCoord4iv;

void  mockgl_MultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return getGlMock()->gl_MultiTexCoord4s(target, s, t, r, q);
}
PFNGLMULTITEXCOORD4SPROC __glewMultiTexCoord4s = mockgl_MultiTexCoord4s;

void  mockgl_MultiTexCoord4sv(GLenum target, const GLshort * v)
{
    return getGlMock()->gl_MultiTexCoord4sv(target, v);
}
PFNGLMULTITEXCOORD4SVPROC __glewMultiTexCoord4sv = mockgl_MultiTexCoord4sv;

void  mockgl_SampleCoverage(GLclampf value, GLboolean invert)
{
    return getGlMock()->gl_SampleCoverage(value, invert);
}
PFNGLSAMPLECOVERAGEPROC __glewSampleCoverage = mockgl_SampleCoverage;

void  mockgl_BlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
    return getGlMock()->gl_BlendColor(red, green, blue, alpha);
}
PFNGLBLENDCOLORPROC __glewBlendColor = mockgl_BlendColor;

void  mockgl_BlendEquation(GLenum mode)
{
    return getGlMock()->gl_BlendEquation(mode);
}
PFNGLBLENDEQUATIONPROC __glewBlendEquation = mockgl_BlendEquation;

void  mockgl_BlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return getGlMock()->gl_BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}
PFNGLBLENDFUNCSEPARATEPROC __glewBlendFuncSeparate = mockgl_BlendFuncSeparate;

void  mockgl_FogCoordPointer(GLenum type, GLsizei stride, const GLvoid * pointer)
{
    return getGlMock()->gl_FogCoordPointer(type, stride, pointer);
}
PFNGLFOGCOORDPOINTERPROC __glewFogCoordPointer = mockgl_FogCoordPointer;

void  mockgl_FogCoordd(GLdouble coord)
{
    return getGlMock()->gl_FogCoordd(coord);
}
PFNGLFOGCOORDDPROC __glewFogCoordd = mockgl_FogCoordd;

void  mockgl_FogCoorddv(const GLdouble * coord)
{
    return getGlMock()->gl_FogCoorddv(coord);
}
PFNGLFOGCOORDDVPROC __glewFogCoorddv = mockgl_FogCoorddv;

void  mockgl_FogCoordf(GLfloat coord)
{
    return getGlMock()->gl_FogCoordf(coord);
}
PFNGLFOGCOORDFPROC __glewFogCoordf = mockgl_FogCoordf;

void  mockgl_FogCoordfv(const GLfloat * coord)
{
    return getGlMock()->gl_FogCoordfv(coord);
}
PFNGLFOGCOORDFVPROC __glewFogCoordfv = mockgl_FogCoordfv;

void  mockgl_MultiDrawArrays(GLenum mode, GLint * first, GLsizei * count, GLsizei primcount)
{
    return getGlMock()->gl_MultiDrawArrays(mode, first, count, primcount);
}
PFNGLMULTIDRAWARRAYSPROC __glewMultiDrawArrays = mockgl_MultiDrawArrays;

void  mockgl_MultiDrawElements(GLenum mode, GLsizei * count, GLenum type, const GLvoid ** indices, GLsizei primcount)
{
    return getGlMock()->gl_MultiDrawElements(mode, count, type, indices, primcount);
}
PFNGLMULTIDRAWELEMENTSPROC __glewMultiDrawElements = mockgl_MultiDrawElements;

void  mockgl_PointParameterf(GLenum pname, GLfloat param)
{
    return getGlMock()->gl_PointParameterf(pname, param);
}
PFNGLPOINTPARAMETERFPROC __glewPointParameterf = mockgl_PointParameterf;

void  mockgl_PointParameterfv(GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_PointParameterfv(pname, params);
}
PFNGLPOINTPARAMETERFVPROC __glewPointParameterfv = mockgl_PointParameterfv;

void  mockgl_PointParameteri(GLenum pname, GLint param)
{
    return getGlMock()->gl_PointParameteri(pname, param);
}
PFNGLPOINTPARAMETERIPROC __glewPointParameteri = mockgl_PointParameteri;

void  mockgl_PointParameteriv(GLenum pname, const GLint * params)
{
    return getGlMock()->gl_PointParameteriv(pname, params);
}
PFNGLPOINTPARAMETERIVPROC __glewPointParameteriv = mockgl_PointParameteriv;

void  mockgl_SecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return getGlMock()->gl_SecondaryColor3b(red, green, blue);
}
PFNGLSECONDARYCOLOR3BPROC __glewSecondaryColor3b = mockgl_SecondaryColor3b;

void  mockgl_SecondaryColor3bv(const GLbyte * v)
{
    return getGlMock()->gl_SecondaryColor3bv(v);
}
PFNGLSECONDARYCOLOR3BVPROC __glewSecondaryColor3bv = mockgl_SecondaryColor3bv;

void  mockgl_SecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return getGlMock()->gl_SecondaryColor3d(red, green, blue);
}
PFNGLSECONDARYCOLOR3DPROC __glewSecondaryColor3d = mockgl_SecondaryColor3d;

void  mockgl_SecondaryColor3dv(const GLdouble * v)
{
    return getGlMock()->gl_SecondaryColor3dv(v);
}
PFNGLSECONDARYCOLOR3DVPROC __glewSecondaryColor3dv = mockgl_SecondaryColor3dv;

void  mockgl_SecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return getGlMock()->gl_SecondaryColor3f(red, green, blue);
}
PFNGLSECONDARYCOLOR3FPROC __glewSecondaryColor3f = mockgl_SecondaryColor3f;

void  mockgl_SecondaryColor3fv(const GLfloat * v)
{
    return getGlMock()->gl_SecondaryColor3fv(v);
}
PFNGLSECONDARYCOLOR3FVPROC __glewSecondaryColor3fv = mockgl_SecondaryColor3fv;

void  mockgl_SecondaryColor3i(GLint red, GLint green, GLint blue)
{
    return getGlMock()->gl_SecondaryColor3i(red, green, blue);
}
PFNGLSECONDARYCOLOR3IPROC __glewSecondaryColor3i = mockgl_SecondaryColor3i;

void  mockgl_SecondaryColor3iv(const GLint * v)
{
    return getGlMock()->gl_SecondaryColor3iv(v);
}
PFNGLSECONDARYCOLOR3IVPROC __glewSecondaryColor3iv = mockgl_SecondaryColor3iv;

void  mockgl_SecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
    return getGlMock()->gl_SecondaryColor3s(red, green, blue);
}
PFNGLSECONDARYCOLOR3SPROC __glewSecondaryColor3s = mockgl_SecondaryColor3s;

void  mockgl_SecondaryColor3sv(const GLshort * v)
{
    return getGlMock()->gl_SecondaryColor3sv(v);
}
PFNGLSECONDARYCOLOR3SVPROC __glewSecondaryColor3sv = mockgl_SecondaryColor3sv;

void  mockgl_SecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return getGlMock()->gl_SecondaryColor3ub(red, green, blue);
}
PFNGLSECONDARYCOLOR3UBPROC __glewSecondaryColor3ub = mockgl_SecondaryColor3ub;

void  mockgl_SecondaryColor3ubv(const GLubyte * v)
{
    return getGlMock()->gl_SecondaryColor3ubv(v);
}
PFNGLSECONDARYCOLOR3UBVPROC __glewSecondaryColor3ubv = mockgl_SecondaryColor3ubv;

void  mockgl_SecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return getGlMock()->gl_SecondaryColor3ui(red, green, blue);
}
PFNGLSECONDARYCOLOR3UIPROC __glewSecondaryColor3ui = mockgl_SecondaryColor3ui;

void  mockgl_SecondaryColor3uiv(const GLuint * v)
{
    return getGlMock()->gl_SecondaryColor3uiv(v);
}
PFNGLSECONDARYCOLOR3UIVPROC __glewSecondaryColor3uiv = mockgl_SecondaryColor3uiv;

void  mockgl_SecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
    return getGlMock()->gl_SecondaryColor3us(red, green, blue);
}
PFNGLSECONDARYCOLOR3USPROC __glewSecondaryColor3us = mockgl_SecondaryColor3us;

void  mockgl_SecondaryColor3usv(const GLushort * v)
{
    return getGlMock()->gl_SecondaryColor3usv(v);
}
PFNGLSECONDARYCOLOR3USVPROC __glewSecondaryColor3usv = mockgl_SecondaryColor3usv;

void  mockgl_SecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
    return getGlMock()->gl_SecondaryColorPointer(size, type, stride, pointer);
}
PFNGLSECONDARYCOLORPOINTERPROC __glewSecondaryColorPointer = mockgl_SecondaryColorPointer;

void  mockgl_WindowPos2d(GLdouble x, GLdouble y)
{
    return getGlMock()->gl_WindowPos2d(x, y);
}
PFNGLWINDOWPOS2DPROC __glewWindowPos2d = mockgl_WindowPos2d;

void  mockgl_WindowPos2dv(const GLdouble * p)
{
    return getGlMock()->gl_WindowPos2dv(p);
}
PFNGLWINDOWPOS2DVPROC __glewWindowPos2dv = mockgl_WindowPos2dv;

void  mockgl_WindowPos2f(GLfloat x, GLfloat y)
{
    return getGlMock()->gl_WindowPos2f(x, y);
}
PFNGLWINDOWPOS2FPROC __glewWindowPos2f = mockgl_WindowPos2f;

void  mockgl_WindowPos2fv(const GLfloat * p)
{
    return getGlMock()->gl_WindowPos2fv(p);
}
PFNGLWINDOWPOS2FVPROC __glewWindowPos2fv = mockgl_WindowPos2fv;

void  mockgl_WindowPos2i(GLint x, GLint y)
{
    return getGlMock()->gl_WindowPos2i(x, y);
}
PFNGLWINDOWPOS2IPROC __glewWindowPos2i = mockgl_WindowPos2i;

void  mockgl_WindowPos2iv(const GLint * p)
{
    return getGlMock()->gl_WindowPos2iv(p);
}
PFNGLWINDOWPOS2IVPROC __glewWindowPos2iv = mockgl_WindowPos2iv;

void  mockgl_WindowPos2s(GLshort x, GLshort y)
{
    return getGlMock()->gl_WindowPos2s(x, y);
}
PFNGLWINDOWPOS2SPROC __glewWindowPos2s = mockgl_WindowPos2s;

void  mockgl_WindowPos2sv(const GLshort * p)
{
    return getGlMock()->gl_WindowPos2sv(p);
}
PFNGLWINDOWPOS2SVPROC __glewWindowPos2sv = mockgl_WindowPos2sv;

void  mockgl_WindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_WindowPos3d(x, y, z);
}
PFNGLWINDOWPOS3DPROC __glewWindowPos3d = mockgl_WindowPos3d;

void  mockgl_WindowPos3dv(const GLdouble * p)
{
    return getGlMock()->gl_WindowPos3dv(p);
}
PFNGLWINDOWPOS3DVPROC __glewWindowPos3dv = mockgl_WindowPos3dv;

void  mockgl_WindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_WindowPos3f(x, y, z);
}
PFNGLWINDOWPOS3FPROC __glewWindowPos3f = mockgl_WindowPos3f;

void  mockgl_WindowPos3fv(const GLfloat * p)
{
    return getGlMock()->gl_WindowPos3fv(p);
}
PFNGLWINDOWPOS3FVPROC __glewWindowPos3fv = mockgl_WindowPos3fv;

void  mockgl_WindowPos3i(GLint x, GLint y, GLint z)
{
    return getGlMock()->gl_WindowPos3i(x, y, z);
}
PFNGLWINDOWPOS3IPROC __glewWindowPos3i = mockgl_WindowPos3i;

void  mockgl_WindowPos3iv(const GLint * p)
{
    return getGlMock()->gl_WindowPos3iv(p);
}
PFNGLWINDOWPOS3IVPROC __glewWindowPos3iv = mockgl_WindowPos3iv;

void  mockgl_WindowPos3s(GLshort x, GLshort y, GLshort z)
{
    return getGlMock()->gl_WindowPos3s(x, y, z);
}
PFNGLWINDOWPOS3SPROC __glewWindowPos3s = mockgl_WindowPos3s;

void  mockgl_WindowPos3sv(const GLshort * p)
{
    return getGlMock()->gl_WindowPos3sv(p);
}
PFNGLWINDOWPOS3SVPROC __glewWindowPos3sv = mockgl_WindowPos3sv;

void  mockgl_BeginQuery(GLenum target, GLuint id)
{
    return getGlMock()->gl_BeginQuery(target, id);
}
PFNGLBEGINQUERYPROC __glewBeginQuery = mockgl_BeginQuery;

void  mockgl_BindBuffer(GLenum target, GLuint buffer)
{
    return getGlMock()->gl_BindBuffer(target, buffer);
}
PFNGLBINDBUFFERPROC __glewBindBuffer = mockgl_BindBuffer;

void  mockgl_BufferData(GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage)
{
    return getGlMock()->gl_BufferData(target, size, data, usage);
}
PFNGLBUFFERDATAPROC __glewBufferData = mockgl_BufferData;

void  mockgl_BufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data)
{
    return getGlMock()->gl_BufferSubData(target, offset, size, data);
}
PFNGLBUFFERSUBDATAPROC __glewBufferSubData = mockgl_BufferSubData;

void  mockgl_DeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return getGlMock()->gl_DeleteBuffers(n, buffers);
}
PFNGLDELETEBUFFERSPROC __glewDeleteBuffers = mockgl_DeleteBuffers;

void  mockgl_DeleteQueries(GLsizei n, const GLuint * ids)
{
    return getGlMock()->gl_DeleteQueries(n, ids);
}
PFNGLDELETEQUERIESPROC __glewDeleteQueries = mockgl_DeleteQueries;

void  mockgl_EndQuery(GLenum target)
{
    return getGlMock()->gl_EndQuery(target);
}
PFNGLENDQUERYPROC __glewEndQuery = mockgl_EndQuery;

void  mockgl_GenBuffers(GLsizei n, GLuint * buffers)
{
    return getGlMock()->gl_GenBuffers(n, buffers);
}
PFNGLGENBUFFERSPROC __glewGenBuffers = mockgl_GenBuffers;

void  mockgl_GenQueries(GLsizei n, GLuint * ids)
{
    return getGlMock()->gl_GenQueries(n, ids);
}
PFNGLGENQUERIESPROC __glewGenQueries = mockgl_GenQueries;

void  mockgl_GetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetBufferParameteriv(target, pname, params);
}
PFNGLGETBUFFERPARAMETERIVPROC __glewGetBufferParameteriv = mockgl_GetBufferParameteriv;

void  mockgl_GetBufferPointerv(GLenum target, GLenum pname, GLvoid ** params)
{
    return getGlMock()->gl_GetBufferPointerv(target, pname, params);
}
PFNGLGETBUFFERPOINTERVPROC __glewGetBufferPointerv = mockgl_GetBufferPointerv;

void  mockgl_GetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, GLvoid * data)
{
    return getGlMock()->gl_GetBufferSubData(target, offset, size, data);
}
PFNGLGETBUFFERSUBDATAPROC __glewGetBufferSubData = mockgl_GetBufferSubData;

void  mockgl_GetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetQueryObjectiv(id, pname, params);
}
PFNGLGETQUERYOBJECTIVPROC __glewGetQueryObjectiv = mockgl_GetQueryObjectiv;

void  mockgl_GetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return getGlMock()->gl_GetQueryObjectuiv(id, pname, params);
}
PFNGLGETQUERYOBJECTUIVPROC __glewGetQueryObjectuiv = mockgl_GetQueryObjectuiv;

void  mockgl_GetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetQueryiv(target, pname, params);
}
PFNGLGETQUERYIVPROC __glewGetQueryiv = mockgl_GetQueryiv;

unsigned char  mockgl_IsBuffer(GLuint buffer)
{
    return getGlMock()->gl_IsBuffer(buffer);
}
PFNGLISBUFFERPROC __glewIsBuffer = mockgl_IsBuffer;

unsigned char  mockgl_IsQuery(GLuint id)
{
    return getGlMock()->gl_IsQuery(id);
}
PFNGLISQUERYPROC __glewIsQuery = mockgl_IsQuery;

void * mockgl_MapBuffer(GLenum target, GLenum access)
{
    return getGlMock()->gl_MapBuffer(target, access);
}
PFNGLMAPBUFFERPROC __glewMapBuffer = mockgl_MapBuffer;

unsigned char  mockgl_UnmapBuffer(GLenum target)
{
    return getGlMock()->gl_UnmapBuffer(target);
}
PFNGLUNMAPBUFFERPROC __glewUnmapBuffer = mockgl_UnmapBuffer;

void  mockgl_AttachShader(GLuint program, GLuint shader)
{
    return getGlMock()->gl_AttachShader(program, shader);
}
PFNGLATTACHSHADERPROC __glewAttachShader = mockgl_AttachShader;

void  mockgl_BindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return getGlMock()->gl_BindAttribLocation(program, index, name);
}
PFNGLBINDATTRIBLOCATIONPROC __glewBindAttribLocation = mockgl_BindAttribLocation;

void  mockgl_BlendEquationSeparate(GLenum arg0, GLenum arg1)
{
    return getGlMock()->gl_BlendEquationSeparate(arg0, arg1);
}
PFNGLBLENDEQUATIONSEPARATEPROC __glewBlendEquationSeparate = mockgl_BlendEquationSeparate;

void  mockgl_CompileShader(GLuint shader)
{
    return getGlMock()->gl_CompileShader(shader);
}
PFNGLCOMPILESHADERPROC __glewCompileShader = mockgl_CompileShader;

unsigned int  mockgl_CreateProgram()
{
    return getGlMock()->gl_CreateProgram();
}
PFNGLCREATEPROGRAMPROC __glewCreateProgram = mockgl_CreateProgram;

unsigned int  mockgl_CreateShader(GLenum type)
{
    return getGlMock()->gl_CreateShader(type);
}
PFNGLCREATESHADERPROC __glewCreateShader = mockgl_CreateShader;

void  mockgl_DeleteProgram(GLuint program)
{
    return getGlMock()->gl_DeleteProgram(program);
}
PFNGLDELETEPROGRAMPROC __glewDeleteProgram = mockgl_DeleteProgram;

void  mockgl_DeleteShader(GLuint shader)
{
    return getGlMock()->gl_DeleteShader(shader);
}
PFNGLDELETESHADERPROC __glewDeleteShader = mockgl_DeleteShader;

void  mockgl_DetachShader(GLuint program, GLuint shader)
{
    return getGlMock()->gl_DetachShader(program, shader);
}
PFNGLDETACHSHADERPROC __glewDetachShader = mockgl_DetachShader;

void  mockgl_DisableVertexAttribArray(GLuint arg0)
{
    return getGlMock()->gl_DisableVertexAttribArray(arg0);
}
PFNGLDISABLEVERTEXATTRIBARRAYPROC __glewDisableVertexAttribArray = mockgl_DisableVertexAttribArray;

void  mockgl_DrawBuffers(GLsizei n, const GLenum * bufs)
{
    return getGlMock()->gl_DrawBuffers(n, bufs);
}
PFNGLDRAWBUFFERSPROC __glewDrawBuffers = mockgl_DrawBuffers;

void  mockgl_EnableVertexAttribArray(GLuint arg0)
{
    return getGlMock()->gl_EnableVertexAttribArray(arg0);
}
PFNGLENABLEVERTEXATTRIBARRAYPROC __glewEnableVertexAttribArray = mockgl_EnableVertexAttribArray;

void  mockgl_GetActiveAttrib(GLuint program, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return getGlMock()->gl_GetActiveAttrib(program, index, maxLength, length, size, type, name);
}
PFNGLGETACTIVEATTRIBPROC __glewGetActiveAttrib = mockgl_GetActiveAttrib;

void  mockgl_GetActiveUniform(GLuint program, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return getGlMock()->gl_GetActiveUniform(program, index, maxLength, length, size, type, name);
}
PFNGLGETACTIVEUNIFORMPROC __glewGetActiveUniform = mockgl_GetActiveUniform;

void  mockgl_GetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return getGlMock()->gl_GetAttachedShaders(program, maxCount, count, shaders);
}
PFNGLGETATTACHEDSHADERSPROC __glewGetAttachedShaders = mockgl_GetAttachedShaders;

int  mockgl_GetAttribLocation(GLuint program, const GLchar * name)
{
    return getGlMock()->gl_GetAttribLocation(program, name);
}
PFNGLGETATTRIBLOCATIONPROC __glewGetAttribLocation = mockgl_GetAttribLocation;

void  mockgl_GetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return getGlMock()->gl_GetProgramInfoLog(program, bufSize, length, infoLog);
}
PFNGLGETPROGRAMINFOLOGPROC __glewGetProgramInfoLog = mockgl_GetProgramInfoLog;

void  mockgl_GetProgramiv(GLuint program, GLenum pname, GLint * param)
{
    return getGlMock()->gl_GetProgramiv(program, pname, param);
}
PFNGLGETPROGRAMIVPROC __glewGetProgramiv = mockgl_GetProgramiv;

void  mockgl_GetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return getGlMock()->gl_GetShaderInfoLog(shader, bufSize, length, infoLog);
}
PFNGLGETSHADERINFOLOGPROC __glewGetShaderInfoLog = mockgl_GetShaderInfoLog;

void  mockgl_GetShaderSource(GLuint obj, GLsizei maxLength, GLsizei * length, GLchar * source)
{
    return getGlMock()->gl_GetShaderSource(obj, maxLength, length, source);
}
PFNGLGETSHADERSOURCEPROC __glewGetShaderSource = mockgl_GetShaderSource;

void  mockgl_GetShaderiv(GLuint shader, GLenum pname, GLint * param)
{
    return getGlMock()->gl_GetShaderiv(shader, pname, param);
}
PFNGLGETSHADERIVPROC __glewGetShaderiv = mockgl_GetShaderiv;

int  mockgl_GetUniformLocation(GLuint program, const GLchar * name)
{
    return getGlMock()->gl_GetUniformLocation(program, name);
}
PFNGLGETUNIFORMLOCATIONPROC __glewGetUniformLocation = mockgl_GetUniformLocation;

void  mockgl_GetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return getGlMock()->gl_GetUniformfv(program, location, params);
}
PFNGLGETUNIFORMFVPROC __glewGetUniformfv = mockgl_GetUniformfv;

void  mockgl_GetUniformiv(GLuint program, GLint location, GLint * params)
{
    return getGlMock()->gl_GetUniformiv(program, location, params);
}
PFNGLGETUNIFORMIVPROC __glewGetUniformiv = mockgl_GetUniformiv;

void  mockgl_GetVertexAttribPointerv(GLuint arg0, GLenum arg1, GLvoid ** arg2)
{
    return getGlMock()->gl_GetVertexAttribPointerv(arg0, arg1, arg2);
}
PFNGLGETVERTEXATTRIBPOINTERVPROC __glewGetVertexAttribPointerv = mockgl_GetVertexAttribPointerv;

void  mockgl_GetVertexAttribdv(GLuint arg0, GLenum arg1, GLdouble * arg2)
{
    return getGlMock()->gl_GetVertexAttribdv(arg0, arg1, arg2);
}
PFNGLGETVERTEXATTRIBDVPROC __glewGetVertexAttribdv = mockgl_GetVertexAttribdv;

void  mockgl_GetVertexAttribfv(GLuint arg0, GLenum arg1, GLfloat * arg2)
{
    return getGlMock()->gl_GetVertexAttribfv(arg0, arg1, arg2);
}
PFNGLGETVERTEXATTRIBFVPROC __glewGetVertexAttribfv = mockgl_GetVertexAttribfv;

void  mockgl_GetVertexAttribiv(GLuint arg0, GLenum arg1, GLint * arg2)
{
    return getGlMock()->gl_GetVertexAttribiv(arg0, arg1, arg2);
}
PFNGLGETVERTEXATTRIBIVPROC __glewGetVertexAttribiv = mockgl_GetVertexAttribiv;

unsigned char  mockgl_IsProgram(GLuint program)
{
    return getGlMock()->gl_IsProgram(program);
}
PFNGLISPROGRAMPROC __glewIsProgram = mockgl_IsProgram;

unsigned char  mockgl_IsShader(GLuint shader)
{
    return getGlMock()->gl_IsShader(shader);
}
PFNGLISSHADERPROC __glewIsShader = mockgl_IsShader;

void  mockgl_LinkProgram(GLuint program)
{
    return getGlMock()->gl_LinkProgram(program);
}
PFNGLLINKPROGRAMPROC __glewLinkProgram = mockgl_LinkProgram;

void  mockgl_ShaderSource(GLuint shader, GLsizei count, const GLchar ** strings, const GLint * lengths)
{
    return getGlMock()->gl_ShaderSource(shader, count, strings, lengths);
}
PFNGLSHADERSOURCEPROC __glewShaderSource = mockgl_ShaderSource;

void  mockgl_StencilFuncSeparate(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
    return getGlMock()->gl_StencilFuncSeparate(frontfunc, backfunc, ref, mask);
}
PFNGLSTENCILFUNCSEPARATEPROC __glewStencilFuncSeparate = mockgl_StencilFuncSeparate;

void  mockgl_StencilMaskSeparate(GLenum arg0, GLuint arg1)
{
    return getGlMock()->gl_StencilMaskSeparate(arg0, arg1);
}
PFNGLSTENCILMASKSEPARATEPROC __glewStencilMaskSeparate = mockgl_StencilMaskSeparate;

void  mockgl_StencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return getGlMock()->gl_StencilOpSeparate(face, sfail, dpfail, dppass);
}
PFNGLSTENCILOPSEPARATEPROC __glewStencilOpSeparate = mockgl_StencilOpSeparate;

void  mockgl_Uniform1f(GLint location, GLfloat v0)
{
    return getGlMock()->gl_Uniform1f(location, v0);
}
PFNGLUNIFORM1FPROC __glewUniform1f = mockgl_Uniform1f;

void  mockgl_Uniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_Uniform1fv(location, count, value);
}
PFNGLUNIFORM1FVPROC __glewUniform1fv = mockgl_Uniform1fv;

void  mockgl_Uniform1i(GLint location, GLint v0)
{
    return getGlMock()->gl_Uniform1i(location, v0);
}
PFNGLUNIFORM1IPROC __glewUniform1i = mockgl_Uniform1i;

void  mockgl_Uniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_Uniform1iv(location, count, value);
}
PFNGLUNIFORM1IVPROC __glewUniform1iv = mockgl_Uniform1iv;

void  mockgl_Uniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return getGlMock()->gl_Uniform2f(location, v0, v1);
}
PFNGLUNIFORM2FPROC __glewUniform2f = mockgl_Uniform2f;

void  mockgl_Uniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_Uniform2fv(location, count, value);
}
PFNGLUNIFORM2FVPROC __glewUniform2fv = mockgl_Uniform2fv;

void  mockgl_Uniform2i(GLint location, GLint v0, GLint v1)
{
    return getGlMock()->gl_Uniform2i(location, v0, v1);
}
PFNGLUNIFORM2IPROC __glewUniform2i = mockgl_Uniform2i;

void  mockgl_Uniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_Uniform2iv(location, count, value);
}
PFNGLUNIFORM2IVPROC __glewUniform2iv = mockgl_Uniform2iv;

void  mockgl_Uniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return getGlMock()->gl_Uniform3f(location, v0, v1, v2);
}
PFNGLUNIFORM3FPROC __glewUniform3f = mockgl_Uniform3f;

void  mockgl_Uniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_Uniform3fv(location, count, value);
}
PFNGLUNIFORM3FVPROC __glewUniform3fv = mockgl_Uniform3fv;

void  mockgl_Uniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return getGlMock()->gl_Uniform3i(location, v0, v1, v2);
}
PFNGLUNIFORM3IPROC __glewUniform3i = mockgl_Uniform3i;

void  mockgl_Uniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_Uniform3iv(location, count, value);
}
PFNGLUNIFORM3IVPROC __glewUniform3iv = mockgl_Uniform3iv;

void  mockgl_Uniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return getGlMock()->gl_Uniform4f(location, v0, v1, v2, v3);
}
PFNGLUNIFORM4FPROC __glewUniform4f = mockgl_Uniform4f;

void  mockgl_Uniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_Uniform4fv(location, count, value);
}
PFNGLUNIFORM4FVPROC __glewUniform4fv = mockgl_Uniform4fv;

void  mockgl_Uniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return getGlMock()->gl_Uniform4i(location, v0, v1, v2, v3);
}
PFNGLUNIFORM4IPROC __glewUniform4i = mockgl_Uniform4i;

void  mockgl_Uniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_Uniform4iv(location, count, value);
}
PFNGLUNIFORM4IVPROC __glewUniform4iv = mockgl_Uniform4iv;

void  mockgl_UniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_UniformMatrix2fv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX2FVPROC __glewUniformMatrix2fv = mockgl_UniformMatrix2fv;

void  mockgl_UniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_UniformMatrix3fv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX3FVPROC __glewUniformMatrix3fv = mockgl_UniformMatrix3fv;

void  mockgl_UniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_UniformMatrix4fv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX4FVPROC __glewUniformMatrix4fv = mockgl_UniformMatrix4fv;

void  mockgl_UseProgram(GLuint program)
{
    return getGlMock()->gl_UseProgram(program);
}
PFNGLUSEPROGRAMPROC __glewUseProgram = mockgl_UseProgram;

void  mockgl_ValidateProgram(GLuint program)
{
    return getGlMock()->gl_ValidateProgram(program);
}
PFNGLVALIDATEPROGRAMPROC __glewValidateProgram = mockgl_ValidateProgram;

void  mockgl_VertexAttrib1d(GLuint index, GLdouble x)
{
    return getGlMock()->gl_VertexAttrib1d(index, x);
}
PFNGLVERTEXATTRIB1DPROC __glewVertexAttrib1d = mockgl_VertexAttrib1d;

void  mockgl_VertexAttrib1dv(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttrib1dv(index, v);
}
PFNGLVERTEXATTRIB1DVPROC __glewVertexAttrib1dv = mockgl_VertexAttrib1dv;

void  mockgl_VertexAttrib1f(GLuint index, GLfloat x)
{
    return getGlMock()->gl_VertexAttrib1f(index, x);
}
PFNGLVERTEXATTRIB1FPROC __glewVertexAttrib1f = mockgl_VertexAttrib1f;

void  mockgl_VertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttrib1fv(index, v);
}
PFNGLVERTEXATTRIB1FVPROC __glewVertexAttrib1fv = mockgl_VertexAttrib1fv;

void  mockgl_VertexAttrib1s(GLuint index, GLshort x)
{
    return getGlMock()->gl_VertexAttrib1s(index, x);
}
PFNGLVERTEXATTRIB1SPROC __glewVertexAttrib1s = mockgl_VertexAttrib1s;

void  mockgl_VertexAttrib1sv(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttrib1sv(index, v);
}
PFNGLVERTEXATTRIB1SVPROC __glewVertexAttrib1sv = mockgl_VertexAttrib1sv;

void  mockgl_VertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
    return getGlMock()->gl_VertexAttrib2d(index, x, y);
}
PFNGLVERTEXATTRIB2DPROC __glewVertexAttrib2d = mockgl_VertexAttrib2d;

void  mockgl_VertexAttrib2dv(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttrib2dv(index, v);
}
PFNGLVERTEXATTRIB2DVPROC __glewVertexAttrib2dv = mockgl_VertexAttrib2dv;

void  mockgl_VertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return getGlMock()->gl_VertexAttrib2f(index, x, y);
}
PFNGLVERTEXATTRIB2FPROC __glewVertexAttrib2f = mockgl_VertexAttrib2f;

void  mockgl_VertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttrib2fv(index, v);
}
PFNGLVERTEXATTRIB2FVPROC __glewVertexAttrib2fv = mockgl_VertexAttrib2fv;

void  mockgl_VertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
    return getGlMock()->gl_VertexAttrib2s(index, x, y);
}
PFNGLVERTEXATTRIB2SPROC __glewVertexAttrib2s = mockgl_VertexAttrib2s;

void  mockgl_VertexAttrib2sv(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttrib2sv(index, v);
}
PFNGLVERTEXATTRIB2SVPROC __glewVertexAttrib2sv = mockgl_VertexAttrib2sv;

void  mockgl_VertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_VertexAttrib3d(index, x, y, z);
}
PFNGLVERTEXATTRIB3DPROC __glewVertexAttrib3d = mockgl_VertexAttrib3d;

void  mockgl_VertexAttrib3dv(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttrib3dv(index, v);
}
PFNGLVERTEXATTRIB3DVPROC __glewVertexAttrib3dv = mockgl_VertexAttrib3dv;

void  mockgl_VertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_VertexAttrib3f(index, x, y, z);
}
PFNGLVERTEXATTRIB3FPROC __glewVertexAttrib3f = mockgl_VertexAttrib3f;

void  mockgl_VertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttrib3fv(index, v);
}
PFNGLVERTEXATTRIB3FVPROC __glewVertexAttrib3fv = mockgl_VertexAttrib3fv;

void  mockgl_VertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return getGlMock()->gl_VertexAttrib3s(index, x, y, z);
}
PFNGLVERTEXATTRIB3SPROC __glewVertexAttrib3s = mockgl_VertexAttrib3s;

void  mockgl_VertexAttrib3sv(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttrib3sv(index, v);
}
PFNGLVERTEXATTRIB3SVPROC __glewVertexAttrib3sv = mockgl_VertexAttrib3sv;

void  mockgl_VertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
    return getGlMock()->gl_VertexAttrib4Nbv(index, v);
}
PFNGLVERTEXATTRIB4NBVPROC __glewVertexAttrib4Nbv = mockgl_VertexAttrib4Nbv;

void  mockgl_VertexAttrib4Niv(GLuint index, const GLint * v)
{
    return getGlMock()->gl_VertexAttrib4Niv(index, v);
}
PFNGLVERTEXATTRIB4NIVPROC __glewVertexAttrib4Niv = mockgl_VertexAttrib4Niv;

void  mockgl_VertexAttrib4Nsv(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttrib4Nsv(index, v);
}
PFNGLVERTEXATTRIB4NSVPROC __glewVertexAttrib4Nsv = mockgl_VertexAttrib4Nsv;

void  mockgl_VertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return getGlMock()->gl_VertexAttrib4Nub(index, x, y, z, w);
}
PFNGLVERTEXATTRIB4NUBPROC __glewVertexAttrib4Nub = mockgl_VertexAttrib4Nub;

void  mockgl_VertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
    return getGlMock()->gl_VertexAttrib4Nubv(index, v);
}
PFNGLVERTEXATTRIB4NUBVPROC __glewVertexAttrib4Nubv = mockgl_VertexAttrib4Nubv;

void  mockgl_VertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
    return getGlMock()->gl_VertexAttrib4Nuiv(index, v);
}
PFNGLVERTEXATTRIB4NUIVPROC __glewVertexAttrib4Nuiv = mockgl_VertexAttrib4Nuiv;

void  mockgl_VertexAttrib4Nusv(GLuint index, const GLushort * v)
{
    return getGlMock()->gl_VertexAttrib4Nusv(index, v);
}
PFNGLVERTEXATTRIB4NUSVPROC __glewVertexAttrib4Nusv = mockgl_VertexAttrib4Nusv;

void  mockgl_VertexAttrib4bv(GLuint index, const GLbyte * v)
{
    return getGlMock()->gl_VertexAttrib4bv(index, v);
}
PFNGLVERTEXATTRIB4BVPROC __glewVertexAttrib4bv = mockgl_VertexAttrib4bv;

void  mockgl_VertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_VertexAttrib4d(index, x, y, z, w);
}
PFNGLVERTEXATTRIB4DPROC __glewVertexAttrib4d = mockgl_VertexAttrib4d;

void  mockgl_VertexAttrib4dv(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttrib4dv(index, v);
}
PFNGLVERTEXATTRIB4DVPROC __glewVertexAttrib4dv = mockgl_VertexAttrib4dv;

void  mockgl_VertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return getGlMock()->gl_VertexAttrib4f(index, x, y, z, w);
}
PFNGLVERTEXATTRIB4FPROC __glewVertexAttrib4f = mockgl_VertexAttrib4f;

void  mockgl_VertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttrib4fv(index, v);
}
PFNGLVERTEXATTRIB4FVPROC __glewVertexAttrib4fv = mockgl_VertexAttrib4fv;

void  mockgl_VertexAttrib4iv(GLuint index, const GLint * v)
{
    return getGlMock()->gl_VertexAttrib4iv(index, v);
}
PFNGLVERTEXATTRIB4IVPROC __glewVertexAttrib4iv = mockgl_VertexAttrib4iv;

void  mockgl_VertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return getGlMock()->gl_VertexAttrib4s(index, x, y, z, w);
}
PFNGLVERTEXATTRIB4SPROC __glewVertexAttrib4s = mockgl_VertexAttrib4s;

void  mockgl_VertexAttrib4sv(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttrib4sv(index, v);
}
PFNGLVERTEXATTRIB4SVPROC __glewVertexAttrib4sv = mockgl_VertexAttrib4sv;

void  mockgl_VertexAttrib4ubv(GLuint index, const GLubyte * v)
{
    return getGlMock()->gl_VertexAttrib4ubv(index, v);
}
PFNGLVERTEXATTRIB4UBVPROC __glewVertexAttrib4ubv = mockgl_VertexAttrib4ubv;

void  mockgl_VertexAttrib4uiv(GLuint index, const GLuint * v)
{
    return getGlMock()->gl_VertexAttrib4uiv(index, v);
}
PFNGLVERTEXATTRIB4UIVPROC __glewVertexAttrib4uiv = mockgl_VertexAttrib4uiv;

void  mockgl_VertexAttrib4usv(GLuint index, const GLushort * v)
{
    return getGlMock()->gl_VertexAttrib4usv(index, v);
}
PFNGLVERTEXATTRIB4USVPROC __glewVertexAttrib4usv = mockgl_VertexAttrib4usv;

void  mockgl_VertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer)
{
    return getGlMock()->gl_VertexAttribPointer(index, size, type, normalized, stride, pointer);
}
PFNGLVERTEXATTRIBPOINTERPROC __glewVertexAttribPointer = mockgl_VertexAttribPointer;

void  mockgl_UniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_UniformMatrix2x3fv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX2X3FVPROC __glewUniformMatrix2x3fv = mockgl_UniformMatrix2x3fv;

void  mockgl_UniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_UniformMatrix2x4fv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX2X4FVPROC __glewUniformMatrix2x4fv = mockgl_UniformMatrix2x4fv;

void  mockgl_UniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_UniformMatrix3x2fv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX3X2FVPROC __glewUniformMatrix3x2fv = mockgl_UniformMatrix3x2fv;

void  mockgl_UniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_UniformMatrix3x4fv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX3X4FVPROC __glewUniformMatrix3x4fv = mockgl_UniformMatrix3x4fv;

void  mockgl_UniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_UniformMatrix4x2fv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX4X2FVPROC __glewUniformMatrix4x2fv = mockgl_UniformMatrix4x2fv;

void  mockgl_UniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_UniformMatrix4x3fv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX4X3FVPROC __glewUniformMatrix4x3fv = mockgl_UniformMatrix4x3fv;

void  mockgl_BeginConditionalRender(GLuint arg0, GLenum arg1)
{
    return getGlMock()->gl_BeginConditionalRender(arg0, arg1);
}
PFNGLBEGINCONDITIONALRENDERPROC __glewBeginConditionalRender = mockgl_BeginConditionalRender;

void  mockgl_BeginTransformFeedback(GLenum arg0)
{
    return getGlMock()->gl_BeginTransformFeedback(arg0);
}
PFNGLBEGINTRANSFORMFEEDBACKPROC __glewBeginTransformFeedback = mockgl_BeginTransformFeedback;

void  mockgl_BindFragDataLocation(GLuint arg0, GLuint arg1, const GLchar * arg2)
{
    return getGlMock()->gl_BindFragDataLocation(arg0, arg1, arg2);
}
PFNGLBINDFRAGDATALOCATIONPROC __glewBindFragDataLocation = mockgl_BindFragDataLocation;

void  mockgl_ClampColor(GLenum arg0, GLenum arg1)
{
    return getGlMock()->gl_ClampColor(arg0, arg1);
}
PFNGLCLAMPCOLORPROC __glewClampColor = mockgl_ClampColor;

void  mockgl_ClearBufferfi(GLenum arg0, GLint arg1, GLfloat arg2, GLint arg3)
{
    return getGlMock()->gl_ClearBufferfi(arg0, arg1, arg2, arg3);
}
PFNGLCLEARBUFFERFIPROC __glewClearBufferfi = mockgl_ClearBufferfi;

void  mockgl_ClearBufferfv(GLenum arg0, GLint arg1, const GLfloat * arg2)
{
    return getGlMock()->gl_ClearBufferfv(arg0, arg1, arg2);
}
PFNGLCLEARBUFFERFVPROC __glewClearBufferfv = mockgl_ClearBufferfv;

void  mockgl_ClearBufferiv(GLenum arg0, GLint arg1, const GLint * arg2)
{
    return getGlMock()->gl_ClearBufferiv(arg0, arg1, arg2);
}
PFNGLCLEARBUFFERIVPROC __glewClearBufferiv = mockgl_ClearBufferiv;

void  mockgl_ClearBufferuiv(GLenum arg0, GLint arg1, const GLuint * arg2)
{
    return getGlMock()->gl_ClearBufferuiv(arg0, arg1, arg2);
}
PFNGLCLEARBUFFERUIVPROC __glewClearBufferuiv = mockgl_ClearBufferuiv;

void  mockgl_ColorMaski(GLuint arg0, GLboolean arg1, GLboolean arg2, GLboolean arg3, GLboolean arg4)
{
    return getGlMock()->gl_ColorMaski(arg0, arg1, arg2, arg3, arg4);
}
PFNGLCOLORMASKIPROC __glewColorMaski = mockgl_ColorMaski;

void  mockgl_Disablei(GLenum arg0, GLuint arg1)
{
    return getGlMock()->gl_Disablei(arg0, arg1);
}
PFNGLDISABLEIPROC __glewDisablei = mockgl_Disablei;

void  mockgl_Enablei(GLenum arg0, GLuint arg1)
{
    return getGlMock()->gl_Enablei(arg0, arg1);
}
PFNGLENABLEIPROC __glewEnablei = mockgl_Enablei;

void  mockgl_EndConditionalRender()
{
    return getGlMock()->gl_EndConditionalRender();
}
PFNGLENDCONDITIONALRENDERPROC __glewEndConditionalRender = mockgl_EndConditionalRender;

void  mockgl_EndTransformFeedback()
{
    return getGlMock()->gl_EndTransformFeedback();
}
PFNGLENDTRANSFORMFEEDBACKPROC __glewEndTransformFeedback = mockgl_EndTransformFeedback;

void  mockgl_GetBooleani_v(GLenum arg0, GLuint arg1, GLboolean * arg2)
{
    return getGlMock()->gl_GetBooleani_v(arg0, arg1, arg2);
}
PFNGLGETBOOLEANI_VPROC __glewGetBooleani_v = mockgl_GetBooleani_v;

int  mockgl_GetFragDataLocation(GLuint arg0, const GLchar * arg1)
{
    return getGlMock()->gl_GetFragDataLocation(arg0, arg1);
}
PFNGLGETFRAGDATALOCATIONPROC __glewGetFragDataLocation = mockgl_GetFragDataLocation;

const unsigned char * mockgl_GetStringi(GLenum arg0, GLuint arg1)
{
    return getGlMock()->gl_GetStringi(arg0, arg1);
}
PFNGLGETSTRINGIPROC __glewGetStringi = mockgl_GetStringi;

void  mockgl_GetTexParameterIiv(GLenum arg0, GLenum arg1, GLint * arg2)
{
    return getGlMock()->gl_GetTexParameterIiv(arg0, arg1, arg2);
}
PFNGLGETTEXPARAMETERIIVPROC __glewGetTexParameterIiv = mockgl_GetTexParameterIiv;

void  mockgl_GetTexParameterIuiv(GLenum arg0, GLenum arg1, GLuint * arg2)
{
    return getGlMock()->gl_GetTexParameterIuiv(arg0, arg1, arg2);
}
PFNGLGETTEXPARAMETERIUIVPROC __glewGetTexParameterIuiv = mockgl_GetTexParameterIuiv;

void  mockgl_GetTransformFeedbackVarying(GLuint arg0, GLuint arg1, GLsizei arg2, GLsizei * arg3, GLsizei * arg4, GLenum * arg5, GLchar * arg6)
{
    return getGlMock()->gl_GetTransformFeedbackVarying(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC __glewGetTransformFeedbackVarying = mockgl_GetTransformFeedbackVarying;

void  mockgl_GetUniformuiv(GLuint arg0, GLint arg1, GLuint * arg2)
{
    return getGlMock()->gl_GetUniformuiv(arg0, arg1, arg2);
}
PFNGLGETUNIFORMUIVPROC __glewGetUniformuiv = mockgl_GetUniformuiv;

void  mockgl_GetVertexAttribIiv(GLuint arg0, GLenum arg1, GLint * arg2)
{
    return getGlMock()->gl_GetVertexAttribIiv(arg0, arg1, arg2);
}
PFNGLGETVERTEXATTRIBIIVPROC __glewGetVertexAttribIiv = mockgl_GetVertexAttribIiv;

void  mockgl_GetVertexAttribIuiv(GLuint arg0, GLenum arg1, GLuint * arg2)
{
    return getGlMock()->gl_GetVertexAttribIuiv(arg0, arg1, arg2);
}
PFNGLGETVERTEXATTRIBIUIVPROC __glewGetVertexAttribIuiv = mockgl_GetVertexAttribIuiv;

unsigned char  mockgl_IsEnabledi(GLenum arg0, GLuint arg1)
{
    return getGlMock()->gl_IsEnabledi(arg0, arg1);
}
PFNGLISENABLEDIPROC __glewIsEnabledi = mockgl_IsEnabledi;

void  mockgl_TexParameterIiv(GLenum arg0, GLenum arg1, const GLint * arg2)
{
    return getGlMock()->gl_TexParameterIiv(arg0, arg1, arg2);
}
PFNGLTEXPARAMETERIIVPROC __glewTexParameterIiv = mockgl_TexParameterIiv;

void  mockgl_TexParameterIuiv(GLenum arg0, GLenum arg1, const GLuint * arg2)
{
    return getGlMock()->gl_TexParameterIuiv(arg0, arg1, arg2);
}
PFNGLTEXPARAMETERIUIVPROC __glewTexParameterIuiv = mockgl_TexParameterIuiv;

void  mockgl_TransformFeedbackVaryings(GLuint arg0, GLsizei arg1, const GLchar ** arg2, GLenum arg3)
{
    return getGlMock()->gl_TransformFeedbackVaryings(arg0, arg1, arg2, arg3);
}
PFNGLTRANSFORMFEEDBACKVARYINGSPROC __glewTransformFeedbackVaryings = mockgl_TransformFeedbackVaryings;

void  mockgl_Uniform1ui(GLint arg0, GLuint arg1)
{
    return getGlMock()->gl_Uniform1ui(arg0, arg1);
}
PFNGLUNIFORM1UIPROC __glewUniform1ui = mockgl_Uniform1ui;

void  mockgl_Uniform1uiv(GLint arg0, GLsizei arg1, const GLuint * arg2)
{
    return getGlMock()->gl_Uniform1uiv(arg0, arg1, arg2);
}
PFNGLUNIFORM1UIVPROC __glewUniform1uiv = mockgl_Uniform1uiv;

void  mockgl_Uniform2ui(GLint arg0, GLuint arg1, GLuint arg2)
{
    return getGlMock()->gl_Uniform2ui(arg0, arg1, arg2);
}
PFNGLUNIFORM2UIPROC __glewUniform2ui = mockgl_Uniform2ui;

void  mockgl_Uniform2uiv(GLint arg0, GLsizei arg1, const GLuint * arg2)
{
    return getGlMock()->gl_Uniform2uiv(arg0, arg1, arg2);
}
PFNGLUNIFORM2UIVPROC __glewUniform2uiv = mockgl_Uniform2uiv;

void  mockgl_Uniform3ui(GLint arg0, GLuint arg1, GLuint arg2, GLuint arg3)
{
    return getGlMock()->gl_Uniform3ui(arg0, arg1, arg2, arg3);
}
PFNGLUNIFORM3UIPROC __glewUniform3ui = mockgl_Uniform3ui;

void  mockgl_Uniform3uiv(GLint arg0, GLsizei arg1, const GLuint * arg2)
{
    return getGlMock()->gl_Uniform3uiv(arg0, arg1, arg2);
}
PFNGLUNIFORM3UIVPROC __glewUniform3uiv = mockgl_Uniform3uiv;

void  mockgl_Uniform4ui(GLint arg0, GLuint arg1, GLuint arg2, GLuint arg3, GLuint arg4)
{
    return getGlMock()->gl_Uniform4ui(arg0, arg1, arg2, arg3, arg4);
}
PFNGLUNIFORM4UIPROC __glewUniform4ui = mockgl_Uniform4ui;

void  mockgl_Uniform4uiv(GLint arg0, GLsizei arg1, const GLuint * arg2)
{
    return getGlMock()->gl_Uniform4uiv(arg0, arg1, arg2);
}
PFNGLUNIFORM4UIVPROC __glewUniform4uiv = mockgl_Uniform4uiv;

void  mockgl_VertexAttribI1i(GLuint arg0, GLint arg1)
{
    return getGlMock()->gl_VertexAttribI1i(arg0, arg1);
}
PFNGLVERTEXATTRIBI1IPROC __glewVertexAttribI1i = mockgl_VertexAttribI1i;

void  mockgl_VertexAttribI1iv(GLuint arg0, const GLint * arg1)
{
    return getGlMock()->gl_VertexAttribI1iv(arg0, arg1);
}
PFNGLVERTEXATTRIBI1IVPROC __glewVertexAttribI1iv = mockgl_VertexAttribI1iv;

void  mockgl_VertexAttribI1ui(GLuint arg0, GLuint arg1)
{
    return getGlMock()->gl_VertexAttribI1ui(arg0, arg1);
}
PFNGLVERTEXATTRIBI1UIPROC __glewVertexAttribI1ui = mockgl_VertexAttribI1ui;

void  mockgl_VertexAttribI1uiv(GLuint arg0, const GLuint * arg1)
{
    return getGlMock()->gl_VertexAttribI1uiv(arg0, arg1);
}
PFNGLVERTEXATTRIBI1UIVPROC __glewVertexAttribI1uiv = mockgl_VertexAttribI1uiv;

void  mockgl_VertexAttribI2i(GLuint arg0, GLint arg1, GLint arg2)
{
    return getGlMock()->gl_VertexAttribI2i(arg0, arg1, arg2);
}
PFNGLVERTEXATTRIBI2IPROC __glewVertexAttribI2i = mockgl_VertexAttribI2i;

void  mockgl_VertexAttribI2iv(GLuint arg0, const GLint * arg1)
{
    return getGlMock()->gl_VertexAttribI2iv(arg0, arg1);
}
PFNGLVERTEXATTRIBI2IVPROC __glewVertexAttribI2iv = mockgl_VertexAttribI2iv;

void  mockgl_VertexAttribI2ui(GLuint arg0, GLuint arg1, GLuint arg2)
{
    return getGlMock()->gl_VertexAttribI2ui(arg0, arg1, arg2);
}
PFNGLVERTEXATTRIBI2UIPROC __glewVertexAttribI2ui = mockgl_VertexAttribI2ui;

void  mockgl_VertexAttribI2uiv(GLuint arg0, const GLuint * arg1)
{
    return getGlMock()->gl_VertexAttribI2uiv(arg0, arg1);
}
PFNGLVERTEXATTRIBI2UIVPROC __glewVertexAttribI2uiv = mockgl_VertexAttribI2uiv;

void  mockgl_VertexAttribI3i(GLuint arg0, GLint arg1, GLint arg2, GLint arg3)
{
    return getGlMock()->gl_VertexAttribI3i(arg0, arg1, arg2, arg3);
}
PFNGLVERTEXATTRIBI3IPROC __glewVertexAttribI3i = mockgl_VertexAttribI3i;

void  mockgl_VertexAttribI3iv(GLuint arg0, const GLint * arg1)
{
    return getGlMock()->gl_VertexAttribI3iv(arg0, arg1);
}
PFNGLVERTEXATTRIBI3IVPROC __glewVertexAttribI3iv = mockgl_VertexAttribI3iv;

void  mockgl_VertexAttribI3ui(GLuint arg0, GLuint arg1, GLuint arg2, GLuint arg3)
{
    return getGlMock()->gl_VertexAttribI3ui(arg0, arg1, arg2, arg3);
}
PFNGLVERTEXATTRIBI3UIPROC __glewVertexAttribI3ui = mockgl_VertexAttribI3ui;

void  mockgl_VertexAttribI3uiv(GLuint arg0, const GLuint * arg1)
{
    return getGlMock()->gl_VertexAttribI3uiv(arg0, arg1);
}
PFNGLVERTEXATTRIBI3UIVPROC __glewVertexAttribI3uiv = mockgl_VertexAttribI3uiv;

void  mockgl_VertexAttribI4bv(GLuint arg0, const GLbyte * arg1)
{
    return getGlMock()->gl_VertexAttribI4bv(arg0, arg1);
}
PFNGLVERTEXATTRIBI4BVPROC __glewVertexAttribI4bv = mockgl_VertexAttribI4bv;

void  mockgl_VertexAttribI4i(GLuint arg0, GLint arg1, GLint arg2, GLint arg3, GLint arg4)
{
    return getGlMock()->gl_VertexAttribI4i(arg0, arg1, arg2, arg3, arg4);
}
PFNGLVERTEXATTRIBI4IPROC __glewVertexAttribI4i = mockgl_VertexAttribI4i;

void  mockgl_VertexAttribI4iv(GLuint arg0, const GLint * arg1)
{
    return getGlMock()->gl_VertexAttribI4iv(arg0, arg1);
}
PFNGLVERTEXATTRIBI4IVPROC __glewVertexAttribI4iv = mockgl_VertexAttribI4iv;

void  mockgl_VertexAttribI4sv(GLuint arg0, const GLshort * arg1)
{
    return getGlMock()->gl_VertexAttribI4sv(arg0, arg1);
}
PFNGLVERTEXATTRIBI4SVPROC __glewVertexAttribI4sv = mockgl_VertexAttribI4sv;

void  mockgl_VertexAttribI4ubv(GLuint arg0, const GLubyte * arg1)
{
    return getGlMock()->gl_VertexAttribI4ubv(arg0, arg1);
}
PFNGLVERTEXATTRIBI4UBVPROC __glewVertexAttribI4ubv = mockgl_VertexAttribI4ubv;

void  mockgl_VertexAttribI4ui(GLuint arg0, GLuint arg1, GLuint arg2, GLuint arg3, GLuint arg4)
{
    return getGlMock()->gl_VertexAttribI4ui(arg0, arg1, arg2, arg3, arg4);
}
PFNGLVERTEXATTRIBI4UIPROC __glewVertexAttribI4ui = mockgl_VertexAttribI4ui;

void  mockgl_VertexAttribI4uiv(GLuint arg0, const GLuint * arg1)
{
    return getGlMock()->gl_VertexAttribI4uiv(arg0, arg1);
}
PFNGLVERTEXATTRIBI4UIVPROC __glewVertexAttribI4uiv = mockgl_VertexAttribI4uiv;

void  mockgl_VertexAttribI4usv(GLuint arg0, const GLushort * arg1)
{
    return getGlMock()->gl_VertexAttribI4usv(arg0, arg1);
}
PFNGLVERTEXATTRIBI4USVPROC __glewVertexAttribI4usv = mockgl_VertexAttribI4usv;

void  mockgl_VertexAttribIPointer(GLuint arg0, GLint arg1, GLenum arg2, GLsizei arg3, const GLvoid * arg4)
{
    return getGlMock()->gl_VertexAttribIPointer(arg0, arg1, arg2, arg3, arg4);
}
PFNGLVERTEXATTRIBIPOINTERPROC __glewVertexAttribIPointer = mockgl_VertexAttribIPointer;

void  mockgl_DrawArraysInstanced(GLenum arg0, GLint arg1, GLsizei arg2, GLsizei arg3)
{
    return getGlMock()->gl_DrawArraysInstanced(arg0, arg1, arg2, arg3);
}
PFNGLDRAWARRAYSINSTANCEDPROC __glewDrawArraysInstanced = mockgl_DrawArraysInstanced;

void  mockgl_DrawElementsInstanced(GLenum arg0, GLsizei arg1, GLenum arg2, const GLvoid * arg3, GLsizei arg4)
{
    return getGlMock()->gl_DrawElementsInstanced(arg0, arg1, arg2, arg3, arg4);
}
PFNGLDRAWELEMENTSINSTANCEDPROC __glewDrawElementsInstanced = mockgl_DrawElementsInstanced;

void  mockgl_PrimitiveRestartIndex(GLuint arg0)
{
    return getGlMock()->gl_PrimitiveRestartIndex(arg0);
}
PFNGLPRIMITIVERESTARTINDEXPROC __glewPrimitiveRestartIndex = mockgl_PrimitiveRestartIndex;

void  mockgl_TexBuffer(GLenum arg0, GLenum arg1, GLuint arg2)
{
    return getGlMock()->gl_TexBuffer(arg0, arg1, arg2);
}
PFNGLTEXBUFFERPROC __glewTexBuffer = mockgl_TexBuffer;

void  mockgl_FramebufferTexture(GLenum arg0, GLenum arg1, GLuint arg2, GLint arg3)
{
    return getGlMock()->gl_FramebufferTexture(arg0, arg1, arg2, arg3);
}
PFNGLFRAMEBUFFERTEXTUREPROC __glewFramebufferTexture = mockgl_FramebufferTexture;

void  mockgl_GetBufferParameteri64v(GLenum arg0, GLenum arg1, GLint64 * arg2)
{
    return getGlMock()->gl_GetBufferParameteri64v(arg0, arg1, arg2);
}
PFNGLGETBUFFERPARAMETERI64VPROC __glewGetBufferParameteri64v = mockgl_GetBufferParameteri64v;

void  mockgl_GetInteger64i_v(GLenum arg0, GLuint arg1, GLint64 * arg2)
{
    return getGlMock()->gl_GetInteger64i_v(arg0, arg1, arg2);
}
PFNGLGETINTEGER64I_VPROC __glewGetInteger64i_v = mockgl_GetInteger64i_v;

void  mockgl_VertexAttribDivisor(GLuint index, GLuint divisor)
{
    return getGlMock()->gl_VertexAttribDivisor(index, divisor);
}
PFNGLVERTEXATTRIBDIVISORPROC __glewVertexAttribDivisor = mockgl_VertexAttribDivisor;

void  mockgl_BlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return getGlMock()->gl_BlendEquationSeparatei(buf, modeRGB, modeAlpha);
}
PFNGLBLENDEQUATIONSEPARATEIPROC __glewBlendEquationSeparatei = mockgl_BlendEquationSeparatei;

void  mockgl_BlendEquationi(GLuint buf, GLenum mode)
{
    return getGlMock()->gl_BlendEquationi(buf, mode);
}
PFNGLBLENDEQUATIONIPROC __glewBlendEquationi = mockgl_BlendEquationi;

void  mockgl_BlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return getGlMock()->gl_BlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}
PFNGLBLENDFUNCSEPARATEIPROC __glewBlendFuncSeparatei = mockgl_BlendFuncSeparatei;

void  mockgl_BlendFunci(GLuint buf, GLenum src, GLenum dst)
{
    return getGlMock()->gl_BlendFunci(buf, src, dst);
}
PFNGLBLENDFUNCIPROC __glewBlendFunci = mockgl_BlendFunci;

void  mockgl_MinSampleShading(GLclampf value)
{
    return getGlMock()->gl_MinSampleShading(value);
}
PFNGLMINSAMPLESHADINGPROC __glewMinSampleShading = mockgl_MinSampleShading;

void  mockgl_TbufferMask3DFX(GLuint mask)
{
    return getGlMock()->gl_TbufferMask3DFX(mask);
}
PFNGLTBUFFERMASK3DFXPROC __glewTbufferMask3DFX = mockgl_TbufferMask3DFX;

void  mockgl_DebugMessageCallbackAMD(GLDEBUGPROCAMD callback, void * userParam)
{
    return getGlMock()->gl_DebugMessageCallbackAMD(callback, userParam);
}
PFNGLDEBUGMESSAGECALLBACKAMDPROC __glewDebugMessageCallbackAMD = mockgl_DebugMessageCallbackAMD;

void  mockgl_DebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return getGlMock()->gl_DebugMessageEnableAMD(category, severity, count, ids, enabled);
}
PFNGLDEBUGMESSAGEENABLEAMDPROC __glewDebugMessageEnableAMD = mockgl_DebugMessageEnableAMD;

void  mockgl_DebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const char * buf)
{
    return getGlMock()->gl_DebugMessageInsertAMD(category, severity, id, length, buf);
}
PFNGLDEBUGMESSAGEINSERTAMDPROC __glewDebugMessageInsertAMD = mockgl_DebugMessageInsertAMD;

unsigned int  mockgl_GetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum * categories, GLuint * severities, GLuint * ids, GLsizei * lengths, char * message)
{
    return getGlMock()->gl_GetDebugMessageLogAMD(count, bufsize, categories, severities, ids, lengths, message);
}
PFNGLGETDEBUGMESSAGELOGAMDPROC __glewGetDebugMessageLogAMD = mockgl_GetDebugMessageLogAMD;

void  mockgl_BlendEquationIndexedAMD(GLuint buf, GLenum mode)
{
    return getGlMock()->gl_BlendEquationIndexedAMD(buf, mode);
}
PFNGLBLENDEQUATIONINDEXEDAMDPROC __glewBlendEquationIndexedAMD = mockgl_BlendEquationIndexedAMD;

void  mockgl_BlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return getGlMock()->gl_BlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);
}
PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC __glewBlendEquationSeparateIndexedAMD = mockgl_BlendEquationSeparateIndexedAMD;

void  mockgl_BlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst)
{
    return getGlMock()->gl_BlendFuncIndexedAMD(buf, src, dst);
}
PFNGLBLENDFUNCINDEXEDAMDPROC __glewBlendFuncIndexedAMD = mockgl_BlendFuncIndexedAMD;

void  mockgl_BlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return getGlMock()->gl_BlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}
PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC __glewBlendFuncSeparateIndexedAMD = mockgl_BlendFuncSeparateIndexedAMD;

void  mockgl_DeleteNamesAMD(GLenum identifier, GLuint num, const GLuint * names)
{
    return getGlMock()->gl_DeleteNamesAMD(identifier, num, names);
}
PFNGLDELETENAMESAMDPROC __glewDeleteNamesAMD = mockgl_DeleteNamesAMD;

void  mockgl_GenNamesAMD(GLenum identifier, GLuint num, GLuint * names)
{
    return getGlMock()->gl_GenNamesAMD(identifier, num, names);
}
PFNGLGENNAMESAMDPROC __glewGenNamesAMD = mockgl_GenNamesAMD;

unsigned char  mockgl_IsNameAMD(GLenum identifier, GLuint name)
{
    return getGlMock()->gl_IsNameAMD(identifier, name);
}
PFNGLISNAMEAMDPROC __glewIsNameAMD = mockgl_IsNameAMD;

void  mockgl_BeginPerfMonitorAMD(GLuint monitor)
{
    return getGlMock()->gl_BeginPerfMonitorAMD(monitor);
}
PFNGLBEGINPERFMONITORAMDPROC __glewBeginPerfMonitorAMD = mockgl_BeginPerfMonitorAMD;

void  mockgl_DeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return getGlMock()->gl_DeletePerfMonitorsAMD(n, monitors);
}
PFNGLDELETEPERFMONITORSAMDPROC __glewDeletePerfMonitorsAMD = mockgl_DeletePerfMonitorsAMD;

void  mockgl_EndPerfMonitorAMD(GLuint monitor)
{
    return getGlMock()->gl_EndPerfMonitorAMD(monitor);
}
PFNGLENDPERFMONITORAMDPROC __glewEndPerfMonitorAMD = mockgl_EndPerfMonitorAMD;

void  mockgl_GenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return getGlMock()->gl_GenPerfMonitorsAMD(n, monitors);
}
PFNGLGENPERFMONITORSAMDPROC __glewGenPerfMonitorsAMD = mockgl_GenPerfMonitorsAMD;

void  mockgl_GetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
    return getGlMock()->gl_GetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}
PFNGLGETPERFMONITORCOUNTERDATAAMDPROC __glewGetPerfMonitorCounterDataAMD = mockgl_GetPerfMonitorCounterDataAMD;

void  mockgl_GetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
    return getGlMock()->gl_GetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}
PFNGLGETPERFMONITORCOUNTERINFOAMDPROC __glewGetPerfMonitorCounterInfoAMD = mockgl_GetPerfMonitorCounterInfoAMD;

void  mockgl_GetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, char * counterString)
{
    return getGlMock()->gl_GetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}
PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC __glewGetPerfMonitorCounterStringAMD = mockgl_GetPerfMonitorCounterStringAMD;

void  mockgl_GetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei countersSize, GLuint * counters)
{
    return getGlMock()->gl_GetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, countersSize, counters);
}
PFNGLGETPERFMONITORCOUNTERSAMDPROC __glewGetPerfMonitorCountersAMD = mockgl_GetPerfMonitorCountersAMD;

void  mockgl_GetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, char * groupString)
{
    return getGlMock()->gl_GetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}
PFNGLGETPERFMONITORGROUPSTRINGAMDPROC __glewGetPerfMonitorGroupStringAMD = mockgl_GetPerfMonitorGroupStringAMD;

void  mockgl_GetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
    return getGlMock()->gl_GetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}
PFNGLGETPERFMONITORGROUPSAMDPROC __glewGetPerfMonitorGroupsAMD = mockgl_GetPerfMonitorGroupsAMD;

void  mockgl_SelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return getGlMock()->gl_SelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}
PFNGLSELECTPERFMONITORCOUNTERSAMDPROC __glewSelectPerfMonitorCountersAMD = mockgl_SelectPerfMonitorCountersAMD;

void  mockgl_SetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat * val)
{
    return getGlMock()->gl_SetMultisamplefvAMD(pname, index, val);
}
PFNGLSETMULTISAMPLEFVAMDPROC __glewSetMultisamplefvAMD = mockgl_SetMultisamplefvAMD;

void  mockgl_TessellationFactorAMD(GLfloat factor)
{
    return getGlMock()->gl_TessellationFactorAMD(factor);
}
PFNGLTESSELLATIONFACTORAMDPROC __glewTessellationFactorAMD = mockgl_TessellationFactorAMD;

void  mockgl_TessellationModeAMD(GLenum mode)
{
    return getGlMock()->gl_TessellationModeAMD(mode);
}
PFNGLTESSELLATIONMODEAMDPROC __glewTessellationModeAMD = mockgl_TessellationModeAMD;

void  mockgl_DrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count)
{
    return getGlMock()->gl_DrawElementArrayAPPLE(mode, first, count);
}
PFNGLDRAWELEMENTARRAYAPPLEPROC __glewDrawElementArrayAPPLE = mockgl_DrawElementArrayAPPLE;

void  mockgl_DrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
{
    return getGlMock()->gl_DrawRangeElementArrayAPPLE(mode, start, end, first, count);
}
PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC __glewDrawRangeElementArrayAPPLE = mockgl_DrawRangeElementArrayAPPLE;

void  mockgl_ElementPointerAPPLE(GLenum type, const void * pointer)
{
    return getGlMock()->gl_ElementPointerAPPLE(type, pointer);
}
PFNGLELEMENTPOINTERAPPLEPROC __glewElementPointerAPPLE = mockgl_ElementPointerAPPLE;

void  mockgl_MultiDrawElementArrayAPPLE(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return getGlMock()->gl_MultiDrawElementArrayAPPLE(mode, first, count, primcount);
}
PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC __glewMultiDrawElementArrayAPPLE = mockgl_MultiDrawElementArrayAPPLE;

void  mockgl_MultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return getGlMock()->gl_MultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
}
PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC __glewMultiDrawRangeElementArrayAPPLE = mockgl_MultiDrawRangeElementArrayAPPLE;

void  mockgl_DeleteFencesAPPLE(GLsizei n, const GLuint * fences)
{
    return getGlMock()->gl_DeleteFencesAPPLE(n, fences);
}
PFNGLDELETEFENCESAPPLEPROC __glewDeleteFencesAPPLE = mockgl_DeleteFencesAPPLE;

void  mockgl_FinishFenceAPPLE(GLuint fence)
{
    return getGlMock()->gl_FinishFenceAPPLE(fence);
}
PFNGLFINISHFENCEAPPLEPROC __glewFinishFenceAPPLE = mockgl_FinishFenceAPPLE;

void  mockgl_FinishObjectAPPLE(GLenum object, GLint name)
{
    return getGlMock()->gl_FinishObjectAPPLE(object, name);
}
PFNGLFINISHOBJECTAPPLEPROC __glewFinishObjectAPPLE = mockgl_FinishObjectAPPLE;

void  mockgl_GenFencesAPPLE(GLsizei n, GLuint * fences)
{
    return getGlMock()->gl_GenFencesAPPLE(n, fences);
}
PFNGLGENFENCESAPPLEPROC __glewGenFencesAPPLE = mockgl_GenFencesAPPLE;

unsigned char  mockgl_IsFenceAPPLE(GLuint fence)
{
    return getGlMock()->gl_IsFenceAPPLE(fence);
}
PFNGLISFENCEAPPLEPROC __glewIsFenceAPPLE = mockgl_IsFenceAPPLE;

void  mockgl_SetFenceAPPLE(GLuint fence)
{
    return getGlMock()->gl_SetFenceAPPLE(fence);
}
PFNGLSETFENCEAPPLEPROC __glewSetFenceAPPLE = mockgl_SetFenceAPPLE;

unsigned char  mockgl_TestFenceAPPLE(GLuint fence)
{
    return getGlMock()->gl_TestFenceAPPLE(fence);
}
PFNGLTESTFENCEAPPLEPROC __glewTestFenceAPPLE = mockgl_TestFenceAPPLE;

unsigned char  mockgl_TestObjectAPPLE(GLenum object, GLuint name)
{
    return getGlMock()->gl_TestObjectAPPLE(object, name);
}
PFNGLTESTOBJECTAPPLEPROC __glewTestObjectAPPLE = mockgl_TestObjectAPPLE;

void  mockgl_BufferParameteriAPPLE(GLenum target, GLenum pname, GLint param)
{
    return getGlMock()->gl_BufferParameteriAPPLE(target, pname, param);
}
PFNGLBUFFERPARAMETERIAPPLEPROC __glewBufferParameteriAPPLE = mockgl_BufferParameteriAPPLE;

void  mockgl_FlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size)
{
    return getGlMock()->gl_FlushMappedBufferRangeAPPLE(target, offset, size);
}
PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC __glewFlushMappedBufferRangeAPPLE = mockgl_FlushMappedBufferRangeAPPLE;

void  mockgl_GetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetObjectParameterivAPPLE(objectType, name, pname, params);
}
PFNGLGETOBJECTPARAMETERIVAPPLEPROC __glewGetObjectParameterivAPPLE = mockgl_GetObjectParameterivAPPLE;

unsigned int  mockgl_ObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return getGlMock()->gl_ObjectPurgeableAPPLE(objectType, name, option);
}
PFNGLOBJECTPURGEABLEAPPLEPROC __glewObjectPurgeableAPPLE = mockgl_ObjectPurgeableAPPLE;

unsigned int  mockgl_ObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return getGlMock()->gl_ObjectUnpurgeableAPPLE(objectType, name, option);
}
PFNGLOBJECTUNPURGEABLEAPPLEPROC __glewObjectUnpurgeableAPPLE = mockgl_ObjectUnpurgeableAPPLE;

void  mockgl_GetTexParameterPointervAPPLE(GLenum target, GLenum pname, GLvoid ** params)
{
    return getGlMock()->gl_GetTexParameterPointervAPPLE(target, pname, params);
}
PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC __glewGetTexParameterPointervAPPLE = mockgl_GetTexParameterPointervAPPLE;

void  mockgl_TextureRangeAPPLE(GLenum target, GLsizei length, GLvoid * pointer)
{
    return getGlMock()->gl_TextureRangeAPPLE(target, length, pointer);
}
PFNGLTEXTURERANGEAPPLEPROC __glewTextureRangeAPPLE = mockgl_TextureRangeAPPLE;

void  mockgl_BindVertexArrayAPPLE(GLuint array)
{
    return getGlMock()->gl_BindVertexArrayAPPLE(array);
}
PFNGLBINDVERTEXARRAYAPPLEPROC __glewBindVertexArrayAPPLE = mockgl_BindVertexArrayAPPLE;

void  mockgl_DeleteVertexArraysAPPLE(GLsizei n, const GLuint * arrays)
{
    return getGlMock()->gl_DeleteVertexArraysAPPLE(n, arrays);
}
PFNGLDELETEVERTEXARRAYSAPPLEPROC __glewDeleteVertexArraysAPPLE = mockgl_DeleteVertexArraysAPPLE;

void  mockgl_GenVertexArraysAPPLE(GLsizei n, const GLuint * arrays)
{
    return getGlMock()->gl_GenVertexArraysAPPLE(n, arrays);
}
PFNGLGENVERTEXARRAYSAPPLEPROC __glewGenVertexArraysAPPLE = mockgl_GenVertexArraysAPPLE;

unsigned char  mockgl_IsVertexArrayAPPLE(GLuint array)
{
    return getGlMock()->gl_IsVertexArrayAPPLE(array);
}
PFNGLISVERTEXARRAYAPPLEPROC __glewIsVertexArrayAPPLE = mockgl_IsVertexArrayAPPLE;

void  mockgl_FlushVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return getGlMock()->gl_FlushVertexArrayRangeAPPLE(length, pointer);
}
PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC __glewFlushVertexArrayRangeAPPLE = mockgl_FlushVertexArrayRangeAPPLE;

void  mockgl_VertexArrayParameteriAPPLE(GLenum pname, GLint param)
{
    return getGlMock()->gl_VertexArrayParameteriAPPLE(pname, param);
}
PFNGLVERTEXARRAYPARAMETERIAPPLEPROC __glewVertexArrayParameteriAPPLE = mockgl_VertexArrayParameteriAPPLE;

void  mockgl_VertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return getGlMock()->gl_VertexArrayRangeAPPLE(length, pointer);
}
PFNGLVERTEXARRAYRANGEAPPLEPROC __glewVertexArrayRangeAPPLE = mockgl_VertexArrayRangeAPPLE;

void  mockgl_DisableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return getGlMock()->gl_DisableVertexAttribAPPLE(index, pname);
}
PFNGLDISABLEVERTEXATTRIBAPPLEPROC __glewDisableVertexAttribAPPLE = mockgl_DisableVertexAttribAPPLE;

void  mockgl_EnableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return getGlMock()->gl_EnableVertexAttribAPPLE(index, pname);
}
PFNGLENABLEVERTEXATTRIBAPPLEPROC __glewEnableVertexAttribAPPLE = mockgl_EnableVertexAttribAPPLE;

unsigned char  mockgl_IsVertexAttribEnabledAPPLE(GLuint index, GLenum pname)
{
    return getGlMock()->gl_IsVertexAttribEnabledAPPLE(index, pname);
}
PFNGLISVERTEXATTRIBENABLEDAPPLEPROC __glewIsVertexAttribEnabledAPPLE = mockgl_IsVertexAttribEnabledAPPLE;

void  mockgl_MapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return getGlMock()->gl_MapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);
}
PFNGLMAPVERTEXATTRIB1DAPPLEPROC __glewMapVertexAttrib1dAPPLE = mockgl_MapVertexAttrib1dAPPLE;

void  mockgl_MapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return getGlMock()->gl_MapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);
}
PFNGLMAPVERTEXATTRIB1FAPPLEPROC __glewMapVertexAttrib1fAPPLE = mockgl_MapVertexAttrib1fAPPLE;

void  mockgl_ClearDepthf(GLclampf d)
{
    return getGlMock()->gl_ClearDepthf(d);
}
PFNGLCLEARDEPTHFPROC __glewClearDepthf = mockgl_ClearDepthf;

void  mockgl_DepthRangef(GLclampf n, GLclampf f)
{
    return getGlMock()->gl_DepthRangef(n, f);
}
PFNGLDEPTHRANGEFPROC __glewDepthRangef = mockgl_DepthRangef;

void  mockgl_GetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return getGlMock()->gl_GetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}
PFNGLGETSHADERPRECISIONFORMATPROC __glewGetShaderPrecisionFormat = mockgl_GetShaderPrecisionFormat;

void  mockgl_ReleaseShaderCompiler()
{
    return getGlMock()->gl_ReleaseShaderCompiler();
}
PFNGLRELEASESHADERCOMPILERPROC __glewReleaseShaderCompiler = mockgl_ReleaseShaderCompiler;

void  mockgl_ShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const GLvoid * binary, GLsizei length)
{
    return getGlMock()->gl_ShaderBinary(count, shaders, binaryformat, binary, length);
}
PFNGLSHADERBINARYPROC __glewShaderBinary = mockgl_ShaderBinary;

void  mockgl_BindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const char * name)
{
    return getGlMock()->gl_BindFragDataLocationIndexed(program, colorNumber, index, name);
}
PFNGLBINDFRAGDATALOCATIONINDEXEDPROC __glewBindFragDataLocationIndexed = mockgl_BindFragDataLocationIndexed;

int  mockgl_GetFragDataIndex(GLuint program, const char * name)
{
    return getGlMock()->gl_GetFragDataIndex(program, name);
}
PFNGLGETFRAGDATAINDEXPROC __glewGetFragDataIndex = mockgl_GetFragDataIndex;

struct __GLsync * mockgl_CreateSyncFromCLeventARB(cl_context context, cl_event event, GLbitfield flags)
{
    return getGlMock()->gl_CreateSyncFromCLeventARB(context, event, flags);
}
PFNGLCREATESYNCFROMCLEVENTARBPROC __glewCreateSyncFromCLeventARB = mockgl_CreateSyncFromCLeventARB;

void  mockgl_ClampColorARB(GLenum target, GLenum clamp)
{
    return getGlMock()->gl_ClampColorARB(target, clamp);
}
PFNGLCLAMPCOLORARBPROC __glewClampColorARB = mockgl_ClampColorARB;

void  mockgl_CopyBufferSubData(GLenum readtarget, GLenum writetarget, GLintptr readoffset, GLintptr writeoffset, GLsizeiptr size)
{
    return getGlMock()->gl_CopyBufferSubData(readtarget, writetarget, readoffset, writeoffset, size);
}
PFNGLCOPYBUFFERSUBDATAPROC __glewCopyBufferSubData = mockgl_CopyBufferSubData;

void  mockgl_DebugMessageCallbackARB(GLDEBUGPROCARB callback, void * userParam)
{
    return getGlMock()->gl_DebugMessageCallbackARB(callback, userParam);
}
PFNGLDEBUGMESSAGECALLBACKARBPROC __glewDebugMessageCallbackARB = mockgl_DebugMessageCallbackARB;

void  mockgl_DebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return getGlMock()->gl_DebugMessageControlARB(source, type, severity, count, ids, enabled);
}
PFNGLDEBUGMESSAGECONTROLARBPROC __glewDebugMessageControlARB = mockgl_DebugMessageControlARB;

void  mockgl_DebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const char * buf)
{
    return getGlMock()->gl_DebugMessageInsertARB(source, type, id, severity, length, buf);
}
PFNGLDEBUGMESSAGEINSERTARBPROC __glewDebugMessageInsertARB = mockgl_DebugMessageInsertARB;

unsigned int  mockgl_GetDebugMessageLogARB(GLuint count, GLsizei bufsize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, char * messageLog)
{
    return getGlMock()->gl_GetDebugMessageLogARB(count, bufsize, sources, types, ids, severities, lengths, messageLog);
}
PFNGLGETDEBUGMESSAGELOGARBPROC __glewGetDebugMessageLogARB = mockgl_GetDebugMessageLogARB;

void  mockgl_DrawBuffersARB(GLsizei n, const GLenum * bufs)
{
    return getGlMock()->gl_DrawBuffersARB(n, bufs);
}
PFNGLDRAWBUFFERSARBPROC __glewDrawBuffersARB = mockgl_DrawBuffersARB;

void  mockgl_BlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return getGlMock()->gl_BlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
}
PFNGLBLENDEQUATIONSEPARATEIARBPROC __glewBlendEquationSeparateiARB = mockgl_BlendEquationSeparateiARB;

void  mockgl_BlendEquationiARB(GLuint buf, GLenum mode)
{
    return getGlMock()->gl_BlendEquationiARB(buf, mode);
}
PFNGLBLENDEQUATIONIARBPROC __glewBlendEquationiARB = mockgl_BlendEquationiARB;

void  mockgl_BlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return getGlMock()->gl_BlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}
PFNGLBLENDFUNCSEPARATEIARBPROC __glewBlendFuncSeparateiARB = mockgl_BlendFuncSeparateiARB;

void  mockgl_BlendFunciARB(GLuint buf, GLenum src, GLenum dst)
{
    return getGlMock()->gl_BlendFunciARB(buf, src, dst);
}
PFNGLBLENDFUNCIARBPROC __glewBlendFunciARB = mockgl_BlendFunciARB;

void  mockgl_DrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, void * indices, GLint basevertex)
{
    return getGlMock()->gl_DrawElementsBaseVertex(mode, count, type, indices, basevertex);
}
PFNGLDRAWELEMENTSBASEVERTEXPROC __glewDrawElementsBaseVertex = mockgl_DrawElementsBaseVertex;

void  mockgl_DrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount, GLint basevertex)
{
    return getGlMock()->gl_DrawElementsInstancedBaseVertex(mode, count, type, indices, primcount, basevertex);
}
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC __glewDrawElementsInstancedBaseVertex = mockgl_DrawElementsInstancedBaseVertex;

void  mockgl_DrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, void * indices, GLint basevertex)
{
    return getGlMock()->gl_DrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}
PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC __glewDrawRangeElementsBaseVertex = mockgl_DrawRangeElementsBaseVertex;

void  mockgl_MultiDrawElementsBaseVertex(GLenum mode, GLsizei * count, GLenum type, GLvoid ** indices, GLsizei primcount, GLint * basevertex)
{
    return getGlMock()->gl_MultiDrawElementsBaseVertex(mode, count, type, indices, primcount, basevertex);
}
PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC __glewMultiDrawElementsBaseVertex = mockgl_MultiDrawElementsBaseVertex;

void  mockgl_DrawArraysIndirect(GLenum mode, const void * indirect)
{
    return getGlMock()->gl_DrawArraysIndirect(mode, indirect);
}
PFNGLDRAWARRAYSINDIRECTPROC __glewDrawArraysIndirect = mockgl_DrawArraysIndirect;

void  mockgl_DrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return getGlMock()->gl_DrawElementsIndirect(mode, type, indirect);
}
PFNGLDRAWELEMENTSINDIRECTPROC __glewDrawElementsIndirect = mockgl_DrawElementsIndirect;

void  mockgl_BindFramebuffer(GLenum target, GLuint framebuffer)
{
    return getGlMock()->gl_BindFramebuffer(target, framebuffer);
}
PFNGLBINDFRAMEBUFFERPROC __glewBindFramebuffer = mockgl_BindFramebuffer;

void  mockgl_BindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return getGlMock()->gl_BindRenderbuffer(target, renderbuffer);
}
PFNGLBINDRENDERBUFFERPROC __glewBindRenderbuffer = mockgl_BindRenderbuffer;

void  mockgl_BlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
    return getGlMock()->gl_BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}
PFNGLBLITFRAMEBUFFERPROC __glewBlitFramebuffer = mockgl_BlitFramebuffer;

unsigned int  mockgl_CheckFramebufferStatus(GLenum target)
{
    return getGlMock()->gl_CheckFramebufferStatus(target);
}
PFNGLCHECKFRAMEBUFFERSTATUSPROC __glewCheckFramebufferStatus = mockgl_CheckFramebufferStatus;

void  mockgl_DeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return getGlMock()->gl_DeleteFramebuffers(n, framebuffers);
}
PFNGLDELETEFRAMEBUFFERSPROC __glewDeleteFramebuffers = mockgl_DeleteFramebuffers;

void  mockgl_DeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return getGlMock()->gl_DeleteRenderbuffers(n, renderbuffers);
}
PFNGLDELETERENDERBUFFERSPROC __glewDeleteRenderbuffers = mockgl_DeleteRenderbuffers;

void  mockgl_FramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return getGlMock()->gl_FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}
PFNGLFRAMEBUFFERRENDERBUFFERPROC __glewFramebufferRenderbuffer = mockgl_FramebufferRenderbuffer;

void  mockgl_FramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return getGlMock()->gl_FramebufferTexture1D(target, attachment, textarget, texture, level);
}
PFNGLFRAMEBUFFERTEXTURE1DPROC __glewFramebufferTexture1D = mockgl_FramebufferTexture1D;

void  mockgl_FramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return getGlMock()->gl_FramebufferTexture2D(target, attachment, textarget, texture, level);
}
PFNGLFRAMEBUFFERTEXTURE2DPROC __glewFramebufferTexture2D = mockgl_FramebufferTexture2D;

void  mockgl_FramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint layer)
{
    return getGlMock()->gl_FramebufferTexture3D(target, attachment, textarget, texture, level, layer);
}
PFNGLFRAMEBUFFERTEXTURE3DPROC __glewFramebufferTexture3D = mockgl_FramebufferTexture3D;

void  mockgl_FramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return getGlMock()->gl_FramebufferTextureLayer(target, attachment, texture, level, layer);
}
PFNGLFRAMEBUFFERTEXTURELAYERPROC __glewFramebufferTextureLayer = mockgl_FramebufferTextureLayer;

void  mockgl_GenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return getGlMock()->gl_GenFramebuffers(n, framebuffers);
}
PFNGLGENFRAMEBUFFERSPROC __glewGenFramebuffers = mockgl_GenFramebuffers;

void  mockgl_GenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return getGlMock()->gl_GenRenderbuffers(n, renderbuffers);
}
PFNGLGENRENDERBUFFERSPROC __glewGenRenderbuffers = mockgl_GenRenderbuffers;

void  mockgl_GenerateMipmap(GLenum target)
{
    return getGlMock()->gl_GenerateMipmap(target);
}
PFNGLGENERATEMIPMAPPROC __glewGenerateMipmap = mockgl_GenerateMipmap;

void  mockgl_GetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC __glewGetFramebufferAttachmentParameteriv = mockgl_GetFramebufferAttachmentParameteriv;

void  mockgl_GetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetRenderbufferParameteriv(target, pname, params);
}
PFNGLGETRENDERBUFFERPARAMETERIVPROC __glewGetRenderbufferParameteriv = mockgl_GetRenderbufferParameteriv;

unsigned char  mockgl_IsFramebuffer(GLuint framebuffer)
{
    return getGlMock()->gl_IsFramebuffer(framebuffer);
}
PFNGLISFRAMEBUFFERPROC __glewIsFramebuffer = mockgl_IsFramebuffer;

unsigned char  mockgl_IsRenderbuffer(GLuint renderbuffer)
{
    return getGlMock()->gl_IsRenderbuffer(renderbuffer);
}
PFNGLISRENDERBUFFERPROC __glewIsRenderbuffer = mockgl_IsRenderbuffer;

void  mockgl_RenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_RenderbufferStorage(target, internalformat, width, height);
}
PFNGLRENDERBUFFERSTORAGEPROC __glewRenderbufferStorage = mockgl_RenderbufferStorage;

void  mockgl_RenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_RenderbufferStorageMultisample(target, samples, internalformat, width, height);
}
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC __glewRenderbufferStorageMultisample = mockgl_RenderbufferStorageMultisample;

void  mockgl_FramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return getGlMock()->gl_FramebufferTextureARB(target, attachment, texture, level);
}
PFNGLFRAMEBUFFERTEXTUREARBPROC __glewFramebufferTextureARB = mockgl_FramebufferTextureARB;

void  mockgl_FramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return getGlMock()->gl_FramebufferTextureFaceARB(target, attachment, texture, level, face);
}
PFNGLFRAMEBUFFERTEXTUREFACEARBPROC __glewFramebufferTextureFaceARB = mockgl_FramebufferTextureFaceARB;

void  mockgl_FramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return getGlMock()->gl_FramebufferTextureLayerARB(target, attachment, texture, level, layer);
}
PFNGLFRAMEBUFFERTEXTURELAYERARBPROC __glewFramebufferTextureLayerARB = mockgl_FramebufferTextureLayerARB;

void  mockgl_ProgramParameteriARB(GLuint program, GLenum pname, GLint value)
{
    return getGlMock()->gl_ProgramParameteriARB(program, pname, value);
}
PFNGLPROGRAMPARAMETERIARBPROC __glewProgramParameteriARB = mockgl_ProgramParameteriARB;

void  mockgl_GetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, GLvoid * binary)
{
    return getGlMock()->gl_GetProgramBinary(program, bufSize, length, binaryFormat, binary);
}
PFNGLGETPROGRAMBINARYPROC __glewGetProgramBinary = mockgl_GetProgramBinary;

void  mockgl_ProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return getGlMock()->gl_ProgramBinary(program, binaryFormat, binary, length);
}
PFNGLPROGRAMBINARYPROC __glewProgramBinary = mockgl_ProgramBinary;

void  mockgl_ProgramParameteri(GLuint program, GLenum pname, GLint value)
{
    return getGlMock()->gl_ProgramParameteri(program, pname, value);
}
PFNGLPROGRAMPARAMETERIPROC __glewProgramParameteri = mockgl_ProgramParameteri;

void  mockgl_GetUniformdv(GLuint program, GLint location, GLdouble * params)
{
    return getGlMock()->gl_GetUniformdv(program, location, params);
}
PFNGLGETUNIFORMDVPROC __glewGetUniformdv = mockgl_GetUniformdv;

void  mockgl_ProgramUniform1dEXT(GLuint program, GLint location, GLdouble x)
{
    return getGlMock()->gl_ProgramUniform1dEXT(program, location, x);
}
PFNGLPROGRAMUNIFORM1DEXTPROC __glewProgramUniform1dEXT = mockgl_ProgramUniform1dEXT;

void  mockgl_ProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniform1dvEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM1DVEXTPROC __glewProgramUniform1dvEXT = mockgl_ProgramUniform1dvEXT;

void  mockgl_ProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y)
{
    return getGlMock()->gl_ProgramUniform2dEXT(program, location, x, y);
}
PFNGLPROGRAMUNIFORM2DEXTPROC __glewProgramUniform2dEXT = mockgl_ProgramUniform2dEXT;

void  mockgl_ProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniform2dvEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM2DVEXTPROC __glewProgramUniform2dvEXT = mockgl_ProgramUniform2dvEXT;

void  mockgl_ProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_ProgramUniform3dEXT(program, location, x, y, z);
}
PFNGLPROGRAMUNIFORM3DEXTPROC __glewProgramUniform3dEXT = mockgl_ProgramUniform3dEXT;

void  mockgl_ProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniform3dvEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM3DVEXTPROC __glewProgramUniform3dvEXT = mockgl_ProgramUniform3dvEXT;

void  mockgl_ProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_ProgramUniform4dEXT(program, location, x, y, z, w);
}
PFNGLPROGRAMUNIFORM4DEXTPROC __glewProgramUniform4dEXT = mockgl_ProgramUniform4dEXT;

void  mockgl_ProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniform4dvEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM4DVEXTPROC __glewProgramUniform4dvEXT = mockgl_ProgramUniform4dvEXT;

void  mockgl_ProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix2dvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC __glewProgramUniformMatrix2dvEXT = mockgl_ProgramUniformMatrix2dvEXT;

void  mockgl_ProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix2x3dvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC __glewProgramUniformMatrix2x3dvEXT = mockgl_ProgramUniformMatrix2x3dvEXT;

void  mockgl_ProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix2x4dvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC __glewProgramUniformMatrix2x4dvEXT = mockgl_ProgramUniformMatrix2x4dvEXT;

void  mockgl_ProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix3dvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC __glewProgramUniformMatrix3dvEXT = mockgl_ProgramUniformMatrix3dvEXT;

void  mockgl_ProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix3x2dvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC __glewProgramUniformMatrix3x2dvEXT = mockgl_ProgramUniformMatrix3x2dvEXT;

void  mockgl_ProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix3x4dvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC __glewProgramUniformMatrix3x4dvEXT = mockgl_ProgramUniformMatrix3x4dvEXT;

void  mockgl_ProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix4dvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC __glewProgramUniformMatrix4dvEXT = mockgl_ProgramUniformMatrix4dvEXT;

void  mockgl_ProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix4x2dvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC __glewProgramUniformMatrix4x2dvEXT = mockgl_ProgramUniformMatrix4x2dvEXT;

void  mockgl_ProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix4x3dvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC __glewProgramUniformMatrix4x3dvEXT = mockgl_ProgramUniformMatrix4x3dvEXT;

void  mockgl_Uniform1d(GLint location, GLdouble x)
{
    return getGlMock()->gl_Uniform1d(location, x);
}
PFNGLUNIFORM1DPROC __glewUniform1d = mockgl_Uniform1d;

void  mockgl_Uniform1dv(GLint location, GLsizei count, const GLdouble * value)
{
    return getGlMock()->gl_Uniform1dv(location, count, value);
}
PFNGLUNIFORM1DVPROC __glewUniform1dv = mockgl_Uniform1dv;

void  mockgl_Uniform2d(GLint location, GLdouble x, GLdouble y)
{
    return getGlMock()->gl_Uniform2d(location, x, y);
}
PFNGLUNIFORM2DPROC __glewUniform2d = mockgl_Uniform2d;

void  mockgl_Uniform2dv(GLint location, GLsizei count, const GLdouble * value)
{
    return getGlMock()->gl_Uniform2dv(location, count, value);
}
PFNGLUNIFORM2DVPROC __glewUniform2dv = mockgl_Uniform2dv;

void  mockgl_Uniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_Uniform3d(location, x, y, z);
}
PFNGLUNIFORM3DPROC __glewUniform3d = mockgl_Uniform3d;

void  mockgl_Uniform3dv(GLint location, GLsizei count, const GLdouble * value)
{
    return getGlMock()->gl_Uniform3dv(location, count, value);
}
PFNGLUNIFORM3DVPROC __glewUniform3dv = mockgl_Uniform3dv;

void  mockgl_Uniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_Uniform4d(location, x, y, z, w);
}
PFNGLUNIFORM4DPROC __glewUniform4d = mockgl_Uniform4d;

void  mockgl_Uniform4dv(GLint location, GLsizei count, const GLdouble * value)
{
    return getGlMock()->gl_Uniform4dv(location, count, value);
}
PFNGLUNIFORM4DVPROC __glewUniform4dv = mockgl_Uniform4dv;

void  mockgl_UniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_UniformMatrix2dv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX2DVPROC __glewUniformMatrix2dv = mockgl_UniformMatrix2dv;

void  mockgl_UniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_UniformMatrix2x3dv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX2X3DVPROC __glewUniformMatrix2x3dv = mockgl_UniformMatrix2x3dv;

void  mockgl_UniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_UniformMatrix2x4dv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX2X4DVPROC __glewUniformMatrix2x4dv = mockgl_UniformMatrix2x4dv;

void  mockgl_UniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_UniformMatrix3dv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX3DVPROC __glewUniformMatrix3dv = mockgl_UniformMatrix3dv;

void  mockgl_UniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_UniformMatrix3x2dv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX3X2DVPROC __glewUniformMatrix3x2dv = mockgl_UniformMatrix3x2dv;

void  mockgl_UniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_UniformMatrix3x4dv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX3X4DVPROC __glewUniformMatrix3x4dv = mockgl_UniformMatrix3x4dv;

void  mockgl_UniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_UniformMatrix4dv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX4DVPROC __glewUniformMatrix4dv = mockgl_UniformMatrix4dv;

void  mockgl_UniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_UniformMatrix4x2dv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX4X2DVPROC __glewUniformMatrix4x2dv = mockgl_UniformMatrix4x2dv;

void  mockgl_UniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_UniformMatrix4x3dv(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX4X3DVPROC __glewUniformMatrix4x3dv = mockgl_UniformMatrix4x3dv;

void  mockgl_ColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid * data)
{
    return getGlMock()->gl_ColorSubTable(target, start, count, format, type, data);
}
PFNGLCOLORSUBTABLEPROC __glewColorSubTable = mockgl_ColorSubTable;

void  mockgl_ColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * table)
{
    return getGlMock()->gl_ColorTable(target, internalformat, width, format, type, table);
}
PFNGLCOLORTABLEPROC __glewColorTable = mockgl_ColorTable;

void  mockgl_ColorTableParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_ColorTableParameterfv(target, pname, params);
}
PFNGLCOLORTABLEPARAMETERFVPROC __glewColorTableParameterfv = mockgl_ColorTableParameterfv;

void  mockgl_ColorTableParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_ColorTableParameteriv(target, pname, params);
}
PFNGLCOLORTABLEPARAMETERIVPROC __glewColorTableParameteriv = mockgl_ColorTableParameteriv;

void  mockgl_ConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * image)
{
    return getGlMock()->gl_ConvolutionFilter1D(target, internalformat, width, format, type, image);
}
PFNGLCONVOLUTIONFILTER1DPROC __glewConvolutionFilter1D = mockgl_ConvolutionFilter1D;

void  mockgl_ConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * image)
{
    return getGlMock()->gl_ConvolutionFilter2D(target, internalformat, width, height, format, type, image);
}
PFNGLCONVOLUTIONFILTER2DPROC __glewConvolutionFilter2D = mockgl_ConvolutionFilter2D;

void  mockgl_ConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
{
    return getGlMock()->gl_ConvolutionParameterf(target, pname, params);
}
PFNGLCONVOLUTIONPARAMETERFPROC __glewConvolutionParameterf = mockgl_ConvolutionParameterf;

void  mockgl_ConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_ConvolutionParameterfv(target, pname, params);
}
PFNGLCONVOLUTIONPARAMETERFVPROC __glewConvolutionParameterfv = mockgl_ConvolutionParameterfv;

void  mockgl_ConvolutionParameteri(GLenum target, GLenum pname, GLint params)
{
    return getGlMock()->gl_ConvolutionParameteri(target, pname, params);
}
PFNGLCONVOLUTIONPARAMETERIPROC __glewConvolutionParameteri = mockgl_ConvolutionParameteri;

void  mockgl_ConvolutionParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_ConvolutionParameteriv(target, pname, params);
}
PFNGLCONVOLUTIONPARAMETERIVPROC __glewConvolutionParameteriv = mockgl_ConvolutionParameteriv;

void  mockgl_CopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return getGlMock()->gl_CopyColorSubTable(target, start, x, y, width);
}
PFNGLCOPYCOLORSUBTABLEPROC __glewCopyColorSubTable = mockgl_CopyColorSubTable;

void  mockgl_CopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return getGlMock()->gl_CopyColorTable(target, internalformat, x, y, width);
}
PFNGLCOPYCOLORTABLEPROC __glewCopyColorTable = mockgl_CopyColorTable;

void  mockgl_CopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return getGlMock()->gl_CopyConvolutionFilter1D(target, internalformat, x, y, width);
}
PFNGLCOPYCONVOLUTIONFILTER1DPROC __glewCopyConvolutionFilter1D = mockgl_CopyConvolutionFilter1D;

void  mockgl_CopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_CopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}
PFNGLCOPYCONVOLUTIONFILTER2DPROC __glewCopyConvolutionFilter2D = mockgl_CopyConvolutionFilter2D;

void  mockgl_GetColorTable(GLenum target, GLenum format, GLenum type, GLvoid * table)
{
    return getGlMock()->gl_GetColorTable(target, format, type, table);
}
PFNGLGETCOLORTABLEPROC __glewGetColorTable = mockgl_GetColorTable;

void  mockgl_GetColorTableParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetColorTableParameterfv(target, pname, params);
}
PFNGLGETCOLORTABLEPARAMETERFVPROC __glewGetColorTableParameterfv = mockgl_GetColorTableParameterfv;

void  mockgl_GetColorTableParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetColorTableParameteriv(target, pname, params);
}
PFNGLGETCOLORTABLEPARAMETERIVPROC __glewGetColorTableParameteriv = mockgl_GetColorTableParameteriv;

void  mockgl_GetConvolutionFilter(GLenum target, GLenum format, GLenum type, GLvoid * image)
{
    return getGlMock()->gl_GetConvolutionFilter(target, format, type, image);
}
PFNGLGETCONVOLUTIONFILTERPROC __glewGetConvolutionFilter = mockgl_GetConvolutionFilter;

void  mockgl_GetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetConvolutionParameterfv(target, pname, params);
}
PFNGLGETCONVOLUTIONPARAMETERFVPROC __glewGetConvolutionParameterfv = mockgl_GetConvolutionParameterfv;

void  mockgl_GetConvolutionParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetConvolutionParameteriv(target, pname, params);
}
PFNGLGETCONVOLUTIONPARAMETERIVPROC __glewGetConvolutionParameteriv = mockgl_GetConvolutionParameteriv;

void  mockgl_GetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values)
{
    return getGlMock()->gl_GetHistogram(target, reset, format, type, values);
}
PFNGLGETHISTOGRAMPROC __glewGetHistogram = mockgl_GetHistogram;

void  mockgl_GetHistogramParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetHistogramParameterfv(target, pname, params);
}
PFNGLGETHISTOGRAMPARAMETERFVPROC __glewGetHistogramParameterfv = mockgl_GetHistogramParameterfv;

void  mockgl_GetHistogramParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetHistogramParameteriv(target, pname, params);
}
PFNGLGETHISTOGRAMPARAMETERIVPROC __glewGetHistogramParameteriv = mockgl_GetHistogramParameteriv;

void  mockgl_GetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum types, GLvoid * values)
{
    return getGlMock()->gl_GetMinmax(target, reset, format, types, values);
}
PFNGLGETMINMAXPROC __glewGetMinmax = mockgl_GetMinmax;

void  mockgl_GetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetMinmaxParameterfv(target, pname, params);
}
PFNGLGETMINMAXPARAMETERFVPROC __glewGetMinmaxParameterfv = mockgl_GetMinmaxParameterfv;

void  mockgl_GetMinmaxParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetMinmaxParameteriv(target, pname, params);
}
PFNGLGETMINMAXPARAMETERIVPROC __glewGetMinmaxParameteriv = mockgl_GetMinmaxParameteriv;

void  mockgl_GetSeparableFilter(GLenum target, GLenum format, GLenum type, GLvoid * row, GLvoid * column, GLvoid * span)
{
    return getGlMock()->gl_GetSeparableFilter(target, format, type, row, column, span);
}
PFNGLGETSEPARABLEFILTERPROC __glewGetSeparableFilter = mockgl_GetSeparableFilter;

void  mockgl_Histogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return getGlMock()->gl_Histogram(target, width, internalformat, sink);
}
PFNGLHISTOGRAMPROC __glewHistogram = mockgl_Histogram;

void  mockgl_Minmax(GLenum target, GLenum internalformat, GLboolean sink)
{
    return getGlMock()->gl_Minmax(target, internalformat, sink);
}
PFNGLMINMAXPROC __glewMinmax = mockgl_Minmax;

void  mockgl_ResetHistogram(GLenum target)
{
    return getGlMock()->gl_ResetHistogram(target);
}
PFNGLRESETHISTOGRAMPROC __glewResetHistogram = mockgl_ResetHistogram;

void  mockgl_ResetMinmax(GLenum target)
{
    return getGlMock()->gl_ResetMinmax(target);
}
PFNGLRESETMINMAXPROC __glewResetMinmax = mockgl_ResetMinmax;

void  mockgl_SeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * row, const GLvoid * column)
{
    return getGlMock()->gl_SeparableFilter2D(target, internalformat, width, height, format, type, row, column);
}
PFNGLSEPARABLEFILTER2DPROC __glewSeparableFilter2D = mockgl_SeparableFilter2D;

void  mockgl_DrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return getGlMock()->gl_DrawArraysInstancedARB(mode, first, count, primcount);
}
PFNGLDRAWARRAYSINSTANCEDARBPROC __glewDrawArraysInstancedARB = mockgl_DrawArraysInstancedARB;

void  mockgl_DrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return getGlMock()->gl_DrawElementsInstancedARB(mode, count, type, indices, primcount);
}
PFNGLDRAWELEMENTSINSTANCEDARBPROC __glewDrawElementsInstancedARB = mockgl_DrawElementsInstancedARB;

void  mockgl_VertexAttribDivisorARB(GLuint index, GLuint divisor)
{
    return getGlMock()->gl_VertexAttribDivisorARB(index, divisor);
}
PFNGLVERTEXATTRIBDIVISORARBPROC __glewVertexAttribDivisorARB = mockgl_VertexAttribDivisorARB;

void  mockgl_FlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return getGlMock()->gl_FlushMappedBufferRange(target, offset, length);
}
PFNGLFLUSHMAPPEDBUFFERRANGEPROC __glewFlushMappedBufferRange = mockgl_FlushMappedBufferRange;

void * mockgl_MapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
    return getGlMock()->gl_MapBufferRange(target, offset, length, access);
}
PFNGLMAPBUFFERRANGEPROC __glewMapBufferRange = mockgl_MapBufferRange;

void  mockgl_CurrentPaletteMatrixARB(GLint index)
{
    return getGlMock()->gl_CurrentPaletteMatrixARB(index);
}
PFNGLCURRENTPALETTEMATRIXARBPROC __glewCurrentPaletteMatrixARB = mockgl_CurrentPaletteMatrixARB;

void  mockgl_MatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, GLvoid * pointer)
{
    return getGlMock()->gl_MatrixIndexPointerARB(size, type, stride, pointer);
}
PFNGLMATRIXINDEXPOINTERARBPROC __glewMatrixIndexPointerARB = mockgl_MatrixIndexPointerARB;

void  mockgl_MatrixIndexubvARB(GLint size, GLubyte * indices)
{
    return getGlMock()->gl_MatrixIndexubvARB(size, indices);
}
PFNGLMATRIXINDEXUBVARBPROC __glewMatrixIndexubvARB = mockgl_MatrixIndexubvARB;

void  mockgl_MatrixIndexuivARB(GLint size, GLuint * indices)
{
    return getGlMock()->gl_MatrixIndexuivARB(size, indices);
}
PFNGLMATRIXINDEXUIVARBPROC __glewMatrixIndexuivARB = mockgl_MatrixIndexuivARB;

void  mockgl_MatrixIndexusvARB(GLint size, GLushort * indices)
{
    return getGlMock()->gl_MatrixIndexusvARB(size, indices);
}
PFNGLMATRIXINDEXUSVARBPROC __glewMatrixIndexusvARB = mockgl_MatrixIndexusvARB;

void  mockgl_SampleCoverageARB(GLclampf value, GLboolean invert)
{
    return getGlMock()->gl_SampleCoverageARB(value, invert);
}
PFNGLSAMPLECOVERAGEARBPROC __glewSampleCoverageARB = mockgl_SampleCoverageARB;

void  mockgl_ActiveTextureARB(GLenum texture)
{
    return getGlMock()->gl_ActiveTextureARB(texture);
}
PFNGLACTIVETEXTUREARBPROC __glewActiveTextureARB = mockgl_ActiveTextureARB;

void  mockgl_ClientActiveTextureARB(GLenum texture)
{
    return getGlMock()->gl_ClientActiveTextureARB(texture);
}
PFNGLCLIENTACTIVETEXTUREARBPROC __glewClientActiveTextureARB = mockgl_ClientActiveTextureARB;

void  mockgl_MultiTexCoord1dARB(GLenum target, GLdouble s)
{
    return getGlMock()->gl_MultiTexCoord1dARB(target, s);
}
PFNGLMULTITEXCOORD1DARBPROC __glewMultiTexCoord1dARB = mockgl_MultiTexCoord1dARB;

void  mockgl_MultiTexCoord1dvARB(GLenum target, const GLdouble * v)
{
    return getGlMock()->gl_MultiTexCoord1dvARB(target, v);
}
PFNGLMULTITEXCOORD1DVARBPROC __glewMultiTexCoord1dvARB = mockgl_MultiTexCoord1dvARB;

void  mockgl_MultiTexCoord1fARB(GLenum target, GLfloat s)
{
    return getGlMock()->gl_MultiTexCoord1fARB(target, s);
}
PFNGLMULTITEXCOORD1FARBPROC __glewMultiTexCoord1fARB = mockgl_MultiTexCoord1fARB;

void  mockgl_MultiTexCoord1fvARB(GLenum target, const GLfloat * v)
{
    return getGlMock()->gl_MultiTexCoord1fvARB(target, v);
}
PFNGLMULTITEXCOORD1FVARBPROC __glewMultiTexCoord1fvARB = mockgl_MultiTexCoord1fvARB;

void  mockgl_MultiTexCoord1iARB(GLenum target, GLint s)
{
    return getGlMock()->gl_MultiTexCoord1iARB(target, s);
}
PFNGLMULTITEXCOORD1IARBPROC __glewMultiTexCoord1iARB = mockgl_MultiTexCoord1iARB;

void  mockgl_MultiTexCoord1ivARB(GLenum target, const GLint * v)
{
    return getGlMock()->gl_MultiTexCoord1ivARB(target, v);
}
PFNGLMULTITEXCOORD1IVARBPROC __glewMultiTexCoord1ivARB = mockgl_MultiTexCoord1ivARB;

void  mockgl_MultiTexCoord1sARB(GLenum target, GLshort s)
{
    return getGlMock()->gl_MultiTexCoord1sARB(target, s);
}
PFNGLMULTITEXCOORD1SARBPROC __glewMultiTexCoord1sARB = mockgl_MultiTexCoord1sARB;

void  mockgl_MultiTexCoord1svARB(GLenum target, const GLshort * v)
{
    return getGlMock()->gl_MultiTexCoord1svARB(target, v);
}
PFNGLMULTITEXCOORD1SVARBPROC __glewMultiTexCoord1svARB = mockgl_MultiTexCoord1svARB;

void  mockgl_MultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
{
    return getGlMock()->gl_MultiTexCoord2dARB(target, s, t);
}
PFNGLMULTITEXCOORD2DARBPROC __glewMultiTexCoord2dARB = mockgl_MultiTexCoord2dARB;

void  mockgl_MultiTexCoord2dvARB(GLenum target, const GLdouble * v)
{
    return getGlMock()->gl_MultiTexCoord2dvARB(target, v);
}
PFNGLMULTITEXCOORD2DVARBPROC __glewMultiTexCoord2dvARB = mockgl_MultiTexCoord2dvARB;

void  mockgl_MultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
    return getGlMock()->gl_MultiTexCoord2fARB(target, s, t);
}
PFNGLMULTITEXCOORD2FARBPROC __glewMultiTexCoord2fARB = mockgl_MultiTexCoord2fARB;

void  mockgl_MultiTexCoord2fvARB(GLenum target, const GLfloat * v)
{
    return getGlMock()->gl_MultiTexCoord2fvARB(target, v);
}
PFNGLMULTITEXCOORD2FVARBPROC __glewMultiTexCoord2fvARB = mockgl_MultiTexCoord2fvARB;

void  mockgl_MultiTexCoord2iARB(GLenum target, GLint s, GLint t)
{
    return getGlMock()->gl_MultiTexCoord2iARB(target, s, t);
}
PFNGLMULTITEXCOORD2IARBPROC __glewMultiTexCoord2iARB = mockgl_MultiTexCoord2iARB;

void  mockgl_MultiTexCoord2ivARB(GLenum target, const GLint * v)
{
    return getGlMock()->gl_MultiTexCoord2ivARB(target, v);
}
PFNGLMULTITEXCOORD2IVARBPROC __glewMultiTexCoord2ivARB = mockgl_MultiTexCoord2ivARB;

void  mockgl_MultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
{
    return getGlMock()->gl_MultiTexCoord2sARB(target, s, t);
}
PFNGLMULTITEXCOORD2SARBPROC __glewMultiTexCoord2sARB = mockgl_MultiTexCoord2sARB;

void  mockgl_MultiTexCoord2svARB(GLenum target, const GLshort * v)
{
    return getGlMock()->gl_MultiTexCoord2svARB(target, v);
}
PFNGLMULTITEXCOORD2SVARBPROC __glewMultiTexCoord2svARB = mockgl_MultiTexCoord2svARB;

void  mockgl_MultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return getGlMock()->gl_MultiTexCoord3dARB(target, s, t, r);
}
PFNGLMULTITEXCOORD3DARBPROC __glewMultiTexCoord3dARB = mockgl_MultiTexCoord3dARB;

void  mockgl_MultiTexCoord3dvARB(GLenum target, const GLdouble * v)
{
    return getGlMock()->gl_MultiTexCoord3dvARB(target, v);
}
PFNGLMULTITEXCOORD3DVARBPROC __glewMultiTexCoord3dvARB = mockgl_MultiTexCoord3dvARB;

void  mockgl_MultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return getGlMock()->gl_MultiTexCoord3fARB(target, s, t, r);
}
PFNGLMULTITEXCOORD3FARBPROC __glewMultiTexCoord3fARB = mockgl_MultiTexCoord3fARB;

void  mockgl_MultiTexCoord3fvARB(GLenum target, const GLfloat * v)
{
    return getGlMock()->gl_MultiTexCoord3fvARB(target, v);
}
PFNGLMULTITEXCOORD3FVARBPROC __glewMultiTexCoord3fvARB = mockgl_MultiTexCoord3fvARB;

void  mockgl_MultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
{
    return getGlMock()->gl_MultiTexCoord3iARB(target, s, t, r);
}
PFNGLMULTITEXCOORD3IARBPROC __glewMultiTexCoord3iARB = mockgl_MultiTexCoord3iARB;

void  mockgl_MultiTexCoord3ivARB(GLenum target, const GLint * v)
{
    return getGlMock()->gl_MultiTexCoord3ivARB(target, v);
}
PFNGLMULTITEXCOORD3IVARBPROC __glewMultiTexCoord3ivARB = mockgl_MultiTexCoord3ivARB;

void  mockgl_MultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return getGlMock()->gl_MultiTexCoord3sARB(target, s, t, r);
}
PFNGLMULTITEXCOORD3SARBPROC __glewMultiTexCoord3sARB = mockgl_MultiTexCoord3sARB;

void  mockgl_MultiTexCoord3svARB(GLenum target, const GLshort * v)
{
    return getGlMock()->gl_MultiTexCoord3svARB(target, v);
}
PFNGLMULTITEXCOORD3SVARBPROC __glewMultiTexCoord3svARB = mockgl_MultiTexCoord3svARB;

void  mockgl_MultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return getGlMock()->gl_MultiTexCoord4dARB(target, s, t, r, q);
}
PFNGLMULTITEXCOORD4DARBPROC __glewMultiTexCoord4dARB = mockgl_MultiTexCoord4dARB;

void  mockgl_MultiTexCoord4dvARB(GLenum target, const GLdouble * v)
{
    return getGlMock()->gl_MultiTexCoord4dvARB(target, v);
}
PFNGLMULTITEXCOORD4DVARBPROC __glewMultiTexCoord4dvARB = mockgl_MultiTexCoord4dvARB;

void  mockgl_MultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return getGlMock()->gl_MultiTexCoord4fARB(target, s, t, r, q);
}
PFNGLMULTITEXCOORD4FARBPROC __glewMultiTexCoord4fARB = mockgl_MultiTexCoord4fARB;

void  mockgl_MultiTexCoord4fvARB(GLenum target, const GLfloat * v)
{
    return getGlMock()->gl_MultiTexCoord4fvARB(target, v);
}
PFNGLMULTITEXCOORD4FVARBPROC __glewMultiTexCoord4fvARB = mockgl_MultiTexCoord4fvARB;

void  mockgl_MultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return getGlMock()->gl_MultiTexCoord4iARB(target, s, t, r, q);
}
PFNGLMULTITEXCOORD4IARBPROC __glewMultiTexCoord4iARB = mockgl_MultiTexCoord4iARB;

void  mockgl_MultiTexCoord4ivARB(GLenum target, const GLint * v)
{
    return getGlMock()->gl_MultiTexCoord4ivARB(target, v);
}
PFNGLMULTITEXCOORD4IVARBPROC __glewMultiTexCoord4ivARB = mockgl_MultiTexCoord4ivARB;

void  mockgl_MultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return getGlMock()->gl_MultiTexCoord4sARB(target, s, t, r, q);
}
PFNGLMULTITEXCOORD4SARBPROC __glewMultiTexCoord4sARB = mockgl_MultiTexCoord4sARB;

void  mockgl_MultiTexCoord4svARB(GLenum target, const GLshort * v)
{
    return getGlMock()->gl_MultiTexCoord4svARB(target, v);
}
PFNGLMULTITEXCOORD4SVARBPROC __glewMultiTexCoord4svARB = mockgl_MultiTexCoord4svARB;

void  mockgl_BeginQueryARB(GLenum target, GLuint id)
{
    return getGlMock()->gl_BeginQueryARB(target, id);
}
PFNGLBEGINQUERYARBPROC __glewBeginQueryARB = mockgl_BeginQueryARB;

void  mockgl_DeleteQueriesARB(GLsizei n, const GLuint * ids)
{
    return getGlMock()->gl_DeleteQueriesARB(n, ids);
}
PFNGLDELETEQUERIESARBPROC __glewDeleteQueriesARB = mockgl_DeleteQueriesARB;

void  mockgl_EndQueryARB(GLenum target)
{
    return getGlMock()->gl_EndQueryARB(target);
}
PFNGLENDQUERYARBPROC __glewEndQueryARB = mockgl_EndQueryARB;

void  mockgl_GenQueriesARB(GLsizei n, GLuint * ids)
{
    return getGlMock()->gl_GenQueriesARB(n, ids);
}
PFNGLGENQUERIESARBPROC __glewGenQueriesARB = mockgl_GenQueriesARB;

void  mockgl_GetQueryObjectivARB(GLuint id, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetQueryObjectivARB(id, pname, params);
}
PFNGLGETQUERYOBJECTIVARBPROC __glewGetQueryObjectivARB = mockgl_GetQueryObjectivARB;

void  mockgl_GetQueryObjectuivARB(GLuint id, GLenum pname, GLuint * params)
{
    return getGlMock()->gl_GetQueryObjectuivARB(id, pname, params);
}
PFNGLGETQUERYOBJECTUIVARBPROC __glewGetQueryObjectuivARB = mockgl_GetQueryObjectuivARB;

void  mockgl_GetQueryivARB(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetQueryivARB(target, pname, params);
}
PFNGLGETQUERYIVARBPROC __glewGetQueryivARB = mockgl_GetQueryivARB;

unsigned char  mockgl_IsQueryARB(GLuint id)
{
    return getGlMock()->gl_IsQueryARB(id);
}
PFNGLISQUERYARBPROC __glewIsQueryARB = mockgl_IsQueryARB;

void  mockgl_PointParameterfARB(GLenum pname, GLfloat param)
{
    return getGlMock()->gl_PointParameterfARB(pname, param);
}
PFNGLPOINTPARAMETERFARBPROC __glewPointParameterfARB = mockgl_PointParameterfARB;

void  mockgl_PointParameterfvARB(GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_PointParameterfvARB(pname, params);
}
PFNGLPOINTPARAMETERFVARBPROC __glewPointParameterfvARB = mockgl_PointParameterfvARB;

void  mockgl_ProvokingVertex(GLenum mode)
{
    return getGlMock()->gl_ProvokingVertex(mode);
}
PFNGLPROVOKINGVERTEXPROC __glewProvokingVertex = mockgl_ProvokingVertex;

void  mockgl_GetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return getGlMock()->gl_GetnColorTableARB(target, format, type, bufSize, table);
}
PFNGLGETNCOLORTABLEARBPROC __glewGetnColorTableARB = mockgl_GetnColorTableARB;

void  mockgl_GetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void * img)
{
    return getGlMock()->gl_GetnCompressedTexImageARB(target, lod, bufSize, img);
}
PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC __glewGetnCompressedTexImageARB = mockgl_GetnCompressedTexImageARB;

void  mockgl_GetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return getGlMock()->gl_GetnConvolutionFilterARB(target, format, type, bufSize, image);
}
PFNGLGETNCONVOLUTIONFILTERARBPROC __glewGetnConvolutionFilterARB = mockgl_GetnConvolutionFilterARB;

void  mockgl_GetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return getGlMock()->gl_GetnHistogramARB(target, reset, format, type, bufSize, values);
}
PFNGLGETNHISTOGRAMARBPROC __glewGetnHistogramARB = mockgl_GetnHistogramARB;

void  mockgl_GetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return getGlMock()->gl_GetnMapdvARB(target, query, bufSize, v);
}
PFNGLGETNMAPDVARBPROC __glewGetnMapdvARB = mockgl_GetnMapdvARB;

void  mockgl_GetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return getGlMock()->gl_GetnMapfvARB(target, query, bufSize, v);
}
PFNGLGETNMAPFVARBPROC __glewGetnMapfvARB = mockgl_GetnMapfvARB;

void  mockgl_GetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return getGlMock()->gl_GetnMapivARB(target, query, bufSize, v);
}
PFNGLGETNMAPIVARBPROC __glewGetnMapivARB = mockgl_GetnMapivARB;

void  mockgl_GetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return getGlMock()->gl_GetnMinmaxARB(target, reset, format, type, bufSize, values);
}
PFNGLGETNMINMAXARBPROC __glewGetnMinmaxARB = mockgl_GetnMinmaxARB;

void  mockgl_GetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return getGlMock()->gl_GetnPixelMapfvARB(map, bufSize, values);
}
PFNGLGETNPIXELMAPFVARBPROC __glewGetnPixelMapfvARB = mockgl_GetnPixelMapfvARB;

void  mockgl_GetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint * values)
{
    return getGlMock()->gl_GetnPixelMapuivARB(map, bufSize, values);
}
PFNGLGETNPIXELMAPUIVARBPROC __glewGetnPixelMapuivARB = mockgl_GetnPixelMapuivARB;

void  mockgl_GetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort * values)
{
    return getGlMock()->gl_GetnPixelMapusvARB(map, bufSize, values);
}
PFNGLGETNPIXELMAPUSVARBPROC __glewGetnPixelMapusvARB = mockgl_GetnPixelMapusvARB;

void  mockgl_GetnPolygonStippleARB(GLsizei bufSize, GLubyte * pattern)
{
    return getGlMock()->gl_GetnPolygonStippleARB(bufSize, pattern);
}
PFNGLGETNPOLYGONSTIPPLEARBPROC __glewGetnPolygonStippleARB = mockgl_GetnPolygonStippleARB;

void  mockgl_GetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, GLvoid * column, GLvoid * span)
{
    return getGlMock()->gl_GetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);
}
PFNGLGETNSEPARABLEFILTERARBPROC __glewGetnSeparableFilterARB = mockgl_GetnSeparableFilterARB;

void  mockgl_GetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img)
{
    return getGlMock()->gl_GetnTexImageARB(target, level, format, type, bufSize, img);
}
PFNGLGETNTEXIMAGEARBPROC __glewGetnTexImageARB = mockgl_GetnTexImageARB;

void  mockgl_GetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return getGlMock()->gl_GetnUniformdvARB(program, location, bufSize, params);
}
PFNGLGETNUNIFORMDVARBPROC __glewGetnUniformdvARB = mockgl_GetnUniformdvARB;

void  mockgl_GetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return getGlMock()->gl_GetnUniformfvARB(program, location, bufSize, params);
}
PFNGLGETNUNIFORMFVARBPROC __glewGetnUniformfvARB = mockgl_GetnUniformfvARB;

void  mockgl_GetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return getGlMock()->gl_GetnUniformivARB(program, location, bufSize, params);
}
PFNGLGETNUNIFORMIVARBPROC __glewGetnUniformivARB = mockgl_GetnUniformivARB;

void  mockgl_GetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return getGlMock()->gl_GetnUniformuivARB(program, location, bufSize, params);
}
PFNGLGETNUNIFORMUIVARBPROC __glewGetnUniformuivARB = mockgl_GetnUniformuivARB;

void  mockgl_ReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return getGlMock()->gl_ReadnPixelsARB(x, y, width, height, format, type, bufSize, data);
}
PFNGLREADNPIXELSARBPROC __glewReadnPixelsARB = mockgl_ReadnPixelsARB;

void  mockgl_MinSampleShadingARB(GLclampf value)
{
    return getGlMock()->gl_MinSampleShadingARB(value);
}
PFNGLMINSAMPLESHADINGARBPROC __glewMinSampleShadingARB = mockgl_MinSampleShadingARB;

void  mockgl_BindSampler(GLuint unit, GLuint sampler)
{
    return getGlMock()->gl_BindSampler(unit, sampler);
}
PFNGLBINDSAMPLERPROC __glewBindSampler = mockgl_BindSampler;

void  mockgl_DeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return getGlMock()->gl_DeleteSamplers(count, samplers);
}
PFNGLDELETESAMPLERSPROC __glewDeleteSamplers = mockgl_DeleteSamplers;

void  mockgl_GenSamplers(GLsizei count, GLuint * samplers)
{
    return getGlMock()->gl_GenSamplers(count, samplers);
}
PFNGLGENSAMPLERSPROC __glewGenSamplers = mockgl_GenSamplers;

void  mockgl_GetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetSamplerParameterIiv(sampler, pname, params);
}
PFNGLGETSAMPLERPARAMETERIIVPROC __glewGetSamplerParameterIiv = mockgl_GetSamplerParameterIiv;

void  mockgl_GetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
    return getGlMock()->gl_GetSamplerParameterIuiv(sampler, pname, params);
}
PFNGLGETSAMPLERPARAMETERIUIVPROC __glewGetSamplerParameterIuiv = mockgl_GetSamplerParameterIuiv;

void  mockgl_GetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetSamplerParameterfv(sampler, pname, params);
}
PFNGLGETSAMPLERPARAMETERFVPROC __glewGetSamplerParameterfv = mockgl_GetSamplerParameterfv;

void  mockgl_GetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetSamplerParameteriv(sampler, pname, params);
}
PFNGLGETSAMPLERPARAMETERIVPROC __glewGetSamplerParameteriv = mockgl_GetSamplerParameteriv;

unsigned char  mockgl_IsSampler(GLuint sampler)
{
    return getGlMock()->gl_IsSampler(sampler);
}
PFNGLISSAMPLERPROC __glewIsSampler = mockgl_IsSampler;

void  mockgl_SamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_SamplerParameterIiv(sampler, pname, params);
}
PFNGLSAMPLERPARAMETERIIVPROC __glewSamplerParameterIiv = mockgl_SamplerParameterIiv;

void  mockgl_SamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * params)
{
    return getGlMock()->gl_SamplerParameterIuiv(sampler, pname, params);
}
PFNGLSAMPLERPARAMETERIUIVPROC __glewSamplerParameterIuiv = mockgl_SamplerParameterIuiv;

void  mockgl_SamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return getGlMock()->gl_SamplerParameterf(sampler, pname, param);
}
PFNGLSAMPLERPARAMETERFPROC __glewSamplerParameterf = mockgl_SamplerParameterf;

void  mockgl_SamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_SamplerParameterfv(sampler, pname, params);
}
PFNGLSAMPLERPARAMETERFVPROC __glewSamplerParameterfv = mockgl_SamplerParameterfv;

void  mockgl_SamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return getGlMock()->gl_SamplerParameteri(sampler, pname, param);
}
PFNGLSAMPLERPARAMETERIPROC __glewSamplerParameteri = mockgl_SamplerParameteri;

void  mockgl_SamplerParameteriv(GLuint sampler, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_SamplerParameteriv(sampler, pname, params);
}
PFNGLSAMPLERPARAMETERIVPROC __glewSamplerParameteriv = mockgl_SamplerParameteriv;

void  mockgl_ActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return getGlMock()->gl_ActiveShaderProgram(pipeline, program);
}
PFNGLACTIVESHADERPROGRAMPROC __glewActiveShaderProgram = mockgl_ActiveShaderProgram;

void  mockgl_BindProgramPipeline(GLuint pipeline)
{
    return getGlMock()->gl_BindProgramPipeline(pipeline);
}
PFNGLBINDPROGRAMPIPELINEPROC __glewBindProgramPipeline = mockgl_BindProgramPipeline;

unsigned int  mockgl_CreateShaderProgramv(GLenum type, GLsizei count, const char ** strings)
{
    return getGlMock()->gl_CreateShaderProgramv(type, count, strings);
}
PFNGLCREATESHADERPROGRAMVPROC __glewCreateShaderProgramv = mockgl_CreateShaderProgramv;

void  mockgl_DeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return getGlMock()->gl_DeleteProgramPipelines(n, pipelines);
}
PFNGLDELETEPROGRAMPIPELINESPROC __glewDeleteProgramPipelines = mockgl_DeleteProgramPipelines;

void  mockgl_GenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return getGlMock()->gl_GenProgramPipelines(n, pipelines);
}
PFNGLGENPROGRAMPIPELINESPROC __glewGenProgramPipelines = mockgl_GenProgramPipelines;

void  mockgl_GetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, char * infoLog)
{
    return getGlMock()->gl_GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}
PFNGLGETPROGRAMPIPELINEINFOLOGPROC __glewGetProgramPipelineInfoLog = mockgl_GetProgramPipelineInfoLog;

void  mockgl_GetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetProgramPipelineiv(pipeline, pname, params);
}
PFNGLGETPROGRAMPIPELINEIVPROC __glewGetProgramPipelineiv = mockgl_GetProgramPipelineiv;

unsigned char  mockgl_IsProgramPipeline(GLuint pipeline)
{
    return getGlMock()->gl_IsProgramPipeline(pipeline);
}
PFNGLISPROGRAMPIPELINEPROC __glewIsProgramPipeline = mockgl_IsProgramPipeline;

void  mockgl_ProgramUniform1d(GLuint program, GLint location, GLdouble x)
{
    return getGlMock()->gl_ProgramUniform1d(program, location, x);
}
PFNGLPROGRAMUNIFORM1DPROC __glewProgramUniform1d = mockgl_ProgramUniform1d;

void  mockgl_ProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniform1dv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM1DVPROC __glewProgramUniform1dv = mockgl_ProgramUniform1dv;

void  mockgl_ProgramUniform1f(GLuint program, GLint location, GLfloat x)
{
    return getGlMock()->gl_ProgramUniform1f(program, location, x);
}
PFNGLPROGRAMUNIFORM1FPROC __glewProgramUniform1f = mockgl_ProgramUniform1f;

void  mockgl_ProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniform1fv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM1FVPROC __glewProgramUniform1fv = mockgl_ProgramUniform1fv;

void  mockgl_ProgramUniform1i(GLuint program, GLint location, GLint x)
{
    return getGlMock()->gl_ProgramUniform1i(program, location, x);
}
PFNGLPROGRAMUNIFORM1IPROC __glewProgramUniform1i = mockgl_ProgramUniform1i;

void  mockgl_ProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_ProgramUniform1iv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM1IVPROC __glewProgramUniform1iv = mockgl_ProgramUniform1iv;

void  mockgl_ProgramUniform1ui(GLuint program, GLint location, GLuint x)
{
    return getGlMock()->gl_ProgramUniform1ui(program, location, x);
}
PFNGLPROGRAMUNIFORM1UIPROC __glewProgramUniform1ui = mockgl_ProgramUniform1ui;

void  mockgl_ProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return getGlMock()->gl_ProgramUniform1uiv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM1UIVPROC __glewProgramUniform1uiv = mockgl_ProgramUniform1uiv;

void  mockgl_ProgramUniform2d(GLuint program, GLint location, GLdouble x, GLdouble y)
{
    return getGlMock()->gl_ProgramUniform2d(program, location, x, y);
}
PFNGLPROGRAMUNIFORM2DPROC __glewProgramUniform2d = mockgl_ProgramUniform2d;

void  mockgl_ProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniform2dv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM2DVPROC __glewProgramUniform2dv = mockgl_ProgramUniform2dv;

void  mockgl_ProgramUniform2f(GLuint program, GLint location, GLfloat x, GLfloat y)
{
    return getGlMock()->gl_ProgramUniform2f(program, location, x, y);
}
PFNGLPROGRAMUNIFORM2FPROC __glewProgramUniform2f = mockgl_ProgramUniform2f;

void  mockgl_ProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniform2fv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM2FVPROC __glewProgramUniform2fv = mockgl_ProgramUniform2fv;

void  mockgl_ProgramUniform2i(GLuint program, GLint location, GLint x, GLint y)
{
    return getGlMock()->gl_ProgramUniform2i(program, location, x, y);
}
PFNGLPROGRAMUNIFORM2IPROC __glewProgramUniform2i = mockgl_ProgramUniform2i;

void  mockgl_ProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_ProgramUniform2iv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM2IVPROC __glewProgramUniform2iv = mockgl_ProgramUniform2iv;

void  mockgl_ProgramUniform2ui(GLuint program, GLint location, GLuint x, GLuint y)
{
    return getGlMock()->gl_ProgramUniform2ui(program, location, x, y);
}
PFNGLPROGRAMUNIFORM2UIPROC __glewProgramUniform2ui = mockgl_ProgramUniform2ui;

void  mockgl_ProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return getGlMock()->gl_ProgramUniform2uiv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM2UIVPROC __glewProgramUniform2uiv = mockgl_ProgramUniform2uiv;

void  mockgl_ProgramUniform3d(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_ProgramUniform3d(program, location, x, y, z);
}
PFNGLPROGRAMUNIFORM3DPROC __glewProgramUniform3d = mockgl_ProgramUniform3d;

void  mockgl_ProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniform3dv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM3DVPROC __glewProgramUniform3dv = mockgl_ProgramUniform3dv;

void  mockgl_ProgramUniform3f(GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_ProgramUniform3f(program, location, x, y, z);
}
PFNGLPROGRAMUNIFORM3FPROC __glewProgramUniform3f = mockgl_ProgramUniform3f;

void  mockgl_ProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniform3fv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM3FVPROC __glewProgramUniform3fv = mockgl_ProgramUniform3fv;

void  mockgl_ProgramUniform3i(GLuint program, GLint location, GLint x, GLint y, GLint z)
{
    return getGlMock()->gl_ProgramUniform3i(program, location, x, y, z);
}
PFNGLPROGRAMUNIFORM3IPROC __glewProgramUniform3i = mockgl_ProgramUniform3i;

void  mockgl_ProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_ProgramUniform3iv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM3IVPROC __glewProgramUniform3iv = mockgl_ProgramUniform3iv;

void  mockgl_ProgramUniform3ui(GLuint program, GLint location, GLuint x, GLuint y, GLuint z)
{
    return getGlMock()->gl_ProgramUniform3ui(program, location, x, y, z);
}
PFNGLPROGRAMUNIFORM3UIPROC __glewProgramUniform3ui = mockgl_ProgramUniform3ui;

void  mockgl_ProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return getGlMock()->gl_ProgramUniform3uiv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM3UIVPROC __glewProgramUniform3uiv = mockgl_ProgramUniform3uiv;

void  mockgl_ProgramUniform4d(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_ProgramUniform4d(program, location, x, y, z, w);
}
PFNGLPROGRAMUNIFORM4DPROC __glewProgramUniform4d = mockgl_ProgramUniform4d;

void  mockgl_ProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniform4dv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM4DVPROC __glewProgramUniform4dv = mockgl_ProgramUniform4dv;

void  mockgl_ProgramUniform4f(GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return getGlMock()->gl_ProgramUniform4f(program, location, x, y, z, w);
}
PFNGLPROGRAMUNIFORM4FPROC __glewProgramUniform4f = mockgl_ProgramUniform4f;

void  mockgl_ProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniform4fv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM4FVPROC __glewProgramUniform4fv = mockgl_ProgramUniform4fv;

void  mockgl_ProgramUniform4i(GLuint program, GLint location, GLint x, GLint y, GLint z, GLint w)
{
    return getGlMock()->gl_ProgramUniform4i(program, location, x, y, z, w);
}
PFNGLPROGRAMUNIFORM4IPROC __glewProgramUniform4i = mockgl_ProgramUniform4i;

void  mockgl_ProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_ProgramUniform4iv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM4IVPROC __glewProgramUniform4iv = mockgl_ProgramUniform4iv;

void  mockgl_ProgramUniform4ui(GLuint program, GLint location, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return getGlMock()->gl_ProgramUniform4ui(program, location, x, y, z, w);
}
PFNGLPROGRAMUNIFORM4UIPROC __glewProgramUniform4ui = mockgl_ProgramUniform4ui;

void  mockgl_ProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return getGlMock()->gl_ProgramUniform4uiv(program, location, count, value);
}
PFNGLPROGRAMUNIFORM4UIVPROC __glewProgramUniform4uiv = mockgl_ProgramUniform4uiv;

void  mockgl_ProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix2dv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX2DVPROC __glewProgramUniformMatrix2dv = mockgl_ProgramUniformMatrix2dv;

void  mockgl_ProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix2fv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX2FVPROC __glewProgramUniformMatrix2fv = mockgl_ProgramUniformMatrix2fv;

void  mockgl_ProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC __glewProgramUniformMatrix2x3dv = mockgl_ProgramUniformMatrix2x3dv;

void  mockgl_ProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC __glewProgramUniformMatrix2x3fv = mockgl_ProgramUniformMatrix2x3fv;

void  mockgl_ProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC __glewProgramUniformMatrix2x4dv = mockgl_ProgramUniformMatrix2x4dv;

void  mockgl_ProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC __glewProgramUniformMatrix2x4fv = mockgl_ProgramUniformMatrix2x4fv;

void  mockgl_ProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix3dv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX3DVPROC __glewProgramUniformMatrix3dv = mockgl_ProgramUniformMatrix3dv;

void  mockgl_ProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix3fv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX3FVPROC __glewProgramUniformMatrix3fv = mockgl_ProgramUniformMatrix3fv;

void  mockgl_ProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC __glewProgramUniformMatrix3x2dv = mockgl_ProgramUniformMatrix3x2dv;

void  mockgl_ProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC __glewProgramUniformMatrix3x2fv = mockgl_ProgramUniformMatrix3x2fv;

void  mockgl_ProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC __glewProgramUniformMatrix3x4dv = mockgl_ProgramUniformMatrix3x4dv;

void  mockgl_ProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC __glewProgramUniformMatrix3x4fv = mockgl_ProgramUniformMatrix3x4fv;

void  mockgl_ProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix4dv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX4DVPROC __glewProgramUniformMatrix4dv = mockgl_ProgramUniformMatrix4dv;

void  mockgl_ProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix4fv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX4FVPROC __glewProgramUniformMatrix4fv = mockgl_ProgramUniformMatrix4fv;

void  mockgl_ProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC __glewProgramUniformMatrix4x2dv = mockgl_ProgramUniformMatrix4x2dv;

void  mockgl_ProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC __glewProgramUniformMatrix4x2fv = mockgl_ProgramUniformMatrix4x2fv;

void  mockgl_ProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return getGlMock()->gl_ProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC __glewProgramUniformMatrix4x3dv = mockgl_ProgramUniformMatrix4x3dv;

void  mockgl_ProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC __glewProgramUniformMatrix4x3fv = mockgl_ProgramUniformMatrix4x3fv;

void  mockgl_UseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program)
{
    return getGlMock()->gl_UseProgramStages(pipeline, stages, program);
}
PFNGLUSEPROGRAMSTAGESPROC __glewUseProgramStages = mockgl_UseProgramStages;

void  mockgl_ValidateProgramPipeline(GLuint pipeline)
{
    return getGlMock()->gl_ValidateProgramPipeline(pipeline);
}
PFNGLVALIDATEPROGRAMPIPELINEPROC __glewValidateProgramPipeline = mockgl_ValidateProgramPipeline;

void  mockgl_AttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
    return getGlMock()->gl_AttachObjectARB(containerObj, obj);
}
PFNGLATTACHOBJECTARBPROC __glewAttachObjectARB = mockgl_AttachObjectARB;

void  mockgl_CompileShaderARB(GLhandleARB shaderObj)
{
    return getGlMock()->gl_CompileShaderARB(shaderObj);
}
PFNGLCOMPILESHADERARBPROC __glewCompileShaderARB = mockgl_CompileShaderARB;

unsigned int  mockgl_CreateProgramObjectARB()
{
    return getGlMock()->gl_CreateProgramObjectARB();
}
PFNGLCREATEPROGRAMOBJECTARBPROC __glewCreateProgramObjectARB = mockgl_CreateProgramObjectARB;

unsigned int  mockgl_CreateShaderObjectARB(GLenum shaderType)
{
    return getGlMock()->gl_CreateShaderObjectARB(shaderType);
}
PFNGLCREATESHADEROBJECTARBPROC __glewCreateShaderObjectARB = mockgl_CreateShaderObjectARB;

void  mockgl_DeleteObjectARB(GLhandleARB obj)
{
    return getGlMock()->gl_DeleteObjectARB(obj);
}
PFNGLDELETEOBJECTARBPROC __glewDeleteObjectARB = mockgl_DeleteObjectARB;

void  mockgl_DetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
{
    return getGlMock()->gl_DetachObjectARB(containerObj, attachedObj);
}
PFNGLDETACHOBJECTARBPROC __glewDetachObjectARB = mockgl_DetachObjectARB;

void  mockgl_GetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return getGlMock()->gl_GetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
}
PFNGLGETACTIVEUNIFORMARBPROC __glewGetActiveUniformARB = mockgl_GetActiveUniformARB;

void  mockgl_GetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei * count, GLhandleARB * obj)
{
    return getGlMock()->gl_GetAttachedObjectsARB(containerObj, maxCount, count, obj);
}
PFNGLGETATTACHEDOBJECTSARBPROC __glewGetAttachedObjectsARB = mockgl_GetAttachedObjectsARB;

unsigned int  mockgl_GetHandleARB(GLenum pname)
{
    return getGlMock()->gl_GetHandleARB(pname);
}
PFNGLGETHANDLEARBPROC __glewGetHandleARB = mockgl_GetHandleARB;

void  mockgl_GetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog)
{
    return getGlMock()->gl_GetInfoLogARB(obj, maxLength, length, infoLog);
}
PFNGLGETINFOLOGARBPROC __glewGetInfoLogARB = mockgl_GetInfoLogARB;

void  mockgl_GetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetObjectParameterfvARB(obj, pname, params);
}
PFNGLGETOBJECTPARAMETERFVARBPROC __glewGetObjectParameterfvARB = mockgl_GetObjectParameterfvARB;

void  mockgl_GetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetObjectParameterivARB(obj, pname, params);
}
PFNGLGETOBJECTPARAMETERIVARBPROC __glewGetObjectParameterivARB = mockgl_GetObjectParameterivARB;

void  mockgl_GetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source)
{
    return getGlMock()->gl_GetShaderSourceARB(obj, maxLength, length, source);
}
PFNGLGETSHADERSOURCEARBPROC __glewGetShaderSourceARB = mockgl_GetShaderSourceARB;

int  mockgl_GetUniformLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return getGlMock()->gl_GetUniformLocationARB(programObj, name);
}
PFNGLGETUNIFORMLOCATIONARBPROC __glewGetUniformLocationARB = mockgl_GetUniformLocationARB;

void  mockgl_GetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat * params)
{
    return getGlMock()->gl_GetUniformfvARB(programObj, location, params);
}
PFNGLGETUNIFORMFVARBPROC __glewGetUniformfvARB = mockgl_GetUniformfvARB;

void  mockgl_GetUniformivARB(GLhandleARB programObj, GLint location, GLint * params)
{
    return getGlMock()->gl_GetUniformivARB(programObj, location, params);
}
PFNGLGETUNIFORMIVARBPROC __glewGetUniformivARB = mockgl_GetUniformivARB;

void  mockgl_LinkProgramARB(GLhandleARB programObj)
{
    return getGlMock()->gl_LinkProgramARB(programObj);
}
PFNGLLINKPROGRAMARBPROC __glewLinkProgramARB = mockgl_LinkProgramARB;

void  mockgl_ShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length)
{
    return getGlMock()->gl_ShaderSourceARB(shaderObj, count, string, length);
}
PFNGLSHADERSOURCEARBPROC __glewShaderSourceARB = mockgl_ShaderSourceARB;

void  mockgl_Uniform1fARB(GLint location, GLfloat v0)
{
    return getGlMock()->gl_Uniform1fARB(location, v0);
}
PFNGLUNIFORM1FARBPROC __glewUniform1fARB = mockgl_Uniform1fARB;

void  mockgl_Uniform1fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_Uniform1fvARB(location, count, value);
}
PFNGLUNIFORM1FVARBPROC __glewUniform1fvARB = mockgl_Uniform1fvARB;

void  mockgl_Uniform1iARB(GLint location, GLint v0)
{
    return getGlMock()->gl_Uniform1iARB(location, v0);
}
PFNGLUNIFORM1IARBPROC __glewUniform1iARB = mockgl_Uniform1iARB;

void  mockgl_Uniform1ivARB(GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_Uniform1ivARB(location, count, value);
}
PFNGLUNIFORM1IVARBPROC __glewUniform1ivARB = mockgl_Uniform1ivARB;

void  mockgl_Uniform2fARB(GLint location, GLfloat v0, GLfloat v1)
{
    return getGlMock()->gl_Uniform2fARB(location, v0, v1);
}
PFNGLUNIFORM2FARBPROC __glewUniform2fARB = mockgl_Uniform2fARB;

void  mockgl_Uniform2fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_Uniform2fvARB(location, count, value);
}
PFNGLUNIFORM2FVARBPROC __glewUniform2fvARB = mockgl_Uniform2fvARB;

void  mockgl_Uniform2iARB(GLint location, GLint v0, GLint v1)
{
    return getGlMock()->gl_Uniform2iARB(location, v0, v1);
}
PFNGLUNIFORM2IARBPROC __glewUniform2iARB = mockgl_Uniform2iARB;

void  mockgl_Uniform2ivARB(GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_Uniform2ivARB(location, count, value);
}
PFNGLUNIFORM2IVARBPROC __glewUniform2ivARB = mockgl_Uniform2ivARB;

void  mockgl_Uniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return getGlMock()->gl_Uniform3fARB(location, v0, v1, v2);
}
PFNGLUNIFORM3FARBPROC __glewUniform3fARB = mockgl_Uniform3fARB;

void  mockgl_Uniform3fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_Uniform3fvARB(location, count, value);
}
PFNGLUNIFORM3FVARBPROC __glewUniform3fvARB = mockgl_Uniform3fvARB;

void  mockgl_Uniform3iARB(GLint location, GLint v0, GLint v1, GLint v2)
{
    return getGlMock()->gl_Uniform3iARB(location, v0, v1, v2);
}
PFNGLUNIFORM3IARBPROC __glewUniform3iARB = mockgl_Uniform3iARB;

void  mockgl_Uniform3ivARB(GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_Uniform3ivARB(location, count, value);
}
PFNGLUNIFORM3IVARBPROC __glewUniform3ivARB = mockgl_Uniform3ivARB;

void  mockgl_Uniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return getGlMock()->gl_Uniform4fARB(location, v0, v1, v2, v3);
}
PFNGLUNIFORM4FARBPROC __glewUniform4fARB = mockgl_Uniform4fARB;

void  mockgl_Uniform4fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_Uniform4fvARB(location, count, value);
}
PFNGLUNIFORM4FVARBPROC __glewUniform4fvARB = mockgl_Uniform4fvARB;

void  mockgl_Uniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return getGlMock()->gl_Uniform4iARB(location, v0, v1, v2, v3);
}
PFNGLUNIFORM4IARBPROC __glewUniform4iARB = mockgl_Uniform4iARB;

void  mockgl_Uniform4ivARB(GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_Uniform4ivARB(location, count, value);
}
PFNGLUNIFORM4IVARBPROC __glewUniform4ivARB = mockgl_Uniform4ivARB;

void  mockgl_UniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_UniformMatrix2fvARB(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX2FVARBPROC __glewUniformMatrix2fvARB = mockgl_UniformMatrix2fvARB;

void  mockgl_UniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_UniformMatrix3fvARB(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX3FVARBPROC __glewUniformMatrix3fvARB = mockgl_UniformMatrix3fvARB;

void  mockgl_UniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_UniformMatrix4fvARB(location, count, transpose, value);
}
PFNGLUNIFORMMATRIX4FVARBPROC __glewUniformMatrix4fvARB = mockgl_UniformMatrix4fvARB;

void  mockgl_UseProgramObjectARB(GLhandleARB programObj)
{
    return getGlMock()->gl_UseProgramObjectARB(programObj);
}
PFNGLUSEPROGRAMOBJECTARBPROC __glewUseProgramObjectARB = mockgl_UseProgramObjectARB;

void  mockgl_ValidateProgramARB(GLhandleARB programObj)
{
    return getGlMock()->gl_ValidateProgramARB(programObj);
}
PFNGLVALIDATEPROGRAMARBPROC __glewValidateProgramARB = mockgl_ValidateProgramARB;

void  mockgl_GetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, char * name)
{
    return getGlMock()->gl_GetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}
PFNGLGETACTIVESUBROUTINENAMEPROC __glewGetActiveSubroutineName = mockgl_GetActiveSubroutineName;

void  mockgl_GetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, char * name)
{
    return getGlMock()->gl_GetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}
PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC __glewGetActiveSubroutineUniformName = mockgl_GetActiveSubroutineUniformName;

void  mockgl_GetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
    return getGlMock()->gl_GetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}
PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC __glewGetActiveSubroutineUniformiv = mockgl_GetActiveSubroutineUniformiv;

void  mockgl_GetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
    return getGlMock()->gl_GetProgramStageiv(program, shadertype, pname, values);
}
PFNGLGETPROGRAMSTAGEIVPROC __glewGetProgramStageiv = mockgl_GetProgramStageiv;

unsigned int  mockgl_GetSubroutineIndex(GLuint program, GLenum shadertype, const char * name)
{
    return getGlMock()->gl_GetSubroutineIndex(program, shadertype, name);
}
PFNGLGETSUBROUTINEINDEXPROC __glewGetSubroutineIndex = mockgl_GetSubroutineIndex;

int  mockgl_GetSubroutineUniformLocation(GLuint program, GLenum shadertype, const char * name)
{
    return getGlMock()->gl_GetSubroutineUniformLocation(program, shadertype, name);
}
PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC __glewGetSubroutineUniformLocation = mockgl_GetSubroutineUniformLocation;

void  mockgl_GetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params)
{
    return getGlMock()->gl_GetUniformSubroutineuiv(shadertype, location, params);
}
PFNGLGETUNIFORMSUBROUTINEUIVPROC __glewGetUniformSubroutineuiv = mockgl_GetUniformSubroutineuiv;

void  mockgl_UniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices)
{
    return getGlMock()->gl_UniformSubroutinesuiv(shadertype, count, indices);
}
PFNGLUNIFORMSUBROUTINESUIVPROC __glewUniformSubroutinesuiv = mockgl_UniformSubroutinesuiv;

void  mockgl_CompileShaderIncludeARB(GLuint shader, GLsizei count, const char ** path, const GLint * length)
{
    return getGlMock()->gl_CompileShaderIncludeARB(shader, count, path, length);
}
PFNGLCOMPILESHADERINCLUDEARBPROC __glewCompileShaderIncludeARB = mockgl_CompileShaderIncludeARB;

void  mockgl_DeleteNamedStringARB(GLint namelen, const char * name)
{
    return getGlMock()->gl_DeleteNamedStringARB(namelen, name);
}
PFNGLDELETENAMEDSTRINGARBPROC __glewDeleteNamedStringARB = mockgl_DeleteNamedStringARB;

void  mockgl_GetNamedStringARB(GLint namelen, const char * name, GLsizei bufSize, GLint * stringlen, char * string)
{
    return getGlMock()->gl_GetNamedStringARB(namelen, name, bufSize, stringlen, string);
}
PFNGLGETNAMEDSTRINGARBPROC __glewGetNamedStringARB = mockgl_GetNamedStringARB;

void  mockgl_GetNamedStringivARB(GLint namelen, const char * name, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetNamedStringivARB(namelen, name, pname, params);
}
PFNGLGETNAMEDSTRINGIVARBPROC __glewGetNamedStringivARB = mockgl_GetNamedStringivARB;

unsigned char  mockgl_IsNamedStringARB(GLint namelen, const char * name)
{
    return getGlMock()->gl_IsNamedStringARB(namelen, name);
}
PFNGLISNAMEDSTRINGARBPROC __glewIsNamedStringARB = mockgl_IsNamedStringARB;

void  mockgl_NamedStringARB(GLenum type, GLint namelen, const char * name, GLint stringlen, const char * string)
{
    return getGlMock()->gl_NamedStringARB(type, namelen, name, stringlen, string);
}
PFNGLNAMEDSTRINGARBPROC __glewNamedStringARB = mockgl_NamedStringARB;

unsigned int  mockgl_ClientWaitSync(GLsync GLsync, GLbitfield flags, GLuint64 timeout)
{
    return getGlMock()->gl_ClientWaitSync(GLsync, flags, timeout);
}
PFNGLCLIENTWAITSYNCPROC __glewClientWaitSync = mockgl_ClientWaitSync;

void  mockgl_DeleteSync(GLsync GLsync)
{
    return getGlMock()->gl_DeleteSync(GLsync);
}
PFNGLDELETESYNCPROC __glewDeleteSync = mockgl_DeleteSync;

struct __GLsync * mockgl_FenceSync(GLenum condition, GLbitfield flags)
{
    return getGlMock()->gl_FenceSync(condition, flags);
}
PFNGLFENCESYNCPROC __glewFenceSync = mockgl_FenceSync;

void  mockgl_GetInteger64v(GLenum pname, GLint64 * params)
{
    return getGlMock()->gl_GetInteger64v(pname, params);
}
PFNGLGETINTEGER64VPROC __glewGetInteger64v = mockgl_GetInteger64v;

void  mockgl_GetSynciv(GLsync GLsync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return getGlMock()->gl_GetSynciv(GLsync, pname, bufSize, length, values);
}
PFNGLGETSYNCIVPROC __glewGetSynciv = mockgl_GetSynciv;

unsigned char  mockgl_IsSync(GLsync GLsync)
{
    return getGlMock()->gl_IsSync(GLsync);
}
PFNGLISSYNCPROC __glewIsSync = mockgl_IsSync;

void  mockgl_WaitSync(GLsync GLsync, GLbitfield flags, GLuint64 timeout)
{
    return getGlMock()->gl_WaitSync(GLsync, flags, timeout);
}
PFNGLWAITSYNCPROC __glewWaitSync = mockgl_WaitSync;

void  mockgl_PatchParameterfv(GLenum pname, const GLfloat * values)
{
    return getGlMock()->gl_PatchParameterfv(pname, values);
}
PFNGLPATCHPARAMETERFVPROC __glewPatchParameterfv = mockgl_PatchParameterfv;

void  mockgl_PatchParameteri(GLenum pname, GLint value)
{
    return getGlMock()->gl_PatchParameteri(pname, value);
}
PFNGLPATCHPARAMETERIPROC __glewPatchParameteri = mockgl_PatchParameteri;

void  mockgl_TexBufferARB(GLenum target, GLenum internalformat, GLuint buffer)
{
    return getGlMock()->gl_TexBufferARB(target, internalformat, buffer);
}
PFNGLTEXBUFFERARBPROC __glewTexBufferARB = mockgl_TexBufferARB;

void  mockgl_CompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);
}
PFNGLCOMPRESSEDTEXIMAGE1DARBPROC __glewCompressedTexImage1DARB = mockgl_CompressedTexImage1DARB;

void  mockgl_CompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);
}
PFNGLCOMPRESSEDTEXIMAGE2DARBPROC __glewCompressedTexImage2DARB = mockgl_CompressedTexImage2DARB;

void  mockgl_CompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);
}
PFNGLCOMPRESSEDTEXIMAGE3DARBPROC __glewCompressedTexImage3DARB = mockgl_CompressedTexImage3DARB;

void  mockgl_CompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
}
PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC __glewCompressedTexSubImage1DARB = mockgl_CompressedTexSubImage1DARB;

void  mockgl_CompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}
PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC __glewCompressedTexSubImage2DARB = mockgl_CompressedTexSubImage2DARB;

void  mockgl_GetCompressedTexImageARB(GLenum target, GLint lod, void * img)
{
    return getGlMock()->gl_GetCompressedTexImageARB(target, lod, img);
}
PFNGLGETCOMPRESSEDTEXIMAGEARBPROC __glewGetCompressedTexImageARB = mockgl_GetCompressedTexImageARB;

void  mockgl_GetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return getGlMock()->gl_GetMultisamplefv(pname, index, val);
}
PFNGLGETMULTISAMPLEFVPROC __glewGetMultisamplefv = mockgl_GetMultisamplefv;

void  mockgl_SampleMaski(GLuint index, GLbitfield mask)
{
    return getGlMock()->gl_SampleMaski(index, mask);
}
PFNGLSAMPLEMASKIPROC __glewSampleMaski = mockgl_SampleMaski;

void  mockgl_TexImage2DMultisample(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return getGlMock()->gl_TexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}
PFNGLTEXIMAGE2DMULTISAMPLEPROC __glewTexImage2DMultisample = mockgl_TexImage2DMultisample;

void  mockgl_TexImage3DMultisample(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return getGlMock()->gl_TexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}
PFNGLTEXIMAGE3DMULTISAMPLEPROC __glewTexImage3DMultisample = mockgl_TexImage3DMultisample;

void  mockgl_GetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params)
{
    return getGlMock()->gl_GetQueryObjecti64v(id, pname, params);
}
PFNGLGETQUERYOBJECTI64VPROC __glewGetQueryObjecti64v = mockgl_GetQueryObjecti64v;

void  mockgl_GetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params)
{
    return getGlMock()->gl_GetQueryObjectui64v(id, pname, params);
}
PFNGLGETQUERYOBJECTUI64VPROC __glewGetQueryObjectui64v = mockgl_GetQueryObjectui64v;

void  mockgl_QueryCounter(GLuint id, GLenum target)
{
    return getGlMock()->gl_QueryCounter(id, target);
}
PFNGLQUERYCOUNTERPROC __glewQueryCounter = mockgl_QueryCounter;

void  mockgl_BindTransformFeedback(GLenum target, GLuint id)
{
    return getGlMock()->gl_BindTransformFeedback(target, id);
}
PFNGLBINDTRANSFORMFEEDBACKPROC __glewBindTransformFeedback = mockgl_BindTransformFeedback;

void  mockgl_DeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return getGlMock()->gl_DeleteTransformFeedbacks(n, ids);
}
PFNGLDELETETRANSFORMFEEDBACKSPROC __glewDeleteTransformFeedbacks = mockgl_DeleteTransformFeedbacks;

void  mockgl_DrawTransformFeedback(GLenum mode, GLuint id)
{
    return getGlMock()->gl_DrawTransformFeedback(mode, id);
}
PFNGLDRAWTRANSFORMFEEDBACKPROC __glewDrawTransformFeedback = mockgl_DrawTransformFeedback;

void  mockgl_GenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return getGlMock()->gl_GenTransformFeedbacks(n, ids);
}
PFNGLGENTRANSFORMFEEDBACKSPROC __glewGenTransformFeedbacks = mockgl_GenTransformFeedbacks;

unsigned char  mockgl_IsTransformFeedback(GLuint id)
{
    return getGlMock()->gl_IsTransformFeedback(id);
}
PFNGLISTRANSFORMFEEDBACKPROC __glewIsTransformFeedback = mockgl_IsTransformFeedback;

void  mockgl_PauseTransformFeedback()
{
    return getGlMock()->gl_PauseTransformFeedback();
}
PFNGLPAUSETRANSFORMFEEDBACKPROC __glewPauseTransformFeedback = mockgl_PauseTransformFeedback;

void  mockgl_ResumeTransformFeedback()
{
    return getGlMock()->gl_ResumeTransformFeedback();
}
PFNGLRESUMETRANSFORMFEEDBACKPROC __glewResumeTransformFeedback = mockgl_ResumeTransformFeedback;

void  mockgl_BeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
    return getGlMock()->gl_BeginQueryIndexed(target, index, id);
}
PFNGLBEGINQUERYINDEXEDPROC __glewBeginQueryIndexed = mockgl_BeginQueryIndexed;

void  mockgl_DrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
{
    return getGlMock()->gl_DrawTransformFeedbackStream(mode, id, stream);
}
PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC __glewDrawTransformFeedbackStream = mockgl_DrawTransformFeedbackStream;

void  mockgl_EndQueryIndexed(GLenum target, GLuint index)
{
    return getGlMock()->gl_EndQueryIndexed(target, index);
}
PFNGLENDQUERYINDEXEDPROC __glewEndQueryIndexed = mockgl_EndQueryIndexed;

void  mockgl_GetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetQueryIndexediv(target, index, pname, params);
}
PFNGLGETQUERYINDEXEDIVPROC __glewGetQueryIndexediv = mockgl_GetQueryIndexediv;

void  mockgl_LoadTransposeMatrixdARB(GLdouble * m)
{
    return getGlMock()->gl_LoadTransposeMatrixdARB(m);
}
PFNGLLOADTRANSPOSEMATRIXDARBPROC __glewLoadTransposeMatrixdARB = mockgl_LoadTransposeMatrixdARB;

void  mockgl_LoadTransposeMatrixfARB(GLfloat * m)
{
    return getGlMock()->gl_LoadTransposeMatrixfARB(m);
}
PFNGLLOADTRANSPOSEMATRIXFARBPROC __glewLoadTransposeMatrixfARB = mockgl_LoadTransposeMatrixfARB;

void  mockgl_MultTransposeMatrixdARB(GLdouble * m)
{
    return getGlMock()->gl_MultTransposeMatrixdARB(m);
}
PFNGLMULTTRANSPOSEMATRIXDARBPROC __glewMultTransposeMatrixdARB = mockgl_MultTransposeMatrixdARB;

void  mockgl_MultTransposeMatrixfARB(GLfloat * m)
{
    return getGlMock()->gl_MultTransposeMatrixfARB(m);
}
PFNGLMULTTRANSPOSEMATRIXFARBPROC __glewMultTransposeMatrixfARB = mockgl_MultTransposeMatrixfARB;

void  mockgl_BindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return getGlMock()->gl_BindBufferBase(target, index, buffer);
}
PFNGLBINDBUFFERBASEPROC __glewBindBufferBase = mockgl_BindBufferBase;

void  mockgl_BindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return getGlMock()->gl_BindBufferRange(target, index, buffer, offset, size);
}
PFNGLBINDBUFFERRANGEPROC __glewBindBufferRange = mockgl_BindBufferRange;

void  mockgl_GetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, char * uniformBlockName)
{
    return getGlMock()->gl_GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC __glewGetActiveUniformBlockName = mockgl_GetActiveUniformBlockName;

void  mockgl_GetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}
PFNGLGETACTIVEUNIFORMBLOCKIVPROC __glewGetActiveUniformBlockiv = mockgl_GetActiveUniformBlockiv;

void  mockgl_GetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, char * uniformName)
{
    return getGlMock()->gl_GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}
PFNGLGETACTIVEUNIFORMNAMEPROC __glewGetActiveUniformName = mockgl_GetActiveUniformName;

void  mockgl_GetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}
PFNGLGETACTIVEUNIFORMSIVPROC __glewGetActiveUniformsiv = mockgl_GetActiveUniformsiv;

void  mockgl_GetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return getGlMock()->gl_GetIntegeri_v(target, index, data);
}
PFNGLGETINTEGERI_VPROC __glewGetIntegeri_v = mockgl_GetIntegeri_v;

unsigned int  mockgl_GetUniformBlockIndex(GLuint program, const char * uniformBlockName)
{
    return getGlMock()->gl_GetUniformBlockIndex(program, uniformBlockName);
}
PFNGLGETUNIFORMBLOCKINDEXPROC __glewGetUniformBlockIndex = mockgl_GetUniformBlockIndex;

void  mockgl_GetUniformIndices(GLuint program, GLsizei uniformCount, const char ** uniformNames, GLuint * uniformIndices)
{
    return getGlMock()->gl_GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}
PFNGLGETUNIFORMINDICESPROC __glewGetUniformIndices = mockgl_GetUniformIndices;

void  mockgl_UniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return getGlMock()->gl_UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}
PFNGLUNIFORMBLOCKBINDINGPROC __glewUniformBlockBinding = mockgl_UniformBlockBinding;

void  mockgl_BindVertexArray(GLuint array)
{
    return getGlMock()->gl_BindVertexArray(array);
}
PFNGLBINDVERTEXARRAYPROC __glewBindVertexArray = mockgl_BindVertexArray;

void  mockgl_DeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return getGlMock()->gl_DeleteVertexArrays(n, arrays);
}
PFNGLDELETEVERTEXARRAYSPROC __glewDeleteVertexArrays = mockgl_DeleteVertexArrays;

void  mockgl_GenVertexArrays(GLsizei n, GLuint * arrays)
{
    return getGlMock()->gl_GenVertexArrays(n, arrays);
}
PFNGLGENVERTEXARRAYSPROC __glewGenVertexArrays = mockgl_GenVertexArrays;

unsigned char  mockgl_IsVertexArray(GLuint array)
{
    return getGlMock()->gl_IsVertexArray(array);
}
PFNGLISVERTEXARRAYPROC __glewIsVertexArray = mockgl_IsVertexArray;

void  mockgl_GetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params)
{
    return getGlMock()->gl_GetVertexAttribLdv(index, pname, params);
}
PFNGLGETVERTEXATTRIBLDVPROC __glewGetVertexAttribLdv = mockgl_GetVertexAttribLdv;

void  mockgl_VertexAttribL1d(GLuint index, GLdouble x)
{
    return getGlMock()->gl_VertexAttribL1d(index, x);
}
PFNGLVERTEXATTRIBL1DPROC __glewVertexAttribL1d = mockgl_VertexAttribL1d;

void  mockgl_VertexAttribL1dv(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttribL1dv(index, v);
}
PFNGLVERTEXATTRIBL1DVPROC __glewVertexAttribL1dv = mockgl_VertexAttribL1dv;

void  mockgl_VertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
    return getGlMock()->gl_VertexAttribL2d(index, x, y);
}
PFNGLVERTEXATTRIBL2DPROC __glewVertexAttribL2d = mockgl_VertexAttribL2d;

void  mockgl_VertexAttribL2dv(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttribL2dv(index, v);
}
PFNGLVERTEXATTRIBL2DVPROC __glewVertexAttribL2dv = mockgl_VertexAttribL2dv;

void  mockgl_VertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_VertexAttribL3d(index, x, y, z);
}
PFNGLVERTEXATTRIBL3DPROC __glewVertexAttribL3d = mockgl_VertexAttribL3d;

void  mockgl_VertexAttribL3dv(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttribL3dv(index, v);
}
PFNGLVERTEXATTRIBL3DVPROC __glewVertexAttribL3dv = mockgl_VertexAttribL3dv;

void  mockgl_VertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_VertexAttribL4d(index, x, y, z, w);
}
PFNGLVERTEXATTRIBL4DPROC __glewVertexAttribL4d = mockgl_VertexAttribL4d;

void  mockgl_VertexAttribL4dv(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttribL4dv(index, v);
}
PFNGLVERTEXATTRIBL4DVPROC __glewVertexAttribL4dv = mockgl_VertexAttribL4dv;

void  mockgl_VertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return getGlMock()->gl_VertexAttribLPointer(index, size, type, stride, pointer);
}
PFNGLVERTEXATTRIBLPOINTERPROC __glewVertexAttribLPointer = mockgl_VertexAttribLPointer;

void  mockgl_VertexBlendARB(GLint count)
{
    return getGlMock()->gl_VertexBlendARB(count);
}
PFNGLVERTEXBLENDARBPROC __glewVertexBlendARB = mockgl_VertexBlendARB;

void  mockgl_WeightPointerARB(GLint size, GLenum type, GLsizei stride, GLvoid * pointer)
{
    return getGlMock()->gl_WeightPointerARB(size, type, stride, pointer);
}
PFNGLWEIGHTPOINTERARBPROC __glewWeightPointerARB = mockgl_WeightPointerARB;

void  mockgl_WeightbvARB(GLint size, GLbyte * weights)
{
    return getGlMock()->gl_WeightbvARB(size, weights);
}
PFNGLWEIGHTBVARBPROC __glewWeightbvARB = mockgl_WeightbvARB;

void  mockgl_WeightdvARB(GLint size, GLdouble * weights)
{
    return getGlMock()->gl_WeightdvARB(size, weights);
}
PFNGLWEIGHTDVARBPROC __glewWeightdvARB = mockgl_WeightdvARB;

void  mockgl_WeightfvARB(GLint size, GLfloat * weights)
{
    return getGlMock()->gl_WeightfvARB(size, weights);
}
PFNGLWEIGHTFVARBPROC __glewWeightfvARB = mockgl_WeightfvARB;

void  mockgl_WeightivARB(GLint size, GLint * weights)
{
    return getGlMock()->gl_WeightivARB(size, weights);
}
PFNGLWEIGHTIVARBPROC __glewWeightivARB = mockgl_WeightivARB;

void  mockgl_WeightsvARB(GLint size, GLshort * weights)
{
    return getGlMock()->gl_WeightsvARB(size, weights);
}
PFNGLWEIGHTSVARBPROC __glewWeightsvARB = mockgl_WeightsvARB;

void  mockgl_WeightubvARB(GLint size, GLubyte * weights)
{
    return getGlMock()->gl_WeightubvARB(size, weights);
}
PFNGLWEIGHTUBVARBPROC __glewWeightubvARB = mockgl_WeightubvARB;

void  mockgl_WeightuivARB(GLint size, GLuint * weights)
{
    return getGlMock()->gl_WeightuivARB(size, weights);
}
PFNGLWEIGHTUIVARBPROC __glewWeightuivARB = mockgl_WeightuivARB;

void  mockgl_WeightusvARB(GLint size, GLushort * weights)
{
    return getGlMock()->gl_WeightusvARB(size, weights);
}
PFNGLWEIGHTUSVARBPROC __glewWeightusvARB = mockgl_WeightusvARB;

void  mockgl_BindBufferARB(GLenum target, GLuint buffer)
{
    return getGlMock()->gl_BindBufferARB(target, buffer);
}
PFNGLBINDBUFFERARBPROC __glewBindBufferARB = mockgl_BindBufferARB;

void  mockgl_BufferDataARB(GLenum target, GLsizeiptrARB size, const GLvoid * data, GLenum usage)
{
    return getGlMock()->gl_BufferDataARB(target, size, data, usage);
}
PFNGLBUFFERDATAARBPROC __glewBufferDataARB = mockgl_BufferDataARB;

void  mockgl_BufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid * data)
{
    return getGlMock()->gl_BufferSubDataARB(target, offset, size, data);
}
PFNGLBUFFERSUBDATAARBPROC __glewBufferSubDataARB = mockgl_BufferSubDataARB;

void  mockgl_DeleteBuffersARB(GLsizei n, const GLuint * buffers)
{
    return getGlMock()->gl_DeleteBuffersARB(n, buffers);
}
PFNGLDELETEBUFFERSARBPROC __glewDeleteBuffersARB = mockgl_DeleteBuffersARB;

void  mockgl_GenBuffersARB(GLsizei n, GLuint * buffers)
{
    return getGlMock()->gl_GenBuffersARB(n, buffers);
}
PFNGLGENBUFFERSARBPROC __glewGenBuffersARB = mockgl_GenBuffersARB;

void  mockgl_GetBufferParameterivARB(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetBufferParameterivARB(target, pname, params);
}
PFNGLGETBUFFERPARAMETERIVARBPROC __glewGetBufferParameterivARB = mockgl_GetBufferParameterivARB;

void  mockgl_GetBufferPointervARB(GLenum target, GLenum pname, GLvoid ** params)
{
    return getGlMock()->gl_GetBufferPointervARB(target, pname, params);
}
PFNGLGETBUFFERPOINTERVARBPROC __glewGetBufferPointervARB = mockgl_GetBufferPointervARB;

void  mockgl_GetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid * data)
{
    return getGlMock()->gl_GetBufferSubDataARB(target, offset, size, data);
}
PFNGLGETBUFFERSUBDATAARBPROC __glewGetBufferSubDataARB = mockgl_GetBufferSubDataARB;

unsigned char  mockgl_IsBufferARB(GLuint buffer)
{
    return getGlMock()->gl_IsBufferARB(buffer);
}
PFNGLISBUFFERARBPROC __glewIsBufferARB = mockgl_IsBufferARB;

void * mockgl_MapBufferARB(GLenum target, GLenum access)
{
    return getGlMock()->gl_MapBufferARB(target, access);
}
PFNGLMAPBUFFERARBPROC __glewMapBufferARB = mockgl_MapBufferARB;

unsigned char  mockgl_UnmapBufferARB(GLenum target)
{
    return getGlMock()->gl_UnmapBufferARB(target);
}
PFNGLUNMAPBUFFERARBPROC __glewUnmapBufferARB = mockgl_UnmapBufferARB;

void  mockgl_BindProgramARB(GLenum target, GLuint program)
{
    return getGlMock()->gl_BindProgramARB(target, program);
}
PFNGLBINDPROGRAMARBPROC __glewBindProgramARB = mockgl_BindProgramARB;

void  mockgl_DeleteProgramsARB(GLsizei n, const GLuint * programs)
{
    return getGlMock()->gl_DeleteProgramsARB(n, programs);
}
PFNGLDELETEPROGRAMSARBPROC __glewDeleteProgramsARB = mockgl_DeleteProgramsARB;

void  mockgl_DisableVertexAttribArrayARB(GLuint index)
{
    return getGlMock()->gl_DisableVertexAttribArrayARB(index);
}
PFNGLDISABLEVERTEXATTRIBARRAYARBPROC __glewDisableVertexAttribArrayARB = mockgl_DisableVertexAttribArrayARB;

void  mockgl_EnableVertexAttribArrayARB(GLuint index)
{
    return getGlMock()->gl_EnableVertexAttribArrayARB(index);
}
PFNGLENABLEVERTEXATTRIBARRAYARBPROC __glewEnableVertexAttribArrayARB = mockgl_EnableVertexAttribArrayARB;

void  mockgl_GenProgramsARB(GLsizei n, GLuint * programs)
{
    return getGlMock()->gl_GenProgramsARB(n, programs);
}
PFNGLGENPROGRAMSARBPROC __glewGenProgramsARB = mockgl_GenProgramsARB;

void  mockgl_GetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return getGlMock()->gl_GetProgramEnvParameterdvARB(target, index, params);
}
PFNGLGETPROGRAMENVPARAMETERDVARBPROC __glewGetProgramEnvParameterdvARB = mockgl_GetProgramEnvParameterdvARB;

void  mockgl_GetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return getGlMock()->gl_GetProgramEnvParameterfvARB(target, index, params);
}
PFNGLGETPROGRAMENVPARAMETERFVARBPROC __glewGetProgramEnvParameterfvARB = mockgl_GetProgramEnvParameterfvARB;

void  mockgl_GetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return getGlMock()->gl_GetProgramLocalParameterdvARB(target, index, params);
}
PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC __glewGetProgramLocalParameterdvARB = mockgl_GetProgramLocalParameterdvARB;

void  mockgl_GetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return getGlMock()->gl_GetProgramLocalParameterfvARB(target, index, params);
}
PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC __glewGetProgramLocalParameterfvARB = mockgl_GetProgramLocalParameterfvARB;

void  mockgl_GetProgramStringARB(GLenum target, GLenum pname, void * string)
{
    return getGlMock()->gl_GetProgramStringARB(target, pname, string);
}
PFNGLGETPROGRAMSTRINGARBPROC __glewGetProgramStringARB = mockgl_GetProgramStringARB;

void  mockgl_GetProgramivARB(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetProgramivARB(target, pname, params);
}
PFNGLGETPROGRAMIVARBPROC __glewGetProgramivARB = mockgl_GetProgramivARB;

void  mockgl_GetVertexAttribPointervARB(GLuint index, GLenum pname, GLvoid ** pointer)
{
    return getGlMock()->gl_GetVertexAttribPointervARB(index, pname, pointer);
}
PFNGLGETVERTEXATTRIBPOINTERVARBPROC __glewGetVertexAttribPointervARB = mockgl_GetVertexAttribPointervARB;

void  mockgl_GetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble * params)
{
    return getGlMock()->gl_GetVertexAttribdvARB(index, pname, params);
}
PFNGLGETVERTEXATTRIBDVARBPROC __glewGetVertexAttribdvARB = mockgl_GetVertexAttribdvARB;

void  mockgl_GetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetVertexAttribfvARB(index, pname, params);
}
PFNGLGETVERTEXATTRIBFVARBPROC __glewGetVertexAttribfvARB = mockgl_GetVertexAttribfvARB;

void  mockgl_GetVertexAttribivARB(GLuint index, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetVertexAttribivARB(index, pname, params);
}
PFNGLGETVERTEXATTRIBIVARBPROC __glewGetVertexAttribivARB = mockgl_GetVertexAttribivARB;

unsigned char  mockgl_IsProgramARB(GLuint program)
{
    return getGlMock()->gl_IsProgramARB(program);
}
PFNGLISPROGRAMARBPROC __glewIsProgramARB = mockgl_IsProgramARB;

void  mockgl_ProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_ProgramEnvParameter4dARB(target, index, x, y, z, w);
}
PFNGLPROGRAMENVPARAMETER4DARBPROC __glewProgramEnvParameter4dARB = mockgl_ProgramEnvParameter4dARB;

void  mockgl_ProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return getGlMock()->gl_ProgramEnvParameter4dvARB(target, index, params);
}
PFNGLPROGRAMENVPARAMETER4DVARBPROC __glewProgramEnvParameter4dvARB = mockgl_ProgramEnvParameter4dvARB;

void  mockgl_ProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return getGlMock()->gl_ProgramEnvParameter4fARB(target, index, x, y, z, w);
}
PFNGLPROGRAMENVPARAMETER4FARBPROC __glewProgramEnvParameter4fARB = mockgl_ProgramEnvParameter4fARB;

void  mockgl_ProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return getGlMock()->gl_ProgramEnvParameter4fvARB(target, index, params);
}
PFNGLPROGRAMENVPARAMETER4FVARBPROC __glewProgramEnvParameter4fvARB = mockgl_ProgramEnvParameter4fvARB;

void  mockgl_ProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_ProgramLocalParameter4dARB(target, index, x, y, z, w);
}
PFNGLPROGRAMLOCALPARAMETER4DARBPROC __glewProgramLocalParameter4dARB = mockgl_ProgramLocalParameter4dARB;

void  mockgl_ProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return getGlMock()->gl_ProgramLocalParameter4dvARB(target, index, params);
}
PFNGLPROGRAMLOCALPARAMETER4DVARBPROC __glewProgramLocalParameter4dvARB = mockgl_ProgramLocalParameter4dvARB;

void  mockgl_ProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return getGlMock()->gl_ProgramLocalParameter4fARB(target, index, x, y, z, w);
}
PFNGLPROGRAMLOCALPARAMETER4FARBPROC __glewProgramLocalParameter4fARB = mockgl_ProgramLocalParameter4fARB;

void  mockgl_ProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return getGlMock()->gl_ProgramLocalParameter4fvARB(target, index, params);
}
PFNGLPROGRAMLOCALPARAMETER4FVARBPROC __glewProgramLocalParameter4fvARB = mockgl_ProgramLocalParameter4fvARB;

void  mockgl_ProgramStringARB(GLenum target, GLenum format, GLsizei len, const void * string)
{
    return getGlMock()->gl_ProgramStringARB(target, format, len, string);
}
PFNGLPROGRAMSTRINGARBPROC __glewProgramStringARB = mockgl_ProgramStringARB;

void  mockgl_VertexAttrib1dARB(GLuint index, GLdouble x)
{
    return getGlMock()->gl_VertexAttrib1dARB(index, x);
}
PFNGLVERTEXATTRIB1DARBPROC __glewVertexAttrib1dARB = mockgl_VertexAttrib1dARB;

void  mockgl_VertexAttrib1dvARB(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttrib1dvARB(index, v);
}
PFNGLVERTEXATTRIB1DVARBPROC __glewVertexAttrib1dvARB = mockgl_VertexAttrib1dvARB;

void  mockgl_VertexAttrib1fARB(GLuint index, GLfloat x)
{
    return getGlMock()->gl_VertexAttrib1fARB(index, x);
}
PFNGLVERTEXATTRIB1FARBPROC __glewVertexAttrib1fARB = mockgl_VertexAttrib1fARB;

void  mockgl_VertexAttrib1fvARB(GLuint index, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttrib1fvARB(index, v);
}
PFNGLVERTEXATTRIB1FVARBPROC __glewVertexAttrib1fvARB = mockgl_VertexAttrib1fvARB;

void  mockgl_VertexAttrib1sARB(GLuint index, GLshort x)
{
    return getGlMock()->gl_VertexAttrib1sARB(index, x);
}
PFNGLVERTEXATTRIB1SARBPROC __glewVertexAttrib1sARB = mockgl_VertexAttrib1sARB;

void  mockgl_VertexAttrib1svARB(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttrib1svARB(index, v);
}
PFNGLVERTEXATTRIB1SVARBPROC __glewVertexAttrib1svARB = mockgl_VertexAttrib1svARB;

void  mockgl_VertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
{
    return getGlMock()->gl_VertexAttrib2dARB(index, x, y);
}
PFNGLVERTEXATTRIB2DARBPROC __glewVertexAttrib2dARB = mockgl_VertexAttrib2dARB;

void  mockgl_VertexAttrib2dvARB(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttrib2dvARB(index, v);
}
PFNGLVERTEXATTRIB2DVARBPROC __glewVertexAttrib2dvARB = mockgl_VertexAttrib2dvARB;

void  mockgl_VertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
{
    return getGlMock()->gl_VertexAttrib2fARB(index, x, y);
}
PFNGLVERTEXATTRIB2FARBPROC __glewVertexAttrib2fARB = mockgl_VertexAttrib2fARB;

void  mockgl_VertexAttrib2fvARB(GLuint index, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttrib2fvARB(index, v);
}
PFNGLVERTEXATTRIB2FVARBPROC __glewVertexAttrib2fvARB = mockgl_VertexAttrib2fvARB;

void  mockgl_VertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
{
    return getGlMock()->gl_VertexAttrib2sARB(index, x, y);
}
PFNGLVERTEXATTRIB2SARBPROC __glewVertexAttrib2sARB = mockgl_VertexAttrib2sARB;

void  mockgl_VertexAttrib2svARB(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttrib2svARB(index, v);
}
PFNGLVERTEXATTRIB2SVARBPROC __glewVertexAttrib2svARB = mockgl_VertexAttrib2svARB;

void  mockgl_VertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_VertexAttrib3dARB(index, x, y, z);
}
PFNGLVERTEXATTRIB3DARBPROC __glewVertexAttrib3dARB = mockgl_VertexAttrib3dARB;

void  mockgl_VertexAttrib3dvARB(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttrib3dvARB(index, v);
}
PFNGLVERTEXATTRIB3DVARBPROC __glewVertexAttrib3dvARB = mockgl_VertexAttrib3dvARB;

void  mockgl_VertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_VertexAttrib3fARB(index, x, y, z);
}
PFNGLVERTEXATTRIB3FARBPROC __glewVertexAttrib3fARB = mockgl_VertexAttrib3fARB;

void  mockgl_VertexAttrib3fvARB(GLuint index, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttrib3fvARB(index, v);
}
PFNGLVERTEXATTRIB3FVARBPROC __glewVertexAttrib3fvARB = mockgl_VertexAttrib3fvARB;

void  mockgl_VertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return getGlMock()->gl_VertexAttrib3sARB(index, x, y, z);
}
PFNGLVERTEXATTRIB3SARBPROC __glewVertexAttrib3sARB = mockgl_VertexAttrib3sARB;

void  mockgl_VertexAttrib3svARB(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttrib3svARB(index, v);
}
PFNGLVERTEXATTRIB3SVARBPROC __glewVertexAttrib3svARB = mockgl_VertexAttrib3svARB;

void  mockgl_VertexAttrib4NbvARB(GLuint index, const GLbyte * v)
{
    return getGlMock()->gl_VertexAttrib4NbvARB(index, v);
}
PFNGLVERTEXATTRIB4NBVARBPROC __glewVertexAttrib4NbvARB = mockgl_VertexAttrib4NbvARB;

void  mockgl_VertexAttrib4NivARB(GLuint index, const GLint * v)
{
    return getGlMock()->gl_VertexAttrib4NivARB(index, v);
}
PFNGLVERTEXATTRIB4NIVARBPROC __glewVertexAttrib4NivARB = mockgl_VertexAttrib4NivARB;

void  mockgl_VertexAttrib4NsvARB(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttrib4NsvARB(index, v);
}
PFNGLVERTEXATTRIB4NSVARBPROC __glewVertexAttrib4NsvARB = mockgl_VertexAttrib4NsvARB;

void  mockgl_VertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return getGlMock()->gl_VertexAttrib4NubARB(index, x, y, z, w);
}
PFNGLVERTEXATTRIB4NUBARBPROC __glewVertexAttrib4NubARB = mockgl_VertexAttrib4NubARB;

void  mockgl_VertexAttrib4NubvARB(GLuint index, const GLubyte * v)
{
    return getGlMock()->gl_VertexAttrib4NubvARB(index, v);
}
PFNGLVERTEXATTRIB4NUBVARBPROC __glewVertexAttrib4NubvARB = mockgl_VertexAttrib4NubvARB;

void  mockgl_VertexAttrib4NuivARB(GLuint index, const GLuint * v)
{
    return getGlMock()->gl_VertexAttrib4NuivARB(index, v);
}
PFNGLVERTEXATTRIB4NUIVARBPROC __glewVertexAttrib4NuivARB = mockgl_VertexAttrib4NuivARB;

void  mockgl_VertexAttrib4NusvARB(GLuint index, const GLushort * v)
{
    return getGlMock()->gl_VertexAttrib4NusvARB(index, v);
}
PFNGLVERTEXATTRIB4NUSVARBPROC __glewVertexAttrib4NusvARB = mockgl_VertexAttrib4NusvARB;

void  mockgl_VertexAttrib4bvARB(GLuint index, const GLbyte * v)
{
    return getGlMock()->gl_VertexAttrib4bvARB(index, v);
}
PFNGLVERTEXATTRIB4BVARBPROC __glewVertexAttrib4bvARB = mockgl_VertexAttrib4bvARB;

void  mockgl_VertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_VertexAttrib4dARB(index, x, y, z, w);
}
PFNGLVERTEXATTRIB4DARBPROC __glewVertexAttrib4dARB = mockgl_VertexAttrib4dARB;

void  mockgl_VertexAttrib4dvARB(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttrib4dvARB(index, v);
}
PFNGLVERTEXATTRIB4DVARBPROC __glewVertexAttrib4dvARB = mockgl_VertexAttrib4dvARB;

void  mockgl_VertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return getGlMock()->gl_VertexAttrib4fARB(index, x, y, z, w);
}
PFNGLVERTEXATTRIB4FARBPROC __glewVertexAttrib4fARB = mockgl_VertexAttrib4fARB;

void  mockgl_VertexAttrib4fvARB(GLuint index, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttrib4fvARB(index, v);
}
PFNGLVERTEXATTRIB4FVARBPROC __glewVertexAttrib4fvARB = mockgl_VertexAttrib4fvARB;

void  mockgl_VertexAttrib4ivARB(GLuint index, const GLint * v)
{
    return getGlMock()->gl_VertexAttrib4ivARB(index, v);
}
PFNGLVERTEXATTRIB4IVARBPROC __glewVertexAttrib4ivARB = mockgl_VertexAttrib4ivARB;

void  mockgl_VertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return getGlMock()->gl_VertexAttrib4sARB(index, x, y, z, w);
}
PFNGLVERTEXATTRIB4SARBPROC __glewVertexAttrib4sARB = mockgl_VertexAttrib4sARB;

void  mockgl_VertexAttrib4svARB(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttrib4svARB(index, v);
}
PFNGLVERTEXATTRIB4SVARBPROC __glewVertexAttrib4svARB = mockgl_VertexAttrib4svARB;

void  mockgl_VertexAttrib4ubvARB(GLuint index, const GLubyte * v)
{
    return getGlMock()->gl_VertexAttrib4ubvARB(index, v);
}
PFNGLVERTEXATTRIB4UBVARBPROC __glewVertexAttrib4ubvARB = mockgl_VertexAttrib4ubvARB;

void  mockgl_VertexAttrib4uivARB(GLuint index, const GLuint * v)
{
    return getGlMock()->gl_VertexAttrib4uivARB(index, v);
}
PFNGLVERTEXATTRIB4UIVARBPROC __glewVertexAttrib4uivARB = mockgl_VertexAttrib4uivARB;

void  mockgl_VertexAttrib4usvARB(GLuint index, const GLushort * v)
{
    return getGlMock()->gl_VertexAttrib4usvARB(index, v);
}
PFNGLVERTEXATTRIB4USVARBPROC __glewVertexAttrib4usvARB = mockgl_VertexAttrib4usvARB;

void  mockgl_VertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return getGlMock()->gl_VertexAttribPointerARB(index, size, type, normalized, stride, pointer);
}
PFNGLVERTEXATTRIBPOINTERARBPROC __glewVertexAttribPointerARB = mockgl_VertexAttribPointerARB;

void  mockgl_BindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB * name)
{
    return getGlMock()->gl_BindAttribLocationARB(programObj, index, name);
}
PFNGLBINDATTRIBLOCATIONARBPROC __glewBindAttribLocationARB = mockgl_BindAttribLocationARB;

void  mockgl_GetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return getGlMock()->gl_GetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
}
PFNGLGETACTIVEATTRIBARBPROC __glewGetActiveAttribARB = mockgl_GetActiveAttribARB;

int  mockgl_GetAttribLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return getGlMock()->gl_GetAttribLocationARB(programObj, name);
}
PFNGLGETATTRIBLOCATIONARBPROC __glewGetAttribLocationARB = mockgl_GetAttribLocationARB;

void  mockgl_ColorP3ui(GLenum type, GLuint color)
{
    return getGlMock()->gl_ColorP3ui(type, color);
}
PFNGLCOLORP3UIPROC __glewColorP3ui = mockgl_ColorP3ui;

void  mockgl_ColorP3uiv(GLenum type, const GLuint * color)
{
    return getGlMock()->gl_ColorP3uiv(type, color);
}
PFNGLCOLORP3UIVPROC __glewColorP3uiv = mockgl_ColorP3uiv;

void  mockgl_ColorP4ui(GLenum type, GLuint color)
{
    return getGlMock()->gl_ColorP4ui(type, color);
}
PFNGLCOLORP4UIPROC __glewColorP4ui = mockgl_ColorP4ui;

void  mockgl_ColorP4uiv(GLenum type, const GLuint * color)
{
    return getGlMock()->gl_ColorP4uiv(type, color);
}
PFNGLCOLORP4UIVPROC __glewColorP4uiv = mockgl_ColorP4uiv;

void  mockgl_MultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
    return getGlMock()->gl_MultiTexCoordP1ui(texture, type, coords);
}
PFNGLMULTITEXCOORDP1UIPROC __glewMultiTexCoordP1ui = mockgl_MultiTexCoordP1ui;

void  mockgl_MultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return getGlMock()->gl_MultiTexCoordP1uiv(texture, type, coords);
}
PFNGLMULTITEXCOORDP1UIVPROC __glewMultiTexCoordP1uiv = mockgl_MultiTexCoordP1uiv;

void  mockgl_MultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
    return getGlMock()->gl_MultiTexCoordP2ui(texture, type, coords);
}
PFNGLMULTITEXCOORDP2UIPROC __glewMultiTexCoordP2ui = mockgl_MultiTexCoordP2ui;

void  mockgl_MultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return getGlMock()->gl_MultiTexCoordP2uiv(texture, type, coords);
}
PFNGLMULTITEXCOORDP2UIVPROC __glewMultiTexCoordP2uiv = mockgl_MultiTexCoordP2uiv;

void  mockgl_MultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
    return getGlMock()->gl_MultiTexCoordP3ui(texture, type, coords);
}
PFNGLMULTITEXCOORDP3UIPROC __glewMultiTexCoordP3ui = mockgl_MultiTexCoordP3ui;

void  mockgl_MultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return getGlMock()->gl_MultiTexCoordP3uiv(texture, type, coords);
}
PFNGLMULTITEXCOORDP3UIVPROC __glewMultiTexCoordP3uiv = mockgl_MultiTexCoordP3uiv;

void  mockgl_MultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
    return getGlMock()->gl_MultiTexCoordP4ui(texture, type, coords);
}
PFNGLMULTITEXCOORDP4UIPROC __glewMultiTexCoordP4ui = mockgl_MultiTexCoordP4ui;

void  mockgl_MultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return getGlMock()->gl_MultiTexCoordP4uiv(texture, type, coords);
}
PFNGLMULTITEXCOORDP4UIVPROC __glewMultiTexCoordP4uiv = mockgl_MultiTexCoordP4uiv;

void  mockgl_NormalP3ui(GLenum type, GLuint coords)
{
    return getGlMock()->gl_NormalP3ui(type, coords);
}
PFNGLNORMALP3UIPROC __glewNormalP3ui = mockgl_NormalP3ui;

void  mockgl_NormalP3uiv(GLenum type, const GLuint * coords)
{
    return getGlMock()->gl_NormalP3uiv(type, coords);
}
PFNGLNORMALP3UIVPROC __glewNormalP3uiv = mockgl_NormalP3uiv;

void  mockgl_SecondaryColorP3ui(GLenum type, GLuint color)
{
    return getGlMock()->gl_SecondaryColorP3ui(type, color);
}
PFNGLSECONDARYCOLORP3UIPROC __glewSecondaryColorP3ui = mockgl_SecondaryColorP3ui;

void  mockgl_SecondaryColorP3uiv(GLenum type, const GLuint * color)
{
    return getGlMock()->gl_SecondaryColorP3uiv(type, color);
}
PFNGLSECONDARYCOLORP3UIVPROC __glewSecondaryColorP3uiv = mockgl_SecondaryColorP3uiv;

void  mockgl_TexCoordP1ui(GLenum type, GLuint coords)
{
    return getGlMock()->gl_TexCoordP1ui(type, coords);
}
PFNGLTEXCOORDP1UIPROC __glewTexCoordP1ui = mockgl_TexCoordP1ui;

void  mockgl_TexCoordP1uiv(GLenum type, const GLuint * coords)
{
    return getGlMock()->gl_TexCoordP1uiv(type, coords);
}
PFNGLTEXCOORDP1UIVPROC __glewTexCoordP1uiv = mockgl_TexCoordP1uiv;

void  mockgl_TexCoordP2ui(GLenum type, GLuint coords)
{
    return getGlMock()->gl_TexCoordP2ui(type, coords);
}
PFNGLTEXCOORDP2UIPROC __glewTexCoordP2ui = mockgl_TexCoordP2ui;

void  mockgl_TexCoordP2uiv(GLenum type, const GLuint * coords)
{
    return getGlMock()->gl_TexCoordP2uiv(type, coords);
}
PFNGLTEXCOORDP2UIVPROC __glewTexCoordP2uiv = mockgl_TexCoordP2uiv;

void  mockgl_TexCoordP3ui(GLenum type, GLuint coords)
{
    return getGlMock()->gl_TexCoordP3ui(type, coords);
}
PFNGLTEXCOORDP3UIPROC __glewTexCoordP3ui = mockgl_TexCoordP3ui;

void  mockgl_TexCoordP3uiv(GLenum type, const GLuint * coords)
{
    return getGlMock()->gl_TexCoordP3uiv(type, coords);
}
PFNGLTEXCOORDP3UIVPROC __glewTexCoordP3uiv = mockgl_TexCoordP3uiv;

void  mockgl_TexCoordP4ui(GLenum type, GLuint coords)
{
    return getGlMock()->gl_TexCoordP4ui(type, coords);
}
PFNGLTEXCOORDP4UIPROC __glewTexCoordP4ui = mockgl_TexCoordP4ui;

void  mockgl_TexCoordP4uiv(GLenum type, const GLuint * coords)
{
    return getGlMock()->gl_TexCoordP4uiv(type, coords);
}
PFNGLTEXCOORDP4UIVPROC __glewTexCoordP4uiv = mockgl_TexCoordP4uiv;

void  mockgl_VertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return getGlMock()->gl_VertexAttribP1ui(index, type, normalized, value);
}
PFNGLVERTEXATTRIBP1UIPROC __glewVertexAttribP1ui = mockgl_VertexAttribP1ui;

void  mockgl_VertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return getGlMock()->gl_VertexAttribP1uiv(index, type, normalized, value);
}
PFNGLVERTEXATTRIBP1UIVPROC __glewVertexAttribP1uiv = mockgl_VertexAttribP1uiv;

void  mockgl_VertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return getGlMock()->gl_VertexAttribP2ui(index, type, normalized, value);
}
PFNGLVERTEXATTRIBP2UIPROC __glewVertexAttribP2ui = mockgl_VertexAttribP2ui;

void  mockgl_VertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return getGlMock()->gl_VertexAttribP2uiv(index, type, normalized, value);
}
PFNGLVERTEXATTRIBP2UIVPROC __glewVertexAttribP2uiv = mockgl_VertexAttribP2uiv;

void  mockgl_VertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return getGlMock()->gl_VertexAttribP3ui(index, type, normalized, value);
}
PFNGLVERTEXATTRIBP3UIPROC __glewVertexAttribP3ui = mockgl_VertexAttribP3ui;

void  mockgl_VertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return getGlMock()->gl_VertexAttribP3uiv(index, type, normalized, value);
}
PFNGLVERTEXATTRIBP3UIVPROC __glewVertexAttribP3uiv = mockgl_VertexAttribP3uiv;

void  mockgl_VertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return getGlMock()->gl_VertexAttribP4ui(index, type, normalized, value);
}
PFNGLVERTEXATTRIBP4UIPROC __glewVertexAttribP4ui = mockgl_VertexAttribP4ui;

void  mockgl_VertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return getGlMock()->gl_VertexAttribP4uiv(index, type, normalized, value);
}
PFNGLVERTEXATTRIBP4UIVPROC __glewVertexAttribP4uiv = mockgl_VertexAttribP4uiv;

void  mockgl_VertexP2ui(GLenum type, GLuint value)
{
    return getGlMock()->gl_VertexP2ui(type, value);
}
PFNGLVERTEXP2UIPROC __glewVertexP2ui = mockgl_VertexP2ui;

void  mockgl_VertexP2uiv(GLenum type, const GLuint * value)
{
    return getGlMock()->gl_VertexP2uiv(type, value);
}
PFNGLVERTEXP2UIVPROC __glewVertexP2uiv = mockgl_VertexP2uiv;

void  mockgl_VertexP3ui(GLenum type, GLuint value)
{
    return getGlMock()->gl_VertexP3ui(type, value);
}
PFNGLVERTEXP3UIPROC __glewVertexP3ui = mockgl_VertexP3ui;

void  mockgl_VertexP3uiv(GLenum type, const GLuint * value)
{
    return getGlMock()->gl_VertexP3uiv(type, value);
}
PFNGLVERTEXP3UIVPROC __glewVertexP3uiv = mockgl_VertexP3uiv;

void  mockgl_VertexP4ui(GLenum type, GLuint value)
{
    return getGlMock()->gl_VertexP4ui(type, value);
}
PFNGLVERTEXP4UIPROC __glewVertexP4ui = mockgl_VertexP4ui;

void  mockgl_VertexP4uiv(GLenum type, const GLuint * value)
{
    return getGlMock()->gl_VertexP4uiv(type, value);
}
PFNGLVERTEXP4UIVPROC __glewVertexP4uiv = mockgl_VertexP4uiv;

void  mockgl_DepthRangeArrayv(GLuint first, GLsizei count, const GLclampd * v)
{
    return getGlMock()->gl_DepthRangeArrayv(first, count, v);
}
PFNGLDEPTHRANGEARRAYVPROC __glewDepthRangeArrayv = mockgl_DepthRangeArrayv;

void  mockgl_DepthRangeIndexed(GLuint index, GLclampd n, GLclampd f)
{
    return getGlMock()->gl_DepthRangeIndexed(index, n, f);
}
PFNGLDEPTHRANGEINDEXEDPROC __glewDepthRangeIndexed = mockgl_DepthRangeIndexed;

void  mockgl_GetDoublei_v(GLenum target, GLuint index, GLdouble * data)
{
    return getGlMock()->gl_GetDoublei_v(target, index, data);
}
PFNGLGETDOUBLEI_VPROC __glewGetDoublei_v = mockgl_GetDoublei_v;

void  mockgl_GetFloati_v(GLenum target, GLuint index, GLfloat * data)
{
    return getGlMock()->gl_GetFloati_v(target, index, data);
}
PFNGLGETFLOATI_VPROC __glewGetFloati_v = mockgl_GetFloati_v;

void  mockgl_ScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
    return getGlMock()->gl_ScissorArrayv(first, count, v);
}
PFNGLSCISSORARRAYVPROC __glewScissorArrayv = mockgl_ScissorArrayv;

void  mockgl_ScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_ScissorIndexed(index, left, bottom, width, height);
}
PFNGLSCISSORINDEXEDPROC __glewScissorIndexed = mockgl_ScissorIndexed;

void  mockgl_ScissorIndexedv(GLuint index, const GLint * v)
{
    return getGlMock()->gl_ScissorIndexedv(index, v);
}
PFNGLSCISSORINDEXEDVPROC __glewScissorIndexedv = mockgl_ScissorIndexedv;

void  mockgl_ViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
    return getGlMock()->gl_ViewportArrayv(first, count, v);
}
PFNGLVIEWPORTARRAYVPROC __glewViewportArrayv = mockgl_ViewportArrayv;

void  mockgl_ViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return getGlMock()->gl_ViewportIndexedf(index, x, y, w, h);
}
PFNGLVIEWPORTINDEXEDFPROC __glewViewportIndexedf = mockgl_ViewportIndexedf;

void  mockgl_ViewportIndexedfv(GLuint index, const GLfloat * v)
{
    return getGlMock()->gl_ViewportIndexedfv(index, v);
}
PFNGLVIEWPORTINDEXEDFVPROC __glewViewportIndexedfv = mockgl_ViewportIndexedfv;

void  mockgl_WindowPos2dARB(GLdouble x, GLdouble y)
{
    return getGlMock()->gl_WindowPos2dARB(x, y);
}
PFNGLWINDOWPOS2DARBPROC __glewWindowPos2dARB = mockgl_WindowPos2dARB;

void  mockgl_WindowPos2dvARB(const GLdouble * p)
{
    return getGlMock()->gl_WindowPos2dvARB(p);
}
PFNGLWINDOWPOS2DVARBPROC __glewWindowPos2dvARB = mockgl_WindowPos2dvARB;

void  mockgl_WindowPos2fARB(GLfloat x, GLfloat y)
{
    return getGlMock()->gl_WindowPos2fARB(x, y);
}
PFNGLWINDOWPOS2FARBPROC __glewWindowPos2fARB = mockgl_WindowPos2fARB;

void  mockgl_WindowPos2fvARB(const GLfloat * p)
{
    return getGlMock()->gl_WindowPos2fvARB(p);
}
PFNGLWINDOWPOS2FVARBPROC __glewWindowPos2fvARB = mockgl_WindowPos2fvARB;

void  mockgl_WindowPos2iARB(GLint x, GLint y)
{
    return getGlMock()->gl_WindowPos2iARB(x, y);
}
PFNGLWINDOWPOS2IARBPROC __glewWindowPos2iARB = mockgl_WindowPos2iARB;

void  mockgl_WindowPos2ivARB(const GLint * p)
{
    return getGlMock()->gl_WindowPos2ivARB(p);
}
PFNGLWINDOWPOS2IVARBPROC __glewWindowPos2ivARB = mockgl_WindowPos2ivARB;

void  mockgl_WindowPos2sARB(GLshort x, GLshort y)
{
    return getGlMock()->gl_WindowPos2sARB(x, y);
}
PFNGLWINDOWPOS2SARBPROC __glewWindowPos2sARB = mockgl_WindowPos2sARB;

void  mockgl_WindowPos2svARB(const GLshort * p)
{
    return getGlMock()->gl_WindowPos2svARB(p);
}
PFNGLWINDOWPOS2SVARBPROC __glewWindowPos2svARB = mockgl_WindowPos2svARB;

void  mockgl_WindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_WindowPos3dARB(x, y, z);
}
PFNGLWINDOWPOS3DARBPROC __glewWindowPos3dARB = mockgl_WindowPos3dARB;

void  mockgl_WindowPos3dvARB(const GLdouble * p)
{
    return getGlMock()->gl_WindowPos3dvARB(p);
}
PFNGLWINDOWPOS3DVARBPROC __glewWindowPos3dvARB = mockgl_WindowPos3dvARB;

void  mockgl_WindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_WindowPos3fARB(x, y, z);
}
PFNGLWINDOWPOS3FARBPROC __glewWindowPos3fARB = mockgl_WindowPos3fARB;

void  mockgl_WindowPos3fvARB(const GLfloat * p)
{
    return getGlMock()->gl_WindowPos3fvARB(p);
}
PFNGLWINDOWPOS3FVARBPROC __glewWindowPos3fvARB = mockgl_WindowPos3fvARB;

void  mockgl_WindowPos3iARB(GLint x, GLint y, GLint z)
{
    return getGlMock()->gl_WindowPos3iARB(x, y, z);
}
PFNGLWINDOWPOS3IARBPROC __glewWindowPos3iARB = mockgl_WindowPos3iARB;

void  mockgl_WindowPos3ivARB(const GLint * p)
{
    return getGlMock()->gl_WindowPos3ivARB(p);
}
PFNGLWINDOWPOS3IVARBPROC __glewWindowPos3ivARB = mockgl_WindowPos3ivARB;

void  mockgl_WindowPos3sARB(GLshort x, GLshort y, GLshort z)
{
    return getGlMock()->gl_WindowPos3sARB(x, y, z);
}
PFNGLWINDOWPOS3SARBPROC __glewWindowPos3sARB = mockgl_WindowPos3sARB;

void  mockgl_WindowPos3svARB(const GLshort * p)
{
    return getGlMock()->gl_WindowPos3svARB(p);
}
PFNGLWINDOWPOS3SVARBPROC __glewWindowPos3svARB = mockgl_WindowPos3svARB;

void  mockgl_DrawBuffersATI(GLsizei n, const GLenum * bufs)
{
    return getGlMock()->gl_DrawBuffersATI(n, bufs);
}
PFNGLDRAWBUFFERSATIPROC __glewDrawBuffersATI = mockgl_DrawBuffersATI;

void  mockgl_DrawElementArrayATI(GLenum mode, GLsizei count)
{
    return getGlMock()->gl_DrawElementArrayATI(mode, count);
}
PFNGLDRAWELEMENTARRAYATIPROC __glewDrawElementArrayATI = mockgl_DrawElementArrayATI;

void  mockgl_DrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count)
{
    return getGlMock()->gl_DrawRangeElementArrayATI(mode, start, end, count);
}
PFNGLDRAWRANGEELEMENTARRAYATIPROC __glewDrawRangeElementArrayATI = mockgl_DrawRangeElementArrayATI;

void  mockgl_ElementPointerATI(GLenum type, const void * pointer)
{
    return getGlMock()->gl_ElementPointerATI(type, pointer);
}
PFNGLELEMENTPOINTERATIPROC __glewElementPointerATI = mockgl_ElementPointerATI;

void  mockgl_GetTexBumpParameterfvATI(GLenum pname, GLfloat * param)
{
    return getGlMock()->gl_GetTexBumpParameterfvATI(pname, param);
}
PFNGLGETTEXBUMPPARAMETERFVATIPROC __glewGetTexBumpParameterfvATI = mockgl_GetTexBumpParameterfvATI;

void  mockgl_GetTexBumpParameterivATI(GLenum pname, GLint * param)
{
    return getGlMock()->gl_GetTexBumpParameterivATI(pname, param);
}
PFNGLGETTEXBUMPPARAMETERIVATIPROC __glewGetTexBumpParameterivATI = mockgl_GetTexBumpParameterivATI;

void  mockgl_TexBumpParameterfvATI(GLenum pname, GLfloat * param)
{
    return getGlMock()->gl_TexBumpParameterfvATI(pname, param);
}
PFNGLTEXBUMPPARAMETERFVATIPROC __glewTexBumpParameterfvATI = mockgl_TexBumpParameterfvATI;

void  mockgl_TexBumpParameterivATI(GLenum pname, GLint * param)
{
    return getGlMock()->gl_TexBumpParameterivATI(pname, param);
}
PFNGLTEXBUMPPARAMETERIVATIPROC __glewTexBumpParameterivATI = mockgl_TexBumpParameterivATI;

void  mockgl_AlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return getGlMock()->gl_AlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
}
PFNGLALPHAFRAGMENTOP1ATIPROC __glewAlphaFragmentOp1ATI = mockgl_AlphaFragmentOp1ATI;

void  mockgl_AlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return getGlMock()->gl_AlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}
PFNGLALPHAFRAGMENTOP2ATIPROC __glewAlphaFragmentOp2ATI = mockgl_AlphaFragmentOp2ATI;

void  mockgl_BeginFragmentShaderATI()
{
    return getGlMock()->gl_BeginFragmentShaderATI();
}
PFNGLBEGINFRAGMENTSHADERATIPROC __glewBeginFragmentShaderATI = mockgl_BeginFragmentShaderATI;

void  mockgl_BindFragmentShaderATI(GLuint id)
{
    return getGlMock()->gl_BindFragmentShaderATI(id);
}
PFNGLBINDFRAGMENTSHADERATIPROC __glewBindFragmentShaderATI = mockgl_BindFragmentShaderATI;

void  mockgl_ColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return getGlMock()->gl_ColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
}
PFNGLCOLORFRAGMENTOP1ATIPROC __glewColorFragmentOp1ATI = mockgl_ColorFragmentOp1ATI;

void  mockgl_ColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return getGlMock()->gl_ColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}
PFNGLCOLORFRAGMENTOP2ATIPROC __glewColorFragmentOp2ATI = mockgl_ColorFragmentOp2ATI;

void  mockgl_DeleteFragmentShaderATI(GLuint id)
{
    return getGlMock()->gl_DeleteFragmentShaderATI(id);
}
PFNGLDELETEFRAGMENTSHADERATIPROC __glewDeleteFragmentShaderATI = mockgl_DeleteFragmentShaderATI;

void  mockgl_EndFragmentShaderATI()
{
    return getGlMock()->gl_EndFragmentShaderATI();
}
PFNGLENDFRAGMENTSHADERATIPROC __glewEndFragmentShaderATI = mockgl_EndFragmentShaderATI;

unsigned int  mockgl_GenFragmentShadersATI(GLuint range)
{
    return getGlMock()->gl_GenFragmentShadersATI(range);
}
PFNGLGENFRAGMENTSHADERSATIPROC __glewGenFragmentShadersATI = mockgl_GenFragmentShadersATI;

void  mockgl_PassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle)
{
    return getGlMock()->gl_PassTexCoordATI(dst, coord, swizzle);
}
PFNGLPASSTEXCOORDATIPROC __glewPassTexCoordATI = mockgl_PassTexCoordATI;

void  mockgl_SampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
{
    return getGlMock()->gl_SampleMapATI(dst, interp, swizzle);
}
PFNGLSAMPLEMAPATIPROC __glewSampleMapATI = mockgl_SampleMapATI;

void  mockgl_SetFragmentShaderConstantATI(GLuint dst, const GLfloat * value)
{
    return getGlMock()->gl_SetFragmentShaderConstantATI(dst, value);
}
PFNGLSETFRAGMENTSHADERCONSTANTATIPROC __glewSetFragmentShaderConstantATI = mockgl_SetFragmentShaderConstantATI;

void * mockgl_MapObjectBufferATI(GLuint buffer)
{
    return getGlMock()->gl_MapObjectBufferATI(buffer);
}
PFNGLMAPOBJECTBUFFERATIPROC __glewMapObjectBufferATI = mockgl_MapObjectBufferATI;

void  mockgl_UnmapObjectBufferATI(GLuint buffer)
{
    return getGlMock()->gl_UnmapObjectBufferATI(buffer);
}
PFNGLUNMAPOBJECTBUFFERATIPROC __glewUnmapObjectBufferATI = mockgl_UnmapObjectBufferATI;

void  mockgl_PNTrianglesfATI(GLenum pname, GLfloat param)
{
    return getGlMock()->gl_PNTrianglesfATI(pname, param);
}
PFNGLPNTRIANGLESFATIPROC __glewPNTrianglesfATI = mockgl_PNTrianglesfATI;

void  mockgl_PNTrianglesiATI(GLenum pname, GLint param)
{
    return getGlMock()->gl_PNTrianglesiATI(pname, param);
}
PFNGLPNTRIANGLESIATIPROC __glewPNTrianglesiATI = mockgl_PNTrianglesiATI;

void  mockgl_StencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
    return getGlMock()->gl_StencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
}
PFNGLSTENCILFUNCSEPARATEATIPROC __glewStencilFuncSeparateATI = mockgl_StencilFuncSeparateATI;

void  mockgl_StencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return getGlMock()->gl_StencilOpSeparateATI(face, sfail, dpfail, dppass);
}
PFNGLSTENCILOPSEPARATEATIPROC __glewStencilOpSeparateATI = mockgl_StencilOpSeparateATI;

void  mockgl_ArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return getGlMock()->gl_ArrayObjectATI(array, size, type, stride, buffer, offset);
}
PFNGLARRAYOBJECTATIPROC __glewArrayObjectATI = mockgl_ArrayObjectATI;

void  mockgl_FreeObjectBufferATI(GLuint buffer)
{
    return getGlMock()->gl_FreeObjectBufferATI(buffer);
}
PFNGLFREEOBJECTBUFFERATIPROC __glewFreeObjectBufferATI = mockgl_FreeObjectBufferATI;

void  mockgl_GetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetArrayObjectfvATI(array, pname, params);
}
PFNGLGETARRAYOBJECTFVATIPROC __glewGetArrayObjectfvATI = mockgl_GetArrayObjectfvATI;

void  mockgl_GetArrayObjectivATI(GLenum array, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetArrayObjectivATI(array, pname, params);
}
PFNGLGETARRAYOBJECTIVATIPROC __glewGetArrayObjectivATI = mockgl_GetArrayObjectivATI;

void  mockgl_GetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetObjectBufferfvATI(buffer, pname, params);
}
PFNGLGETOBJECTBUFFERFVATIPROC __glewGetObjectBufferfvATI = mockgl_GetObjectBufferfvATI;

void  mockgl_GetObjectBufferivATI(GLuint buffer, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetObjectBufferivATI(buffer, pname, params);
}
PFNGLGETOBJECTBUFFERIVATIPROC __glewGetObjectBufferivATI = mockgl_GetObjectBufferivATI;

void  mockgl_GetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetVariantArrayObjectfvATI(id, pname, params);
}
PFNGLGETVARIANTARRAYOBJECTFVATIPROC __glewGetVariantArrayObjectfvATI = mockgl_GetVariantArrayObjectfvATI;

void  mockgl_GetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetVariantArrayObjectivATI(id, pname, params);
}
PFNGLGETVARIANTARRAYOBJECTIVATIPROC __glewGetVariantArrayObjectivATI = mockgl_GetVariantArrayObjectivATI;

unsigned char  mockgl_IsObjectBufferATI(GLuint buffer)
{
    return getGlMock()->gl_IsObjectBufferATI(buffer);
}
PFNGLISOBJECTBUFFERATIPROC __glewIsObjectBufferATI = mockgl_IsObjectBufferATI;

unsigned int  mockgl_NewObjectBufferATI(GLsizei size, const void * pointer, GLenum usage)
{
    return getGlMock()->gl_NewObjectBufferATI(size, pointer, usage);
}
PFNGLNEWOBJECTBUFFERATIPROC __glewNewObjectBufferATI = mockgl_NewObjectBufferATI;

void  mockgl_UpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const void * pointer, GLenum preserve)
{
    return getGlMock()->gl_UpdateObjectBufferATI(buffer, offset, size, pointer, preserve);
}
PFNGLUPDATEOBJECTBUFFERATIPROC __glewUpdateObjectBufferATI = mockgl_UpdateObjectBufferATI;

void  mockgl_VariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return getGlMock()->gl_VariantArrayObjectATI(id, type, stride, buffer, offset);
}
PFNGLVARIANTARRAYOBJECTATIPROC __glewVariantArrayObjectATI = mockgl_VariantArrayObjectATI;

void  mockgl_GetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetVertexAttribArrayObjectfvATI(index, pname, params);
}
PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC __glewGetVertexAttribArrayObjectfvATI = mockgl_GetVertexAttribArrayObjectfvATI;

void  mockgl_GetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetVertexAttribArrayObjectivATI(index, pname, params);
}
PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC __glewGetVertexAttribArrayObjectivATI = mockgl_GetVertexAttribArrayObjectivATI;

void  mockgl_VertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset)
{
    return getGlMock()->gl_VertexAttribArrayObjectATI(index, size, type, normalized, stride, buffer, offset);
}
PFNGLVERTEXATTRIBARRAYOBJECTATIPROC __glewVertexAttribArrayObjectATI = mockgl_VertexAttribArrayObjectATI;

void  mockgl_ClientActiveVertexStreamATI(GLenum stream)
{
    return getGlMock()->gl_ClientActiveVertexStreamATI(stream);
}
PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC __glewClientActiveVertexStreamATI = mockgl_ClientActiveVertexStreamATI;

void  mockgl_NormalStream3bATI(GLenum stream, GLbyte x, GLbyte y, GLbyte z)
{
    return getGlMock()->gl_NormalStream3bATI(stream, x, y, z);
}
PFNGLNORMALSTREAM3BATIPROC __glewNormalStream3bATI = mockgl_NormalStream3bATI;

void  mockgl_NormalStream3bvATI(GLenum stream, const GLbyte * v)
{
    return getGlMock()->gl_NormalStream3bvATI(stream, v);
}
PFNGLNORMALSTREAM3BVATIPROC __glewNormalStream3bvATI = mockgl_NormalStream3bvATI;

void  mockgl_NormalStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_NormalStream3dATI(stream, x, y, z);
}
PFNGLNORMALSTREAM3DATIPROC __glewNormalStream3dATI = mockgl_NormalStream3dATI;

void  mockgl_NormalStream3dvATI(GLenum stream, const GLdouble * v)
{
    return getGlMock()->gl_NormalStream3dvATI(stream, v);
}
PFNGLNORMALSTREAM3DVATIPROC __glewNormalStream3dvATI = mockgl_NormalStream3dvATI;

void  mockgl_NormalStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_NormalStream3fATI(stream, x, y, z);
}
PFNGLNORMALSTREAM3FATIPROC __glewNormalStream3fATI = mockgl_NormalStream3fATI;

void  mockgl_NormalStream3fvATI(GLenum stream, const GLfloat * v)
{
    return getGlMock()->gl_NormalStream3fvATI(stream, v);
}
PFNGLNORMALSTREAM3FVATIPROC __glewNormalStream3fvATI = mockgl_NormalStream3fvATI;

void  mockgl_NormalStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
{
    return getGlMock()->gl_NormalStream3iATI(stream, x, y, z);
}
PFNGLNORMALSTREAM3IATIPROC __glewNormalStream3iATI = mockgl_NormalStream3iATI;

void  mockgl_NormalStream3ivATI(GLenum stream, const GLint * v)
{
    return getGlMock()->gl_NormalStream3ivATI(stream, v);
}
PFNGLNORMALSTREAM3IVATIPROC __glewNormalStream3ivATI = mockgl_NormalStream3ivATI;

void  mockgl_NormalStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
{
    return getGlMock()->gl_NormalStream3sATI(stream, x, y, z);
}
PFNGLNORMALSTREAM3SATIPROC __glewNormalStream3sATI = mockgl_NormalStream3sATI;

void  mockgl_NormalStream3svATI(GLenum stream, const GLshort * v)
{
    return getGlMock()->gl_NormalStream3svATI(stream, v);
}
PFNGLNORMALSTREAM3SVATIPROC __glewNormalStream3svATI = mockgl_NormalStream3svATI;

void  mockgl_VertexBlendEnvfATI(GLenum pname, GLfloat param)
{
    return getGlMock()->gl_VertexBlendEnvfATI(pname, param);
}
PFNGLVERTEXBLENDENVFATIPROC __glewVertexBlendEnvfATI = mockgl_VertexBlendEnvfATI;

void  mockgl_VertexBlendEnviATI(GLenum pname, GLint param)
{
    return getGlMock()->gl_VertexBlendEnviATI(pname, param);
}
PFNGLVERTEXBLENDENVIATIPROC __glewVertexBlendEnviATI = mockgl_VertexBlendEnviATI;

void  mockgl_VertexStream2dATI(GLenum stream, GLdouble x, GLdouble y)
{
    return getGlMock()->gl_VertexStream2dATI(stream, x, y);
}
PFNGLVERTEXSTREAM2DATIPROC __glewVertexStream2dATI = mockgl_VertexStream2dATI;

void  mockgl_VertexStream2dvATI(GLenum stream, const GLdouble * v)
{
    return getGlMock()->gl_VertexStream2dvATI(stream, v);
}
PFNGLVERTEXSTREAM2DVATIPROC __glewVertexStream2dvATI = mockgl_VertexStream2dvATI;

void  mockgl_VertexStream2fATI(GLenum stream, GLfloat x, GLfloat y)
{
    return getGlMock()->gl_VertexStream2fATI(stream, x, y);
}
PFNGLVERTEXSTREAM2FATIPROC __glewVertexStream2fATI = mockgl_VertexStream2fATI;

void  mockgl_VertexStream2fvATI(GLenum stream, const GLfloat * v)
{
    return getGlMock()->gl_VertexStream2fvATI(stream, v);
}
PFNGLVERTEXSTREAM2FVATIPROC __glewVertexStream2fvATI = mockgl_VertexStream2fvATI;

void  mockgl_VertexStream2iATI(GLenum stream, GLint x, GLint y)
{
    return getGlMock()->gl_VertexStream2iATI(stream, x, y);
}
PFNGLVERTEXSTREAM2IATIPROC __glewVertexStream2iATI = mockgl_VertexStream2iATI;

void  mockgl_VertexStream2ivATI(GLenum stream, const GLint * v)
{
    return getGlMock()->gl_VertexStream2ivATI(stream, v);
}
PFNGLVERTEXSTREAM2IVATIPROC __glewVertexStream2ivATI = mockgl_VertexStream2ivATI;

void  mockgl_VertexStream2sATI(GLenum stream, GLshort x, GLshort y)
{
    return getGlMock()->gl_VertexStream2sATI(stream, x, y);
}
PFNGLVERTEXSTREAM2SATIPROC __glewVertexStream2sATI = mockgl_VertexStream2sATI;

void  mockgl_VertexStream2svATI(GLenum stream, const GLshort * v)
{
    return getGlMock()->gl_VertexStream2svATI(stream, v);
}
PFNGLVERTEXSTREAM2SVATIPROC __glewVertexStream2svATI = mockgl_VertexStream2svATI;

void  mockgl_VertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_VertexStream3dATI(stream, x, y, z);
}
PFNGLVERTEXSTREAM3DATIPROC __glewVertexStream3dATI = mockgl_VertexStream3dATI;

void  mockgl_VertexStream3dvATI(GLenum stream, const GLdouble * v)
{
    return getGlMock()->gl_VertexStream3dvATI(stream, v);
}
PFNGLVERTEXSTREAM3DVATIPROC __glewVertexStream3dvATI = mockgl_VertexStream3dvATI;

void  mockgl_VertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_VertexStream3fATI(stream, x, y, z);
}
PFNGLVERTEXSTREAM3FATIPROC __glewVertexStream3fATI = mockgl_VertexStream3fATI;

void  mockgl_VertexStream3fvATI(GLenum stream, const GLfloat * v)
{
    return getGlMock()->gl_VertexStream3fvATI(stream, v);
}
PFNGLVERTEXSTREAM3FVATIPROC __glewVertexStream3fvATI = mockgl_VertexStream3fvATI;

void  mockgl_VertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
{
    return getGlMock()->gl_VertexStream3iATI(stream, x, y, z);
}
PFNGLVERTEXSTREAM3IATIPROC __glewVertexStream3iATI = mockgl_VertexStream3iATI;

void  mockgl_VertexStream3ivATI(GLenum stream, const GLint * v)
{
    return getGlMock()->gl_VertexStream3ivATI(stream, v);
}
PFNGLVERTEXSTREAM3IVATIPROC __glewVertexStream3ivATI = mockgl_VertexStream3ivATI;

void  mockgl_VertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
{
    return getGlMock()->gl_VertexStream3sATI(stream, x, y, z);
}
PFNGLVERTEXSTREAM3SATIPROC __glewVertexStream3sATI = mockgl_VertexStream3sATI;

void  mockgl_VertexStream3svATI(GLenum stream, const GLshort * v)
{
    return getGlMock()->gl_VertexStream3svATI(stream, v);
}
PFNGLVERTEXSTREAM3SVATIPROC __glewVertexStream3svATI = mockgl_VertexStream3svATI;

void  mockgl_VertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_VertexStream4dATI(stream, x, y, z, w);
}
PFNGLVERTEXSTREAM4DATIPROC __glewVertexStream4dATI = mockgl_VertexStream4dATI;

void  mockgl_VertexStream4dvATI(GLenum stream, const GLdouble * v)
{
    return getGlMock()->gl_VertexStream4dvATI(stream, v);
}
PFNGLVERTEXSTREAM4DVATIPROC __glewVertexStream4dvATI = mockgl_VertexStream4dvATI;

void  mockgl_VertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return getGlMock()->gl_VertexStream4fATI(stream, x, y, z, w);
}
PFNGLVERTEXSTREAM4FATIPROC __glewVertexStream4fATI = mockgl_VertexStream4fATI;

void  mockgl_VertexStream4fvATI(GLenum stream, const GLfloat * v)
{
    return getGlMock()->gl_VertexStream4fvATI(stream, v);
}
PFNGLVERTEXSTREAM4FVATIPROC __glewVertexStream4fvATI = mockgl_VertexStream4fvATI;

void  mockgl_VertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w)
{
    return getGlMock()->gl_VertexStream4iATI(stream, x, y, z, w);
}
PFNGLVERTEXSTREAM4IATIPROC __glewVertexStream4iATI = mockgl_VertexStream4iATI;

void  mockgl_VertexStream4ivATI(GLenum stream, const GLint * v)
{
    return getGlMock()->gl_VertexStream4ivATI(stream, v);
}
PFNGLVERTEXSTREAM4IVATIPROC __glewVertexStream4ivATI = mockgl_VertexStream4ivATI;

void  mockgl_VertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return getGlMock()->gl_VertexStream4sATI(stream, x, y, z, w);
}
PFNGLVERTEXSTREAM4SATIPROC __glewVertexStream4sATI = mockgl_VertexStream4sATI;

void  mockgl_VertexStream4svATI(GLenum stream, const GLshort * v)
{
    return getGlMock()->gl_VertexStream4svATI(stream, v);
}
PFNGLVERTEXSTREAM4SVATIPROC __glewVertexStream4svATI = mockgl_VertexStream4svATI;

int  mockgl_GetUniformBufferSizeEXT(GLuint program, GLint location)
{
    return getGlMock()->gl_GetUniformBufferSizeEXT(program, location);
}
PFNGLGETUNIFORMBUFFERSIZEEXTPROC __glewGetUniformBufferSizeEXT = mockgl_GetUniformBufferSizeEXT;

long  mockgl_GetUniformOffsetEXT(GLuint program, GLint location)
{
    return getGlMock()->gl_GetUniformOffsetEXT(program, location);
}
PFNGLGETUNIFORMOFFSETEXTPROC __glewGetUniformOffsetEXT = mockgl_GetUniformOffsetEXT;

void  mockgl_UniformBufferEXT(GLuint program, GLint location, GLuint buffer)
{
    return getGlMock()->gl_UniformBufferEXT(program, location, buffer);
}
PFNGLUNIFORMBUFFEREXTPROC __glewUniformBufferEXT = mockgl_UniformBufferEXT;

void  mockgl_BlendColorEXT(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
    return getGlMock()->gl_BlendColorEXT(red, green, blue, alpha);
}
PFNGLBLENDCOLOREXTPROC __glewBlendColorEXT = mockgl_BlendColorEXT;

void  mockgl_BlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
    return getGlMock()->gl_BlendEquationSeparateEXT(modeRGB, modeAlpha);
}
PFNGLBLENDEQUATIONSEPARATEEXTPROC __glewBlendEquationSeparateEXT = mockgl_BlendEquationSeparateEXT;

void  mockgl_BlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return getGlMock()->gl_BlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}
PFNGLBLENDFUNCSEPARATEEXTPROC __glewBlendFuncSeparateEXT = mockgl_BlendFuncSeparateEXT;

void  mockgl_BlendEquationEXT(GLenum mode)
{
    return getGlMock()->gl_BlendEquationEXT(mode);
}
PFNGLBLENDEQUATIONEXTPROC __glewBlendEquationEXT = mockgl_BlendEquationEXT;

void  mockgl_ColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return getGlMock()->gl_ColorSubTableEXT(target, start, count, format, type, data);
}
PFNGLCOLORSUBTABLEEXTPROC __glewColorSubTableEXT = mockgl_ColorSubTableEXT;

void  mockgl_CopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return getGlMock()->gl_CopyColorSubTableEXT(target, start, x, y, width);
}
PFNGLCOPYCOLORSUBTABLEEXTPROC __glewCopyColorSubTableEXT = mockgl_CopyColorSubTableEXT;

void  mockgl_LockArraysEXT(GLint first, GLsizei count)
{
    return getGlMock()->gl_LockArraysEXT(first, count);
}
PFNGLLOCKARRAYSEXTPROC __glewLockArraysEXT = mockgl_LockArraysEXT;

void  mockgl_UnlockArraysEXT()
{
    return getGlMock()->gl_UnlockArraysEXT();
}
PFNGLUNLOCKARRAYSEXTPROC __glewUnlockArraysEXT = mockgl_UnlockArraysEXT;

void  mockgl_ConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return getGlMock()->gl_ConvolutionFilter1DEXT(target, internalformat, width, format, type, image);
}
PFNGLCONVOLUTIONFILTER1DEXTPROC __glewConvolutionFilter1DEXT = mockgl_ConvolutionFilter1DEXT;

void  mockgl_ConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return getGlMock()->gl_ConvolutionFilter2DEXT(target, internalformat, width, height, format, type, image);
}
PFNGLCONVOLUTIONFILTER2DEXTPROC __glewConvolutionFilter2DEXT = mockgl_ConvolutionFilter2DEXT;

void  mockgl_ConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat param)
{
    return getGlMock()->gl_ConvolutionParameterfEXT(target, pname, param);
}
PFNGLCONVOLUTIONPARAMETERFEXTPROC __glewConvolutionParameterfEXT = mockgl_ConvolutionParameterfEXT;

void  mockgl_ConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_ConvolutionParameterfvEXT(target, pname, params);
}
PFNGLCONVOLUTIONPARAMETERFVEXTPROC __glewConvolutionParameterfvEXT = mockgl_ConvolutionParameterfvEXT;

void  mockgl_ConvolutionParameteriEXT(GLenum target, GLenum pname, GLint param)
{
    return getGlMock()->gl_ConvolutionParameteriEXT(target, pname, param);
}
PFNGLCONVOLUTIONPARAMETERIEXTPROC __glewConvolutionParameteriEXT = mockgl_ConvolutionParameteriEXT;

void  mockgl_ConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_ConvolutionParameterivEXT(target, pname, params);
}
PFNGLCONVOLUTIONPARAMETERIVEXTPROC __glewConvolutionParameterivEXT = mockgl_ConvolutionParameterivEXT;

void  mockgl_CopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return getGlMock()->gl_CopyConvolutionFilter1DEXT(target, internalformat, x, y, width);
}
PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC __glewCopyConvolutionFilter1DEXT = mockgl_CopyConvolutionFilter1DEXT;

void  mockgl_CopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_CopyConvolutionFilter2DEXT(target, internalformat, x, y, width, height);
}
PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC __glewCopyConvolutionFilter2DEXT = mockgl_CopyConvolutionFilter2DEXT;

void  mockgl_GetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, void * image)
{
    return getGlMock()->gl_GetConvolutionFilterEXT(target, format, type, image);
}
PFNGLGETCONVOLUTIONFILTEREXTPROC __glewGetConvolutionFilterEXT = mockgl_GetConvolutionFilterEXT;

void  mockgl_GetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetConvolutionParameterfvEXT(target, pname, params);
}
PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC __glewGetConvolutionParameterfvEXT = mockgl_GetConvolutionParameterfvEXT;

void  mockgl_GetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetConvolutionParameterivEXT(target, pname, params);
}
PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC __glewGetConvolutionParameterivEXT = mockgl_GetConvolutionParameterivEXT;

void  mockgl_GetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return getGlMock()->gl_GetSeparableFilterEXT(target, format, type, row, column, span);
}
PFNGLGETSEPARABLEFILTEREXTPROC __glewGetSeparableFilterEXT = mockgl_GetSeparableFilterEXT;

void  mockgl_SeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return getGlMock()->gl_SeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);
}
PFNGLSEPARABLEFILTER2DEXTPROC __glewSeparableFilter2DEXT = mockgl_SeparableFilter2DEXT;

void  mockgl_BinormalPointerEXT(GLenum type, GLsizei stride, void * pointer)
{
    return getGlMock()->gl_BinormalPointerEXT(type, stride, pointer);
}
PFNGLBINORMALPOINTEREXTPROC __glewBinormalPointerEXT = mockgl_BinormalPointerEXT;

void  mockgl_TangentPointerEXT(GLenum type, GLsizei stride, void * pointer)
{
    return getGlMock()->gl_TangentPointerEXT(type, stride, pointer);
}
PFNGLTANGENTPOINTEREXTPROC __glewTangentPointerEXT = mockgl_TangentPointerEXT;

void  mockgl_CopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return getGlMock()->gl_CopyTexImage1DEXT(target, level, internalformat, x, y, width, border);
}
PFNGLCOPYTEXIMAGE1DEXTPROC __glewCopyTexImage1DEXT = mockgl_CopyTexImage1DEXT;

void  mockgl_CopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return getGlMock()->gl_CopyTexImage2DEXT(target, level, internalformat, x, y, width, height, border);
}
PFNGLCOPYTEXIMAGE2DEXTPROC __glewCopyTexImage2DEXT = mockgl_CopyTexImage2DEXT;

void  mockgl_CopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return getGlMock()->gl_CopyTexSubImage1DEXT(target, level, xoffset, x, y, width);
}
PFNGLCOPYTEXSUBIMAGE1DEXTPROC __glewCopyTexSubImage1DEXT = mockgl_CopyTexSubImage1DEXT;

void  mockgl_CopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_CopyTexSubImage2DEXT(target, level, xoffset, yoffset, x, y, width, height);
}
PFNGLCOPYTEXSUBIMAGE2DEXTPROC __glewCopyTexSubImage2DEXT = mockgl_CopyTexSubImage2DEXT;

void  mockgl_CopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_CopyTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}
PFNGLCOPYTEXSUBIMAGE3DEXTPROC __glewCopyTexSubImage3DEXT = mockgl_CopyTexSubImage3DEXT;

void  mockgl_CullParameterdvEXT(GLenum pname, GLdouble * params)
{
    return getGlMock()->gl_CullParameterdvEXT(pname, params);
}
PFNGLCULLPARAMETERDVEXTPROC __glewCullParameterdvEXT = mockgl_CullParameterdvEXT;

void  mockgl_CullParameterfvEXT(GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_CullParameterfvEXT(pname, params);
}
PFNGLCULLPARAMETERFVEXTPROC __glewCullParameterfvEXT = mockgl_CullParameterfvEXT;

void  mockgl_DepthBoundsEXT(GLclampd zmin, GLclampd zmax)
{
    return getGlMock()->gl_DepthBoundsEXT(zmin, zmax);
}
PFNGLDEPTHBOUNDSEXTPROC __glewDepthBoundsEXT = mockgl_DepthBoundsEXT;

void  mockgl_BindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture)
{
    return getGlMock()->gl_BindMultiTextureEXT(texunit, target, texture);
}
PFNGLBINDMULTITEXTUREEXTPROC __glewBindMultiTextureEXT = mockgl_BindMultiTextureEXT;

unsigned int  mockgl_CheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target)
{
    return getGlMock()->gl_CheckNamedFramebufferStatusEXT(framebuffer, target);
}
PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC __glewCheckNamedFramebufferStatusEXT = mockgl_CheckNamedFramebufferStatusEXT;

void  mockgl_ClientAttribDefaultEXT(GLbitfield mask)
{
    return getGlMock()->gl_ClientAttribDefaultEXT(mask);
}
PFNGLCLIENTATTRIBDEFAULTEXTPROC __glewClientAttribDefaultEXT = mockgl_ClientAttribDefaultEXT;

void  mockgl_CompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, data);
}
PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC __glewCompressedMultiTexImage1DEXT = mockgl_CompressedMultiTexImage1DEXT;

void  mockgl_CompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, data);
}
PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC __glewCompressedMultiTexImage2DEXT = mockgl_CompressedMultiTexImage2DEXT;

void  mockgl_CompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, data);
}
PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC __glewCompressedMultiTexImage3DEXT = mockgl_CompressedMultiTexImage3DEXT;

void  mockgl_CompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, data);
}
PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC __glewCompressedMultiTexSubImage1DEXT = mockgl_CompressedMultiTexSubImage1DEXT;

void  mockgl_CompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, data);
}
PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC __glewCompressedMultiTexSubImage2DEXT = mockgl_CompressedMultiTexSubImage2DEXT;

void  mockgl_CompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, data);
}
PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC __glewCompressedTextureImage1DEXT = mockgl_CompressedTextureImage1DEXT;

void  mockgl_CompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, data);
}
PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC __glewCompressedTextureImage2DEXT = mockgl_CompressedTextureImage2DEXT;

void  mockgl_CompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, data);
}
PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC __glewCompressedTextureImage3DEXT = mockgl_CompressedTextureImage3DEXT;

void  mockgl_CompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, data);
}
PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC __glewCompressedTextureSubImage1DEXT = mockgl_CompressedTextureSubImage1DEXT;

void  mockgl_CompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return getGlMock()->gl_CompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, data);
}
PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC __glewCompressedTextureSubImage2DEXT = mockgl_CompressedTextureSubImage2DEXT;

void  mockgl_CopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return getGlMock()->gl_CopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);
}
PFNGLCOPYMULTITEXIMAGE1DEXTPROC __glewCopyMultiTexImage1DEXT = mockgl_CopyMultiTexImage1DEXT;

void  mockgl_CopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return getGlMock()->gl_CopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);
}
PFNGLCOPYMULTITEXIMAGE2DEXTPROC __glewCopyMultiTexImage2DEXT = mockgl_CopyMultiTexImage2DEXT;

void  mockgl_CopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return getGlMock()->gl_CopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);
}
PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC __glewCopyMultiTexSubImage1DEXT = mockgl_CopyMultiTexSubImage1DEXT;

void  mockgl_CopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_CopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);
}
PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC __glewCopyMultiTexSubImage2DEXT = mockgl_CopyMultiTexSubImage2DEXT;

void  mockgl_CopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_CopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}
PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC __glewCopyMultiTexSubImage3DEXT = mockgl_CopyMultiTexSubImage3DEXT;

void  mockgl_CopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return getGlMock()->gl_CopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);
}
PFNGLCOPYTEXTUREIMAGE1DEXTPROC __glewCopyTextureImage1DEXT = mockgl_CopyTextureImage1DEXT;

void  mockgl_CopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return getGlMock()->gl_CopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);
}
PFNGLCOPYTEXTUREIMAGE2DEXTPROC __glewCopyTextureImage2DEXT = mockgl_CopyTextureImage2DEXT;

void  mockgl_CopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return getGlMock()->gl_CopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);
}
PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC __glewCopyTextureSubImage1DEXT = mockgl_CopyTextureSubImage1DEXT;

void  mockgl_CopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_CopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);
}
PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC __glewCopyTextureSubImage2DEXT = mockgl_CopyTextureSubImage2DEXT;

void  mockgl_CopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_CopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}
PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC __glewCopyTextureSubImage3DEXT = mockgl_CopyTextureSubImage3DEXT;

void  mockgl_DisableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return getGlMock()->gl_DisableClientStateIndexedEXT(array, index);
}
PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC __glewDisableClientStateIndexedEXT = mockgl_DisableClientStateIndexedEXT;

void  mockgl_DisableClientStateiEXT(GLenum array, GLuint index)
{
    return getGlMock()->gl_DisableClientStateiEXT(array, index);
}
PFNGLDISABLECLIENTSTATEIEXTPROC __glewDisableClientStateiEXT = mockgl_DisableClientStateiEXT;

void  mockgl_DisableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return getGlMock()->gl_DisableVertexArrayAttribEXT(vaobj, index);
}
PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC __glewDisableVertexArrayAttribEXT = mockgl_DisableVertexArrayAttribEXT;

void  mockgl_DisableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return getGlMock()->gl_DisableVertexArrayEXT(vaobj, array);
}
PFNGLDISABLEVERTEXARRAYEXTPROC __glewDisableVertexArrayEXT = mockgl_DisableVertexArrayEXT;

void  mockgl_EnableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return getGlMock()->gl_EnableClientStateIndexedEXT(array, index);
}
PFNGLENABLECLIENTSTATEINDEXEDEXTPROC __glewEnableClientStateIndexedEXT = mockgl_EnableClientStateIndexedEXT;

void  mockgl_EnableClientStateiEXT(GLenum array, GLuint index)
{
    return getGlMock()->gl_EnableClientStateiEXT(array, index);
}
PFNGLENABLECLIENTSTATEIEXTPROC __glewEnableClientStateiEXT = mockgl_EnableClientStateiEXT;

void  mockgl_EnableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return getGlMock()->gl_EnableVertexArrayAttribEXT(vaobj, index);
}
PFNGLENABLEVERTEXARRAYATTRIBEXTPROC __glewEnableVertexArrayAttribEXT = mockgl_EnableVertexArrayAttribEXT;

void  mockgl_EnableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return getGlMock()->gl_EnableVertexArrayEXT(vaobj, array);
}
PFNGLENABLEVERTEXARRAYEXTPROC __glewEnableVertexArrayEXT = mockgl_EnableVertexArrayEXT;

void  mockgl_FlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return getGlMock()->gl_FlushMappedNamedBufferRangeEXT(buffer, offset, length);
}
PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC __glewFlushMappedNamedBufferRangeEXT = mockgl_FlushMappedNamedBufferRangeEXT;

void  mockgl_FramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode)
{
    return getGlMock()->gl_FramebufferDrawBufferEXT(framebuffer, mode);
}
PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC __glewFramebufferDrawBufferEXT = mockgl_FramebufferDrawBufferEXT;

void  mockgl_FramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
    return getGlMock()->gl_FramebufferDrawBuffersEXT(framebuffer, n, bufs);
}
PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC __glewFramebufferDrawBuffersEXT = mockgl_FramebufferDrawBuffersEXT;

void  mockgl_FramebufferReadBufferEXT(GLuint framebuffer, GLenum mode)
{
    return getGlMock()->gl_FramebufferReadBufferEXT(framebuffer, mode);
}
PFNGLFRAMEBUFFERREADBUFFEREXTPROC __glewFramebufferReadBufferEXT = mockgl_FramebufferReadBufferEXT;

void  mockgl_GenerateMultiTexMipmapEXT(GLenum texunit, GLenum target)
{
    return getGlMock()->gl_GenerateMultiTexMipmapEXT(texunit, target);
}
PFNGLGENERATEMULTITEXMIPMAPEXTPROC __glewGenerateMultiTexMipmapEXT = mockgl_GenerateMultiTexMipmapEXT;

void  mockgl_GenerateTextureMipmapEXT(GLuint texture, GLenum target)
{
    return getGlMock()->gl_GenerateTextureMipmapEXT(texture, target);
}
PFNGLGENERATETEXTUREMIPMAPEXTPROC __glewGenerateTextureMipmapEXT = mockgl_GenerateTextureMipmapEXT;

void  mockgl_GetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, void * img)
{
    return getGlMock()->gl_GetCompressedMultiTexImageEXT(texunit, target, level, img);
}
PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC __glewGetCompressedMultiTexImageEXT = mockgl_GetCompressedMultiTexImageEXT;

void  mockgl_GetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint level, void * img)
{
    return getGlMock()->gl_GetCompressedTextureImageEXT(texture, target, level, img);
}
PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC __glewGetCompressedTextureImageEXT = mockgl_GetCompressedTextureImageEXT;

void  mockgl_GetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble * params)
{
    return getGlMock()->gl_GetDoubleIndexedvEXT(target, index, params);
}
PFNGLGETDOUBLEINDEXEDVEXTPROC __glewGetDoubleIndexedvEXT = mockgl_GetDoubleIndexedvEXT;

void  mockgl_GetDoublei_vEXT(GLenum pname, GLuint index, GLdouble * params)
{
    return getGlMock()->gl_GetDoublei_vEXT(pname, index, params);
}
PFNGLGETDOUBLEI_VEXTPROC __glewGetDoublei_vEXT = mockgl_GetDoublei_vEXT;

void  mockgl_GetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat * params)
{
    return getGlMock()->gl_GetFloatIndexedvEXT(target, index, params);
}
PFNGLGETFLOATINDEXEDVEXTPROC __glewGetFloatIndexedvEXT = mockgl_GetFloatIndexedvEXT;

void  mockgl_GetFloati_vEXT(GLenum pname, GLuint index, GLfloat * params)
{
    return getGlMock()->gl_GetFloati_vEXT(pname, index, params);
}
PFNGLGETFLOATI_VEXTPROC __glewGetFloati_vEXT = mockgl_GetFloati_vEXT;

void  mockgl_GetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * param)
{
    return getGlMock()->gl_GetFramebufferParameterivEXT(framebuffer, pname, param);
}
PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC __glewGetFramebufferParameterivEXT = mockgl_GetFramebufferParameterivEXT;

void  mockgl_GetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetMultiTexEnvfvEXT(texunit, target, pname, params);
}
PFNGLGETMULTITEXENVFVEXTPROC __glewGetMultiTexEnvfvEXT = mockgl_GetMultiTexEnvfvEXT;

void  mockgl_GetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetMultiTexEnvivEXT(texunit, target, pname, params);
}
PFNGLGETMULTITEXENVIVEXTPROC __glewGetMultiTexEnvivEXT = mockgl_GetMultiTexEnvivEXT;

void  mockgl_GetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble * params)
{
    return getGlMock()->gl_GetMultiTexGendvEXT(texunit, coord, pname, params);
}
PFNGLGETMULTITEXGENDVEXTPROC __glewGetMultiTexGendvEXT = mockgl_GetMultiTexGendvEXT;

void  mockgl_GetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetMultiTexGenfvEXT(texunit, coord, pname, params);
}
PFNGLGETMULTITEXGENFVEXTPROC __glewGetMultiTexGenfvEXT = mockgl_GetMultiTexGenfvEXT;

void  mockgl_GetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetMultiTexGenivEXT(texunit, coord, pname, params);
}
PFNGLGETMULTITEXGENIVEXTPROC __glewGetMultiTexGenivEXT = mockgl_GetMultiTexGenivEXT;

void  mockgl_GetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return getGlMock()->gl_GetMultiTexImageEXT(texunit, target, level, format, type, pixels);
}
PFNGLGETMULTITEXIMAGEEXTPROC __glewGetMultiTexImageEXT = mockgl_GetMultiTexImageEXT;

void  mockgl_GetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
}
PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC __glewGetMultiTexLevelParameterfvEXT = mockgl_GetMultiTexLevelParameterfvEXT;

void  mockgl_GetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
}
PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC __glewGetMultiTexLevelParameterivEXT = mockgl_GetMultiTexLevelParameterivEXT;

void  mockgl_GetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetMultiTexParameterIivEXT(texunit, target, pname, params);
}
PFNGLGETMULTITEXPARAMETERIIVEXTPROC __glewGetMultiTexParameterIivEXT = mockgl_GetMultiTexParameterIivEXT;

void  mockgl_GetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint * params)
{
    return getGlMock()->gl_GetMultiTexParameterIuivEXT(texunit, target, pname, params);
}
PFNGLGETMULTITEXPARAMETERIUIVEXTPROC __glewGetMultiTexParameterIuivEXT = mockgl_GetMultiTexParameterIuivEXT;

void  mockgl_GetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetMultiTexParameterfvEXT(texunit, target, pname, params);
}
PFNGLGETMULTITEXPARAMETERFVEXTPROC __glewGetMultiTexParameterfvEXT = mockgl_GetMultiTexParameterfvEXT;

void  mockgl_GetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetMultiTexParameterivEXT(texunit, target, pname, params);
}
PFNGLGETMULTITEXPARAMETERIVEXTPROC __glewGetMultiTexParameterivEXT = mockgl_GetMultiTexParameterivEXT;

void  mockgl_GetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetNamedBufferParameterivEXT(buffer, pname, params);
}
PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC __glewGetNamedBufferParameterivEXT = mockgl_GetNamedBufferParameterivEXT;

void  mockgl_GetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void ** params)
{
    return getGlMock()->gl_GetNamedBufferPointervEXT(buffer, pname, params);
}
PFNGLGETNAMEDBUFFERPOINTERVEXTPROC __glewGetNamedBufferPointervEXT = mockgl_GetNamedBufferPointervEXT;

void  mockgl_GetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return getGlMock()->gl_GetNamedBufferSubDataEXT(buffer, offset, size, data);
}
PFNGLGETNAMEDBUFFERSUBDATAEXTPROC __glewGetNamedBufferSubDataEXT = mockgl_GetNamedBufferSubDataEXT;

void  mockgl_GetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
}
PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC __glewGetNamedFramebufferAttachmentParameterivEXT = mockgl_GetNamedFramebufferAttachmentParameterivEXT;

void  mockgl_GetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint * params)
{
    return getGlMock()->gl_GetNamedProgramLocalParameterIivEXT(program, target, index, params);
}
PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC __glewGetNamedProgramLocalParameterIivEXT = mockgl_GetNamedProgramLocalParameterIivEXT;

void  mockgl_GetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint * params)
{
    return getGlMock()->gl_GetNamedProgramLocalParameterIuivEXT(program, target, index, params);
}
PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC __glewGetNamedProgramLocalParameterIuivEXT = mockgl_GetNamedProgramLocalParameterIuivEXT;

void  mockgl_GetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble * params)
{
    return getGlMock()->gl_GetNamedProgramLocalParameterdvEXT(program, target, index, params);
}
PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC __glewGetNamedProgramLocalParameterdvEXT = mockgl_GetNamedProgramLocalParameterdvEXT;

void  mockgl_GetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat * params)
{
    return getGlMock()->gl_GetNamedProgramLocalParameterfvEXT(program, target, index, params);
}
PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC __glewGetNamedProgramLocalParameterfvEXT = mockgl_GetNamedProgramLocalParameterfvEXT;

void  mockgl_GetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void * string)
{
    return getGlMock()->gl_GetNamedProgramStringEXT(program, target, pname, string);
}
PFNGLGETNAMEDPROGRAMSTRINGEXTPROC __glewGetNamedProgramStringEXT = mockgl_GetNamedProgramStringEXT;

void  mockgl_GetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetNamedProgramivEXT(program, target, pname, params);
}
PFNGLGETNAMEDPROGRAMIVEXTPROC __glewGetNamedProgramivEXT = mockgl_GetNamedProgramivEXT;

void  mockgl_GetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
}
PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC __glewGetNamedRenderbufferParameterivEXT = mockgl_GetNamedRenderbufferParameterivEXT;

void  mockgl_GetPointerIndexedvEXT(GLenum target, GLuint index, GLvoid ** params)
{
    return getGlMock()->gl_GetPointerIndexedvEXT(target, index, params);
}
PFNGLGETPOINTERINDEXEDVEXTPROC __glewGetPointerIndexedvEXT = mockgl_GetPointerIndexedvEXT;

void  mockgl_GetPointeri_vEXT(GLenum pname, GLuint index, GLvoid ** params)
{
    return getGlMock()->gl_GetPointeri_vEXT(pname, index, params);
}
PFNGLGETPOINTERI_VEXTPROC __glewGetPointeri_vEXT = mockgl_GetPointeri_vEXT;

void  mockgl_GetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return getGlMock()->gl_GetTextureImageEXT(texture, target, level, format, type, pixels);
}
PFNGLGETTEXTUREIMAGEEXTPROC __glewGetTextureImageEXT = mockgl_GetTextureImageEXT;

void  mockgl_GetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetTextureLevelParameterfvEXT(texture, target, level, pname, params);
}
PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC __glewGetTextureLevelParameterfvEXT = mockgl_GetTextureLevelParameterfvEXT;

void  mockgl_GetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetTextureLevelParameterivEXT(texture, target, level, pname, params);
}
PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC __glewGetTextureLevelParameterivEXT = mockgl_GetTextureLevelParameterivEXT;

void  mockgl_GetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetTextureParameterIivEXT(texture, target, pname, params);
}
PFNGLGETTEXTUREPARAMETERIIVEXTPROC __glewGetTextureParameterIivEXT = mockgl_GetTextureParameterIivEXT;

void  mockgl_GetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint * params)
{
    return getGlMock()->gl_GetTextureParameterIuivEXT(texture, target, pname, params);
}
PFNGLGETTEXTUREPARAMETERIUIVEXTPROC __glewGetTextureParameterIuivEXT = mockgl_GetTextureParameterIuivEXT;

void  mockgl_GetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetTextureParameterfvEXT(texture, target, pname, params);
}
PFNGLGETTEXTUREPARAMETERFVEXTPROC __glewGetTextureParameterfvEXT = mockgl_GetTextureParameterfvEXT;

void  mockgl_GetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetTextureParameterivEXT(texture, target, pname, params);
}
PFNGLGETTEXTUREPARAMETERIVEXTPROC __glewGetTextureParameterivEXT = mockgl_GetTextureParameterivEXT;

void  mockgl_GetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return getGlMock()->gl_GetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
}
PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC __glewGetVertexArrayIntegeri_vEXT = mockgl_GetVertexArrayIntegeri_vEXT;

void  mockgl_GetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint * param)
{
    return getGlMock()->gl_GetVertexArrayIntegervEXT(vaobj, pname, param);
}
PFNGLGETVERTEXARRAYINTEGERVEXTPROC __glewGetVertexArrayIntegervEXT = mockgl_GetVertexArrayIntegervEXT;

void  mockgl_GetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLvoid ** param)
{
    return getGlMock()->gl_GetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
}
PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC __glewGetVertexArrayPointeri_vEXT = mockgl_GetVertexArrayPointeri_vEXT;

void  mockgl_GetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, GLvoid ** param)
{
    return getGlMock()->gl_GetVertexArrayPointervEXT(vaobj, pname, param);
}
PFNGLGETVERTEXARRAYPOINTERVEXTPROC __glewGetVertexArrayPointervEXT = mockgl_GetVertexArrayPointervEXT;

void * mockgl_MapNamedBufferEXT(GLuint buffer, GLenum access)
{
    return getGlMock()->gl_MapNamedBufferEXT(buffer, access);
}
PFNGLMAPNAMEDBUFFEREXTPROC __glewMapNamedBufferEXT = mockgl_MapNamedBufferEXT;

void * mockgl_MapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
    return getGlMock()->gl_MapNamedBufferRangeEXT(buffer, offset, length, access);
}
PFNGLMAPNAMEDBUFFERRANGEEXTPROC __glewMapNamedBufferRangeEXT = mockgl_MapNamedBufferRangeEXT;

void  mockgl_MatrixFrustumEXT(GLenum matrixMode, GLdouble l, GLdouble r, GLdouble b, GLdouble t, GLdouble n, GLdouble f)
{
    return getGlMock()->gl_MatrixFrustumEXT(matrixMode, l, r, b, t, n, f);
}
PFNGLMATRIXFRUSTUMEXTPROC __glewMatrixFrustumEXT = mockgl_MatrixFrustumEXT;

void  mockgl_MatrixLoadIdentityEXT(GLenum matrixMode)
{
    return getGlMock()->gl_MatrixLoadIdentityEXT(matrixMode);
}
PFNGLMATRIXLOADIDENTITYEXTPROC __glewMatrixLoadIdentityEXT = mockgl_MatrixLoadIdentityEXT;

void  mockgl_MatrixLoadTransposedEXT(GLenum matrixMode, const GLdouble * m)
{
    return getGlMock()->gl_MatrixLoadTransposedEXT(matrixMode, m);
}
PFNGLMATRIXLOADTRANSPOSEDEXTPROC __glewMatrixLoadTransposedEXT = mockgl_MatrixLoadTransposedEXT;

void  mockgl_MatrixLoadTransposefEXT(GLenum matrixMode, const GLfloat * m)
{
    return getGlMock()->gl_MatrixLoadTransposefEXT(matrixMode, m);
}
PFNGLMATRIXLOADTRANSPOSEFEXTPROC __glewMatrixLoadTransposefEXT = mockgl_MatrixLoadTransposefEXT;

void  mockgl_MatrixLoaddEXT(GLenum matrixMode, const GLdouble * m)
{
    return getGlMock()->gl_MatrixLoaddEXT(matrixMode, m);
}
PFNGLMATRIXLOADDEXTPROC __glewMatrixLoaddEXT = mockgl_MatrixLoaddEXT;

void  mockgl_MatrixLoadfEXT(GLenum matrixMode, const GLfloat * m)
{
    return getGlMock()->gl_MatrixLoadfEXT(matrixMode, m);
}
PFNGLMATRIXLOADFEXTPROC __glewMatrixLoadfEXT = mockgl_MatrixLoadfEXT;

void  mockgl_MatrixMultTransposedEXT(GLenum matrixMode, const GLdouble * m)
{
    return getGlMock()->gl_MatrixMultTransposedEXT(matrixMode, m);
}
PFNGLMATRIXMULTTRANSPOSEDEXTPROC __glewMatrixMultTransposedEXT = mockgl_MatrixMultTransposedEXT;

void  mockgl_MatrixMultTransposefEXT(GLenum matrixMode, const GLfloat * m)
{
    return getGlMock()->gl_MatrixMultTransposefEXT(matrixMode, m);
}
PFNGLMATRIXMULTTRANSPOSEFEXTPROC __glewMatrixMultTransposefEXT = mockgl_MatrixMultTransposefEXT;

void  mockgl_MatrixMultdEXT(GLenum matrixMode, const GLdouble * m)
{
    return getGlMock()->gl_MatrixMultdEXT(matrixMode, m);
}
PFNGLMATRIXMULTDEXTPROC __glewMatrixMultdEXT = mockgl_MatrixMultdEXT;

void  mockgl_MatrixMultfEXT(GLenum matrixMode, const GLfloat * m)
{
    return getGlMock()->gl_MatrixMultfEXT(matrixMode, m);
}
PFNGLMATRIXMULTFEXTPROC __glewMatrixMultfEXT = mockgl_MatrixMultfEXT;

void  mockgl_MatrixOrthoEXT(GLenum matrixMode, GLdouble l, GLdouble r, GLdouble b, GLdouble t, GLdouble n, GLdouble f)
{
    return getGlMock()->gl_MatrixOrthoEXT(matrixMode, l, r, b, t, n, f);
}
PFNGLMATRIXORTHOEXTPROC __glewMatrixOrthoEXT = mockgl_MatrixOrthoEXT;

void  mockgl_MatrixPopEXT(GLenum matrixMode)
{
    return getGlMock()->gl_MatrixPopEXT(matrixMode);
}
PFNGLMATRIXPOPEXTPROC __glewMatrixPopEXT = mockgl_MatrixPopEXT;

void  mockgl_MatrixPushEXT(GLenum matrixMode)
{
    return getGlMock()->gl_MatrixPushEXT(matrixMode);
}
PFNGLMATRIXPUSHEXTPROC __glewMatrixPushEXT = mockgl_MatrixPushEXT;

void  mockgl_MatrixRotatedEXT(GLenum matrixMode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_MatrixRotatedEXT(matrixMode, angle, x, y, z);
}
PFNGLMATRIXROTATEDEXTPROC __glewMatrixRotatedEXT = mockgl_MatrixRotatedEXT;

void  mockgl_MatrixRotatefEXT(GLenum matrixMode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_MatrixRotatefEXT(matrixMode, angle, x, y, z);
}
PFNGLMATRIXROTATEFEXTPROC __glewMatrixRotatefEXT = mockgl_MatrixRotatefEXT;

void  mockgl_MatrixScaledEXT(GLenum matrixMode, GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_MatrixScaledEXT(matrixMode, x, y, z);
}
PFNGLMATRIXSCALEDEXTPROC __glewMatrixScaledEXT = mockgl_MatrixScaledEXT;

void  mockgl_MatrixScalefEXT(GLenum matrixMode, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_MatrixScalefEXT(matrixMode, x, y, z);
}
PFNGLMATRIXSCALEFEXTPROC __glewMatrixScalefEXT = mockgl_MatrixScalefEXT;

void  mockgl_MatrixTranslatedEXT(GLenum matrixMode, GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_MatrixTranslatedEXT(matrixMode, x, y, z);
}
PFNGLMATRIXTRANSLATEDEXTPROC __glewMatrixTranslatedEXT = mockgl_MatrixTranslatedEXT;

void  mockgl_MatrixTranslatefEXT(GLenum matrixMode, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_MatrixTranslatefEXT(matrixMode, x, y, z);
}
PFNGLMATRIXTRANSLATEFEXTPROC __glewMatrixTranslatefEXT = mockgl_MatrixTranslatefEXT;

void  mockgl_MultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer)
{
    return getGlMock()->gl_MultiTexBufferEXT(texunit, target, internalformat, buffer);
}
PFNGLMULTITEXBUFFEREXTPROC __glewMultiTexBufferEXT = mockgl_MultiTexBufferEXT;

void  mockgl_MultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return getGlMock()->gl_MultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
}
PFNGLMULTITEXCOORDPOINTEREXTPROC __glewMultiTexCoordPointerEXT = mockgl_MultiTexCoordPointerEXT;

void  mockgl_MultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return getGlMock()->gl_MultiTexEnvfEXT(texunit, target, pname, param);
}
PFNGLMULTITEXENVFEXTPROC __glewMultiTexEnvfEXT = mockgl_MultiTexEnvfEXT;

void  mockgl_MultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_MultiTexEnvfvEXT(texunit, target, pname, params);
}
PFNGLMULTITEXENVFVEXTPROC __glewMultiTexEnvfvEXT = mockgl_MultiTexEnvfvEXT;

void  mockgl_MultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return getGlMock()->gl_MultiTexEnviEXT(texunit, target, pname, param);
}
PFNGLMULTITEXENVIEXTPROC __glewMultiTexEnviEXT = mockgl_MultiTexEnviEXT;

void  mockgl_MultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_MultiTexEnvivEXT(texunit, target, pname, params);
}
PFNGLMULTITEXENVIVEXTPROC __glewMultiTexEnvivEXT = mockgl_MultiTexEnvivEXT;

void  mockgl_MultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param)
{
    return getGlMock()->gl_MultiTexGendEXT(texunit, coord, pname, param);
}
PFNGLMULTITEXGENDEXTPROC __glewMultiTexGendEXT = mockgl_MultiTexGendEXT;

void  mockgl_MultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params)
{
    return getGlMock()->gl_MultiTexGendvEXT(texunit, coord, pname, params);
}
PFNGLMULTITEXGENDVEXTPROC __glewMultiTexGendvEXT = mockgl_MultiTexGendvEXT;

void  mockgl_MultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param)
{
    return getGlMock()->gl_MultiTexGenfEXT(texunit, coord, pname, param);
}
PFNGLMULTITEXGENFEXTPROC __glewMultiTexGenfEXT = mockgl_MultiTexGenfEXT;

void  mockgl_MultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_MultiTexGenfvEXT(texunit, coord, pname, params);
}
PFNGLMULTITEXGENFVEXTPROC __glewMultiTexGenfvEXT = mockgl_MultiTexGenfvEXT;

void  mockgl_MultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param)
{
    return getGlMock()->gl_MultiTexGeniEXT(texunit, coord, pname, param);
}
PFNGLMULTITEXGENIEXTPROC __glewMultiTexGeniEXT = mockgl_MultiTexGeniEXT;

void  mockgl_MultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_MultiTexGenivEXT(texunit, coord, pname, params);
}
PFNGLMULTITEXGENIVEXTPROC __glewMultiTexGenivEXT = mockgl_MultiTexGenivEXT;

void  mockgl_MultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return getGlMock()->gl_MultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
}
PFNGLMULTITEXIMAGE1DEXTPROC __glewMultiTexImage1DEXT = mockgl_MultiTexImage1DEXT;

void  mockgl_MultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return getGlMock()->gl_MultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}
PFNGLMULTITEXIMAGE2DEXTPROC __glewMultiTexImage2DEXT = mockgl_MultiTexImage2DEXT;

void  mockgl_MultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_MultiTexParameterIivEXT(texunit, target, pname, params);
}
PFNGLMULTITEXPARAMETERIIVEXTPROC __glewMultiTexParameterIivEXT = mockgl_MultiTexParameterIivEXT;

void  mockgl_MultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint * params)
{
    return getGlMock()->gl_MultiTexParameterIuivEXT(texunit, target, pname, params);
}
PFNGLMULTITEXPARAMETERIUIVEXTPROC __glewMultiTexParameterIuivEXT = mockgl_MultiTexParameterIuivEXT;

void  mockgl_MultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return getGlMock()->gl_MultiTexParameterfEXT(texunit, target, pname, param);
}
PFNGLMULTITEXPARAMETERFEXTPROC __glewMultiTexParameterfEXT = mockgl_MultiTexParameterfEXT;

void  mockgl_MultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * param)
{
    return getGlMock()->gl_MultiTexParameterfvEXT(texunit, target, pname, param);
}
PFNGLMULTITEXPARAMETERFVEXTPROC __glewMultiTexParameterfvEXT = mockgl_MultiTexParameterfvEXT;

void  mockgl_MultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return getGlMock()->gl_MultiTexParameteriEXT(texunit, target, pname, param);
}
PFNGLMULTITEXPARAMETERIEXTPROC __glewMultiTexParameteriEXT = mockgl_MultiTexParameteriEXT;

void  mockgl_MultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * param)
{
    return getGlMock()->gl_MultiTexParameterivEXT(texunit, target, pname, param);
}
PFNGLMULTITEXPARAMETERIVEXTPROC __glewMultiTexParameterivEXT = mockgl_MultiTexParameterivEXT;

void  mockgl_MultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer)
{
    return getGlMock()->gl_MultiTexRenderbufferEXT(texunit, target, renderbuffer);
}
PFNGLMULTITEXRENDERBUFFEREXTPROC __glewMultiTexRenderbufferEXT = mockgl_MultiTexRenderbufferEXT;

void  mockgl_MultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return getGlMock()->gl_MultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
}
PFNGLMULTITEXSUBIMAGE1DEXTPROC __glewMultiTexSubImage1DEXT = mockgl_MultiTexSubImage1DEXT;

void  mockgl_MultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return getGlMock()->gl_MultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}
PFNGLMULTITEXSUBIMAGE2DEXTPROC __glewMultiTexSubImage2DEXT = mockgl_MultiTexSubImage2DEXT;

void  mockgl_NamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage)
{
    return getGlMock()->gl_NamedBufferDataEXT(buffer, size, data, usage);
}
PFNGLNAMEDBUFFERDATAEXTPROC __glewNamedBufferDataEXT = mockgl_NamedBufferDataEXT;

void  mockgl_NamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
    return getGlMock()->gl_NamedBufferSubDataEXT(buffer, offset, size, data);
}
PFNGLNAMEDBUFFERSUBDATAEXTPROC __glewNamedBufferSubDataEXT = mockgl_NamedBufferSubDataEXT;

void  mockgl_NamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return getGlMock()->gl_NamedCopyBufferSubDataEXT(readBuffer, writeBuffer, readOffset, writeOffset, size);
}
PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC __glewNamedCopyBufferSubDataEXT = mockgl_NamedCopyBufferSubDataEXT;

void  mockgl_NamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return getGlMock()->gl_NamedFramebufferRenderbufferEXT(framebuffer, attachment, renderbuffertarget, renderbuffer);
}
PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC __glewNamedFramebufferRenderbufferEXT = mockgl_NamedFramebufferRenderbufferEXT;

void  mockgl_NamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return getGlMock()->gl_NamedFramebufferTexture1DEXT(framebuffer, attachment, textarget, texture, level);
}
PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC __glewNamedFramebufferTexture1DEXT = mockgl_NamedFramebufferTexture1DEXT;

void  mockgl_NamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return getGlMock()->gl_NamedFramebufferTexture2DEXT(framebuffer, attachment, textarget, texture, level);
}
PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC __glewNamedFramebufferTexture2DEXT = mockgl_NamedFramebufferTexture2DEXT;

void  mockgl_NamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return getGlMock()->gl_NamedFramebufferTexture3DEXT(framebuffer, attachment, textarget, texture, level, zoffset);
}
PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC __glewNamedFramebufferTexture3DEXT = mockgl_NamedFramebufferTexture3DEXT;

void  mockgl_NamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
    return getGlMock()->gl_NamedFramebufferTextureEXT(framebuffer, attachment, texture, level);
}
PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC __glewNamedFramebufferTextureEXT = mockgl_NamedFramebufferTextureEXT;

void  mockgl_NamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return getGlMock()->gl_NamedFramebufferTextureFaceEXT(framebuffer, attachment, texture, level, face);
}
PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC __glewNamedFramebufferTextureFaceEXT = mockgl_NamedFramebufferTextureFaceEXT;

void  mockgl_NamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return getGlMock()->gl_NamedFramebufferTextureLayerEXT(framebuffer, attachment, texture, level, layer);
}
PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC __glewNamedFramebufferTextureLayerEXT = mockgl_NamedFramebufferTextureLayerEXT;

void  mockgl_NamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_NamedProgramLocalParameter4dEXT(program, target, index, x, y, z, w);
}
PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC __glewNamedProgramLocalParameter4dEXT = mockgl_NamedProgramLocalParameter4dEXT;

void  mockgl_NamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble * params)
{
    return getGlMock()->gl_NamedProgramLocalParameter4dvEXT(program, target, index, params);
}
PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC __glewNamedProgramLocalParameter4dvEXT = mockgl_NamedProgramLocalParameter4dvEXT;

void  mockgl_NamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return getGlMock()->gl_NamedProgramLocalParameter4fEXT(program, target, index, x, y, z, w);
}
PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC __glewNamedProgramLocalParameter4fEXT = mockgl_NamedProgramLocalParameter4fEXT;

void  mockgl_NamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat * params)
{
    return getGlMock()->gl_NamedProgramLocalParameter4fvEXT(program, target, index, params);
}
PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC __glewNamedProgramLocalParameter4fvEXT = mockgl_NamedProgramLocalParameter4fvEXT;

void  mockgl_NamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return getGlMock()->gl_NamedProgramLocalParameterI4iEXT(program, target, index, x, y, z, w);
}
PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC __glewNamedProgramLocalParameterI4iEXT = mockgl_NamedProgramLocalParameterI4iEXT;

void  mockgl_NamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint * params)
{
    return getGlMock()->gl_NamedProgramLocalParameterI4ivEXT(program, target, index, params);
}
PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC __glewNamedProgramLocalParameterI4ivEXT = mockgl_NamedProgramLocalParameterI4ivEXT;

void  mockgl_NamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return getGlMock()->gl_NamedProgramLocalParameterI4uiEXT(program, target, index, x, y, z, w);
}
PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC __glewNamedProgramLocalParameterI4uiEXT = mockgl_NamedProgramLocalParameterI4uiEXT;

void  mockgl_NamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint * params)
{
    return getGlMock()->gl_NamedProgramLocalParameterI4uivEXT(program, target, index, params);
}
PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC __glewNamedProgramLocalParameterI4uivEXT = mockgl_NamedProgramLocalParameterI4uivEXT;

void  mockgl_NamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return getGlMock()->gl_NamedProgramLocalParameters4fvEXT(program, target, index, count, params);
}
PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC __glewNamedProgramLocalParameters4fvEXT = mockgl_NamedProgramLocalParameters4fvEXT;

void  mockgl_NamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return getGlMock()->gl_NamedProgramLocalParametersI4ivEXT(program, target, index, count, params);
}
PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC __glewNamedProgramLocalParametersI4ivEXT = mockgl_NamedProgramLocalParametersI4ivEXT;

void  mockgl_NamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return getGlMock()->gl_NamedProgramLocalParametersI4uivEXT(program, target, index, count, params);
}
PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC __glewNamedProgramLocalParametersI4uivEXT = mockgl_NamedProgramLocalParametersI4uivEXT;

void  mockgl_NamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const void * string)
{
    return getGlMock()->gl_NamedProgramStringEXT(program, target, format, len, string);
}
PFNGLNAMEDPROGRAMSTRINGEXTPROC __glewNamedProgramStringEXT = mockgl_NamedProgramStringEXT;

void  mockgl_NamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_NamedRenderbufferStorageEXT(renderbuffer, internalformat, width, height);
}
PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC __glewNamedRenderbufferStorageEXT = mockgl_NamedRenderbufferStorageEXT;

void  mockgl_NamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_NamedRenderbufferStorageMultisampleCoverageEXT(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
}
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC __glewNamedRenderbufferStorageMultisampleCoverageEXT = mockgl_NamedRenderbufferStorageMultisampleCoverageEXT;

void  mockgl_NamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_NamedRenderbufferStorageMultisampleEXT(renderbuffer, samples, internalformat, width, height);
}
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC __glewNamedRenderbufferStorageMultisampleEXT = mockgl_NamedRenderbufferStorageMultisampleEXT;

void  mockgl_ProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
    return getGlMock()->gl_ProgramUniform1fEXT(program, location, v0);
}
PFNGLPROGRAMUNIFORM1FEXTPROC __glewProgramUniform1fEXT = mockgl_ProgramUniform1fEXT;

void  mockgl_ProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniform1fvEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM1FVEXTPROC __glewProgramUniform1fvEXT = mockgl_ProgramUniform1fvEXT;

void  mockgl_ProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
    return getGlMock()->gl_ProgramUniform1iEXT(program, location, v0);
}
PFNGLPROGRAMUNIFORM1IEXTPROC __glewProgramUniform1iEXT = mockgl_ProgramUniform1iEXT;

void  mockgl_ProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_ProgramUniform1ivEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM1IVEXTPROC __glewProgramUniform1ivEXT = mockgl_ProgramUniform1ivEXT;

void  mockgl_ProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
    return getGlMock()->gl_ProgramUniform1uiEXT(program, location, v0);
}
PFNGLPROGRAMUNIFORM1UIEXTPROC __glewProgramUniform1uiEXT = mockgl_ProgramUniform1uiEXT;

void  mockgl_ProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return getGlMock()->gl_ProgramUniform1uivEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM1UIVEXTPROC __glewProgramUniform1uivEXT = mockgl_ProgramUniform1uivEXT;

void  mockgl_ProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return getGlMock()->gl_ProgramUniform2fEXT(program, location, v0, v1);
}
PFNGLPROGRAMUNIFORM2FEXTPROC __glewProgramUniform2fEXT = mockgl_ProgramUniform2fEXT;

void  mockgl_ProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniform2fvEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM2FVEXTPROC __glewProgramUniform2fvEXT = mockgl_ProgramUniform2fvEXT;

void  mockgl_ProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
    return getGlMock()->gl_ProgramUniform2iEXT(program, location, v0, v1);
}
PFNGLPROGRAMUNIFORM2IEXTPROC __glewProgramUniform2iEXT = mockgl_ProgramUniform2iEXT;

void  mockgl_ProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_ProgramUniform2ivEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM2IVEXTPROC __glewProgramUniform2ivEXT = mockgl_ProgramUniform2ivEXT;

void  mockgl_ProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return getGlMock()->gl_ProgramUniform2uiEXT(program, location, v0, v1);
}
PFNGLPROGRAMUNIFORM2UIEXTPROC __glewProgramUniform2uiEXT = mockgl_ProgramUniform2uiEXT;

void  mockgl_ProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return getGlMock()->gl_ProgramUniform2uivEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM2UIVEXTPROC __glewProgramUniform2uivEXT = mockgl_ProgramUniform2uivEXT;

void  mockgl_ProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return getGlMock()->gl_ProgramUniform3fEXT(program, location, v0, v1, v2);
}
PFNGLPROGRAMUNIFORM3FEXTPROC __glewProgramUniform3fEXT = mockgl_ProgramUniform3fEXT;

void  mockgl_ProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniform3fvEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM3FVEXTPROC __glewProgramUniform3fvEXT = mockgl_ProgramUniform3fvEXT;

void  mockgl_ProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return getGlMock()->gl_ProgramUniform3iEXT(program, location, v0, v1, v2);
}
PFNGLPROGRAMUNIFORM3IEXTPROC __glewProgramUniform3iEXT = mockgl_ProgramUniform3iEXT;

void  mockgl_ProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_ProgramUniform3ivEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM3IVEXTPROC __glewProgramUniform3ivEXT = mockgl_ProgramUniform3ivEXT;

void  mockgl_ProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return getGlMock()->gl_ProgramUniform3uiEXT(program, location, v0, v1, v2);
}
PFNGLPROGRAMUNIFORM3UIEXTPROC __glewProgramUniform3uiEXT = mockgl_ProgramUniform3uiEXT;

void  mockgl_ProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return getGlMock()->gl_ProgramUniform3uivEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM3UIVEXTPROC __glewProgramUniform3uivEXT = mockgl_ProgramUniform3uivEXT;

void  mockgl_ProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return getGlMock()->gl_ProgramUniform4fEXT(program, location, v0, v1, v2, v3);
}
PFNGLPROGRAMUNIFORM4FEXTPROC __glewProgramUniform4fEXT = mockgl_ProgramUniform4fEXT;

void  mockgl_ProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniform4fvEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM4FVEXTPROC __glewProgramUniform4fvEXT = mockgl_ProgramUniform4fvEXT;

void  mockgl_ProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return getGlMock()->gl_ProgramUniform4iEXT(program, location, v0, v1, v2, v3);
}
PFNGLPROGRAMUNIFORM4IEXTPROC __glewProgramUniform4iEXT = mockgl_ProgramUniform4iEXT;

void  mockgl_ProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return getGlMock()->gl_ProgramUniform4ivEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM4IVEXTPROC __glewProgramUniform4ivEXT = mockgl_ProgramUniform4ivEXT;

void  mockgl_ProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return getGlMock()->gl_ProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
}
PFNGLPROGRAMUNIFORM4UIEXTPROC __glewProgramUniform4uiEXT = mockgl_ProgramUniform4uiEXT;

void  mockgl_ProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return getGlMock()->gl_ProgramUniform4uivEXT(program, location, count, value);
}
PFNGLPROGRAMUNIFORM4UIVEXTPROC __glewProgramUniform4uivEXT = mockgl_ProgramUniform4uivEXT;

void  mockgl_ProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC __glewProgramUniformMatrix2fvEXT = mockgl_ProgramUniformMatrix2fvEXT;

void  mockgl_ProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC __glewProgramUniformMatrix2x3fvEXT = mockgl_ProgramUniformMatrix2x3fvEXT;

void  mockgl_ProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC __glewProgramUniformMatrix2x4fvEXT = mockgl_ProgramUniformMatrix2x4fvEXT;

void  mockgl_ProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC __glewProgramUniformMatrix3fvEXT = mockgl_ProgramUniformMatrix3fvEXT;

void  mockgl_ProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC __glewProgramUniformMatrix3x2fvEXT = mockgl_ProgramUniformMatrix3x2fvEXT;

void  mockgl_ProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC __glewProgramUniformMatrix3x4fvEXT = mockgl_ProgramUniformMatrix3x4fvEXT;

void  mockgl_ProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC __glewProgramUniformMatrix4fvEXT = mockgl_ProgramUniformMatrix4fvEXT;

void  mockgl_ProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC __glewProgramUniformMatrix4x2fvEXT = mockgl_ProgramUniformMatrix4x2fvEXT;

void  mockgl_ProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return getGlMock()->gl_ProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}
PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC __glewProgramUniformMatrix4x3fvEXT = mockgl_ProgramUniformMatrix4x3fvEXT;

void  mockgl_PushClientAttribDefaultEXT(GLbitfield mask)
{
    return getGlMock()->gl_PushClientAttribDefaultEXT(mask);
}
PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC __glewPushClientAttribDefaultEXT = mockgl_PushClientAttribDefaultEXT;

void  mockgl_TextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer)
{
    return getGlMock()->gl_TextureBufferEXT(texture, target, internalformat, buffer);
}
PFNGLTEXTUREBUFFEREXTPROC __glewTextureBufferEXT = mockgl_TextureBufferEXT;

void  mockgl_TextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return getGlMock()->gl_TextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);
}
PFNGLTEXTUREIMAGE1DEXTPROC __glewTextureImage1DEXT = mockgl_TextureImage1DEXT;

void  mockgl_TextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return getGlMock()->gl_TextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);
}
PFNGLTEXTUREIMAGE2DEXTPROC __glewTextureImage2DEXT = mockgl_TextureImage2DEXT;

void  mockgl_TextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_TextureParameterIivEXT(texture, target, pname, params);
}
PFNGLTEXTUREPARAMETERIIVEXTPROC __glewTextureParameterIivEXT = mockgl_TextureParameterIivEXT;

void  mockgl_TextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint * params)
{
    return getGlMock()->gl_TextureParameterIuivEXT(texture, target, pname, params);
}
PFNGLTEXTUREPARAMETERIUIVEXTPROC __glewTextureParameterIuivEXT = mockgl_TextureParameterIuivEXT;

void  mockgl_TextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param)
{
    return getGlMock()->gl_TextureParameterfEXT(texture, target, pname, param);
}
PFNGLTEXTUREPARAMETERFEXTPROC __glewTextureParameterfEXT = mockgl_TextureParameterfEXT;

void  mockgl_TextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat * param)
{
    return getGlMock()->gl_TextureParameterfvEXT(texture, target, pname, param);
}
PFNGLTEXTUREPARAMETERFVEXTPROC __glewTextureParameterfvEXT = mockgl_TextureParameterfvEXT;

void  mockgl_TextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param)
{
    return getGlMock()->gl_TextureParameteriEXT(texture, target, pname, param);
}
PFNGLTEXTUREPARAMETERIEXTPROC __glewTextureParameteriEXT = mockgl_TextureParameteriEXT;

void  mockgl_TextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * param)
{
    return getGlMock()->gl_TextureParameterivEXT(texture, target, pname, param);
}
PFNGLTEXTUREPARAMETERIVEXTPROC __glewTextureParameterivEXT = mockgl_TextureParameterivEXT;

void  mockgl_TextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer)
{
    return getGlMock()->gl_TextureRenderbufferEXT(texture, target, renderbuffer);
}
PFNGLTEXTURERENDERBUFFEREXTPROC __glewTextureRenderbufferEXT = mockgl_TextureRenderbufferEXT;

void  mockgl_TextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return getGlMock()->gl_TextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);
}
PFNGLTEXTURESUBIMAGE1DEXTPROC __glewTextureSubImage1DEXT = mockgl_TextureSubImage1DEXT;

void  mockgl_TextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return getGlMock()->gl_TextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
}
PFNGLTEXTURESUBIMAGE2DEXTPROC __glewTextureSubImage2DEXT = mockgl_TextureSubImage2DEXT;

unsigned char  mockgl_UnmapNamedBufferEXT(GLuint buffer)
{
    return getGlMock()->gl_UnmapNamedBufferEXT(buffer);
}
PFNGLUNMAPNAMEDBUFFEREXTPROC __glewUnmapNamedBufferEXT = mockgl_UnmapNamedBufferEXT;

void  mockgl_VertexArrayColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return getGlMock()->gl_VertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}
PFNGLVERTEXARRAYCOLOROFFSETEXTPROC __glewVertexArrayColorOffsetEXT = mockgl_VertexArrayColorOffsetEXT;

void  mockgl_VertexArrayEdgeFlagOffsetEXT(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset)
{
    return getGlMock()->gl_VertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, offset);
}
PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC __glewVertexArrayEdgeFlagOffsetEXT = mockgl_VertexArrayEdgeFlagOffsetEXT;

void  mockgl_VertexArrayFogCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return getGlMock()->gl_VertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, offset);
}
PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC __glewVertexArrayFogCoordOffsetEXT = mockgl_VertexArrayFogCoordOffsetEXT;

void  mockgl_VertexArrayIndexOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return getGlMock()->gl_VertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, offset);
}
PFNGLVERTEXARRAYINDEXOFFSETEXTPROC __glewVertexArrayIndexOffsetEXT = mockgl_VertexArrayIndexOffsetEXT;

void  mockgl_VertexArrayMultiTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return getGlMock()->gl_VertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, offset);
}
PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC __glewVertexArrayMultiTexCoordOffsetEXT = mockgl_VertexArrayMultiTexCoordOffsetEXT;

void  mockgl_VertexArrayNormalOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return getGlMock()->gl_VertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, offset);
}
PFNGLVERTEXARRAYNORMALOFFSETEXTPROC __glewVertexArrayNormalOffsetEXT = mockgl_VertexArrayNormalOffsetEXT;

void  mockgl_VertexArraySecondaryColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return getGlMock()->gl_VertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}
PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC __glewVertexArraySecondaryColorOffsetEXT = mockgl_VertexArraySecondaryColorOffsetEXT;

void  mockgl_VertexArrayTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return getGlMock()->gl_VertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, offset);
}
PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC __glewVertexArrayTexCoordOffsetEXT = mockgl_VertexArrayTexCoordOffsetEXT;

void  mockgl_VertexArrayVertexAttribIOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return getGlMock()->gl_VertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}
PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC __glewVertexArrayVertexAttribIOffsetEXT = mockgl_VertexArrayVertexAttribIOffsetEXT;

void  mockgl_VertexArrayVertexAttribOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset)
{
    return getGlMock()->gl_VertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, offset);
}
PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC __glewVertexArrayVertexAttribOffsetEXT = mockgl_VertexArrayVertexAttribOffsetEXT;

void  mockgl_VertexArrayVertexOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return getGlMock()->gl_VertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, offset);
}
PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC __glewVertexArrayVertexOffsetEXT = mockgl_VertexArrayVertexOffsetEXT;

void  mockgl_ColorMaskIndexedEXT(GLuint buf, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return getGlMock()->gl_ColorMaskIndexedEXT(buf, r, g, b, a);
}
PFNGLCOLORMASKINDEXEDEXTPROC __glewColorMaskIndexedEXT = mockgl_ColorMaskIndexedEXT;

void  mockgl_DisableIndexedEXT(GLenum target, GLuint index)
{
    return getGlMock()->gl_DisableIndexedEXT(target, index);
}
PFNGLDISABLEINDEXEDEXTPROC __glewDisableIndexedEXT = mockgl_DisableIndexedEXT;

void  mockgl_EnableIndexedEXT(GLenum target, GLuint index)
{
    return getGlMock()->gl_EnableIndexedEXT(target, index);
}
PFNGLENABLEINDEXEDEXTPROC __glewEnableIndexedEXT = mockgl_EnableIndexedEXT;

void  mockgl_GetBooleanIndexedvEXT(GLenum value, GLuint index, GLboolean * data)
{
    return getGlMock()->gl_GetBooleanIndexedvEXT(value, index, data);
}
PFNGLGETBOOLEANINDEXEDVEXTPROC __glewGetBooleanIndexedvEXT = mockgl_GetBooleanIndexedvEXT;

void  mockgl_GetIntegerIndexedvEXT(GLenum value, GLuint index, GLint * data)
{
    return getGlMock()->gl_GetIntegerIndexedvEXT(value, index, data);
}
PFNGLGETINTEGERINDEXEDVEXTPROC __glewGetIntegerIndexedvEXT = mockgl_GetIntegerIndexedvEXT;

unsigned char  mockgl_IsEnabledIndexedEXT(GLenum target, GLuint index)
{
    return getGlMock()->gl_IsEnabledIndexedEXT(target, index);
}
PFNGLISENABLEDINDEXEDEXTPROC __glewIsEnabledIndexedEXT = mockgl_IsEnabledIndexedEXT;

void  mockgl_DrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
    return getGlMock()->gl_DrawArraysInstancedEXT(mode, start, count, primcount);
}
PFNGLDRAWARRAYSINSTANCEDEXTPROC __glewDrawArraysInstancedEXT = mockgl_DrawArraysInstancedEXT;

void  mockgl_DrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices, GLsizei primcount)
{
    return getGlMock()->gl_DrawElementsInstancedEXT(mode, count, type, indices, primcount);
}
PFNGLDRAWELEMENTSINSTANCEDEXTPROC __glewDrawElementsInstancedEXT = mockgl_DrawElementsInstancedEXT;

void  mockgl_DrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices)
{
    return getGlMock()->gl_DrawRangeElementsEXT(mode, start, end, count, type, indices);
}
PFNGLDRAWRANGEELEMENTSEXTPROC __glewDrawRangeElementsEXT = mockgl_DrawRangeElementsEXT;

void  mockgl_FogCoordPointerEXT(GLenum type, GLsizei stride, const GLvoid * pointer)
{
    return getGlMock()->gl_FogCoordPointerEXT(type, stride, pointer);
}
PFNGLFOGCOORDPOINTEREXTPROC __glewFogCoordPointerEXT = mockgl_FogCoordPointerEXT;

void  mockgl_FogCoorddEXT(GLdouble coord)
{
    return getGlMock()->gl_FogCoorddEXT(coord);
}
PFNGLFOGCOORDDEXTPROC __glewFogCoorddEXT = mockgl_FogCoorddEXT;

void  mockgl_FogCoorddvEXT(const GLdouble * coord)
{
    return getGlMock()->gl_FogCoorddvEXT(coord);
}
PFNGLFOGCOORDDVEXTPROC __glewFogCoorddvEXT = mockgl_FogCoorddvEXT;

void  mockgl_FogCoordfEXT(GLfloat coord)
{
    return getGlMock()->gl_FogCoordfEXT(coord);
}
PFNGLFOGCOORDFEXTPROC __glewFogCoordfEXT = mockgl_FogCoordfEXT;

void  mockgl_FogCoordfvEXT(const GLfloat * coord)
{
    return getGlMock()->gl_FogCoordfvEXT(coord);
}
PFNGLFOGCOORDFVEXTPROC __glewFogCoordfvEXT = mockgl_FogCoordfvEXT;

void  mockgl_FragmentColorMaterialEXT(GLenum face, GLenum mode)
{
    return getGlMock()->gl_FragmentColorMaterialEXT(face, mode);
}
PFNGLFRAGMENTCOLORMATERIALEXTPROC __glewFragmentColorMaterialEXT = mockgl_FragmentColorMaterialEXT;

void  mockgl_FragmentLightModelfEXT(GLenum pname, GLfloat param)
{
    return getGlMock()->gl_FragmentLightModelfEXT(pname, param);
}
PFNGLFRAGMENTLIGHTMODELFEXTPROC __glewFragmentLightModelfEXT = mockgl_FragmentLightModelfEXT;

void  mockgl_FragmentLightModelfvEXT(GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_FragmentLightModelfvEXT(pname, params);
}
PFNGLFRAGMENTLIGHTMODELFVEXTPROC __glewFragmentLightModelfvEXT = mockgl_FragmentLightModelfvEXT;

void  mockgl_FragmentLightModeliEXT(GLenum pname, GLint param)
{
    return getGlMock()->gl_FragmentLightModeliEXT(pname, param);
}
PFNGLFRAGMENTLIGHTMODELIEXTPROC __glewFragmentLightModeliEXT = mockgl_FragmentLightModeliEXT;

void  mockgl_FragmentLightModelivEXT(GLenum pname, GLint * params)
{
    return getGlMock()->gl_FragmentLightModelivEXT(pname, params);
}
PFNGLFRAGMENTLIGHTMODELIVEXTPROC __glewFragmentLightModelivEXT = mockgl_FragmentLightModelivEXT;

void  mockgl_FragmentLightfEXT(GLenum light, GLenum pname, GLfloat param)
{
    return getGlMock()->gl_FragmentLightfEXT(light, pname, param);
}
PFNGLFRAGMENTLIGHTFEXTPROC __glewFragmentLightfEXT = mockgl_FragmentLightfEXT;

void  mockgl_FragmentLightfvEXT(GLenum light, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_FragmentLightfvEXT(light, pname, params);
}
PFNGLFRAGMENTLIGHTFVEXTPROC __glewFragmentLightfvEXT = mockgl_FragmentLightfvEXT;

void  mockgl_FragmentLightiEXT(GLenum light, GLenum pname, GLint param)
{
    return getGlMock()->gl_FragmentLightiEXT(light, pname, param);
}
PFNGLFRAGMENTLIGHTIEXTPROC __glewFragmentLightiEXT = mockgl_FragmentLightiEXT;

void  mockgl_FragmentLightivEXT(GLenum light, GLenum pname, GLint * params)
{
    return getGlMock()->gl_FragmentLightivEXT(light, pname, params);
}
PFNGLFRAGMENTLIGHTIVEXTPROC __glewFragmentLightivEXT = mockgl_FragmentLightivEXT;

void  mockgl_FragmentMaterialfEXT(GLenum face, GLenum pname, const GLfloat param)
{
    return getGlMock()->gl_FragmentMaterialfEXT(face, pname, param);
}
PFNGLFRAGMENTMATERIALFEXTPROC __glewFragmentMaterialfEXT = mockgl_FragmentMaterialfEXT;

void  mockgl_FragmentMaterialfvEXT(GLenum face, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_FragmentMaterialfvEXT(face, pname, params);
}
PFNGLFRAGMENTMATERIALFVEXTPROC __glewFragmentMaterialfvEXT = mockgl_FragmentMaterialfvEXT;

void  mockgl_FragmentMaterialiEXT(GLenum face, GLenum pname, const GLint param)
{
    return getGlMock()->gl_FragmentMaterialiEXT(face, pname, param);
}
PFNGLFRAGMENTMATERIALIEXTPROC __glewFragmentMaterialiEXT = mockgl_FragmentMaterialiEXT;

void  mockgl_FragmentMaterialivEXT(GLenum face, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_FragmentMaterialivEXT(face, pname, params);
}
PFNGLFRAGMENTMATERIALIVEXTPROC __glewFragmentMaterialivEXT = mockgl_FragmentMaterialivEXT;

void  mockgl_GetFragmentLightfvEXT(GLenum light, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetFragmentLightfvEXT(light, pname, params);
}
PFNGLGETFRAGMENTLIGHTFVEXTPROC __glewGetFragmentLightfvEXT = mockgl_GetFragmentLightfvEXT;

void  mockgl_GetFragmentLightivEXT(GLenum light, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetFragmentLightivEXT(light, pname, params);
}
PFNGLGETFRAGMENTLIGHTIVEXTPROC __glewGetFragmentLightivEXT = mockgl_GetFragmentLightivEXT;

void  mockgl_GetFragmentMaterialfvEXT(GLenum face, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_GetFragmentMaterialfvEXT(face, pname, params);
}
PFNGLGETFRAGMENTMATERIALFVEXTPROC __glewGetFragmentMaterialfvEXT = mockgl_GetFragmentMaterialfvEXT;

void  mockgl_GetFragmentMaterialivEXT(GLenum face, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_GetFragmentMaterialivEXT(face, pname, params);
}
PFNGLGETFRAGMENTMATERIALIVEXTPROC __glewGetFragmentMaterialivEXT = mockgl_GetFragmentMaterialivEXT;

void  mockgl_LightEnviEXT(GLenum pname, GLint param)
{
    return getGlMock()->gl_LightEnviEXT(pname, param);
}
PFNGLLIGHTENVIEXTPROC __glewLightEnviEXT = mockgl_LightEnviEXT;

void  mockgl_BlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
    return getGlMock()->gl_BlitFramebufferEXT(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}
PFNGLBLITFRAMEBUFFEREXTPROC __glewBlitFramebufferEXT = mockgl_BlitFramebufferEXT;

void  mockgl_RenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_RenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC __glewRenderbufferStorageMultisampleEXT = mockgl_RenderbufferStorageMultisampleEXT;

void  mockgl_BindFramebufferEXT(GLenum target, GLuint framebuffer)
{
    return getGlMock()->gl_BindFramebufferEXT(target, framebuffer);
}
PFNGLBINDFRAMEBUFFEREXTPROC __glewBindFramebufferEXT = mockgl_BindFramebufferEXT;

void  mockgl_BindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
    return getGlMock()->gl_BindRenderbufferEXT(target, renderbuffer);
}
PFNGLBINDRENDERBUFFEREXTPROC __glewBindRenderbufferEXT = mockgl_BindRenderbufferEXT;

unsigned int  mockgl_CheckFramebufferStatusEXT(GLenum target)
{
    return getGlMock()->gl_CheckFramebufferStatusEXT(target);
}
PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC __glewCheckFramebufferStatusEXT = mockgl_CheckFramebufferStatusEXT;

void  mockgl_DeleteFramebuffersEXT(GLsizei n, const GLuint * framebuffers)
{
    return getGlMock()->gl_DeleteFramebuffersEXT(n, framebuffers);
}
PFNGLDELETEFRAMEBUFFERSEXTPROC __glewDeleteFramebuffersEXT = mockgl_DeleteFramebuffersEXT;

void  mockgl_DeleteRenderbuffersEXT(GLsizei n, const GLuint * renderbuffers)
{
    return getGlMock()->gl_DeleteRenderbuffersEXT(n, renderbuffers);
}
PFNGLDELETERENDERBUFFERSEXTPROC __glewDeleteRenderbuffersEXT = mockgl_DeleteRenderbuffersEXT;

void  mockgl_FramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return getGlMock()->gl_FramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}
PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC __glewFramebufferRenderbufferEXT = mockgl_FramebufferRenderbufferEXT;

void  mockgl_FramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return getGlMock()->gl_FramebufferTexture1DEXT(target, attachment, textarget, texture, level);
}
PFNGLFRAMEBUFFERTEXTURE1DEXTPROC __glewFramebufferTexture1DEXT = mockgl_FramebufferTexture1DEXT;

void  mockgl_FramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return getGlMock()->gl_FramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}
PFNGLFRAMEBUFFERTEXTURE2DEXTPROC __glewFramebufferTexture2DEXT = mockgl_FramebufferTexture2DEXT;

void  mockgl_FramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return getGlMock()->gl_FramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
}
PFNGLFRAMEBUFFERTEXTURE3DEXTPROC __glewFramebufferTexture3DEXT = mockgl_FramebufferTexture3DEXT;

void  mockgl_GenFramebuffersEXT(GLsizei n, GLuint * framebuffers)
{
    return getGlMock()->gl_GenFramebuffersEXT(n, framebuffers);
}
PFNGLGENFRAMEBUFFERSEXTPROC __glewGenFramebuffersEXT = mockgl_GenFramebuffersEXT;

void  mockgl_GenRenderbuffersEXT(GLsizei n, GLuint * renderbuffers)
{
    return getGlMock()->gl_GenRenderbuffersEXT(n, renderbuffers);
}
PFNGLGENRENDERBUFFERSEXTPROC __glewGenRenderbuffersEXT = mockgl_GenRenderbuffersEXT;

void  mockgl_GenerateMipmapEXT(GLenum target)
{
    return getGlMock()->gl_GenerateMipmapEXT(target);
}
PFNGLGENERATEMIPMAPEXTPROC __glewGenerateMipmapEXT = mockgl_GenerateMipmapEXT;

void  mockgl_GetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
}
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC __glewGetFramebufferAttachmentParameterivEXT = mockgl_GetFramebufferAttachmentParameterivEXT;

void  mockgl_GetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetRenderbufferParameterivEXT(target, pname, params);
}
PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC __glewGetRenderbufferParameterivEXT = mockgl_GetRenderbufferParameterivEXT;

unsigned char  mockgl_IsFramebufferEXT(GLuint framebuffer)
{
    return getGlMock()->gl_IsFramebufferEXT(framebuffer);
}
PFNGLISFRAMEBUFFEREXTPROC __glewIsFramebufferEXT = mockgl_IsFramebufferEXT;

unsigned char  mockgl_IsRenderbufferEXT(GLuint renderbuffer)
{
    return getGlMock()->gl_IsRenderbufferEXT(renderbuffer);
}
PFNGLISRENDERBUFFEREXTPROC __glewIsRenderbufferEXT = mockgl_IsRenderbufferEXT;

void  mockgl_RenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_RenderbufferStorageEXT(target, internalformat, width, height);
}
PFNGLRENDERBUFFERSTORAGEEXTPROC __glewRenderbufferStorageEXT = mockgl_RenderbufferStorageEXT;

void  mockgl_FramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return getGlMock()->gl_FramebufferTextureEXT(target, attachment, texture, level);
}
PFNGLFRAMEBUFFERTEXTUREEXTPROC __glewFramebufferTextureEXT = mockgl_FramebufferTextureEXT;

void  mockgl_FramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return getGlMock()->gl_FramebufferTextureFaceEXT(target, attachment, texture, level, face);
}
PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC __glewFramebufferTextureFaceEXT = mockgl_FramebufferTextureFaceEXT;

void  mockgl_ProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
    return getGlMock()->gl_ProgramParameteriEXT(program, pname, value);
}
PFNGLPROGRAMPARAMETERIEXTPROC __glewProgramParameteriEXT = mockgl_ProgramParameteriEXT;

void  mockgl_ProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return getGlMock()->gl_ProgramEnvParameters4fvEXT(target, index, count, params);
}
PFNGLPROGRAMENVPARAMETERS4FVEXTPROC __glewProgramEnvParameters4fvEXT = mockgl_ProgramEnvParameters4fvEXT;

void  mockgl_ProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return getGlMock()->gl_ProgramLocalParameters4fvEXT(target, index, count, params);
}
PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC __glewProgramLocalParameters4fvEXT = mockgl_ProgramLocalParameters4fvEXT;

void  mockgl_BindFragDataLocationEXT(GLuint program, GLuint color, const GLchar * name)
{
    return getGlMock()->gl_BindFragDataLocationEXT(program, color, name);
}
PFNGLBINDFRAGDATALOCATIONEXTPROC __glewBindFragDataLocationEXT = mockgl_BindFragDataLocationEXT;

int  mockgl_GetFragDataLocationEXT(GLuint program, const GLchar * name)
{
    return getGlMock()->gl_GetFragDataLocationEXT(program, name);
}
PFNGLGETFRAGDATALOCATIONEXTPROC __glewGetFragDataLocationEXT = mockgl_GetFragDataLocationEXT;

void  mockgl_GetUniformuivEXT(GLuint program, GLint location, GLuint * params)
{
    return getGlMock()->gl_GetUniformuivEXT(program, location, params);
}
PFNGLGETUNIFORMUIVEXTPROC __glewGetUniformuivEXT = mockgl_GetUniformuivEXT;

void  mockgl_GetVertexAttribIivEXT(GLuint index, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetVertexAttribIivEXT(index, pname, params);
}
PFNGLGETVERTEXATTRIBIIVEXTPROC __glewGetVertexAttribIivEXT = mockgl_GetVertexAttribIivEXT;

void  mockgl_GetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint * params)
{
    return getGlMock()->gl_GetVertexAttribIuivEXT(index, pname, params);
}
PFNGLGETVERTEXATTRIBIUIVEXTPROC __glewGetVertexAttribIuivEXT = mockgl_GetVertexAttribIuivEXT;

void  mockgl_Uniform1uiEXT(GLint location, GLuint v0)
{
    return getGlMock()->gl_Uniform1uiEXT(location, v0);
}
PFNGLUNIFORM1UIEXTPROC __glewUniform1uiEXT = mockgl_Uniform1uiEXT;

void  mockgl_Uniform1uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return getGlMock()->gl_Uniform1uivEXT(location, count, value);
}
PFNGLUNIFORM1UIVEXTPROC __glewUniform1uivEXT = mockgl_Uniform1uivEXT;

void  mockgl_Uniform2uiEXT(GLint location, GLuint v0, GLuint v1)
{
    return getGlMock()->gl_Uniform2uiEXT(location, v0, v1);
}
PFNGLUNIFORM2UIEXTPROC __glewUniform2uiEXT = mockgl_Uniform2uiEXT;

void  mockgl_Uniform2uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return getGlMock()->gl_Uniform2uivEXT(location, count, value);
}
PFNGLUNIFORM2UIVEXTPROC __glewUniform2uivEXT = mockgl_Uniform2uivEXT;

void  mockgl_Uniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return getGlMock()->gl_Uniform3uiEXT(location, v0, v1, v2);
}
PFNGLUNIFORM3UIEXTPROC __glewUniform3uiEXT = mockgl_Uniform3uiEXT;

void  mockgl_Uniform3uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return getGlMock()->gl_Uniform3uivEXT(location, count, value);
}
PFNGLUNIFORM3UIVEXTPROC __glewUniform3uivEXT = mockgl_Uniform3uivEXT;

void  mockgl_Uniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return getGlMock()->gl_Uniform4uiEXT(location, v0, v1, v2, v3);
}
PFNGLUNIFORM4UIEXTPROC __glewUniform4uiEXT = mockgl_Uniform4uiEXT;

void  mockgl_Uniform4uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return getGlMock()->gl_Uniform4uivEXT(location, count, value);
}
PFNGLUNIFORM4UIVEXTPROC __glewUniform4uivEXT = mockgl_Uniform4uivEXT;

void  mockgl_VertexAttribI1iEXT(GLuint index, GLint x)
{
    return getGlMock()->gl_VertexAttribI1iEXT(index, x);
}
PFNGLVERTEXATTRIBI1IEXTPROC __glewVertexAttribI1iEXT = mockgl_VertexAttribI1iEXT;

void  mockgl_VertexAttribI1ivEXT(GLuint index, const GLint * v)
{
    return getGlMock()->gl_VertexAttribI1ivEXT(index, v);
}
PFNGLVERTEXATTRIBI1IVEXTPROC __glewVertexAttribI1ivEXT = mockgl_VertexAttribI1ivEXT;

void  mockgl_VertexAttribI1uiEXT(GLuint index, GLuint x)
{
    return getGlMock()->gl_VertexAttribI1uiEXT(index, x);
}
PFNGLVERTEXATTRIBI1UIEXTPROC __glewVertexAttribI1uiEXT = mockgl_VertexAttribI1uiEXT;

void  mockgl_VertexAttribI1uivEXT(GLuint index, const GLuint * v)
{
    return getGlMock()->gl_VertexAttribI1uivEXT(index, v);
}
PFNGLVERTEXATTRIBI1UIVEXTPROC __glewVertexAttribI1uivEXT = mockgl_VertexAttribI1uivEXT;

void  mockgl_VertexAttribI2iEXT(GLuint index, GLint x, GLint y)
{
    return getGlMock()->gl_VertexAttribI2iEXT(index, x, y);
}
PFNGLVERTEXATTRIBI2IEXTPROC __glewVertexAttribI2iEXT = mockgl_VertexAttribI2iEXT;

void  mockgl_VertexAttribI2ivEXT(GLuint index, const GLint * v)
{
    return getGlMock()->gl_VertexAttribI2ivEXT(index, v);
}
PFNGLVERTEXATTRIBI2IVEXTPROC __glewVertexAttribI2ivEXT = mockgl_VertexAttribI2ivEXT;

void  mockgl_VertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y)
{
    return getGlMock()->gl_VertexAttribI2uiEXT(index, x, y);
}
PFNGLVERTEXATTRIBI2UIEXTPROC __glewVertexAttribI2uiEXT = mockgl_VertexAttribI2uiEXT;

void  mockgl_VertexAttribI2uivEXT(GLuint index, const GLuint * v)
{
    return getGlMock()->gl_VertexAttribI2uivEXT(index, v);
}
PFNGLVERTEXATTRIBI2UIVEXTPROC __glewVertexAttribI2uivEXT = mockgl_VertexAttribI2uivEXT;

void  mockgl_VertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z)
{
    return getGlMock()->gl_VertexAttribI3iEXT(index, x, y, z);
}
PFNGLVERTEXATTRIBI3IEXTPROC __glewVertexAttribI3iEXT = mockgl_VertexAttribI3iEXT;

void  mockgl_VertexAttribI3ivEXT(GLuint index, const GLint * v)
{
    return getGlMock()->gl_VertexAttribI3ivEXT(index, v);
}
PFNGLVERTEXATTRIBI3IVEXTPROC __glewVertexAttribI3ivEXT = mockgl_VertexAttribI3ivEXT;

void  mockgl_VertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return getGlMock()->gl_VertexAttribI3uiEXT(index, x, y, z);
}
PFNGLVERTEXATTRIBI3UIEXTPROC __glewVertexAttribI3uiEXT = mockgl_VertexAttribI3uiEXT;

void  mockgl_VertexAttribI3uivEXT(GLuint index, const GLuint * v)
{
    return getGlMock()->gl_VertexAttribI3uivEXT(index, v);
}
PFNGLVERTEXATTRIBI3UIVEXTPROC __glewVertexAttribI3uivEXT = mockgl_VertexAttribI3uivEXT;

void  mockgl_VertexAttribI4bvEXT(GLuint index, const GLbyte * v)
{
    return getGlMock()->gl_VertexAttribI4bvEXT(index, v);
}
PFNGLVERTEXATTRIBI4BVEXTPROC __glewVertexAttribI4bvEXT = mockgl_VertexAttribI4bvEXT;

void  mockgl_VertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return getGlMock()->gl_VertexAttribI4iEXT(index, x, y, z, w);
}
PFNGLVERTEXATTRIBI4IEXTPROC __glewVertexAttribI4iEXT = mockgl_VertexAttribI4iEXT;

void  mockgl_VertexAttribI4ivEXT(GLuint index, const GLint * v)
{
    return getGlMock()->gl_VertexAttribI4ivEXT(index, v);
}
PFNGLVERTEXATTRIBI4IVEXTPROC __glewVertexAttribI4ivEXT = mockgl_VertexAttribI4ivEXT;

void  mockgl_VertexAttribI4svEXT(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttribI4svEXT(index, v);
}
PFNGLVERTEXATTRIBI4SVEXTPROC __glewVertexAttribI4svEXT = mockgl_VertexAttribI4svEXT;

void  mockgl_VertexAttribI4ubvEXT(GLuint index, const GLubyte * v)
{
    return getGlMock()->gl_VertexAttribI4ubvEXT(index, v);
}
PFNGLVERTEXATTRIBI4UBVEXTPROC __glewVertexAttribI4ubvEXT = mockgl_VertexAttribI4ubvEXT;

void  mockgl_VertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return getGlMock()->gl_VertexAttribI4uiEXT(index, x, y, z, w);
}
PFNGLVERTEXATTRIBI4UIEXTPROC __glewVertexAttribI4uiEXT = mockgl_VertexAttribI4uiEXT;

void  mockgl_VertexAttribI4uivEXT(GLuint index, const GLuint * v)
{
    return getGlMock()->gl_VertexAttribI4uivEXT(index, v);
}
PFNGLVERTEXATTRIBI4UIVEXTPROC __glewVertexAttribI4uivEXT = mockgl_VertexAttribI4uivEXT;

void  mockgl_VertexAttribI4usvEXT(GLuint index, const GLushort * v)
{
    return getGlMock()->gl_VertexAttribI4usvEXT(index, v);
}
PFNGLVERTEXATTRIBI4USVEXTPROC __glewVertexAttribI4usvEXT = mockgl_VertexAttribI4usvEXT;

void  mockgl_VertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
    return getGlMock()->gl_VertexAttribIPointerEXT(index, size, type, stride, pointer);
}
PFNGLVERTEXATTRIBIPOINTEREXTPROC __glewVertexAttribIPointerEXT = mockgl_VertexAttribIPointerEXT;

void  mockgl_GetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return getGlMock()->gl_GetHistogramEXT(target, reset, format, type, values);
}
PFNGLGETHISTOGRAMEXTPROC __glewGetHistogramEXT = mockgl_GetHistogramEXT;

void  mockgl_GetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetHistogramParameterfvEXT(target, pname, params);
}
PFNGLGETHISTOGRAMPARAMETERFVEXTPROC __glewGetHistogramParameterfvEXT = mockgl_GetHistogramParameterfvEXT;

void  mockgl_GetHistogramParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetHistogramParameterivEXT(target, pname, params);
}
PFNGLGETHISTOGRAMPARAMETERIVEXTPROC __glewGetHistogramParameterivEXT = mockgl_GetHistogramParameterivEXT;

void  mockgl_GetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return getGlMock()->gl_GetMinmaxEXT(target, reset, format, type, values);
}
PFNGLGETMINMAXEXTPROC __glewGetMinmaxEXT = mockgl_GetMinmaxEXT;

void  mockgl_GetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetMinmaxParameterfvEXT(target, pname, params);
}
PFNGLGETMINMAXPARAMETERFVEXTPROC __glewGetMinmaxParameterfvEXT = mockgl_GetMinmaxParameterfvEXT;

void  mockgl_GetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetMinmaxParameterivEXT(target, pname, params);
}
PFNGLGETMINMAXPARAMETERIVEXTPROC __glewGetMinmaxParameterivEXT = mockgl_GetMinmaxParameterivEXT;

void  mockgl_HistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return getGlMock()->gl_HistogramEXT(target, width, internalformat, sink);
}
PFNGLHISTOGRAMEXTPROC __glewHistogramEXT = mockgl_HistogramEXT;

void  mockgl_MinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
{
    return getGlMock()->gl_MinmaxEXT(target, internalformat, sink);
}
PFNGLMINMAXEXTPROC __glewMinmaxEXT = mockgl_MinmaxEXT;

void  mockgl_ResetHistogramEXT(GLenum target)
{
    return getGlMock()->gl_ResetHistogramEXT(target);
}
PFNGLRESETHISTOGRAMEXTPROC __glewResetHistogramEXT = mockgl_ResetHistogramEXT;

void  mockgl_ResetMinmaxEXT(GLenum target)
{
    return getGlMock()->gl_ResetMinmaxEXT(target);
}
PFNGLRESETMINMAXEXTPROC __glewResetMinmaxEXT = mockgl_ResetMinmaxEXT;

void  mockgl_IndexFuncEXT(GLenum func, GLfloat ref)
{
    return getGlMock()->gl_IndexFuncEXT(func, ref);
}
PFNGLINDEXFUNCEXTPROC __glewIndexFuncEXT = mockgl_IndexFuncEXT;

void  mockgl_IndexMaterialEXT(GLenum face, GLenum mode)
{
    return getGlMock()->gl_IndexMaterialEXT(face, mode);
}
PFNGLINDEXMATERIALEXTPROC __glewIndexMaterialEXT = mockgl_IndexMaterialEXT;

void  mockgl_ApplyTextureEXT(GLenum mode)
{
    return getGlMock()->gl_ApplyTextureEXT(mode);
}
PFNGLAPPLYTEXTUREEXTPROC __glewApplyTextureEXT = mockgl_ApplyTextureEXT;

void  mockgl_TextureLightEXT(GLenum pname)
{
    return getGlMock()->gl_TextureLightEXT(pname);
}
PFNGLTEXTURELIGHTEXTPROC __glewTextureLightEXT = mockgl_TextureLightEXT;

void  mockgl_TextureMaterialEXT(GLenum face, GLenum mode)
{
    return getGlMock()->gl_TextureMaterialEXT(face, mode);
}
PFNGLTEXTUREMATERIALEXTPROC __glewTextureMaterialEXT = mockgl_TextureMaterialEXT;

void  mockgl_MultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return getGlMock()->gl_MultiDrawArraysEXT(mode, first, count, primcount);
}
PFNGLMULTIDRAWARRAYSEXTPROC __glewMultiDrawArraysEXT = mockgl_MultiDrawArraysEXT;

void  mockgl_MultiDrawElementsEXT(GLenum mode, GLsizei * count, GLenum type, const GLvoid ** indices, GLsizei primcount)
{
    return getGlMock()->gl_MultiDrawElementsEXT(mode, count, type, indices, primcount);
}
PFNGLMULTIDRAWELEMENTSEXTPROC __glewMultiDrawElementsEXT = mockgl_MultiDrawElementsEXT;

void  mockgl_SampleMaskEXT(GLclampf value, GLboolean invert)
{
    return getGlMock()->gl_SampleMaskEXT(value, invert);
}
PFNGLSAMPLEMASKEXTPROC __glewSampleMaskEXT = mockgl_SampleMaskEXT;

void  mockgl_SamplePatternEXT(GLenum pattern)
{
    return getGlMock()->gl_SamplePatternEXT(pattern);
}
PFNGLSAMPLEPATTERNEXTPROC __glewSamplePatternEXT = mockgl_SamplePatternEXT;

void  mockgl_ColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void * data)
{
    return getGlMock()->gl_ColorTableEXT(target, internalFormat, width, format, type, data);
}
PFNGLCOLORTABLEEXTPROC __glewColorTableEXT = mockgl_ColorTableEXT;

void  mockgl_GetColorTableEXT(GLenum target, GLenum format, GLenum type, void * data)
{
    return getGlMock()->gl_GetColorTableEXT(target, format, type, data);
}
PFNGLGETCOLORTABLEEXTPROC __glewGetColorTableEXT = mockgl_GetColorTableEXT;

void  mockgl_GetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetColorTableParameterfvEXT(target, pname, params);
}
PFNGLGETCOLORTABLEPARAMETERFVEXTPROC __glewGetColorTableParameterfvEXT = mockgl_GetColorTableParameterfvEXT;

void  mockgl_GetColorTableParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetColorTableParameterivEXT(target, pname, params);
}
PFNGLGETCOLORTABLEPARAMETERIVEXTPROC __glewGetColorTableParameterivEXT = mockgl_GetColorTableParameterivEXT;

void  mockgl_GetPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_GetPixelTransformParameterfvEXT(target, pname, params);
}
PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC __glewGetPixelTransformParameterfvEXT = mockgl_GetPixelTransformParameterfvEXT;

void  mockgl_GetPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_GetPixelTransformParameterivEXT(target, pname, params);
}
PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC __glewGetPixelTransformParameterivEXT = mockgl_GetPixelTransformParameterivEXT;

void  mockgl_PixelTransformParameterfEXT(GLenum target, GLenum pname, const GLfloat param)
{
    return getGlMock()->gl_PixelTransformParameterfEXT(target, pname, param);
}
PFNGLPIXELTRANSFORMPARAMETERFEXTPROC __glewPixelTransformParameterfEXT = mockgl_PixelTransformParameterfEXT;

void  mockgl_PixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_PixelTransformParameterfvEXT(target, pname, params);
}
PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC __glewPixelTransformParameterfvEXT = mockgl_PixelTransformParameterfvEXT;

void  mockgl_PixelTransformParameteriEXT(GLenum target, GLenum pname, const GLint param)
{
    return getGlMock()->gl_PixelTransformParameteriEXT(target, pname, param);
}
PFNGLPIXELTRANSFORMPARAMETERIEXTPROC __glewPixelTransformParameteriEXT = mockgl_PixelTransformParameteriEXT;

void  mockgl_PixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_PixelTransformParameterivEXT(target, pname, params);
}
PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC __glewPixelTransformParameterivEXT = mockgl_PixelTransformParameterivEXT;

void  mockgl_PointParameterfEXT(GLenum pname, GLfloat param)
{
    return getGlMock()->gl_PointParameterfEXT(pname, param);
}
PFNGLPOINTPARAMETERFEXTPROC __glewPointParameterfEXT = mockgl_PointParameterfEXT;

void  mockgl_PointParameterfvEXT(GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_PointParameterfvEXT(pname, params);
}
PFNGLPOINTPARAMETERFVEXTPROC __glewPointParameterfvEXT = mockgl_PointParameterfvEXT;

void  mockgl_PolygonOffsetEXT(GLfloat factor, GLfloat bias)
{
    return getGlMock()->gl_PolygonOffsetEXT(factor, bias);
}
PFNGLPOLYGONOFFSETEXTPROC __glewPolygonOffsetEXT = mockgl_PolygonOffsetEXT;

void  mockgl_ProvokingVertexEXT(GLenum mode)
{
    return getGlMock()->gl_ProvokingVertexEXT(mode);
}
PFNGLPROVOKINGVERTEXEXTPROC __glewProvokingVertexEXT = mockgl_ProvokingVertexEXT;

void  mockgl_BeginSceneEXT()
{
    return getGlMock()->gl_BeginSceneEXT();
}
PFNGLBEGINSCENEEXTPROC __glewBeginSceneEXT = mockgl_BeginSceneEXT;

void  mockgl_EndSceneEXT()
{
    return getGlMock()->gl_EndSceneEXT();
}
PFNGLENDSCENEEXTPROC __glewEndSceneEXT = mockgl_EndSceneEXT;

void  mockgl_SecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
    return getGlMock()->gl_SecondaryColor3bEXT(red, green, blue);
}
PFNGLSECONDARYCOLOR3BEXTPROC __glewSecondaryColor3bEXT = mockgl_SecondaryColor3bEXT;

void  mockgl_SecondaryColor3bvEXT(const GLbyte * v)
{
    return getGlMock()->gl_SecondaryColor3bvEXT(v);
}
PFNGLSECONDARYCOLOR3BVEXTPROC __glewSecondaryColor3bvEXT = mockgl_SecondaryColor3bvEXT;

void  mockgl_SecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
    return getGlMock()->gl_SecondaryColor3dEXT(red, green, blue);
}
PFNGLSECONDARYCOLOR3DEXTPROC __glewSecondaryColor3dEXT = mockgl_SecondaryColor3dEXT;

void  mockgl_SecondaryColor3dvEXT(const GLdouble * v)
{
    return getGlMock()->gl_SecondaryColor3dvEXT(v);
}
PFNGLSECONDARYCOLOR3DVEXTPROC __glewSecondaryColor3dvEXT = mockgl_SecondaryColor3dvEXT;

void  mockgl_SecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
    return getGlMock()->gl_SecondaryColor3fEXT(red, green, blue);
}
PFNGLSECONDARYCOLOR3FEXTPROC __glewSecondaryColor3fEXT = mockgl_SecondaryColor3fEXT;

void  mockgl_SecondaryColor3fvEXT(const GLfloat * v)
{
    return getGlMock()->gl_SecondaryColor3fvEXT(v);
}
PFNGLSECONDARYCOLOR3FVEXTPROC __glewSecondaryColor3fvEXT = mockgl_SecondaryColor3fvEXT;

void  mockgl_SecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
    return getGlMock()->gl_SecondaryColor3iEXT(red, green, blue);
}
PFNGLSECONDARYCOLOR3IEXTPROC __glewSecondaryColor3iEXT = mockgl_SecondaryColor3iEXT;

void  mockgl_SecondaryColor3ivEXT(const GLint * v)
{
    return getGlMock()->gl_SecondaryColor3ivEXT(v);
}
PFNGLSECONDARYCOLOR3IVEXTPROC __glewSecondaryColor3ivEXT = mockgl_SecondaryColor3ivEXT;

void  mockgl_SecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
    return getGlMock()->gl_SecondaryColor3sEXT(red, green, blue);
}
PFNGLSECONDARYCOLOR3SEXTPROC __glewSecondaryColor3sEXT = mockgl_SecondaryColor3sEXT;

void  mockgl_SecondaryColor3svEXT(const GLshort * v)
{
    return getGlMock()->gl_SecondaryColor3svEXT(v);
}
PFNGLSECONDARYCOLOR3SVEXTPROC __glewSecondaryColor3svEXT = mockgl_SecondaryColor3svEXT;

void  mockgl_SecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
    return getGlMock()->gl_SecondaryColor3ubEXT(red, green, blue);
}
PFNGLSECONDARYCOLOR3UBEXTPROC __glewSecondaryColor3ubEXT = mockgl_SecondaryColor3ubEXT;

void  mockgl_SecondaryColor3ubvEXT(const GLubyte * v)
{
    return getGlMock()->gl_SecondaryColor3ubvEXT(v);
}
PFNGLSECONDARYCOLOR3UBVEXTPROC __glewSecondaryColor3ubvEXT = mockgl_SecondaryColor3ubvEXT;

void  mockgl_SecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
    return getGlMock()->gl_SecondaryColor3uiEXT(red, green, blue);
}
PFNGLSECONDARYCOLOR3UIEXTPROC __glewSecondaryColor3uiEXT = mockgl_SecondaryColor3uiEXT;

void  mockgl_SecondaryColor3uivEXT(const GLuint * v)
{
    return getGlMock()->gl_SecondaryColor3uivEXT(v);
}
PFNGLSECONDARYCOLOR3UIVEXTPROC __glewSecondaryColor3uivEXT = mockgl_SecondaryColor3uivEXT;

void  mockgl_SecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
    return getGlMock()->gl_SecondaryColor3usEXT(red, green, blue);
}
PFNGLSECONDARYCOLOR3USEXTPROC __glewSecondaryColor3usEXT = mockgl_SecondaryColor3usEXT;

void  mockgl_SecondaryColor3usvEXT(const GLushort * v)
{
    return getGlMock()->gl_SecondaryColor3usvEXT(v);
}
PFNGLSECONDARYCOLOR3USVEXTPROC __glewSecondaryColor3usvEXT = mockgl_SecondaryColor3usvEXT;

void  mockgl_SecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
    return getGlMock()->gl_SecondaryColorPointerEXT(size, type, stride, pointer);
}
PFNGLSECONDARYCOLORPOINTEREXTPROC __glewSecondaryColorPointerEXT = mockgl_SecondaryColorPointerEXT;

void  mockgl_ActiveProgramEXT(GLuint program)
{
    return getGlMock()->gl_ActiveProgramEXT(program);
}
PFNGLACTIVEPROGRAMEXTPROC __glewActiveProgramEXT = mockgl_ActiveProgramEXT;

unsigned int  mockgl_CreateShaderProgramEXT(GLenum type, const char * string)
{
    return getGlMock()->gl_CreateShaderProgramEXT(type, string);
}
PFNGLCREATESHADERPROGRAMEXTPROC __glewCreateShaderProgramEXT = mockgl_CreateShaderProgramEXT;

void  mockgl_UseShaderProgramEXT(GLenum type, GLuint program)
{
    return getGlMock()->gl_UseShaderProgramEXT(type, program);
}
PFNGLUSESHADERPROGRAMEXTPROC __glewUseShaderProgramEXT = mockgl_UseShaderProgramEXT;

void  mockgl_BindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format)
{
    return getGlMock()->gl_BindImageTextureEXT(index, texture, level, layered, layer, access, format);
}
PFNGLBINDIMAGETEXTUREEXTPROC __glewBindImageTextureEXT = mockgl_BindImageTextureEXT;

void  mockgl_MemoryBarrierEXT(GLbitfield barriers)
{
    return getGlMock()->gl_MemoryBarrierEXT(barriers);
}
PFNGLMEMORYBARRIEREXTPROC __glewMemoryBarrierEXT = mockgl_MemoryBarrierEXT;

void  mockgl_ActiveStencilFaceEXT(GLenum face)
{
    return getGlMock()->gl_ActiveStencilFaceEXT(face);
}
PFNGLACTIVESTENCILFACEEXTPROC __glewActiveStencilFaceEXT = mockgl_ActiveStencilFaceEXT;

void  mockgl_TexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return getGlMock()->gl_TexSubImage1DEXT(target, level, xoffset, width, format, type, pixels);
}
PFNGLTEXSUBIMAGE1DEXTPROC __glewTexSubImage1DEXT = mockgl_TexSubImage1DEXT;

void  mockgl_TexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return getGlMock()->gl_TexSubImage2DEXT(target, level, xoffset, yoffset, width, height, format, type, pixels);
}
PFNGLTEXSUBIMAGE2DEXTPROC __glewTexSubImage2DEXT = mockgl_TexSubImage2DEXT;

void  mockgl_TexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return getGlMock()->gl_TexImage3DEXT(target, level, internalformat, width, height, depth, border, format, type, pixels);
}
PFNGLTEXIMAGE3DEXTPROC __glewTexImage3DEXT = mockgl_TexImage3DEXT;

void  mockgl_FramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return getGlMock()->gl_FramebufferTextureLayerEXT(target, attachment, texture, level, layer);
}
PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC __glewFramebufferTextureLayerEXT = mockgl_FramebufferTextureLayerEXT;

void  mockgl_TexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
    return getGlMock()->gl_TexBufferEXT(target, internalformat, buffer);
}
PFNGLTEXBUFFEREXTPROC __glewTexBufferEXT = mockgl_TexBufferEXT;

void  mockgl_ClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha)
{
    return getGlMock()->gl_ClearColorIiEXT(red, green, blue, alpha);
}
PFNGLCLEARCOLORIIEXTPROC __glewClearColorIiEXT = mockgl_ClearColorIiEXT;

void  mockgl_ClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return getGlMock()->gl_ClearColorIuiEXT(red, green, blue, alpha);
}
PFNGLCLEARCOLORIUIEXTPROC __glewClearColorIuiEXT = mockgl_ClearColorIuiEXT;

void  mockgl_GetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetTexParameterIivEXT(target, pname, params);
}
PFNGLGETTEXPARAMETERIIVEXTPROC __glewGetTexParameterIivEXT = mockgl_GetTexParameterIivEXT;

void  mockgl_GetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return getGlMock()->gl_GetTexParameterIuivEXT(target, pname, params);
}
PFNGLGETTEXPARAMETERIUIVEXTPROC __glewGetTexParameterIuivEXT = mockgl_GetTexParameterIuivEXT;

void  mockgl_TexParameterIivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_TexParameterIivEXT(target, pname, params);
}
PFNGLTEXPARAMETERIIVEXTPROC __glewTexParameterIivEXT = mockgl_TexParameterIivEXT;

void  mockgl_TexParameterIuivEXT(GLenum target, GLenum pname, const GLuint * params)
{
    return getGlMock()->gl_TexParameterIuivEXT(target, pname, params);
}
PFNGLTEXPARAMETERIUIVEXTPROC __glewTexParameterIuivEXT = mockgl_TexParameterIuivEXT;

unsigned char  mockgl_AreTexturesResidentEXT(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return getGlMock()->gl_AreTexturesResidentEXT(n, textures, residences);
}
PFNGLARETEXTURESRESIDENTEXTPROC __glewAreTexturesResidentEXT = mockgl_AreTexturesResidentEXT;

void  mockgl_BindTextureEXT(GLenum target, GLuint texture)
{
    return getGlMock()->gl_BindTextureEXT(target, texture);
}
PFNGLBINDTEXTUREEXTPROC __glewBindTextureEXT = mockgl_BindTextureEXT;

void  mockgl_DeleteTexturesEXT(GLsizei n, const GLuint * textures)
{
    return getGlMock()->gl_DeleteTexturesEXT(n, textures);
}
PFNGLDELETETEXTURESEXTPROC __glewDeleteTexturesEXT = mockgl_DeleteTexturesEXT;

void  mockgl_GenTexturesEXT(GLsizei n, GLuint * textures)
{
    return getGlMock()->gl_GenTexturesEXT(n, textures);
}
PFNGLGENTEXTURESEXTPROC __glewGenTexturesEXT = mockgl_GenTexturesEXT;

unsigned char  mockgl_IsTextureEXT(GLuint texture)
{
    return getGlMock()->gl_IsTextureEXT(texture);
}
PFNGLISTEXTUREEXTPROC __glewIsTextureEXT = mockgl_IsTextureEXT;

void  mockgl_PrioritizeTexturesEXT(GLsizei n, const GLuint * textures, const GLclampf * priorities)
{
    return getGlMock()->gl_PrioritizeTexturesEXT(n, textures, priorities);
}
PFNGLPRIORITIZETEXTURESEXTPROC __glewPrioritizeTexturesEXT = mockgl_PrioritizeTexturesEXT;

void  mockgl_TextureNormalEXT(GLenum mode)
{
    return getGlMock()->gl_TextureNormalEXT(mode);
}
PFNGLTEXTURENORMALEXTPROC __glewTextureNormalEXT = mockgl_TextureNormalEXT;

void  mockgl_GetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64EXT * params)
{
    return getGlMock()->gl_GetQueryObjecti64vEXT(id, pname, params);
}
PFNGLGETQUERYOBJECTI64VEXTPROC __glewGetQueryObjecti64vEXT = mockgl_GetQueryObjecti64vEXT;

void  mockgl_GetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64EXT * params)
{
    return getGlMock()->gl_GetQueryObjectui64vEXT(id, pname, params);
}
PFNGLGETQUERYOBJECTUI64VEXTPROC __glewGetQueryObjectui64vEXT = mockgl_GetQueryObjectui64vEXT;

void  mockgl_BeginTransformFeedbackEXT(GLenum primitiveMode)
{
    return getGlMock()->gl_BeginTransformFeedbackEXT(primitiveMode);
}
PFNGLBEGINTRANSFORMFEEDBACKEXTPROC __glewBeginTransformFeedbackEXT = mockgl_BeginTransformFeedbackEXT;

void  mockgl_BindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer)
{
    return getGlMock()->gl_BindBufferBaseEXT(target, index, buffer);
}
PFNGLBINDBUFFERBASEEXTPROC __glewBindBufferBaseEXT = mockgl_BindBufferBaseEXT;

void  mockgl_BindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return getGlMock()->gl_BindBufferOffsetEXT(target, index, buffer, offset);
}
PFNGLBINDBUFFEROFFSETEXTPROC __glewBindBufferOffsetEXT = mockgl_BindBufferOffsetEXT;

void  mockgl_BindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return getGlMock()->gl_BindBufferRangeEXT(target, index, buffer, offset, size);
}
PFNGLBINDBUFFERRANGEEXTPROC __glewBindBufferRangeEXT = mockgl_BindBufferRangeEXT;

void  mockgl_EndTransformFeedbackEXT()
{
    return getGlMock()->gl_EndTransformFeedbackEXT();
}
PFNGLENDTRANSFORMFEEDBACKEXTPROC __glewEndTransformFeedbackEXT = mockgl_EndTransformFeedbackEXT;

void  mockgl_GetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, char * name)
{
    return getGlMock()->gl_GetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);
}
PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC __glewGetTransformFeedbackVaryingEXT = mockgl_GetTransformFeedbackVaryingEXT;

void  mockgl_TransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const char ** varyings, GLenum bufferMode)
{
    return getGlMock()->gl_TransformFeedbackVaryingsEXT(program, count, varyings, bufferMode);
}
PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC __glewTransformFeedbackVaryingsEXT = mockgl_TransformFeedbackVaryingsEXT;

void  mockgl_ArrayElementEXT(GLint i)
{
    return getGlMock()->gl_ArrayElementEXT(i);
}
PFNGLARRAYELEMENTEXTPROC __glewArrayElementEXT = mockgl_ArrayElementEXT;

void  mockgl_ColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return getGlMock()->gl_ColorPointerEXT(size, type, stride, count, pointer);
}
PFNGLCOLORPOINTEREXTPROC __glewColorPointerEXT = mockgl_ColorPointerEXT;

void  mockgl_DrawArraysEXT(GLenum mode, GLint first, GLsizei count)
{
    return getGlMock()->gl_DrawArraysEXT(mode, first, count);
}
PFNGLDRAWARRAYSEXTPROC __glewDrawArraysEXT = mockgl_DrawArraysEXT;

void  mockgl_EdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean * pointer)
{
    return getGlMock()->gl_EdgeFlagPointerEXT(stride, count, pointer);
}
PFNGLEDGEFLAGPOINTEREXTPROC __glewEdgeFlagPointerEXT = mockgl_EdgeFlagPointerEXT;

void  mockgl_IndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return getGlMock()->gl_IndexPointerEXT(type, stride, count, pointer);
}
PFNGLINDEXPOINTEREXTPROC __glewIndexPointerEXT = mockgl_IndexPointerEXT;

void  mockgl_NormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return getGlMock()->gl_NormalPointerEXT(type, stride, count, pointer);
}
PFNGLNORMALPOINTEREXTPROC __glewNormalPointerEXT = mockgl_NormalPointerEXT;

void  mockgl_TexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return getGlMock()->gl_TexCoordPointerEXT(size, type, stride, count, pointer);
}
PFNGLTEXCOORDPOINTEREXTPROC __glewTexCoordPointerEXT = mockgl_TexCoordPointerEXT;

void  mockgl_VertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return getGlMock()->gl_VertexPointerEXT(size, type, stride, count, pointer);
}
PFNGLVERTEXPOINTEREXTPROC __glewVertexPointerEXT = mockgl_VertexPointerEXT;

void  mockgl_GetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble * params)
{
    return getGlMock()->gl_GetVertexAttribLdvEXT(index, pname, params);
}
PFNGLGETVERTEXATTRIBLDVEXTPROC __glewGetVertexAttribLdvEXT = mockgl_GetVertexAttribLdvEXT;

void  mockgl_VertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return getGlMock()->gl_VertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}
PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC __glewVertexArrayVertexAttribLOffsetEXT = mockgl_VertexArrayVertexAttribLOffsetEXT;

void  mockgl_VertexAttribL1dEXT(GLuint index, GLdouble x)
{
    return getGlMock()->gl_VertexAttribL1dEXT(index, x);
}
PFNGLVERTEXATTRIBL1DEXTPROC __glewVertexAttribL1dEXT = mockgl_VertexAttribL1dEXT;

void  mockgl_VertexAttribL1dvEXT(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttribL1dvEXT(index, v);
}
PFNGLVERTEXATTRIBL1DVEXTPROC __glewVertexAttribL1dvEXT = mockgl_VertexAttribL1dvEXT;

void  mockgl_VertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y)
{
    return getGlMock()->gl_VertexAttribL2dEXT(index, x, y);
}
PFNGLVERTEXATTRIBL2DEXTPROC __glewVertexAttribL2dEXT = mockgl_VertexAttribL2dEXT;

void  mockgl_VertexAttribL2dvEXT(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttribL2dvEXT(index, v);
}
PFNGLVERTEXATTRIBL2DVEXTPROC __glewVertexAttribL2dvEXT = mockgl_VertexAttribL2dvEXT;

void  mockgl_VertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_VertexAttribL3dEXT(index, x, y, z);
}
PFNGLVERTEXATTRIBL3DEXTPROC __glewVertexAttribL3dEXT = mockgl_VertexAttribL3dEXT;

void  mockgl_VertexAttribL3dvEXT(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttribL3dvEXT(index, v);
}
PFNGLVERTEXATTRIBL3DVEXTPROC __glewVertexAttribL3dvEXT = mockgl_VertexAttribL3dvEXT;

void  mockgl_VertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_VertexAttribL4dEXT(index, x, y, z, w);
}
PFNGLVERTEXATTRIBL4DEXTPROC __glewVertexAttribL4dEXT = mockgl_VertexAttribL4dEXT;

void  mockgl_VertexAttribL4dvEXT(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttribL4dvEXT(index, v);
}
PFNGLVERTEXATTRIBL4DVEXTPROC __glewVertexAttribL4dvEXT = mockgl_VertexAttribL4dvEXT;

void  mockgl_VertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return getGlMock()->gl_VertexAttribLPointerEXT(index, size, type, stride, pointer);
}
PFNGLVERTEXATTRIBLPOINTEREXTPROC __glewVertexAttribLPointerEXT = mockgl_VertexAttribLPointerEXT;

void  mockgl_BeginVertexShaderEXT()
{
    return getGlMock()->gl_BeginVertexShaderEXT();
}
PFNGLBEGINVERTEXSHADEREXTPROC __glewBeginVertexShaderEXT = mockgl_BeginVertexShaderEXT;

unsigned int  mockgl_BindLightParameterEXT(GLenum light, GLenum value)
{
    return getGlMock()->gl_BindLightParameterEXT(light, value);
}
PFNGLBINDLIGHTPARAMETEREXTPROC __glewBindLightParameterEXT = mockgl_BindLightParameterEXT;

unsigned int  mockgl_BindMaterialParameterEXT(GLenum face, GLenum value)
{
    return getGlMock()->gl_BindMaterialParameterEXT(face, value);
}
PFNGLBINDMATERIALPARAMETEREXTPROC __glewBindMaterialParameterEXT = mockgl_BindMaterialParameterEXT;

unsigned int  mockgl_BindParameterEXT(GLenum value)
{
    return getGlMock()->gl_BindParameterEXT(value);
}
PFNGLBINDPARAMETEREXTPROC __glewBindParameterEXT = mockgl_BindParameterEXT;

unsigned int  mockgl_BindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
{
    return getGlMock()->gl_BindTexGenParameterEXT(unit, coord, value);
}
PFNGLBINDTEXGENPARAMETEREXTPROC __glewBindTexGenParameterEXT = mockgl_BindTexGenParameterEXT;

unsigned int  mockgl_BindTextureUnitParameterEXT(GLenum unit, GLenum value)
{
    return getGlMock()->gl_BindTextureUnitParameterEXT(unit, value);
}
PFNGLBINDTEXTUREUNITPARAMETEREXTPROC __glewBindTextureUnitParameterEXT = mockgl_BindTextureUnitParameterEXT;

void  mockgl_BindVertexShaderEXT(GLuint id)
{
    return getGlMock()->gl_BindVertexShaderEXT(id);
}
PFNGLBINDVERTEXSHADEREXTPROC __glewBindVertexShaderEXT = mockgl_BindVertexShaderEXT;

void  mockgl_DeleteVertexShaderEXT(GLuint id)
{
    return getGlMock()->gl_DeleteVertexShaderEXT(id);
}
PFNGLDELETEVERTEXSHADEREXTPROC __glewDeleteVertexShaderEXT = mockgl_DeleteVertexShaderEXT;

void  mockgl_DisableVariantClientStateEXT(GLuint id)
{
    return getGlMock()->gl_DisableVariantClientStateEXT(id);
}
PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC __glewDisableVariantClientStateEXT = mockgl_DisableVariantClientStateEXT;

void  mockgl_EnableVariantClientStateEXT(GLuint id)
{
    return getGlMock()->gl_EnableVariantClientStateEXT(id);
}
PFNGLENABLEVARIANTCLIENTSTATEEXTPROC __glewEnableVariantClientStateEXT = mockgl_EnableVariantClientStateEXT;

void  mockgl_EndVertexShaderEXT()
{
    return getGlMock()->gl_EndVertexShaderEXT();
}
PFNGLENDVERTEXSHADEREXTPROC __glewEndVertexShaderEXT = mockgl_EndVertexShaderEXT;

void  mockgl_ExtractComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return getGlMock()->gl_ExtractComponentEXT(res, src, num);
}
PFNGLEXTRACTCOMPONENTEXTPROC __glewExtractComponentEXT = mockgl_ExtractComponentEXT;

unsigned int  mockgl_GenSymbolsEXT(GLenum dataType, GLenum storageType, GLenum range, GLuint components)
{
    return getGlMock()->gl_GenSymbolsEXT(dataType, storageType, range, components);
}
PFNGLGENSYMBOLSEXTPROC __glewGenSymbolsEXT = mockgl_GenSymbolsEXT;

unsigned int  mockgl_GenVertexShadersEXT(GLuint range)
{
    return getGlMock()->gl_GenVertexShadersEXT(range);
}
PFNGLGENVERTEXSHADERSEXTPROC __glewGenVertexShadersEXT = mockgl_GenVertexShadersEXT;

void  mockgl_GetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return getGlMock()->gl_GetInvariantBooleanvEXT(id, value, data);
}
PFNGLGETINVARIANTBOOLEANVEXTPROC __glewGetInvariantBooleanvEXT = mockgl_GetInvariantBooleanvEXT;

void  mockgl_GetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return getGlMock()->gl_GetInvariantFloatvEXT(id, value, data);
}
PFNGLGETINVARIANTFLOATVEXTPROC __glewGetInvariantFloatvEXT = mockgl_GetInvariantFloatvEXT;

void  mockgl_GetInvariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return getGlMock()->gl_GetInvariantIntegervEXT(id, value, data);
}
PFNGLGETINVARIANTINTEGERVEXTPROC __glewGetInvariantIntegervEXT = mockgl_GetInvariantIntegervEXT;

void  mockgl_GetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return getGlMock()->gl_GetLocalConstantBooleanvEXT(id, value, data);
}
PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC __glewGetLocalConstantBooleanvEXT = mockgl_GetLocalConstantBooleanvEXT;

void  mockgl_GetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return getGlMock()->gl_GetLocalConstantFloatvEXT(id, value, data);
}
PFNGLGETLOCALCONSTANTFLOATVEXTPROC __glewGetLocalConstantFloatvEXT = mockgl_GetLocalConstantFloatvEXT;

void  mockgl_GetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return getGlMock()->gl_GetLocalConstantIntegervEXT(id, value, data);
}
PFNGLGETLOCALCONSTANTINTEGERVEXTPROC __glewGetLocalConstantIntegervEXT = mockgl_GetLocalConstantIntegervEXT;

void  mockgl_GetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return getGlMock()->gl_GetVariantBooleanvEXT(id, value, data);
}
PFNGLGETVARIANTBOOLEANVEXTPROC __glewGetVariantBooleanvEXT = mockgl_GetVariantBooleanvEXT;

void  mockgl_GetVariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return getGlMock()->gl_GetVariantFloatvEXT(id, value, data);
}
PFNGLGETVARIANTFLOATVEXTPROC __glewGetVariantFloatvEXT = mockgl_GetVariantFloatvEXT;

void  mockgl_GetVariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return getGlMock()->gl_GetVariantIntegervEXT(id, value, data);
}
PFNGLGETVARIANTINTEGERVEXTPROC __glewGetVariantIntegervEXT = mockgl_GetVariantIntegervEXT;

void  mockgl_GetVariantPointervEXT(GLuint id, GLenum value, GLvoid ** data)
{
    return getGlMock()->gl_GetVariantPointervEXT(id, value, data);
}
PFNGLGETVARIANTPOINTERVEXTPROC __glewGetVariantPointervEXT = mockgl_GetVariantPointervEXT;

void  mockgl_InsertComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return getGlMock()->gl_InsertComponentEXT(res, src, num);
}
PFNGLINSERTCOMPONENTEXTPROC __glewInsertComponentEXT = mockgl_InsertComponentEXT;

unsigned char  mockgl_IsVariantEnabledEXT(GLuint id, GLenum cap)
{
    return getGlMock()->gl_IsVariantEnabledEXT(id, cap);
}
PFNGLISVARIANTENABLEDEXTPROC __glewIsVariantEnabledEXT = mockgl_IsVariantEnabledEXT;

void  mockgl_SetInvariantEXT(GLuint id, GLenum type, GLvoid * addr)
{
    return getGlMock()->gl_SetInvariantEXT(id, type, addr);
}
PFNGLSETINVARIANTEXTPROC __glewSetInvariantEXT = mockgl_SetInvariantEXT;

void  mockgl_SetLocalConstantEXT(GLuint id, GLenum type, GLvoid * addr)
{
    return getGlMock()->gl_SetLocalConstantEXT(id, type, addr);
}
PFNGLSETLOCALCONSTANTEXTPROC __glewSetLocalConstantEXT = mockgl_SetLocalConstantEXT;

void  mockgl_ShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
{
    return getGlMock()->gl_ShaderOp1EXT(op, res, arg1);
}
PFNGLSHADEROP1EXTPROC __glewShaderOp1EXT = mockgl_ShaderOp1EXT;

void  mockgl_ShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
{
    return getGlMock()->gl_ShaderOp2EXT(op, res, arg1, arg2);
}
PFNGLSHADEROP2EXTPROC __glewShaderOp2EXT = mockgl_ShaderOp2EXT;

void  mockgl_ShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
{
    return getGlMock()->gl_ShaderOp3EXT(op, res, arg1, arg2, arg3);
}
PFNGLSHADEROP3EXTPROC __glewShaderOp3EXT = mockgl_ShaderOp3EXT;

void  mockgl_SwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return getGlMock()->gl_SwizzleEXT(res, in, outX, outY, outZ, outW);
}
PFNGLSWIZZLEEXTPROC __glewSwizzleEXT = mockgl_SwizzleEXT;

void  mockgl_VariantPointerEXT(GLuint id, GLenum type, GLuint stride, GLvoid * addr)
{
    return getGlMock()->gl_VariantPointerEXT(id, type, stride, addr);
}
PFNGLVARIANTPOINTEREXTPROC __glewVariantPointerEXT = mockgl_VariantPointerEXT;

void  mockgl_VariantbvEXT(GLuint id, GLbyte * addr)
{
    return getGlMock()->gl_VariantbvEXT(id, addr);
}
PFNGLVARIANTBVEXTPROC __glewVariantbvEXT = mockgl_VariantbvEXT;

void  mockgl_VariantdvEXT(GLuint id, GLdouble * addr)
{
    return getGlMock()->gl_VariantdvEXT(id, addr);
}
PFNGLVARIANTDVEXTPROC __glewVariantdvEXT = mockgl_VariantdvEXT;

void  mockgl_VariantfvEXT(GLuint id, GLfloat * addr)
{
    return getGlMock()->gl_VariantfvEXT(id, addr);
}
PFNGLVARIANTFVEXTPROC __glewVariantfvEXT = mockgl_VariantfvEXT;

void  mockgl_VariantivEXT(GLuint id, GLint * addr)
{
    return getGlMock()->gl_VariantivEXT(id, addr);
}
PFNGLVARIANTIVEXTPROC __glewVariantivEXT = mockgl_VariantivEXT;

void  mockgl_VariantsvEXT(GLuint id, GLshort * addr)
{
    return getGlMock()->gl_VariantsvEXT(id, addr);
}
PFNGLVARIANTSVEXTPROC __glewVariantsvEXT = mockgl_VariantsvEXT;

void  mockgl_VariantubvEXT(GLuint id, GLubyte * addr)
{
    return getGlMock()->gl_VariantubvEXT(id, addr);
}
PFNGLVARIANTUBVEXTPROC __glewVariantubvEXT = mockgl_VariantubvEXT;

void  mockgl_VariantuivEXT(GLuint id, GLuint * addr)
{
    return getGlMock()->gl_VariantuivEXT(id, addr);
}
PFNGLVARIANTUIVEXTPROC __glewVariantuivEXT = mockgl_VariantuivEXT;

void  mockgl_VariantusvEXT(GLuint id, GLushort * addr)
{
    return getGlMock()->gl_VariantusvEXT(id, addr);
}
PFNGLVARIANTUSVEXTPROC __glewVariantusvEXT = mockgl_VariantusvEXT;

void  mockgl_WriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return getGlMock()->gl_WriteMaskEXT(res, in, outX, outY, outZ, outW);
}
PFNGLWRITEMASKEXTPROC __glewWriteMaskEXT = mockgl_WriteMaskEXT;

void  mockgl_VertexWeightPointerEXT(GLint size, GLenum type, GLsizei stride, void * pointer)
{
    return getGlMock()->gl_VertexWeightPointerEXT(size, type, stride, pointer);
}
PFNGLVERTEXWEIGHTPOINTEREXTPROC __glewVertexWeightPointerEXT = mockgl_VertexWeightPointerEXT;

void  mockgl_VertexWeightfEXT(GLfloat weight)
{
    return getGlMock()->gl_VertexWeightfEXT(weight);
}
PFNGLVERTEXWEIGHTFEXTPROC __glewVertexWeightfEXT = mockgl_VertexWeightfEXT;

void  mockgl_VertexWeightfvEXT(GLfloat * weight)
{
    return getGlMock()->gl_VertexWeightfvEXT(weight);
}
PFNGLVERTEXWEIGHTFVEXTPROC __glewVertexWeightfvEXT = mockgl_VertexWeightfvEXT;

struct __GLsync * mockgl_ImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, GLbitfield flags)
{
    return getGlMock()->gl_ImportSyncEXT(external_sync_type, external_sync, flags);
}
PFNGLIMPORTSYNCEXTPROC __glewImportSyncEXT = mockgl_ImportSyncEXT;

void  mockgl_FrameTerminatorGREMEDY()
{
    return getGlMock()->gl_FrameTerminatorGREMEDY();
}
PFNGLFRAMETERMINATORGREMEDYPROC __glewFrameTerminatorGREMEDY = mockgl_FrameTerminatorGREMEDY;

void  mockgl_StringMarkerGREMEDY(GLsizei len, const void * string)
{
    return getGlMock()->gl_StringMarkerGREMEDY(len, string);
}
PFNGLSTRINGMARKERGREMEDYPROC __glewStringMarkerGREMEDY = mockgl_StringMarkerGREMEDY;

void  mockgl_GetImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_GetImageTransformParameterfvHP(target, pname, params);
}
PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC __glewGetImageTransformParameterfvHP = mockgl_GetImageTransformParameterfvHP;

void  mockgl_GetImageTransformParameterivHP(GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_GetImageTransformParameterivHP(target, pname, params);
}
PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC __glewGetImageTransformParameterivHP = mockgl_GetImageTransformParameterivHP;

void  mockgl_ImageTransformParameterfHP(GLenum target, GLenum pname, const GLfloat param)
{
    return getGlMock()->gl_ImageTransformParameterfHP(target, pname, param);
}
PFNGLIMAGETRANSFORMPARAMETERFHPPROC __glewImageTransformParameterfHP = mockgl_ImageTransformParameterfHP;

void  mockgl_ImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_ImageTransformParameterfvHP(target, pname, params);
}
PFNGLIMAGETRANSFORMPARAMETERFVHPPROC __glewImageTransformParameterfvHP = mockgl_ImageTransformParameterfvHP;

void  mockgl_ImageTransformParameteriHP(GLenum target, GLenum pname, const GLint param)
{
    return getGlMock()->gl_ImageTransformParameteriHP(target, pname, param);
}
PFNGLIMAGETRANSFORMPARAMETERIHPPROC __glewImageTransformParameteriHP = mockgl_ImageTransformParameteriHP;

void  mockgl_ImageTransformParameterivHP(GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_ImageTransformParameterivHP(target, pname, params);
}
PFNGLIMAGETRANSFORMPARAMETERIVHPPROC __glewImageTransformParameterivHP = mockgl_ImageTransformParameterivHP;

void  mockgl_MultiModeDrawArraysIBM(const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride)
{
    return getGlMock()->gl_MultiModeDrawArraysIBM(mode, first, count, primcount, modestride);
}
PFNGLMULTIMODEDRAWARRAYSIBMPROC __glewMultiModeDrawArraysIBM = mockgl_MultiModeDrawArraysIBM;

void  mockgl_MultiModeDrawElementsIBM(const GLenum * mode, const GLsizei * count, GLenum type, const GLvoid *const * indices, GLsizei primcount, GLint modestride)
{
    return getGlMock()->gl_MultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);
}
PFNGLMULTIMODEDRAWELEMENTSIBMPROC __glewMultiModeDrawElementsIBM = mockgl_MultiModeDrawElementsIBM;

void  mockgl_ColorPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid ** pointer, GLint ptrstride)
{
    return getGlMock()->gl_ColorPointerListIBM(size, type, stride, pointer, ptrstride);
}
PFNGLCOLORPOINTERLISTIBMPROC __glewColorPointerListIBM = mockgl_ColorPointerListIBM;

void  mockgl_EdgeFlagPointerListIBM(GLint stride, const GLboolean ** pointer, GLint ptrstride)
{
    return getGlMock()->gl_EdgeFlagPointerListIBM(stride, pointer, ptrstride);
}
PFNGLEDGEFLAGPOINTERLISTIBMPROC __glewEdgeFlagPointerListIBM = mockgl_EdgeFlagPointerListIBM;

void  mockgl_FogCoordPointerListIBM(GLenum type, GLint stride, const GLvoid ** pointer, GLint ptrstride)
{
    return getGlMock()->gl_FogCoordPointerListIBM(type, stride, pointer, ptrstride);
}
PFNGLFOGCOORDPOINTERLISTIBMPROC __glewFogCoordPointerListIBM = mockgl_FogCoordPointerListIBM;

void  mockgl_IndexPointerListIBM(GLenum type, GLint stride, const GLvoid ** pointer, GLint ptrstride)
{
    return getGlMock()->gl_IndexPointerListIBM(type, stride, pointer, ptrstride);
}
PFNGLINDEXPOINTERLISTIBMPROC __glewIndexPointerListIBM = mockgl_IndexPointerListIBM;

void  mockgl_NormalPointerListIBM(GLenum type, GLint stride, const GLvoid ** pointer, GLint ptrstride)
{
    return getGlMock()->gl_NormalPointerListIBM(type, stride, pointer, ptrstride);
}
PFNGLNORMALPOINTERLISTIBMPROC __glewNormalPointerListIBM = mockgl_NormalPointerListIBM;

void  mockgl_SecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid ** pointer, GLint ptrstride)
{
    return getGlMock()->gl_SecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);
}
PFNGLSECONDARYCOLORPOINTERLISTIBMPROC __glewSecondaryColorPointerListIBM = mockgl_SecondaryColorPointerListIBM;

void  mockgl_TexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid ** pointer, GLint ptrstride)
{
    return getGlMock()->gl_TexCoordPointerListIBM(size, type, stride, pointer, ptrstride);
}
PFNGLTEXCOORDPOINTERLISTIBMPROC __glewTexCoordPointerListIBM = mockgl_TexCoordPointerListIBM;

void  mockgl_VertexPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid ** pointer, GLint ptrstride)
{
    return getGlMock()->gl_VertexPointerListIBM(size, type, stride, pointer, ptrstride);
}
PFNGLVERTEXPOINTERLISTIBMPROC __glewVertexPointerListIBM = mockgl_VertexPointerListIBM;

void  mockgl_ColorPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return getGlMock()->gl_ColorPointervINTEL(size, type, pointer);
}
PFNGLCOLORPOINTERVINTELPROC __glewColorPointervINTEL = mockgl_ColorPointervINTEL;

void  mockgl_NormalPointervINTEL(GLenum type, const void ** pointer)
{
    return getGlMock()->gl_NormalPointervINTEL(type, pointer);
}
PFNGLNORMALPOINTERVINTELPROC __glewNormalPointervINTEL = mockgl_NormalPointervINTEL;

void  mockgl_TexCoordPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return getGlMock()->gl_TexCoordPointervINTEL(size, type, pointer);
}
PFNGLTEXCOORDPOINTERVINTELPROC __glewTexCoordPointervINTEL = mockgl_TexCoordPointervINTEL;

void  mockgl_VertexPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return getGlMock()->gl_VertexPointervINTEL(size, type, pointer);
}
PFNGLVERTEXPOINTERVINTELPROC __glewVertexPointervINTEL = mockgl_VertexPointervINTEL;

void  mockgl_TexScissorFuncINTEL(GLenum target, GLenum lfunc, GLenum hfunc)
{
    return getGlMock()->gl_TexScissorFuncINTEL(target, lfunc, hfunc);
}
PFNGLTEXSCISSORFUNCINTELPROC __glewTexScissorFuncINTEL = mockgl_TexScissorFuncINTEL;

void  mockgl_TexScissorINTEL(GLenum target, GLclampf tlow, GLclampf thigh)
{
    return getGlMock()->gl_TexScissorINTEL(target, tlow, thigh);
}
PFNGLTEXSCISSORINTELPROC __glewTexScissorINTEL = mockgl_TexScissorINTEL;

unsigned int  mockgl_BufferRegionEnabledEXT()
{
    return getGlMock()->gl_BufferRegionEnabledEXT();
}
PFNGLBUFFERREGIONENABLEDEXTPROC __glewBufferRegionEnabledEXT = mockgl_BufferRegionEnabledEXT;

void  mockgl_DeleteBufferRegionEXT(GLenum region)
{
    return getGlMock()->gl_DeleteBufferRegionEXT(region);
}
PFNGLDELETEBUFFERREGIONEXTPROC __glewDeleteBufferRegionEXT = mockgl_DeleteBufferRegionEXT;

void  mockgl_DrawBufferRegionEXT(GLuint region, GLint x, GLint y, GLsizei width, GLsizei height, GLint xDest, GLint yDest)
{
    return getGlMock()->gl_DrawBufferRegionEXT(region, x, y, width, height, xDest, yDest);
}
PFNGLDRAWBUFFERREGIONEXTPROC __glewDrawBufferRegionEXT = mockgl_DrawBufferRegionEXT;

unsigned int  mockgl_NewBufferRegionEXT(GLenum region)
{
    return getGlMock()->gl_NewBufferRegionEXT(region);
}
PFNGLNEWBUFFERREGIONEXTPROC __glewNewBufferRegionEXT = mockgl_NewBufferRegionEXT;

void  mockgl_ReadBufferRegionEXT(GLuint region, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_ReadBufferRegionEXT(region, x, y, width, height);
}
PFNGLREADBUFFERREGIONEXTPROC __glewReadBufferRegionEXT = mockgl_ReadBufferRegionEXT;

void  mockgl_ResizeBuffersMESA()
{
    return getGlMock()->gl_ResizeBuffersMESA();
}
PFNGLRESIZEBUFFERSMESAPROC __glewResizeBuffersMESA = mockgl_ResizeBuffersMESA;

void  mockgl_WindowPos2dMESA(GLdouble x, GLdouble y)
{
    return getGlMock()->gl_WindowPos2dMESA(x, y);
}
PFNGLWINDOWPOS2DMESAPROC __glewWindowPos2dMESA = mockgl_WindowPos2dMESA;

void  mockgl_WindowPos2dvMESA(const GLdouble * p)
{
    return getGlMock()->gl_WindowPos2dvMESA(p);
}
PFNGLWINDOWPOS2DVMESAPROC __glewWindowPos2dvMESA = mockgl_WindowPos2dvMESA;

void  mockgl_WindowPos2fMESA(GLfloat x, GLfloat y)
{
    return getGlMock()->gl_WindowPos2fMESA(x, y);
}
PFNGLWINDOWPOS2FMESAPROC __glewWindowPos2fMESA = mockgl_WindowPos2fMESA;

void  mockgl_WindowPos2fvMESA(const GLfloat * p)
{
    return getGlMock()->gl_WindowPos2fvMESA(p);
}
PFNGLWINDOWPOS2FVMESAPROC __glewWindowPos2fvMESA = mockgl_WindowPos2fvMESA;

void  mockgl_WindowPos2iMESA(GLint x, GLint y)
{
    return getGlMock()->gl_WindowPos2iMESA(x, y);
}
PFNGLWINDOWPOS2IMESAPROC __glewWindowPos2iMESA = mockgl_WindowPos2iMESA;

void  mockgl_WindowPos2ivMESA(const GLint * p)
{
    return getGlMock()->gl_WindowPos2ivMESA(p);
}
PFNGLWINDOWPOS2IVMESAPROC __glewWindowPos2ivMESA = mockgl_WindowPos2ivMESA;

void  mockgl_WindowPos2sMESA(GLshort x, GLshort y)
{
    return getGlMock()->gl_WindowPos2sMESA(x, y);
}
PFNGLWINDOWPOS2SMESAPROC __glewWindowPos2sMESA = mockgl_WindowPos2sMESA;

void  mockgl_WindowPos2svMESA(const GLshort * p)
{
    return getGlMock()->gl_WindowPos2svMESA(p);
}
PFNGLWINDOWPOS2SVMESAPROC __glewWindowPos2svMESA = mockgl_WindowPos2svMESA;

void  mockgl_WindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_WindowPos3dMESA(x, y, z);
}
PFNGLWINDOWPOS3DMESAPROC __glewWindowPos3dMESA = mockgl_WindowPos3dMESA;

void  mockgl_WindowPos3dvMESA(const GLdouble * p)
{
    return getGlMock()->gl_WindowPos3dvMESA(p);
}
PFNGLWINDOWPOS3DVMESAPROC __glewWindowPos3dvMESA = mockgl_WindowPos3dvMESA;

void  mockgl_WindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_WindowPos3fMESA(x, y, z);
}
PFNGLWINDOWPOS3FMESAPROC __glewWindowPos3fMESA = mockgl_WindowPos3fMESA;

void  mockgl_WindowPos3fvMESA(const GLfloat * p)
{
    return getGlMock()->gl_WindowPos3fvMESA(p);
}
PFNGLWINDOWPOS3FVMESAPROC __glewWindowPos3fvMESA = mockgl_WindowPos3fvMESA;

void  mockgl_WindowPos3iMESA(GLint x, GLint y, GLint z)
{
    return getGlMock()->gl_WindowPos3iMESA(x, y, z);
}
PFNGLWINDOWPOS3IMESAPROC __glewWindowPos3iMESA = mockgl_WindowPos3iMESA;

void  mockgl_WindowPos3ivMESA(const GLint * p)
{
    return getGlMock()->gl_WindowPos3ivMESA(p);
}
PFNGLWINDOWPOS3IVMESAPROC __glewWindowPos3ivMESA = mockgl_WindowPos3ivMESA;

void  mockgl_WindowPos3sMESA(GLshort x, GLshort y, GLshort z)
{
    return getGlMock()->gl_WindowPos3sMESA(x, y, z);
}
PFNGLWINDOWPOS3SMESAPROC __glewWindowPos3sMESA = mockgl_WindowPos3sMESA;

void  mockgl_WindowPos3svMESA(const GLshort * p)
{
    return getGlMock()->gl_WindowPos3svMESA(p);
}
PFNGLWINDOWPOS3SVMESAPROC __glewWindowPos3svMESA = mockgl_WindowPos3svMESA;

void  mockgl_WindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble arg0)
{
    return getGlMock()->gl_WindowPos4dMESA(x, y, z, arg0);
}
PFNGLWINDOWPOS4DMESAPROC __glewWindowPos4dMESA = mockgl_WindowPos4dMESA;

void  mockgl_WindowPos4dvMESA(const GLdouble * p)
{
    return getGlMock()->gl_WindowPos4dvMESA(p);
}
PFNGLWINDOWPOS4DVMESAPROC __glewWindowPos4dvMESA = mockgl_WindowPos4dvMESA;

void  mockgl_WindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return getGlMock()->gl_WindowPos4fMESA(x, y, z, w);
}
PFNGLWINDOWPOS4FMESAPROC __glewWindowPos4fMESA = mockgl_WindowPos4fMESA;

void  mockgl_WindowPos4fvMESA(const GLfloat * p)
{
    return getGlMock()->gl_WindowPos4fvMESA(p);
}
PFNGLWINDOWPOS4FVMESAPROC __glewWindowPos4fvMESA = mockgl_WindowPos4fvMESA;

void  mockgl_WindowPos4iMESA(GLint x, GLint y, GLint z, GLint w)
{
    return getGlMock()->gl_WindowPos4iMESA(x, y, z, w);
}
PFNGLWINDOWPOS4IMESAPROC __glewWindowPos4iMESA = mockgl_WindowPos4iMESA;

void  mockgl_WindowPos4ivMESA(const GLint * p)
{
    return getGlMock()->gl_WindowPos4ivMESA(p);
}
PFNGLWINDOWPOS4IVMESAPROC __glewWindowPos4ivMESA = mockgl_WindowPos4ivMESA;

void  mockgl_WindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return getGlMock()->gl_WindowPos4sMESA(x, y, z, w);
}
PFNGLWINDOWPOS4SMESAPROC __glewWindowPos4sMESA = mockgl_WindowPos4sMESA;

void  mockgl_WindowPos4svMESA(const GLshort * p)
{
    return getGlMock()->gl_WindowPos4svMESA(p);
}
PFNGLWINDOWPOS4SVMESAPROC __glewWindowPos4svMESA = mockgl_WindowPos4svMESA;

void  mockgl_BeginConditionalRenderNV(GLuint id, GLenum mode)
{
    return getGlMock()->gl_BeginConditionalRenderNV(id, mode);
}
PFNGLBEGINCONDITIONALRENDERNVPROC __glewBeginConditionalRenderNV = mockgl_BeginConditionalRenderNV;

void  mockgl_EndConditionalRenderNV()
{
    return getGlMock()->gl_EndConditionalRenderNV();
}
PFNGLENDCONDITIONALRENDERNVPROC __glewEndConditionalRenderNV = mockgl_EndConditionalRenderNV;

void  mockgl_ClearDepthdNV(GLdouble depth)
{
    return getGlMock()->gl_ClearDepthdNV(depth);
}
PFNGLCLEARDEPTHDNVPROC __glewClearDepthdNV = mockgl_ClearDepthdNV;

void  mockgl_DepthBoundsdNV(GLdouble zmin, GLdouble zmax)
{
    return getGlMock()->gl_DepthBoundsdNV(zmin, zmax);
}
PFNGLDEPTHBOUNDSDNVPROC __glewDepthBoundsdNV = mockgl_DepthBoundsdNV;

void  mockgl_DepthRangedNV(GLdouble zNear, GLdouble zFar)
{
    return getGlMock()->gl_DepthRangedNV(zNear, zFar);
}
PFNGLDEPTHRANGEDNVPROC __glewDepthRangedNV = mockgl_DepthRangedNV;

void  mockgl_EvalMapsNV(GLenum target, GLenum mode)
{
    return getGlMock()->gl_EvalMapsNV(target, mode);
}
PFNGLEVALMAPSNVPROC __glewEvalMapsNV = mockgl_EvalMapsNV;

void  mockgl_GetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetMapAttribParameterfvNV(target, index, pname, params);
}
PFNGLGETMAPATTRIBPARAMETERFVNVPROC __glewGetMapAttribParameterfvNV = mockgl_GetMapAttribParameterfvNV;

void  mockgl_GetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetMapAttribParameterivNV(target, index, pname, params);
}
PFNGLGETMAPATTRIBPARAMETERIVNVPROC __glewGetMapAttribParameterivNV = mockgl_GetMapAttribParameterivNV;

void  mockgl_GetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void * points)
{
    return getGlMock()->gl_GetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);
}
PFNGLGETMAPCONTROLPOINTSNVPROC __glewGetMapControlPointsNV = mockgl_GetMapControlPointsNV;

void  mockgl_GetMapParameterfvNV(GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetMapParameterfvNV(target, pname, params);
}
PFNGLGETMAPPARAMETERFVNVPROC __glewGetMapParameterfvNV = mockgl_GetMapParameterfvNV;

void  mockgl_GetMapParameterivNV(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetMapParameterivNV(target, pname, params);
}
PFNGLGETMAPPARAMETERIVNVPROC __glewGetMapParameterivNV = mockgl_GetMapParameterivNV;

void  mockgl_MapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void * points)
{
    return getGlMock()->gl_MapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);
}
PFNGLMAPCONTROLPOINTSNVPROC __glewMapControlPointsNV = mockgl_MapControlPointsNV;

void  mockgl_MapParameterfvNV(GLenum target, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_MapParameterfvNV(target, pname, params);
}
PFNGLMAPPARAMETERFVNVPROC __glewMapParameterfvNV = mockgl_MapParameterfvNV;

void  mockgl_MapParameterivNV(GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_MapParameterivNV(target, pname, params);
}
PFNGLMAPPARAMETERIVNVPROC __glewMapParameterivNV = mockgl_MapParameterivNV;

void  mockgl_GetMultisamplefvNV(GLenum pname, GLuint index, GLfloat * val)
{
    return getGlMock()->gl_GetMultisamplefvNV(pname, index, val);
}
PFNGLGETMULTISAMPLEFVNVPROC __glewGetMultisamplefvNV = mockgl_GetMultisamplefvNV;

void  mockgl_SampleMaskIndexedNV(GLuint index, GLbitfield mask)
{
    return getGlMock()->gl_SampleMaskIndexedNV(index, mask);
}
PFNGLSAMPLEMASKINDEXEDNVPROC __glewSampleMaskIndexedNV = mockgl_SampleMaskIndexedNV;

void  mockgl_TexRenderbufferNV(GLenum target, GLuint renderbuffer)
{
    return getGlMock()->gl_TexRenderbufferNV(target, renderbuffer);
}
PFNGLTEXRENDERBUFFERNVPROC __glewTexRenderbufferNV = mockgl_TexRenderbufferNV;

void  mockgl_DeleteFencesNV(GLsizei n, const GLuint * fences)
{
    return getGlMock()->gl_DeleteFencesNV(n, fences);
}
PFNGLDELETEFENCESNVPROC __glewDeleteFencesNV = mockgl_DeleteFencesNV;

void  mockgl_FinishFenceNV(GLuint fence)
{
    return getGlMock()->gl_FinishFenceNV(fence);
}
PFNGLFINISHFENCENVPROC __glewFinishFenceNV = mockgl_FinishFenceNV;

void  mockgl_GenFencesNV(GLsizei n, GLuint * fences)
{
    return getGlMock()->gl_GenFencesNV(n, fences);
}
PFNGLGENFENCESNVPROC __glewGenFencesNV = mockgl_GenFencesNV;

void  mockgl_GetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetFenceivNV(fence, pname, params);
}
PFNGLGETFENCEIVNVPROC __glewGetFenceivNV = mockgl_GetFenceivNV;

unsigned char  mockgl_IsFenceNV(GLuint fence)
{
    return getGlMock()->gl_IsFenceNV(fence);
}
PFNGLISFENCENVPROC __glewIsFenceNV = mockgl_IsFenceNV;

void  mockgl_SetFenceNV(GLuint fence, GLenum condition)
{
    return getGlMock()->gl_SetFenceNV(fence, condition);
}
PFNGLSETFENCENVPROC __glewSetFenceNV = mockgl_SetFenceNV;

unsigned char  mockgl_TestFenceNV(GLuint fence)
{
    return getGlMock()->gl_TestFenceNV(fence);
}
PFNGLTESTFENCENVPROC __glewTestFenceNV = mockgl_TestFenceNV;

void  mockgl_GetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params)
{
    return getGlMock()->gl_GetProgramNamedParameterdvNV(id, len, name, params);
}
PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC __glewGetProgramNamedParameterdvNV = mockgl_GetProgramNamedParameterdvNV;

void  mockgl_GetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params)
{
    return getGlMock()->gl_GetProgramNamedParameterfvNV(id, len, name, params);
}
PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC __glewGetProgramNamedParameterfvNV = mockgl_GetProgramNamedParameterfvNV;

void  mockgl_ProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_ProgramNamedParameter4dNV(id, len, name, x, y, z, w);
}
PFNGLPROGRAMNAMEDPARAMETER4DNVPROC __glewProgramNamedParameter4dNV = mockgl_ProgramNamedParameter4dNV;

void  mockgl_ProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v)
{
    return getGlMock()->gl_ProgramNamedParameter4dvNV(id, len, name, v);
}
PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC __glewProgramNamedParameter4dvNV = mockgl_ProgramNamedParameter4dvNV;

void  mockgl_ProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return getGlMock()->gl_ProgramNamedParameter4fNV(id, len, name, x, y, z, w);
}
PFNGLPROGRAMNAMEDPARAMETER4FNVPROC __glewProgramNamedParameter4fNV = mockgl_ProgramNamedParameter4fNV;

void  mockgl_ProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v)
{
    return getGlMock()->gl_ProgramNamedParameter4fvNV(id, len, name, v);
}
PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC __glewProgramNamedParameter4fvNV = mockgl_ProgramNamedParameter4fvNV;

void  mockgl_RenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_RenderbufferStorageMultisampleCoverageNV(target, coverageSamples, colorSamples, internalformat, width, height);
}
PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC __glewRenderbufferStorageMultisampleCoverageNV = mockgl_RenderbufferStorageMultisampleCoverageNV;

void  mockgl_ProgramVertexLimitNV(GLenum target, GLint limit)
{
    return getGlMock()->gl_ProgramVertexLimitNV(target, limit);
}
PFNGLPROGRAMVERTEXLIMITNVPROC __glewProgramVertexLimitNV = mockgl_ProgramVertexLimitNV;

void  mockgl_ProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return getGlMock()->gl_ProgramEnvParameterI4iNV(target, index, x, y, z, w);
}
PFNGLPROGRAMENVPARAMETERI4INVPROC __glewProgramEnvParameterI4iNV = mockgl_ProgramEnvParameterI4iNV;

void  mockgl_ProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return getGlMock()->gl_ProgramEnvParameterI4ivNV(target, index, params);
}
PFNGLPROGRAMENVPARAMETERI4IVNVPROC __glewProgramEnvParameterI4ivNV = mockgl_ProgramEnvParameterI4ivNV;

void  mockgl_ProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return getGlMock()->gl_ProgramEnvParameterI4uiNV(target, index, x, y, z, w);
}
PFNGLPROGRAMENVPARAMETERI4UINVPROC __glewProgramEnvParameterI4uiNV = mockgl_ProgramEnvParameterI4uiNV;

void  mockgl_ProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return getGlMock()->gl_ProgramEnvParameterI4uivNV(target, index, params);
}
PFNGLPROGRAMENVPARAMETERI4UIVNVPROC __glewProgramEnvParameterI4uivNV = mockgl_ProgramEnvParameterI4uivNV;

void  mockgl_ProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return getGlMock()->gl_ProgramEnvParametersI4ivNV(target, index, count, params);
}
PFNGLPROGRAMENVPARAMETERSI4IVNVPROC __glewProgramEnvParametersI4ivNV = mockgl_ProgramEnvParametersI4ivNV;

void  mockgl_ProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return getGlMock()->gl_ProgramEnvParametersI4uivNV(target, index, count, params);
}
PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC __glewProgramEnvParametersI4uivNV = mockgl_ProgramEnvParametersI4uivNV;

void  mockgl_ProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return getGlMock()->gl_ProgramLocalParameterI4iNV(target, index, x, y, z, w);
}
PFNGLPROGRAMLOCALPARAMETERI4INVPROC __glewProgramLocalParameterI4iNV = mockgl_ProgramLocalParameterI4iNV;

void  mockgl_ProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return getGlMock()->gl_ProgramLocalParameterI4ivNV(target, index, params);
}
PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC __glewProgramLocalParameterI4ivNV = mockgl_ProgramLocalParameterI4ivNV;

void  mockgl_ProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return getGlMock()->gl_ProgramLocalParameterI4uiNV(target, index, x, y, z, w);
}
PFNGLPROGRAMLOCALPARAMETERI4UINVPROC __glewProgramLocalParameterI4uiNV = mockgl_ProgramLocalParameterI4uiNV;

void  mockgl_ProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return getGlMock()->gl_ProgramLocalParameterI4uivNV(target, index, params);
}
PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC __glewProgramLocalParameterI4uivNV = mockgl_ProgramLocalParameterI4uivNV;

void  mockgl_ProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return getGlMock()->gl_ProgramLocalParametersI4ivNV(target, index, count, params);
}
PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC __glewProgramLocalParametersI4ivNV = mockgl_ProgramLocalParametersI4ivNV;

void  mockgl_ProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return getGlMock()->gl_ProgramLocalParametersI4uivNV(target, index, count, params);
}
PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC __glewProgramLocalParametersI4uivNV = mockgl_ProgramLocalParametersI4uivNV;

void  mockgl_GetUniformi64vNV(GLuint program, GLint location, GLint64EXT * params)
{
    return getGlMock()->gl_GetUniformi64vNV(program, location, params);
}
PFNGLGETUNIFORMI64VNVPROC __glewGetUniformi64vNV = mockgl_GetUniformi64vNV;

void  mockgl_GetUniformui64vNV(GLuint program, GLint location, GLuint64EXT * params)
{
    return getGlMock()->gl_GetUniformui64vNV(program, location, params);
}
PFNGLGETUNIFORMUI64VNVPROC __glewGetUniformui64vNV = mockgl_GetUniformui64vNV;

void  mockgl_ProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x)
{
    return getGlMock()->gl_ProgramUniform1i64NV(program, location, x);
}
PFNGLPROGRAMUNIFORM1I64NVPROC __glewProgramUniform1i64NV = mockgl_ProgramUniform1i64NV;

void  mockgl_ProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return getGlMock()->gl_ProgramUniform1i64vNV(program, location, count, value);
}
PFNGLPROGRAMUNIFORM1I64VNVPROC __glewProgramUniform1i64vNV = mockgl_ProgramUniform1i64vNV;

void  mockgl_ProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x)
{
    return getGlMock()->gl_ProgramUniform1ui64NV(program, location, x);
}
PFNGLPROGRAMUNIFORM1UI64NVPROC __glewProgramUniform1ui64NV = mockgl_ProgramUniform1ui64NV;

void  mockgl_ProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return getGlMock()->gl_ProgramUniform1ui64vNV(program, location, count, value);
}
PFNGLPROGRAMUNIFORM1UI64VNVPROC __glewProgramUniform1ui64vNV = mockgl_ProgramUniform1ui64vNV;

void  mockgl_ProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y)
{
    return getGlMock()->gl_ProgramUniform2i64NV(program, location, x, y);
}
PFNGLPROGRAMUNIFORM2I64NVPROC __glewProgramUniform2i64NV = mockgl_ProgramUniform2i64NV;

void  mockgl_ProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return getGlMock()->gl_ProgramUniform2i64vNV(program, location, count, value);
}
PFNGLPROGRAMUNIFORM2I64VNVPROC __glewProgramUniform2i64vNV = mockgl_ProgramUniform2i64vNV;

void  mockgl_ProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return getGlMock()->gl_ProgramUniform2ui64NV(program, location, x, y);
}
PFNGLPROGRAMUNIFORM2UI64NVPROC __glewProgramUniform2ui64NV = mockgl_ProgramUniform2ui64NV;

void  mockgl_ProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return getGlMock()->gl_ProgramUniform2ui64vNV(program, location, count, value);
}
PFNGLPROGRAMUNIFORM2UI64VNVPROC __glewProgramUniform2ui64vNV = mockgl_ProgramUniform2ui64vNV;

void  mockgl_ProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return getGlMock()->gl_ProgramUniform3i64NV(program, location, x, y, z);
}
PFNGLPROGRAMUNIFORM3I64NVPROC __glewProgramUniform3i64NV = mockgl_ProgramUniform3i64NV;

void  mockgl_ProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return getGlMock()->gl_ProgramUniform3i64vNV(program, location, count, value);
}
PFNGLPROGRAMUNIFORM3I64VNVPROC __glewProgramUniform3i64vNV = mockgl_ProgramUniform3i64vNV;

void  mockgl_ProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return getGlMock()->gl_ProgramUniform3ui64NV(program, location, x, y, z);
}
PFNGLPROGRAMUNIFORM3UI64NVPROC __glewProgramUniform3ui64NV = mockgl_ProgramUniform3ui64NV;

void  mockgl_ProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return getGlMock()->gl_ProgramUniform3ui64vNV(program, location, count, value);
}
PFNGLPROGRAMUNIFORM3UI64VNVPROC __glewProgramUniform3ui64vNV = mockgl_ProgramUniform3ui64vNV;

void  mockgl_ProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return getGlMock()->gl_ProgramUniform4i64NV(program, location, x, y, z, w);
}
PFNGLPROGRAMUNIFORM4I64NVPROC __glewProgramUniform4i64NV = mockgl_ProgramUniform4i64NV;

void  mockgl_ProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return getGlMock()->gl_ProgramUniform4i64vNV(program, location, count, value);
}
PFNGLPROGRAMUNIFORM4I64VNVPROC __glewProgramUniform4i64vNV = mockgl_ProgramUniform4i64vNV;

void  mockgl_ProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return getGlMock()->gl_ProgramUniform4ui64NV(program, location, x, y, z, w);
}
PFNGLPROGRAMUNIFORM4UI64NVPROC __glewProgramUniform4ui64NV = mockgl_ProgramUniform4ui64NV;

void  mockgl_ProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return getGlMock()->gl_ProgramUniform4ui64vNV(program, location, count, value);
}
PFNGLPROGRAMUNIFORM4UI64VNVPROC __glewProgramUniform4ui64vNV = mockgl_ProgramUniform4ui64vNV;

void  mockgl_Uniform1i64NV(GLint location, GLint64EXT x)
{
    return getGlMock()->gl_Uniform1i64NV(location, x);
}
PFNGLUNIFORM1I64NVPROC __glewUniform1i64NV = mockgl_Uniform1i64NV;

void  mockgl_Uniform1i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return getGlMock()->gl_Uniform1i64vNV(location, count, value);
}
PFNGLUNIFORM1I64VNVPROC __glewUniform1i64vNV = mockgl_Uniform1i64vNV;

void  mockgl_Uniform1ui64NV(GLint location, GLuint64EXT x)
{
    return getGlMock()->gl_Uniform1ui64NV(location, x);
}
PFNGLUNIFORM1UI64NVPROC __glewUniform1ui64NV = mockgl_Uniform1ui64NV;

void  mockgl_Uniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return getGlMock()->gl_Uniform1ui64vNV(location, count, value);
}
PFNGLUNIFORM1UI64VNVPROC __glewUniform1ui64vNV = mockgl_Uniform1ui64vNV;

void  mockgl_Uniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y)
{
    return getGlMock()->gl_Uniform2i64NV(location, x, y);
}
PFNGLUNIFORM2I64NVPROC __glewUniform2i64NV = mockgl_Uniform2i64NV;

void  mockgl_Uniform2i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return getGlMock()->gl_Uniform2i64vNV(location, count, value);
}
PFNGLUNIFORM2I64VNVPROC __glewUniform2i64vNV = mockgl_Uniform2i64vNV;

void  mockgl_Uniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return getGlMock()->gl_Uniform2ui64NV(location, x, y);
}
PFNGLUNIFORM2UI64NVPROC __glewUniform2ui64NV = mockgl_Uniform2ui64NV;

void  mockgl_Uniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return getGlMock()->gl_Uniform2ui64vNV(location, count, value);
}
PFNGLUNIFORM2UI64VNVPROC __glewUniform2ui64vNV = mockgl_Uniform2ui64vNV;

void  mockgl_Uniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return getGlMock()->gl_Uniform3i64NV(location, x, y, z);
}
PFNGLUNIFORM3I64NVPROC __glewUniform3i64NV = mockgl_Uniform3i64NV;

void  mockgl_Uniform3i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return getGlMock()->gl_Uniform3i64vNV(location, count, value);
}
PFNGLUNIFORM3I64VNVPROC __glewUniform3i64vNV = mockgl_Uniform3i64vNV;

void  mockgl_Uniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return getGlMock()->gl_Uniform3ui64NV(location, x, y, z);
}
PFNGLUNIFORM3UI64NVPROC __glewUniform3ui64NV = mockgl_Uniform3ui64NV;

void  mockgl_Uniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return getGlMock()->gl_Uniform3ui64vNV(location, count, value);
}
PFNGLUNIFORM3UI64VNVPROC __glewUniform3ui64vNV = mockgl_Uniform3ui64vNV;

void  mockgl_Uniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return getGlMock()->gl_Uniform4i64NV(location, x, y, z, w);
}
PFNGLUNIFORM4I64NVPROC __glewUniform4i64NV = mockgl_Uniform4i64NV;

void  mockgl_Uniform4i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return getGlMock()->gl_Uniform4i64vNV(location, count, value);
}
PFNGLUNIFORM4I64VNVPROC __glewUniform4i64vNV = mockgl_Uniform4i64vNV;

void  mockgl_Uniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return getGlMock()->gl_Uniform4ui64NV(location, x, y, z, w);
}
PFNGLUNIFORM4UI64NVPROC __glewUniform4ui64NV = mockgl_Uniform4ui64NV;

void  mockgl_Uniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return getGlMock()->gl_Uniform4ui64vNV(location, count, value);
}
PFNGLUNIFORM4UI64VNVPROC __glewUniform4ui64vNV = mockgl_Uniform4ui64vNV;

void  mockgl_Color3hNV(GLhalf red, GLhalf green, GLhalf blue)
{
    return getGlMock()->gl_Color3hNV(red, green, blue);
}
PFNGLCOLOR3HNVPROC __glewColor3hNV = mockgl_Color3hNV;

void  mockgl_Color3hvNV(const GLhalf * v)
{
    return getGlMock()->gl_Color3hvNV(v);
}
PFNGLCOLOR3HVNVPROC __glewColor3hvNV = mockgl_Color3hvNV;

void  mockgl_Color4hNV(GLhalf red, GLhalf green, GLhalf blue, GLhalf alpha)
{
    return getGlMock()->gl_Color4hNV(red, green, blue, alpha);
}
PFNGLCOLOR4HNVPROC __glewColor4hNV = mockgl_Color4hNV;

void  mockgl_Color4hvNV(const GLhalf * v)
{
    return getGlMock()->gl_Color4hvNV(v);
}
PFNGLCOLOR4HVNVPROC __glewColor4hvNV = mockgl_Color4hvNV;

void  mockgl_FogCoordhNV(GLhalf fog)
{
    return getGlMock()->gl_FogCoordhNV(fog);
}
PFNGLFOGCOORDHNVPROC __glewFogCoordhNV = mockgl_FogCoordhNV;

void  mockgl_FogCoordhvNV(const GLhalf * fog)
{
    return getGlMock()->gl_FogCoordhvNV(fog);
}
PFNGLFOGCOORDHVNVPROC __glewFogCoordhvNV = mockgl_FogCoordhvNV;

void  mockgl_MultiTexCoord1hNV(GLenum target, GLhalf s)
{
    return getGlMock()->gl_MultiTexCoord1hNV(target, s);
}
PFNGLMULTITEXCOORD1HNVPROC __glewMultiTexCoord1hNV = mockgl_MultiTexCoord1hNV;

void  mockgl_MultiTexCoord1hvNV(GLenum target, const GLhalf * v)
{
    return getGlMock()->gl_MultiTexCoord1hvNV(target, v);
}
PFNGLMULTITEXCOORD1HVNVPROC __glewMultiTexCoord1hvNV = mockgl_MultiTexCoord1hvNV;

void  mockgl_MultiTexCoord2hNV(GLenum target, GLhalf s, GLhalf t)
{
    return getGlMock()->gl_MultiTexCoord2hNV(target, s, t);
}
PFNGLMULTITEXCOORD2HNVPROC __glewMultiTexCoord2hNV = mockgl_MultiTexCoord2hNV;

void  mockgl_MultiTexCoord2hvNV(GLenum target, const GLhalf * v)
{
    return getGlMock()->gl_MultiTexCoord2hvNV(target, v);
}
PFNGLMULTITEXCOORD2HVNVPROC __glewMultiTexCoord2hvNV = mockgl_MultiTexCoord2hvNV;

void  mockgl_MultiTexCoord3hNV(GLenum target, GLhalf s, GLhalf t, GLhalf r)
{
    return getGlMock()->gl_MultiTexCoord3hNV(target, s, t, r);
}
PFNGLMULTITEXCOORD3HNVPROC __glewMultiTexCoord3hNV = mockgl_MultiTexCoord3hNV;

void  mockgl_MultiTexCoord3hvNV(GLenum target, const GLhalf * v)
{
    return getGlMock()->gl_MultiTexCoord3hvNV(target, v);
}
PFNGLMULTITEXCOORD3HVNVPROC __glewMultiTexCoord3hvNV = mockgl_MultiTexCoord3hvNV;

void  mockgl_MultiTexCoord4hNV(GLenum target, GLhalf s, GLhalf t, GLhalf r, GLhalf q)
{
    return getGlMock()->gl_MultiTexCoord4hNV(target, s, t, r, q);
}
PFNGLMULTITEXCOORD4HNVPROC __glewMultiTexCoord4hNV = mockgl_MultiTexCoord4hNV;

void  mockgl_MultiTexCoord4hvNV(GLenum target, const GLhalf * v)
{
    return getGlMock()->gl_MultiTexCoord4hvNV(target, v);
}
PFNGLMULTITEXCOORD4HVNVPROC __glewMultiTexCoord4hvNV = mockgl_MultiTexCoord4hvNV;

void  mockgl_Normal3hNV(GLhalf nx, GLhalf ny, GLhalf nz)
{
    return getGlMock()->gl_Normal3hNV(nx, ny, nz);
}
PFNGLNORMAL3HNVPROC __glewNormal3hNV = mockgl_Normal3hNV;

void  mockgl_Normal3hvNV(const GLhalf * v)
{
    return getGlMock()->gl_Normal3hvNV(v);
}
PFNGLNORMAL3HVNVPROC __glewNormal3hvNV = mockgl_Normal3hvNV;

void  mockgl_SecondaryColor3hNV(GLhalf red, GLhalf green, GLhalf blue)
{
    return getGlMock()->gl_SecondaryColor3hNV(red, green, blue);
}
PFNGLSECONDARYCOLOR3HNVPROC __glewSecondaryColor3hNV = mockgl_SecondaryColor3hNV;

void  mockgl_SecondaryColor3hvNV(const GLhalf * v)
{
    return getGlMock()->gl_SecondaryColor3hvNV(v);
}
PFNGLSECONDARYCOLOR3HVNVPROC __glewSecondaryColor3hvNV = mockgl_SecondaryColor3hvNV;

void  mockgl_TexCoord1hNV(GLhalf s)
{
    return getGlMock()->gl_TexCoord1hNV(s);
}
PFNGLTEXCOORD1HNVPROC __glewTexCoord1hNV = mockgl_TexCoord1hNV;

void  mockgl_TexCoord1hvNV(const GLhalf * v)
{
    return getGlMock()->gl_TexCoord1hvNV(v);
}
PFNGLTEXCOORD1HVNVPROC __glewTexCoord1hvNV = mockgl_TexCoord1hvNV;

void  mockgl_TexCoord2hNV(GLhalf s, GLhalf t)
{
    return getGlMock()->gl_TexCoord2hNV(s, t);
}
PFNGLTEXCOORD2HNVPROC __glewTexCoord2hNV = mockgl_TexCoord2hNV;

void  mockgl_TexCoord2hvNV(const GLhalf * v)
{
    return getGlMock()->gl_TexCoord2hvNV(v);
}
PFNGLTEXCOORD2HVNVPROC __glewTexCoord2hvNV = mockgl_TexCoord2hvNV;

void  mockgl_TexCoord3hNV(GLhalf s, GLhalf t, GLhalf r)
{
    return getGlMock()->gl_TexCoord3hNV(s, t, r);
}
PFNGLTEXCOORD3HNVPROC __glewTexCoord3hNV = mockgl_TexCoord3hNV;

void  mockgl_TexCoord3hvNV(const GLhalf * v)
{
    return getGlMock()->gl_TexCoord3hvNV(v);
}
PFNGLTEXCOORD3HVNVPROC __glewTexCoord3hvNV = mockgl_TexCoord3hvNV;

void  mockgl_TexCoord4hNV(GLhalf s, GLhalf t, GLhalf r, GLhalf q)
{
    return getGlMock()->gl_TexCoord4hNV(s, t, r, q);
}
PFNGLTEXCOORD4HNVPROC __glewTexCoord4hNV = mockgl_TexCoord4hNV;

void  mockgl_TexCoord4hvNV(const GLhalf * v)
{
    return getGlMock()->gl_TexCoord4hvNV(v);
}
PFNGLTEXCOORD4HVNVPROC __glewTexCoord4hvNV = mockgl_TexCoord4hvNV;

void  mockgl_Vertex2hNV(GLhalf x, GLhalf y)
{
    return getGlMock()->gl_Vertex2hNV(x, y);
}
PFNGLVERTEX2HNVPROC __glewVertex2hNV = mockgl_Vertex2hNV;

void  mockgl_Vertex2hvNV(const GLhalf * v)
{
    return getGlMock()->gl_Vertex2hvNV(v);
}
PFNGLVERTEX2HVNVPROC __glewVertex2hvNV = mockgl_Vertex2hvNV;

void  mockgl_Vertex3hNV(GLhalf x, GLhalf y, GLhalf z)
{
    return getGlMock()->gl_Vertex3hNV(x, y, z);
}
PFNGLVERTEX3HNVPROC __glewVertex3hNV = mockgl_Vertex3hNV;

void  mockgl_Vertex3hvNV(const GLhalf * v)
{
    return getGlMock()->gl_Vertex3hvNV(v);
}
PFNGLVERTEX3HVNVPROC __glewVertex3hvNV = mockgl_Vertex3hvNV;

void  mockgl_Vertex4hNV(GLhalf x, GLhalf y, GLhalf z, GLhalf w)
{
    return getGlMock()->gl_Vertex4hNV(x, y, z, w);
}
PFNGLVERTEX4HNVPROC __glewVertex4hNV = mockgl_Vertex4hNV;

void  mockgl_Vertex4hvNV(const GLhalf * v)
{
    return getGlMock()->gl_Vertex4hvNV(v);
}
PFNGLVERTEX4HVNVPROC __glewVertex4hvNV = mockgl_Vertex4hvNV;

void  mockgl_VertexAttrib1hNV(GLuint index, GLhalf x)
{
    return getGlMock()->gl_VertexAttrib1hNV(index, x);
}
PFNGLVERTEXATTRIB1HNVPROC __glewVertexAttrib1hNV = mockgl_VertexAttrib1hNV;

void  mockgl_VertexAttrib1hvNV(GLuint index, const GLhalf * v)
{
    return getGlMock()->gl_VertexAttrib1hvNV(index, v);
}
PFNGLVERTEXATTRIB1HVNVPROC __glewVertexAttrib1hvNV = mockgl_VertexAttrib1hvNV;

void  mockgl_VertexAttrib2hNV(GLuint index, GLhalf x, GLhalf y)
{
    return getGlMock()->gl_VertexAttrib2hNV(index, x, y);
}
PFNGLVERTEXATTRIB2HNVPROC __glewVertexAttrib2hNV = mockgl_VertexAttrib2hNV;

void  mockgl_VertexAttrib2hvNV(GLuint index, const GLhalf * v)
{
    return getGlMock()->gl_VertexAttrib2hvNV(index, v);
}
PFNGLVERTEXATTRIB2HVNVPROC __glewVertexAttrib2hvNV = mockgl_VertexAttrib2hvNV;

void  mockgl_VertexAttrib3hNV(GLuint index, GLhalf x, GLhalf y, GLhalf z)
{
    return getGlMock()->gl_VertexAttrib3hNV(index, x, y, z);
}
PFNGLVERTEXATTRIB3HNVPROC __glewVertexAttrib3hNV = mockgl_VertexAttrib3hNV;

void  mockgl_VertexAttrib3hvNV(GLuint index, const GLhalf * v)
{
    return getGlMock()->gl_VertexAttrib3hvNV(index, v);
}
PFNGLVERTEXATTRIB3HVNVPROC __glewVertexAttrib3hvNV = mockgl_VertexAttrib3hvNV;

void  mockgl_VertexAttrib4hNV(GLuint index, GLhalf x, GLhalf y, GLhalf z, GLhalf w)
{
    return getGlMock()->gl_VertexAttrib4hNV(index, x, y, z, w);
}
PFNGLVERTEXATTRIB4HNVPROC __glewVertexAttrib4hNV = mockgl_VertexAttrib4hNV;

void  mockgl_VertexAttrib4hvNV(GLuint index, const GLhalf * v)
{
    return getGlMock()->gl_VertexAttrib4hvNV(index, v);
}
PFNGLVERTEXATTRIB4HVNVPROC __glewVertexAttrib4hvNV = mockgl_VertexAttrib4hvNV;

void  mockgl_VertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalf * v)
{
    return getGlMock()->gl_VertexAttribs1hvNV(index, n, v);
}
PFNGLVERTEXATTRIBS1HVNVPROC __glewVertexAttribs1hvNV = mockgl_VertexAttribs1hvNV;

void  mockgl_VertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalf * v)
{
    return getGlMock()->gl_VertexAttribs2hvNV(index, n, v);
}
PFNGLVERTEXATTRIBS2HVNVPROC __glewVertexAttribs2hvNV = mockgl_VertexAttribs2hvNV;

void  mockgl_VertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalf * v)
{
    return getGlMock()->gl_VertexAttribs3hvNV(index, n, v);
}
PFNGLVERTEXATTRIBS3HVNVPROC __glewVertexAttribs3hvNV = mockgl_VertexAttribs3hvNV;

void  mockgl_VertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalf * v)
{
    return getGlMock()->gl_VertexAttribs4hvNV(index, n, v);
}
PFNGLVERTEXATTRIBS4HVNVPROC __glewVertexAttribs4hvNV = mockgl_VertexAttribs4hvNV;

void  mockgl_VertexWeighthNV(GLhalf weight)
{
    return getGlMock()->gl_VertexWeighthNV(weight);
}
PFNGLVERTEXWEIGHTHNVPROC __glewVertexWeighthNV = mockgl_VertexWeighthNV;

void  mockgl_VertexWeighthvNV(const GLhalf * weight)
{
    return getGlMock()->gl_VertexWeighthvNV(weight);
}
PFNGLVERTEXWEIGHTHVNVPROC __glewVertexWeighthvNV = mockgl_VertexWeighthvNV;

void  mockgl_BeginOcclusionQueryNV(GLuint id)
{
    return getGlMock()->gl_BeginOcclusionQueryNV(id);
}
PFNGLBEGINOCCLUSIONQUERYNVPROC __glewBeginOcclusionQueryNV = mockgl_BeginOcclusionQueryNV;

void  mockgl_DeleteOcclusionQueriesNV(GLsizei n, const GLuint * ids)
{
    return getGlMock()->gl_DeleteOcclusionQueriesNV(n, ids);
}
PFNGLDELETEOCCLUSIONQUERIESNVPROC __glewDeleteOcclusionQueriesNV = mockgl_DeleteOcclusionQueriesNV;

void  mockgl_EndOcclusionQueryNV()
{
    return getGlMock()->gl_EndOcclusionQueryNV();
}
PFNGLENDOCCLUSIONQUERYNVPROC __glewEndOcclusionQueryNV = mockgl_EndOcclusionQueryNV;

void  mockgl_GenOcclusionQueriesNV(GLsizei n, GLuint * ids)
{
    return getGlMock()->gl_GenOcclusionQueriesNV(n, ids);
}
PFNGLGENOCCLUSIONQUERIESNVPROC __glewGenOcclusionQueriesNV = mockgl_GenOcclusionQueriesNV;

void  mockgl_GetOcclusionQueryivNV(GLuint id, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetOcclusionQueryivNV(id, pname, params);
}
PFNGLGETOCCLUSIONQUERYIVNVPROC __glewGetOcclusionQueryivNV = mockgl_GetOcclusionQueryivNV;

void  mockgl_GetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint * params)
{
    return getGlMock()->gl_GetOcclusionQueryuivNV(id, pname, params);
}
PFNGLGETOCCLUSIONQUERYUIVNVPROC __glewGetOcclusionQueryuivNV = mockgl_GetOcclusionQueryuivNV;

unsigned char  mockgl_IsOcclusionQueryNV(GLuint id)
{
    return getGlMock()->gl_IsOcclusionQueryNV(id);
}
PFNGLISOCCLUSIONQUERYNVPROC __glewIsOcclusionQueryNV = mockgl_IsOcclusionQueryNV;

void  mockgl_ProgramBufferParametersIivNV(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint * params)
{
    return getGlMock()->gl_ProgramBufferParametersIivNV(target, buffer, index, count, params);
}
PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC __glewProgramBufferParametersIivNV = mockgl_ProgramBufferParametersIivNV;

void  mockgl_ProgramBufferParametersIuivNV(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint * params)
{
    return getGlMock()->gl_ProgramBufferParametersIuivNV(target, buffer, index, count, params);
}
PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC __glewProgramBufferParametersIuivNV = mockgl_ProgramBufferParametersIuivNV;

void  mockgl_ProgramBufferParametersfvNV(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat * params)
{
    return getGlMock()->gl_ProgramBufferParametersfvNV(target, buffer, index, count, params);
}
PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC __glewProgramBufferParametersfvNV = mockgl_ProgramBufferParametersfvNV;

void  mockgl_FlushPixelDataRangeNV(GLenum target)
{
    return getGlMock()->gl_FlushPixelDataRangeNV(target);
}
PFNGLFLUSHPIXELDATARANGENVPROC __glewFlushPixelDataRangeNV = mockgl_FlushPixelDataRangeNV;

void  mockgl_PixelDataRangeNV(GLenum target, GLsizei length, void * pointer)
{
    return getGlMock()->gl_PixelDataRangeNV(target, length, pointer);
}
PFNGLPIXELDATARANGENVPROC __glewPixelDataRangeNV = mockgl_PixelDataRangeNV;

void  mockgl_PointParameteriNV(GLenum pname, GLint param)
{
    return getGlMock()->gl_PointParameteriNV(pname, param);
}
PFNGLPOINTPARAMETERINVPROC __glewPointParameteriNV = mockgl_PointParameteriNV;

void  mockgl_PointParameterivNV(GLenum pname, const GLint * params)
{
    return getGlMock()->gl_PointParameterivNV(pname, params);
}
PFNGLPOINTPARAMETERIVNVPROC __glewPointParameterivNV = mockgl_PointParameterivNV;

void  mockgl_GetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT * params)
{
    return getGlMock()->gl_GetVideoi64vNV(video_slot, pname, params);
}
PFNGLGETVIDEOI64VNVPROC __glewGetVideoi64vNV = mockgl_GetVideoi64vNV;

void  mockgl_GetVideoivNV(GLuint video_slot, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetVideoivNV(video_slot, pname, params);
}
PFNGLGETVIDEOIVNVPROC __glewGetVideoivNV = mockgl_GetVideoivNV;

void  mockgl_GetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT * params)
{
    return getGlMock()->gl_GetVideoui64vNV(video_slot, pname, params);
}
PFNGLGETVIDEOUI64VNVPROC __glewGetVideoui64vNV = mockgl_GetVideoui64vNV;

void  mockgl_GetVideouivNV(GLuint video_slot, GLenum pname, GLuint * params)
{
    return getGlMock()->gl_GetVideouivNV(video_slot, pname, params);
}
PFNGLGETVIDEOUIVNVPROC __glewGetVideouivNV = mockgl_GetVideouivNV;

void  mockgl_PrimitiveRestartIndexNV(GLuint index)
{
    return getGlMock()->gl_PrimitiveRestartIndexNV(index);
}
PFNGLPRIMITIVERESTARTINDEXNVPROC __glewPrimitiveRestartIndexNV = mockgl_PrimitiveRestartIndexNV;

void  mockgl_PrimitiveRestartNV()
{
    return getGlMock()->gl_PrimitiveRestartNV();
}
PFNGLPRIMITIVERESTARTNVPROC __glewPrimitiveRestartNV = mockgl_PrimitiveRestartNV;

void  mockgl_CombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return getGlMock()->gl_CombinerInputNV(stage, portion, variable, input, mapping, componentUsage);
}
PFNGLCOMBINERINPUTNVPROC __glewCombinerInputNV = mockgl_CombinerInputNV;

void  mockgl_CombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{
    return getGlMock()->gl_CombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}
PFNGLCOMBINEROUTPUTNVPROC __glewCombinerOutputNV = mockgl_CombinerOutputNV;

void  mockgl_CombinerParameterfNV(GLenum pname, GLfloat param)
{
    return getGlMock()->gl_CombinerParameterfNV(pname, param);
}
PFNGLCOMBINERPARAMETERFNVPROC __glewCombinerParameterfNV = mockgl_CombinerParameterfNV;

void  mockgl_CombinerParameterfvNV(GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_CombinerParameterfvNV(pname, params);
}
PFNGLCOMBINERPARAMETERFVNVPROC __glewCombinerParameterfvNV = mockgl_CombinerParameterfvNV;

void  mockgl_CombinerParameteriNV(GLenum pname, GLint param)
{
    return getGlMock()->gl_CombinerParameteriNV(pname, param);
}
PFNGLCOMBINERPARAMETERINVPROC __glewCombinerParameteriNV = mockgl_CombinerParameteriNV;

void  mockgl_CombinerParameterivNV(GLenum pname, const GLint * params)
{
    return getGlMock()->gl_CombinerParameterivNV(pname, params);
}
PFNGLCOMBINERPARAMETERIVNVPROC __glewCombinerParameterivNV = mockgl_CombinerParameterivNV;

void  mockgl_FinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return getGlMock()->gl_FinalCombinerInputNV(variable, input, mapping, componentUsage);
}
PFNGLFINALCOMBINERINPUTNVPROC __glewFinalCombinerInputNV = mockgl_FinalCombinerInputNV;

void  mockgl_GetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
}
PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC __glewGetCombinerInputParameterfvNV = mockgl_GetCombinerInputParameterfvNV;

void  mockgl_GetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetCombinerInputParameterivNV(stage, portion, variable, pname, params);
}
PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC __glewGetCombinerInputParameterivNV = mockgl_GetCombinerInputParameterivNV;

void  mockgl_GetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetCombinerOutputParameterfvNV(stage, portion, pname, params);
}
PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC __glewGetCombinerOutputParameterfvNV = mockgl_GetCombinerOutputParameterfvNV;

void  mockgl_GetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetCombinerOutputParameterivNV(stage, portion, pname, params);
}
PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC __glewGetCombinerOutputParameterivNV = mockgl_GetCombinerOutputParameterivNV;

void  mockgl_GetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetFinalCombinerInputParameterfvNV(variable, pname, params);
}
PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC __glewGetFinalCombinerInputParameterfvNV = mockgl_GetFinalCombinerInputParameterfvNV;

void  mockgl_GetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetFinalCombinerInputParameterivNV(variable, pname, params);
}
PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC __glewGetFinalCombinerInputParameterivNV = mockgl_GetFinalCombinerInputParameterivNV;

void  mockgl_CombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_CombinerStageParameterfvNV(stage, pname, params);
}
PFNGLCOMBINERSTAGEPARAMETERFVNVPROC __glewCombinerStageParameterfvNV = mockgl_CombinerStageParameterfvNV;

void  mockgl_GetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetCombinerStageParameterfvNV(stage, pname, params);
}
PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC __glewGetCombinerStageParameterfvNV = mockgl_GetCombinerStageParameterfvNV;

void  mockgl_GetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT * params)
{
    return getGlMock()->gl_GetBufferParameterui64vNV(target, pname, params);
}
PFNGLGETBUFFERPARAMETERUI64VNVPROC __glewGetBufferParameterui64vNV = mockgl_GetBufferParameterui64vNV;

void  mockgl_GetIntegerui64vNV(GLenum value, GLuint64EXT * result)
{
    return getGlMock()->gl_GetIntegerui64vNV(value, result);
}
PFNGLGETINTEGERUI64VNVPROC __glewGetIntegerui64vNV = mockgl_GetIntegerui64vNV;

void  mockgl_GetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT * params)
{
    return getGlMock()->gl_GetNamedBufferParameterui64vNV(buffer, pname, params);
}
PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC __glewGetNamedBufferParameterui64vNV = mockgl_GetNamedBufferParameterui64vNV;

unsigned char  mockgl_IsBufferResidentNV(GLenum target)
{
    return getGlMock()->gl_IsBufferResidentNV(target);
}
PFNGLISBUFFERRESIDENTNVPROC __glewIsBufferResidentNV = mockgl_IsBufferResidentNV;

unsigned char  mockgl_IsNamedBufferResidentNV(GLuint buffer)
{
    return getGlMock()->gl_IsNamedBufferResidentNV(buffer);
}
PFNGLISNAMEDBUFFERRESIDENTNVPROC __glewIsNamedBufferResidentNV = mockgl_IsNamedBufferResidentNV;

void  mockgl_MakeBufferNonResidentNV(GLenum target)
{
    return getGlMock()->gl_MakeBufferNonResidentNV(target);
}
PFNGLMAKEBUFFERNONRESIDENTNVPROC __glewMakeBufferNonResidentNV = mockgl_MakeBufferNonResidentNV;

void  mockgl_MakeBufferResidentNV(GLenum target, GLenum access)
{
    return getGlMock()->gl_MakeBufferResidentNV(target, access);
}
PFNGLMAKEBUFFERRESIDENTNVPROC __glewMakeBufferResidentNV = mockgl_MakeBufferResidentNV;

void  mockgl_MakeNamedBufferNonResidentNV(GLuint buffer)
{
    return getGlMock()->gl_MakeNamedBufferNonResidentNV(buffer);
}
PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC __glewMakeNamedBufferNonResidentNV = mockgl_MakeNamedBufferNonResidentNV;

void  mockgl_MakeNamedBufferResidentNV(GLuint buffer, GLenum access)
{
    return getGlMock()->gl_MakeNamedBufferResidentNV(buffer, access);
}
PFNGLMAKENAMEDBUFFERRESIDENTNVPROC __glewMakeNamedBufferResidentNV = mockgl_MakeNamedBufferResidentNV;

void  mockgl_ProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value)
{
    return getGlMock()->gl_ProgramUniformui64NV(program, location, value);
}
PFNGLPROGRAMUNIFORMUI64NVPROC __glewProgramUniformui64NV = mockgl_ProgramUniformui64NV;

void  mockgl_ProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return getGlMock()->gl_ProgramUniformui64vNV(program, location, count, value);
}
PFNGLPROGRAMUNIFORMUI64VNVPROC __glewProgramUniformui64vNV = mockgl_ProgramUniformui64vNV;

void  mockgl_Uniformui64NV(GLint location, GLuint64EXT value)
{
    return getGlMock()->gl_Uniformui64NV(location, value);
}
PFNGLUNIFORMUI64NVPROC __glewUniformui64NV = mockgl_Uniformui64NV;

void  mockgl_Uniformui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return getGlMock()->gl_Uniformui64vNV(location, count, value);
}
PFNGLUNIFORMUI64VNVPROC __glewUniformui64vNV = mockgl_Uniformui64vNV;

void  mockgl_TextureBarrierNV()
{
    return getGlMock()->gl_TextureBarrierNV();
}
PFNGLTEXTUREBARRIERNVPROC __glewTextureBarrierNV = mockgl_TextureBarrierNV;

void  mockgl_TexImage2DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return getGlMock()->gl_TexImage2DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}
PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC __glewTexImage2DMultisampleCoverageNV = mockgl_TexImage2DMultisampleCoverageNV;

void  mockgl_TexImage3DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return getGlMock()->gl_TexImage3DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}
PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC __glewTexImage3DMultisampleCoverageNV = mockgl_TexImage3DMultisampleCoverageNV;

void  mockgl_TextureImage2DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return getGlMock()->gl_TextureImage2DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}
PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC __glewTextureImage2DMultisampleCoverageNV = mockgl_TextureImage2DMultisampleCoverageNV;

void  mockgl_TextureImage2DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return getGlMock()->gl_TextureImage2DMultisampleNV(texture, target, samples, internalFormat, width, height, fixedSampleLocations);
}
PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC __glewTextureImage2DMultisampleNV = mockgl_TextureImage2DMultisampleNV;

void  mockgl_TextureImage3DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return getGlMock()->gl_TextureImage3DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}
PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC __glewTextureImage3DMultisampleCoverageNV = mockgl_TextureImage3DMultisampleCoverageNV;

void  mockgl_TextureImage3DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return getGlMock()->gl_TextureImage3DMultisampleNV(texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations);
}
PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC __glewTextureImage3DMultisampleNV = mockgl_TextureImage3DMultisampleNV;

void  mockgl_ActiveVaryingNV(GLuint program, const GLchar * name)
{
    return getGlMock()->gl_ActiveVaryingNV(program, name);
}
PFNGLACTIVEVARYINGNVPROC __glewActiveVaryingNV = mockgl_ActiveVaryingNV;

void  mockgl_BeginTransformFeedbackNV(GLenum primitiveMode)
{
    return getGlMock()->gl_BeginTransformFeedbackNV(primitiveMode);
}
PFNGLBEGINTRANSFORMFEEDBACKNVPROC __glewBeginTransformFeedbackNV = mockgl_BeginTransformFeedbackNV;

void  mockgl_BindBufferBaseNV(GLenum target, GLuint index, GLuint buffer)
{
    return getGlMock()->gl_BindBufferBaseNV(target, index, buffer);
}
PFNGLBINDBUFFERBASENVPROC __glewBindBufferBaseNV = mockgl_BindBufferBaseNV;

void  mockgl_BindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return getGlMock()->gl_BindBufferOffsetNV(target, index, buffer, offset);
}
PFNGLBINDBUFFEROFFSETNVPROC __glewBindBufferOffsetNV = mockgl_BindBufferOffsetNV;

void  mockgl_BindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return getGlMock()->gl_BindBufferRangeNV(target, index, buffer, offset, size);
}
PFNGLBINDBUFFERRANGENVPROC __glewBindBufferRangeNV = mockgl_BindBufferRangeNV;

void  mockgl_EndTransformFeedbackNV()
{
    return getGlMock()->gl_EndTransformFeedbackNV();
}
PFNGLENDTRANSFORMFEEDBACKNVPROC __glewEndTransformFeedbackNV = mockgl_EndTransformFeedbackNV;

void  mockgl_GetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return getGlMock()->gl_GetActiveVaryingNV(program, index, bufSize, length, size, type, name);
}
PFNGLGETACTIVEVARYINGNVPROC __glewGetActiveVaryingNV = mockgl_GetActiveVaryingNV;

void  mockgl_GetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint * location)
{
    return getGlMock()->gl_GetTransformFeedbackVaryingNV(program, index, location);
}
PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC __glewGetTransformFeedbackVaryingNV = mockgl_GetTransformFeedbackVaryingNV;

int  mockgl_GetVaryingLocationNV(GLuint program, const GLchar * name)
{
    return getGlMock()->gl_GetVaryingLocationNV(program, name);
}
PFNGLGETVARYINGLOCATIONNVPROC __glewGetVaryingLocationNV = mockgl_GetVaryingLocationNV;

void  mockgl_TransformFeedbackAttribsNV(GLuint count, const GLint * attribs, GLenum bufferMode)
{
    return getGlMock()->gl_TransformFeedbackAttribsNV(count, attribs, bufferMode);
}
PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC __glewTransformFeedbackAttribsNV = mockgl_TransformFeedbackAttribsNV;

void  mockgl_TransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLint * locations, GLenum bufferMode)
{
    return getGlMock()->gl_TransformFeedbackVaryingsNV(program, count, locations, bufferMode);
}
PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC __glewTransformFeedbackVaryingsNV = mockgl_TransformFeedbackVaryingsNV;

void  mockgl_BindTransformFeedbackNV(GLenum target, GLuint id)
{
    return getGlMock()->gl_BindTransformFeedbackNV(target, id);
}
PFNGLBINDTRANSFORMFEEDBACKNVPROC __glewBindTransformFeedbackNV = mockgl_BindTransformFeedbackNV;

void  mockgl_DeleteTransformFeedbacksNV(GLsizei n, const GLuint * ids)
{
    return getGlMock()->gl_DeleteTransformFeedbacksNV(n, ids);
}
PFNGLDELETETRANSFORMFEEDBACKSNVPROC __glewDeleteTransformFeedbacksNV = mockgl_DeleteTransformFeedbacksNV;

void  mockgl_DrawTransformFeedbackNV(GLenum mode, GLuint id)
{
    return getGlMock()->gl_DrawTransformFeedbackNV(mode, id);
}
PFNGLDRAWTRANSFORMFEEDBACKNVPROC __glewDrawTransformFeedbackNV = mockgl_DrawTransformFeedbackNV;

void  mockgl_GenTransformFeedbacksNV(GLsizei n, GLuint * ids)
{
    return getGlMock()->gl_GenTransformFeedbacksNV(n, ids);
}
PFNGLGENTRANSFORMFEEDBACKSNVPROC __glewGenTransformFeedbacksNV = mockgl_GenTransformFeedbacksNV;

unsigned char  mockgl_IsTransformFeedbackNV(GLuint id)
{
    return getGlMock()->gl_IsTransformFeedbackNV(id);
}
PFNGLISTRANSFORMFEEDBACKNVPROC __glewIsTransformFeedbackNV = mockgl_IsTransformFeedbackNV;

void  mockgl_PauseTransformFeedbackNV()
{
    return getGlMock()->gl_PauseTransformFeedbackNV();
}
PFNGLPAUSETRANSFORMFEEDBACKNVPROC __glewPauseTransformFeedbackNV = mockgl_PauseTransformFeedbackNV;

void  mockgl_ResumeTransformFeedbackNV()
{
    return getGlMock()->gl_ResumeTransformFeedbackNV();
}
PFNGLRESUMETRANSFORMFEEDBACKNVPROC __glewResumeTransformFeedbackNV = mockgl_ResumeTransformFeedbackNV;

void  mockgl_VDPAUFiniNV()
{
    return getGlMock()->gl_VDPAUFiniNV();
}
PFNGLVDPAUFININVPROC __glewVDPAUFiniNV = mockgl_VDPAUFiniNV;

void  mockgl_VDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return getGlMock()->gl_VDPAUGetSurfaceivNV(surface, pname, bufSize, length, values);
}
PFNGLVDPAUGETSURFACEIVNVPROC __glewVDPAUGetSurfaceivNV = mockgl_VDPAUGetSurfaceivNV;

void  mockgl_VDPAUInitNV(const void * vdpDevice, const GLvoid * getProcAddress)
{
    return getGlMock()->gl_VDPAUInitNV(vdpDevice, getProcAddress);
}
PFNGLVDPAUINITNVPROC __glewVDPAUInitNV = mockgl_VDPAUInitNV;

void  mockgl_VDPAUIsSurfaceNV(GLvdpauSurfaceNV surface)
{
    return getGlMock()->gl_VDPAUIsSurfaceNV(surface);
}
PFNGLVDPAUISSURFACENVPROC __glewVDPAUIsSurfaceNV = mockgl_VDPAUIsSurfaceNV;

void  mockgl_VDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV * surfaces)
{
    return getGlMock()->gl_VDPAUMapSurfacesNV(numSurfaces, surfaces);
}
PFNGLVDPAUMAPSURFACESNVPROC __glewVDPAUMapSurfacesNV = mockgl_VDPAUMapSurfacesNV;

long  mockgl_VDPAURegisterOutputSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return getGlMock()->gl_VDPAURegisterOutputSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}
PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC __glewVDPAURegisterOutputSurfaceNV = mockgl_VDPAURegisterOutputSurfaceNV;

long  mockgl_VDPAURegisterVideoSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return getGlMock()->gl_VDPAURegisterVideoSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}
PFNGLVDPAUREGISTERVIDEOSURFACENVPROC __glewVDPAURegisterVideoSurfaceNV = mockgl_VDPAURegisterVideoSurfaceNV;

void  mockgl_VDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access)
{
    return getGlMock()->gl_VDPAUSurfaceAccessNV(surface, access);
}
PFNGLVDPAUSURFACEACCESSNVPROC __glewVDPAUSurfaceAccessNV = mockgl_VDPAUSurfaceAccessNV;

void  mockgl_VDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV * surfaces)
{
    return getGlMock()->gl_VDPAUUnmapSurfacesNV(numSurface, surfaces);
}
PFNGLVDPAUUNMAPSURFACESNVPROC __glewVDPAUUnmapSurfacesNV = mockgl_VDPAUUnmapSurfacesNV;

void  mockgl_VDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface)
{
    return getGlMock()->gl_VDPAUUnregisterSurfaceNV(surface);
}
PFNGLVDPAUUNREGISTERSURFACENVPROC __glewVDPAUUnregisterSurfaceNV = mockgl_VDPAUUnregisterSurfaceNV;

void  mockgl_FlushVertexArrayRangeNV()
{
    return getGlMock()->gl_FlushVertexArrayRangeNV();
}
PFNGLFLUSHVERTEXARRAYRANGENVPROC __glewFlushVertexArrayRangeNV = mockgl_FlushVertexArrayRangeNV;

void  mockgl_VertexArrayRangeNV(GLsizei length, void * pointer)
{
    return getGlMock()->gl_VertexArrayRangeNV(length, pointer);
}
PFNGLVERTEXARRAYRANGENVPROC __glewVertexArrayRangeNV = mockgl_VertexArrayRangeNV;

void  mockgl_GetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT * params)
{
    return getGlMock()->gl_GetVertexAttribLi64vNV(index, pname, params);
}
PFNGLGETVERTEXATTRIBLI64VNVPROC __glewGetVertexAttribLi64vNV = mockgl_GetVertexAttribLi64vNV;

void  mockgl_GetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return getGlMock()->gl_GetVertexAttribLui64vNV(index, pname, params);
}
PFNGLGETVERTEXATTRIBLUI64VNVPROC __glewGetVertexAttribLui64vNV = mockgl_GetVertexAttribLui64vNV;

void  mockgl_VertexAttribL1i64NV(GLuint index, GLint64EXT x)
{
    return getGlMock()->gl_VertexAttribL1i64NV(index, x);
}
PFNGLVERTEXATTRIBL1I64NVPROC __glewVertexAttribL1i64NV = mockgl_VertexAttribL1i64NV;

void  mockgl_VertexAttribL1i64vNV(GLuint index, const GLint64EXT * v)
{
    return getGlMock()->gl_VertexAttribL1i64vNV(index, v);
}
PFNGLVERTEXATTRIBL1I64VNVPROC __glewVertexAttribL1i64vNV = mockgl_VertexAttribL1i64vNV;

void  mockgl_VertexAttribL1ui64NV(GLuint index, GLuint64EXT x)
{
    return getGlMock()->gl_VertexAttribL1ui64NV(index, x);
}
PFNGLVERTEXATTRIBL1UI64NVPROC __glewVertexAttribL1ui64NV = mockgl_VertexAttribL1ui64NV;

void  mockgl_VertexAttribL1ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return getGlMock()->gl_VertexAttribL1ui64vNV(index, v);
}
PFNGLVERTEXATTRIBL1UI64VNVPROC __glewVertexAttribL1ui64vNV = mockgl_VertexAttribL1ui64vNV;

void  mockgl_VertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y)
{
    return getGlMock()->gl_VertexAttribL2i64NV(index, x, y);
}
PFNGLVERTEXATTRIBL2I64NVPROC __glewVertexAttribL2i64NV = mockgl_VertexAttribL2i64NV;

void  mockgl_VertexAttribL2i64vNV(GLuint index, const GLint64EXT * v)
{
    return getGlMock()->gl_VertexAttribL2i64vNV(index, v);
}
PFNGLVERTEXATTRIBL2I64VNVPROC __glewVertexAttribL2i64vNV = mockgl_VertexAttribL2i64vNV;

void  mockgl_VertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y)
{
    return getGlMock()->gl_VertexAttribL2ui64NV(index, x, y);
}
PFNGLVERTEXATTRIBL2UI64NVPROC __glewVertexAttribL2ui64NV = mockgl_VertexAttribL2ui64NV;

void  mockgl_VertexAttribL2ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return getGlMock()->gl_VertexAttribL2ui64vNV(index, v);
}
PFNGLVERTEXATTRIBL2UI64VNVPROC __glewVertexAttribL2ui64vNV = mockgl_VertexAttribL2ui64vNV;

void  mockgl_VertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return getGlMock()->gl_VertexAttribL3i64NV(index, x, y, z);
}
PFNGLVERTEXATTRIBL3I64NVPROC __glewVertexAttribL3i64NV = mockgl_VertexAttribL3i64NV;

void  mockgl_VertexAttribL3i64vNV(GLuint index, const GLint64EXT * v)
{
    return getGlMock()->gl_VertexAttribL3i64vNV(index, v);
}
PFNGLVERTEXATTRIBL3I64VNVPROC __glewVertexAttribL3i64vNV = mockgl_VertexAttribL3i64vNV;

void  mockgl_VertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return getGlMock()->gl_VertexAttribL3ui64NV(index, x, y, z);
}
PFNGLVERTEXATTRIBL3UI64NVPROC __glewVertexAttribL3ui64NV = mockgl_VertexAttribL3ui64NV;

void  mockgl_VertexAttribL3ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return getGlMock()->gl_VertexAttribL3ui64vNV(index, v);
}
PFNGLVERTEXATTRIBL3UI64VNVPROC __glewVertexAttribL3ui64vNV = mockgl_VertexAttribL3ui64vNV;

void  mockgl_VertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return getGlMock()->gl_VertexAttribL4i64NV(index, x, y, z, w);
}
PFNGLVERTEXATTRIBL4I64NVPROC __glewVertexAttribL4i64NV = mockgl_VertexAttribL4i64NV;

void  mockgl_VertexAttribL4i64vNV(GLuint index, const GLint64EXT * v)
{
    return getGlMock()->gl_VertexAttribL4i64vNV(index, v);
}
PFNGLVERTEXATTRIBL4I64VNVPROC __glewVertexAttribL4i64vNV = mockgl_VertexAttribL4i64vNV;

void  mockgl_VertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return getGlMock()->gl_VertexAttribL4ui64NV(index, x, y, z, w);
}
PFNGLVERTEXATTRIBL4UI64NVPROC __glewVertexAttribL4ui64NV = mockgl_VertexAttribL4ui64NV;

void  mockgl_VertexAttribL4ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return getGlMock()->gl_VertexAttribL4ui64vNV(index, v);
}
PFNGLVERTEXATTRIBL4UI64VNVPROC __glewVertexAttribL4ui64vNV = mockgl_VertexAttribL4ui64vNV;

void  mockgl_VertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return getGlMock()->gl_VertexAttribLFormatNV(index, size, type, stride);
}
PFNGLVERTEXATTRIBLFORMATNVPROC __glewVertexAttribLFormatNV = mockgl_VertexAttribLFormatNV;

void  mockgl_BufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length)
{
    return getGlMock()->gl_BufferAddressRangeNV(pname, index, address, length);
}
PFNGLBUFFERADDRESSRANGENVPROC __glewBufferAddressRangeNV = mockgl_BufferAddressRangeNV;

void  mockgl_ColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return getGlMock()->gl_ColorFormatNV(size, type, stride);
}
PFNGLCOLORFORMATNVPROC __glewColorFormatNV = mockgl_ColorFormatNV;

void  mockgl_EdgeFlagFormatNV(GLsizei stride)
{
    return getGlMock()->gl_EdgeFlagFormatNV(stride);
}
PFNGLEDGEFLAGFORMATNVPROC __glewEdgeFlagFormatNV = mockgl_EdgeFlagFormatNV;

void  mockgl_FogCoordFormatNV(GLenum type, GLsizei stride)
{
    return getGlMock()->gl_FogCoordFormatNV(type, stride);
}
PFNGLFOGCOORDFORMATNVPROC __glewFogCoordFormatNV = mockgl_FogCoordFormatNV;

void  mockgl_GetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT * result)
{
    return getGlMock()->gl_GetIntegerui64i_vNV(value, index, result);
}
PFNGLGETINTEGERUI64I_VNVPROC __glewGetIntegerui64i_vNV = mockgl_GetIntegerui64i_vNV;

void  mockgl_IndexFormatNV(GLenum type, GLsizei stride)
{
    return getGlMock()->gl_IndexFormatNV(type, stride);
}
PFNGLINDEXFORMATNVPROC __glewIndexFormatNV = mockgl_IndexFormatNV;

void  mockgl_NormalFormatNV(GLenum type, GLsizei stride)
{
    return getGlMock()->gl_NormalFormatNV(type, stride);
}
PFNGLNORMALFORMATNVPROC __glewNormalFormatNV = mockgl_NormalFormatNV;

void  mockgl_SecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return getGlMock()->gl_SecondaryColorFormatNV(size, type, stride);
}
PFNGLSECONDARYCOLORFORMATNVPROC __glewSecondaryColorFormatNV = mockgl_SecondaryColorFormatNV;

void  mockgl_TexCoordFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return getGlMock()->gl_TexCoordFormatNV(size, type, stride);
}
PFNGLTEXCOORDFORMATNVPROC __glewTexCoordFormatNV = mockgl_TexCoordFormatNV;

void  mockgl_VertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride)
{
    return getGlMock()->gl_VertexAttribFormatNV(index, size, type, normalized, stride);
}
PFNGLVERTEXATTRIBFORMATNVPROC __glewVertexAttribFormatNV = mockgl_VertexAttribFormatNV;

void  mockgl_VertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return getGlMock()->gl_VertexAttribIFormatNV(index, size, type, stride);
}
PFNGLVERTEXATTRIBIFORMATNVPROC __glewVertexAttribIFormatNV = mockgl_VertexAttribIFormatNV;

void  mockgl_VertexFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return getGlMock()->gl_VertexFormatNV(size, type, stride);
}
PFNGLVERTEXFORMATNVPROC __glewVertexFormatNV = mockgl_VertexFormatNV;

unsigned char  mockgl_AreProgramsResidentNV(GLsizei n, const GLuint * ids, GLboolean * residences)
{
    return getGlMock()->gl_AreProgramsResidentNV(n, ids, residences);
}
PFNGLAREPROGRAMSRESIDENTNVPROC __glewAreProgramsResidentNV = mockgl_AreProgramsResidentNV;

void  mockgl_BindProgramNV(GLenum target, GLuint id)
{
    return getGlMock()->gl_BindProgramNV(target, id);
}
PFNGLBINDPROGRAMNVPROC __glewBindProgramNV = mockgl_BindProgramNV;

void  mockgl_DeleteProgramsNV(GLsizei n, const GLuint * ids)
{
    return getGlMock()->gl_DeleteProgramsNV(n, ids);
}
PFNGLDELETEPROGRAMSNVPROC __glewDeleteProgramsNV = mockgl_DeleteProgramsNV;

void  mockgl_ExecuteProgramNV(GLenum target, GLuint id, const GLfloat * params)
{
    return getGlMock()->gl_ExecuteProgramNV(target, id, params);
}
PFNGLEXECUTEPROGRAMNVPROC __glewExecuteProgramNV = mockgl_ExecuteProgramNV;

void  mockgl_GenProgramsNV(GLsizei n, GLuint * ids)
{
    return getGlMock()->gl_GenProgramsNV(n, ids);
}
PFNGLGENPROGRAMSNVPROC __glewGenProgramsNV = mockgl_GenProgramsNV;

void  mockgl_GetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble * params)
{
    return getGlMock()->gl_GetProgramParameterdvNV(target, index, pname, params);
}
PFNGLGETPROGRAMPARAMETERDVNVPROC __glewGetProgramParameterdvNV = mockgl_GetProgramParameterdvNV;

void  mockgl_GetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetProgramParameterfvNV(target, index, pname, params);
}
PFNGLGETPROGRAMPARAMETERFVNVPROC __glewGetProgramParameterfvNV = mockgl_GetProgramParameterfvNV;

void  mockgl_GetProgramStringNV(GLuint id, GLenum pname, GLubyte * program)
{
    return getGlMock()->gl_GetProgramStringNV(id, pname, program);
}
PFNGLGETPROGRAMSTRINGNVPROC __glewGetProgramStringNV = mockgl_GetProgramStringNV;

void  mockgl_GetProgramivNV(GLuint id, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetProgramivNV(id, pname, params);
}
PFNGLGETPROGRAMIVNVPROC __glewGetProgramivNV = mockgl_GetProgramivNV;

void  mockgl_GetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetTrackMatrixivNV(target, address, pname, params);
}
PFNGLGETTRACKMATRIXIVNVPROC __glewGetTrackMatrixivNV = mockgl_GetTrackMatrixivNV;

void  mockgl_GetVertexAttribPointervNV(GLuint index, GLenum pname, GLvoid ** pointer)
{
    return getGlMock()->gl_GetVertexAttribPointervNV(index, pname, pointer);
}
PFNGLGETVERTEXATTRIBPOINTERVNVPROC __glewGetVertexAttribPointervNV = mockgl_GetVertexAttribPointervNV;

void  mockgl_GetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble * params)
{
    return getGlMock()->gl_GetVertexAttribdvNV(index, pname, params);
}
PFNGLGETVERTEXATTRIBDVNVPROC __glewGetVertexAttribdvNV = mockgl_GetVertexAttribdvNV;

void  mockgl_GetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetVertexAttribfvNV(index, pname, params);
}
PFNGLGETVERTEXATTRIBFVNVPROC __glewGetVertexAttribfvNV = mockgl_GetVertexAttribfvNV;

void  mockgl_GetVertexAttribivNV(GLuint index, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetVertexAttribivNV(index, pname, params);
}
PFNGLGETVERTEXATTRIBIVNVPROC __glewGetVertexAttribivNV = mockgl_GetVertexAttribivNV;

unsigned char  mockgl_IsProgramNV(GLuint id)
{
    return getGlMock()->gl_IsProgramNV(id);
}
PFNGLISPROGRAMNVPROC __glewIsProgramNV = mockgl_IsProgramNV;

void  mockgl_LoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte * program)
{
    return getGlMock()->gl_LoadProgramNV(target, id, len, program);
}
PFNGLLOADPROGRAMNVPROC __glewLoadProgramNV = mockgl_LoadProgramNV;

void  mockgl_ProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_ProgramParameter4dNV(target, index, x, y, z, w);
}
PFNGLPROGRAMPARAMETER4DNVPROC __glewProgramParameter4dNV = mockgl_ProgramParameter4dNV;

void  mockgl_ProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble * params)
{
    return getGlMock()->gl_ProgramParameter4dvNV(target, index, params);
}
PFNGLPROGRAMPARAMETER4DVNVPROC __glewProgramParameter4dvNV = mockgl_ProgramParameter4dvNV;

void  mockgl_ProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return getGlMock()->gl_ProgramParameter4fNV(target, index, x, y, z, w);
}
PFNGLPROGRAMPARAMETER4FNVPROC __glewProgramParameter4fNV = mockgl_ProgramParameter4fNV;

void  mockgl_ProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat * params)
{
    return getGlMock()->gl_ProgramParameter4fvNV(target, index, params);
}
PFNGLPROGRAMPARAMETER4FVNVPROC __glewProgramParameter4fvNV = mockgl_ProgramParameter4fvNV;

void  mockgl_ProgramParameters4dvNV(GLenum target, GLuint index, GLsizei num, const GLdouble * params)
{
    return getGlMock()->gl_ProgramParameters4dvNV(target, index, num, params);
}
PFNGLPROGRAMPARAMETERS4DVNVPROC __glewProgramParameters4dvNV = mockgl_ProgramParameters4dvNV;

void  mockgl_ProgramParameters4fvNV(GLenum target, GLuint index, GLsizei num, const GLfloat * params)
{
    return getGlMock()->gl_ProgramParameters4fvNV(target, index, num, params);
}
PFNGLPROGRAMPARAMETERS4FVNVPROC __glewProgramParameters4fvNV = mockgl_ProgramParameters4fvNV;

void  mockgl_RequestResidentProgramsNV(GLsizei n, GLuint * ids)
{
    return getGlMock()->gl_RequestResidentProgramsNV(n, ids);
}
PFNGLREQUESTRESIDENTPROGRAMSNVPROC __glewRequestResidentProgramsNV = mockgl_RequestResidentProgramsNV;

void  mockgl_TrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
{
    return getGlMock()->gl_TrackMatrixNV(target, address, matrix, transform);
}
PFNGLTRACKMATRIXNVPROC __glewTrackMatrixNV = mockgl_TrackMatrixNV;

void  mockgl_VertexAttrib1dNV(GLuint index, GLdouble x)
{
    return getGlMock()->gl_VertexAttrib1dNV(index, x);
}
PFNGLVERTEXATTRIB1DNVPROC __glewVertexAttrib1dNV = mockgl_VertexAttrib1dNV;

void  mockgl_VertexAttrib1dvNV(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttrib1dvNV(index, v);
}
PFNGLVERTEXATTRIB1DVNVPROC __glewVertexAttrib1dvNV = mockgl_VertexAttrib1dvNV;

void  mockgl_VertexAttrib1fNV(GLuint index, GLfloat x)
{
    return getGlMock()->gl_VertexAttrib1fNV(index, x);
}
PFNGLVERTEXATTRIB1FNVPROC __glewVertexAttrib1fNV = mockgl_VertexAttrib1fNV;

void  mockgl_VertexAttrib1fvNV(GLuint index, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttrib1fvNV(index, v);
}
PFNGLVERTEXATTRIB1FVNVPROC __glewVertexAttrib1fvNV = mockgl_VertexAttrib1fvNV;

void  mockgl_VertexAttrib1sNV(GLuint index, GLshort x)
{
    return getGlMock()->gl_VertexAttrib1sNV(index, x);
}
PFNGLVERTEXATTRIB1SNVPROC __glewVertexAttrib1sNV = mockgl_VertexAttrib1sNV;

void  mockgl_VertexAttrib1svNV(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttrib1svNV(index, v);
}
PFNGLVERTEXATTRIB1SVNVPROC __glewVertexAttrib1svNV = mockgl_VertexAttrib1svNV;

void  mockgl_VertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
{
    return getGlMock()->gl_VertexAttrib2dNV(index, x, y);
}
PFNGLVERTEXATTRIB2DNVPROC __glewVertexAttrib2dNV = mockgl_VertexAttrib2dNV;

void  mockgl_VertexAttrib2dvNV(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttrib2dvNV(index, v);
}
PFNGLVERTEXATTRIB2DVNVPROC __glewVertexAttrib2dvNV = mockgl_VertexAttrib2dvNV;

void  mockgl_VertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
{
    return getGlMock()->gl_VertexAttrib2fNV(index, x, y);
}
PFNGLVERTEXATTRIB2FNVPROC __glewVertexAttrib2fNV = mockgl_VertexAttrib2fNV;

void  mockgl_VertexAttrib2fvNV(GLuint index, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttrib2fvNV(index, v);
}
PFNGLVERTEXATTRIB2FVNVPROC __glewVertexAttrib2fvNV = mockgl_VertexAttrib2fvNV;

void  mockgl_VertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
{
    return getGlMock()->gl_VertexAttrib2sNV(index, x, y);
}
PFNGLVERTEXATTRIB2SNVPROC __glewVertexAttrib2sNV = mockgl_VertexAttrib2sNV;

void  mockgl_VertexAttrib2svNV(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttrib2svNV(index, v);
}
PFNGLVERTEXATTRIB2SVNVPROC __glewVertexAttrib2svNV = mockgl_VertexAttrib2svNV;

void  mockgl_VertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return getGlMock()->gl_VertexAttrib3dNV(index, x, y, z);
}
PFNGLVERTEXATTRIB3DNVPROC __glewVertexAttrib3dNV = mockgl_VertexAttrib3dNV;

void  mockgl_VertexAttrib3dvNV(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttrib3dvNV(index, v);
}
PFNGLVERTEXATTRIB3DVNVPROC __glewVertexAttrib3dvNV = mockgl_VertexAttrib3dvNV;

void  mockgl_VertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_VertexAttrib3fNV(index, x, y, z);
}
PFNGLVERTEXATTRIB3FNVPROC __glewVertexAttrib3fNV = mockgl_VertexAttrib3fNV;

void  mockgl_VertexAttrib3fvNV(GLuint index, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttrib3fvNV(index, v);
}
PFNGLVERTEXATTRIB3FVNVPROC __glewVertexAttrib3fvNV = mockgl_VertexAttrib3fvNV;

void  mockgl_VertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return getGlMock()->gl_VertexAttrib3sNV(index, x, y, z);
}
PFNGLVERTEXATTRIB3SNVPROC __glewVertexAttrib3sNV = mockgl_VertexAttrib3sNV;

void  mockgl_VertexAttrib3svNV(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttrib3svNV(index, v);
}
PFNGLVERTEXATTRIB3SVNVPROC __glewVertexAttrib3svNV = mockgl_VertexAttrib3svNV;

void  mockgl_VertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return getGlMock()->gl_VertexAttrib4dNV(index, x, y, z, w);
}
PFNGLVERTEXATTRIB4DNVPROC __glewVertexAttrib4dNV = mockgl_VertexAttrib4dNV;

void  mockgl_VertexAttrib4dvNV(GLuint index, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttrib4dvNV(index, v);
}
PFNGLVERTEXATTRIB4DVNVPROC __glewVertexAttrib4dvNV = mockgl_VertexAttrib4dvNV;

void  mockgl_VertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return getGlMock()->gl_VertexAttrib4fNV(index, x, y, z, w);
}
PFNGLVERTEXATTRIB4FNVPROC __glewVertexAttrib4fNV = mockgl_VertexAttrib4fNV;

void  mockgl_VertexAttrib4fvNV(GLuint index, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttrib4fvNV(index, v);
}
PFNGLVERTEXATTRIB4FVNVPROC __glewVertexAttrib4fvNV = mockgl_VertexAttrib4fvNV;

void  mockgl_VertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return getGlMock()->gl_VertexAttrib4sNV(index, x, y, z, w);
}
PFNGLVERTEXATTRIB4SNVPROC __glewVertexAttrib4sNV = mockgl_VertexAttrib4sNV;

void  mockgl_VertexAttrib4svNV(GLuint index, const GLshort * v)
{
    return getGlMock()->gl_VertexAttrib4svNV(index, v);
}
PFNGLVERTEXATTRIB4SVNVPROC __glewVertexAttrib4svNV = mockgl_VertexAttrib4svNV;

void  mockgl_VertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return getGlMock()->gl_VertexAttrib4ubNV(index, x, y, z, w);
}
PFNGLVERTEXATTRIB4UBNVPROC __glewVertexAttrib4ubNV = mockgl_VertexAttrib4ubNV;

void  mockgl_VertexAttrib4ubvNV(GLuint index, const GLubyte * v)
{
    return getGlMock()->gl_VertexAttrib4ubvNV(index, v);
}
PFNGLVERTEXATTRIB4UBVNVPROC __glewVertexAttrib4ubvNV = mockgl_VertexAttrib4ubvNV;

void  mockgl_VertexAttribPointerNV(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return getGlMock()->gl_VertexAttribPointerNV(index, size, type, stride, pointer);
}
PFNGLVERTEXATTRIBPOINTERNVPROC __glewVertexAttribPointerNV = mockgl_VertexAttribPointerNV;

void  mockgl_VertexAttribs1dvNV(GLuint index, GLsizei n, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttribs1dvNV(index, n, v);
}
PFNGLVERTEXATTRIBS1DVNVPROC __glewVertexAttribs1dvNV = mockgl_VertexAttribs1dvNV;

void  mockgl_VertexAttribs1fvNV(GLuint index, GLsizei n, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttribs1fvNV(index, n, v);
}
PFNGLVERTEXATTRIBS1FVNVPROC __glewVertexAttribs1fvNV = mockgl_VertexAttribs1fvNV;

void  mockgl_VertexAttribs1svNV(GLuint index, GLsizei n, const GLshort * v)
{
    return getGlMock()->gl_VertexAttribs1svNV(index, n, v);
}
PFNGLVERTEXATTRIBS1SVNVPROC __glewVertexAttribs1svNV = mockgl_VertexAttribs1svNV;

void  mockgl_VertexAttribs2dvNV(GLuint index, GLsizei n, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttribs2dvNV(index, n, v);
}
PFNGLVERTEXATTRIBS2DVNVPROC __glewVertexAttribs2dvNV = mockgl_VertexAttribs2dvNV;

void  mockgl_VertexAttribs2fvNV(GLuint index, GLsizei n, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttribs2fvNV(index, n, v);
}
PFNGLVERTEXATTRIBS2FVNVPROC __glewVertexAttribs2fvNV = mockgl_VertexAttribs2fvNV;

void  mockgl_VertexAttribs2svNV(GLuint index, GLsizei n, const GLshort * v)
{
    return getGlMock()->gl_VertexAttribs2svNV(index, n, v);
}
PFNGLVERTEXATTRIBS2SVNVPROC __glewVertexAttribs2svNV = mockgl_VertexAttribs2svNV;

void  mockgl_VertexAttribs3dvNV(GLuint index, GLsizei n, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttribs3dvNV(index, n, v);
}
PFNGLVERTEXATTRIBS3DVNVPROC __glewVertexAttribs3dvNV = mockgl_VertexAttribs3dvNV;

void  mockgl_VertexAttribs3fvNV(GLuint index, GLsizei n, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttribs3fvNV(index, n, v);
}
PFNGLVERTEXATTRIBS3FVNVPROC __glewVertexAttribs3fvNV = mockgl_VertexAttribs3fvNV;

void  mockgl_VertexAttribs3svNV(GLuint index, GLsizei n, const GLshort * v)
{
    return getGlMock()->gl_VertexAttribs3svNV(index, n, v);
}
PFNGLVERTEXATTRIBS3SVNVPROC __glewVertexAttribs3svNV = mockgl_VertexAttribs3svNV;

void  mockgl_VertexAttribs4dvNV(GLuint index, GLsizei n, const GLdouble * v)
{
    return getGlMock()->gl_VertexAttribs4dvNV(index, n, v);
}
PFNGLVERTEXATTRIBS4DVNVPROC __glewVertexAttribs4dvNV = mockgl_VertexAttribs4dvNV;

void  mockgl_VertexAttribs4fvNV(GLuint index, GLsizei n, const GLfloat * v)
{
    return getGlMock()->gl_VertexAttribs4fvNV(index, n, v);
}
PFNGLVERTEXATTRIBS4FVNVPROC __glewVertexAttribs4fvNV = mockgl_VertexAttribs4fvNV;

void  mockgl_VertexAttribs4svNV(GLuint index, GLsizei n, const GLshort * v)
{
    return getGlMock()->gl_VertexAttribs4svNV(index, n, v);
}
PFNGLVERTEXATTRIBS4SVNVPROC __glewVertexAttribs4svNV = mockgl_VertexAttribs4svNV;

void  mockgl_VertexAttribs4ubvNV(GLuint index, GLsizei n, const GLubyte * v)
{
    return getGlMock()->gl_VertexAttribs4ubvNV(index, n, v);
}
PFNGLVERTEXATTRIBS4UBVNVPROC __glewVertexAttribs4ubvNV = mockgl_VertexAttribs4ubvNV;

void  mockgl_BeginVideoCaptureNV(GLuint video_capture_slot)
{
    return getGlMock()->gl_BeginVideoCaptureNV(video_capture_slot);
}
PFNGLBEGINVIDEOCAPTURENVPROC __glewBeginVideoCaptureNV = mockgl_BeginVideoCaptureNV;

void  mockgl_BindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset)
{
    return getGlMock()->gl_BindVideoCaptureStreamBufferNV(video_capture_slot, stream, frame_region, offset);
}
PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC __glewBindVideoCaptureStreamBufferNV = mockgl_BindVideoCaptureStreamBufferNV;

void  mockgl_BindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture)
{
    return getGlMock()->gl_BindVideoCaptureStreamTextureNV(video_capture_slot, stream, frame_region, target, texture);
}
PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC __glewBindVideoCaptureStreamTextureNV = mockgl_BindVideoCaptureStreamTextureNV;

void  mockgl_EndVideoCaptureNV(GLuint video_capture_slot)
{
    return getGlMock()->gl_EndVideoCaptureNV(video_capture_slot);
}
PFNGLENDVIDEOCAPTURENVPROC __glewEndVideoCaptureNV = mockgl_EndVideoCaptureNV;

void  mockgl_GetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble * params)
{
    return getGlMock()->gl_GetVideoCaptureStreamdvNV(video_capture_slot, stream, pname, params);
}
PFNGLGETVIDEOCAPTURESTREAMDVNVPROC __glewGetVideoCaptureStreamdvNV = mockgl_GetVideoCaptureStreamdvNV;

void  mockgl_GetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetVideoCaptureStreamfvNV(video_capture_slot, stream, pname, params);
}
PFNGLGETVIDEOCAPTURESTREAMFVNVPROC __glewGetVideoCaptureStreamfvNV = mockgl_GetVideoCaptureStreamfvNV;

void  mockgl_GetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetVideoCaptureStreamivNV(video_capture_slot, stream, pname, params);
}
PFNGLGETVIDEOCAPTURESTREAMIVNVPROC __glewGetVideoCaptureStreamivNV = mockgl_GetVideoCaptureStreamivNV;

void  mockgl_GetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetVideoCaptureivNV(video_capture_slot, pname, params);
}
PFNGLGETVIDEOCAPTUREIVNVPROC __glewGetVideoCaptureivNV = mockgl_GetVideoCaptureivNV;

unsigned int  mockgl_VideoCaptureNV(GLuint video_capture_slot, GLuint * sequence_num, GLuint64EXT * capture_time)
{
    return getGlMock()->gl_VideoCaptureNV(video_capture_slot, sequence_num, capture_time);
}
PFNGLVIDEOCAPTURENVPROC __glewVideoCaptureNV = mockgl_VideoCaptureNV;

void  mockgl_VideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble * params)
{
    return getGlMock()->gl_VideoCaptureStreamParameterdvNV(video_capture_slot, stream, pname, params);
}
PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC __glewVideoCaptureStreamParameterdvNV = mockgl_VideoCaptureStreamParameterdvNV;

void  mockgl_VideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_VideoCaptureStreamParameterfvNV(video_capture_slot, stream, pname, params);
}
PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC __glewVideoCaptureStreamParameterfvNV = mockgl_VideoCaptureStreamParameterfvNV;

void  mockgl_VideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_VideoCaptureStreamParameterivNV(video_capture_slot, stream, pname, params);
}
PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC __glewVideoCaptureStreamParameterivNV = mockgl_VideoCaptureStreamParameterivNV;

void  mockgl_ClearDepthfOES(GLclampd depth)
{
    return getGlMock()->gl_ClearDepthfOES(depth);
}
PFNGLCLEARDEPTHFOESPROC __glewClearDepthfOES = mockgl_ClearDepthfOES;

void  mockgl_ClipPlanefOES(GLenum plane, const GLfloat * equation)
{
    return getGlMock()->gl_ClipPlanefOES(plane, equation);
}
PFNGLCLIPPLANEFOESPROC __glewClipPlanefOES = mockgl_ClipPlanefOES;

void  mockgl_DepthRangefOES(GLclampf n, GLclampf f)
{
    return getGlMock()->gl_DepthRangefOES(n, f);
}
PFNGLDEPTHRANGEFOESPROC __glewDepthRangefOES = mockgl_DepthRangefOES;

void  mockgl_FrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return getGlMock()->gl_FrustumfOES(l, r, b, t, n, f);
}
PFNGLFRUSTUMFOESPROC __glewFrustumfOES = mockgl_FrustumfOES;

void  mockgl_GetClipPlanefOES(GLenum plane, GLfloat * equation)
{
    return getGlMock()->gl_GetClipPlanefOES(plane, equation);
}
PFNGLGETCLIPPLANEFOESPROC __glewGetClipPlanefOES = mockgl_GetClipPlanefOES;

void  mockgl_OrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return getGlMock()->gl_OrthofOES(l, r, b, t, n, f);
}
PFNGLORTHOFOESPROC __glewOrthofOES = mockgl_OrthofOES;

void  mockgl_DetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return getGlMock()->gl_DetailTexFuncSGIS(target, n, points);
}
PFNGLDETAILTEXFUNCSGISPROC __glewDetailTexFuncSGIS = mockgl_DetailTexFuncSGIS;

void  mockgl_GetDetailTexFuncSGIS(GLenum target, GLfloat * points)
{
    return getGlMock()->gl_GetDetailTexFuncSGIS(target, points);
}
PFNGLGETDETAILTEXFUNCSGISPROC __glewGetDetailTexFuncSGIS = mockgl_GetDetailTexFuncSGIS;

void  mockgl_FogFuncSGIS(GLsizei n, const GLfloat * points)
{
    return getGlMock()->gl_FogFuncSGIS(n, points);
}
PFNGLFOGFUNCSGISPROC __glewFogFuncSGIS = mockgl_FogFuncSGIS;

void  mockgl_GetFogFuncSGIS(GLfloat * points)
{
    return getGlMock()->gl_GetFogFuncSGIS(points);
}
PFNGLGETFOGFUNCSGISPROC __glewGetFogFuncSGIS = mockgl_GetFogFuncSGIS;

void  mockgl_SampleMaskSGIS(GLclampf value, GLboolean invert)
{
    return getGlMock()->gl_SampleMaskSGIS(value, invert);
}
PFNGLSAMPLEMASKSGISPROC __glewSampleMaskSGIS = mockgl_SampleMaskSGIS;

void  mockgl_SamplePatternSGIS(GLenum pattern)
{
    return getGlMock()->gl_SamplePatternSGIS(pattern);
}
PFNGLSAMPLEPATTERNSGISPROC __glewSamplePatternSGIS = mockgl_SamplePatternSGIS;

void  mockgl_GetSharpenTexFuncSGIS(GLenum target, GLfloat * points)
{
    return getGlMock()->gl_GetSharpenTexFuncSGIS(target, points);
}
PFNGLGETSHARPENTEXFUNCSGISPROC __glewGetSharpenTexFuncSGIS = mockgl_GetSharpenTexFuncSGIS;

void  mockgl_SharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return getGlMock()->gl_SharpenTexFuncSGIS(target, n, points);
}
PFNGLSHARPENTEXFUNCSGISPROC __glewSharpenTexFuncSGIS = mockgl_SharpenTexFuncSGIS;

void  mockgl_GetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat * weights)
{
    return getGlMock()->gl_GetTexFilterFuncSGIS(target, filter, weights);
}
PFNGLGETTEXFILTERFUNCSGISPROC __glewGetTexFilterFuncSGIS = mockgl_GetTexFilterFuncSGIS;

void  mockgl_TexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat * weights)
{
    return getGlMock()->gl_TexFilterFuncSGIS(target, filter, n, weights);
}
PFNGLTEXFILTERFUNCSGISPROC __glewTexFilterFuncSGIS = mockgl_TexFilterFuncSGIS;

void  mockgl_AsyncMarkerSGIX(GLuint marker)
{
    return getGlMock()->gl_AsyncMarkerSGIX(marker);
}
PFNGLASYNCMARKERSGIXPROC __glewAsyncMarkerSGIX = mockgl_AsyncMarkerSGIX;

void  mockgl_DeleteAsyncMarkersSGIX(GLuint marker, GLsizei range)
{
    return getGlMock()->gl_DeleteAsyncMarkersSGIX(marker, range);
}
PFNGLDELETEASYNCMARKERSSGIXPROC __glewDeleteAsyncMarkersSGIX = mockgl_DeleteAsyncMarkersSGIX;

int  mockgl_FinishAsyncSGIX(GLuint * markerp)
{
    return getGlMock()->gl_FinishAsyncSGIX(markerp);
}
PFNGLFINISHASYNCSGIXPROC __glewFinishAsyncSGIX = mockgl_FinishAsyncSGIX;

unsigned int  mockgl_GenAsyncMarkersSGIX(GLsizei range)
{
    return getGlMock()->gl_GenAsyncMarkersSGIX(range);
}
PFNGLGENASYNCMARKERSSGIXPROC __glewGenAsyncMarkersSGIX = mockgl_GenAsyncMarkersSGIX;

unsigned char  mockgl_IsAsyncMarkerSGIX(GLuint marker)
{
    return getGlMock()->gl_IsAsyncMarkerSGIX(marker);
}
PFNGLISASYNCMARKERSGIXPROC __glewIsAsyncMarkerSGIX = mockgl_IsAsyncMarkerSGIX;

int  mockgl_PollAsyncSGIX(GLuint * markerp)
{
    return getGlMock()->gl_PollAsyncSGIX(markerp);
}
PFNGLPOLLASYNCSGIXPROC __glewPollAsyncSGIX = mockgl_PollAsyncSGIX;

void  mockgl_FlushRasterSGIX()
{
    return getGlMock()->gl_FlushRasterSGIX();
}
PFNGLFLUSHRASTERSGIXPROC __glewFlushRasterSGIX = mockgl_FlushRasterSGIX;

void  mockgl_TextureFogSGIX(GLenum pname)
{
    return getGlMock()->gl_TextureFogSGIX(pname);
}
PFNGLTEXTUREFOGSGIXPROC __glewTextureFogSGIX = mockgl_TextureFogSGIX;

void  mockgl_FragmentColorMaterialSGIX(GLenum face, GLenum mode)
{
    return getGlMock()->gl_FragmentColorMaterialSGIX(face, mode);
}
PFNGLFRAGMENTCOLORMATERIALSGIXPROC __glewFragmentColorMaterialSGIX = mockgl_FragmentColorMaterialSGIX;

void  mockgl_FragmentLightModelfSGIX(GLenum pname, GLfloat param)
{
    return getGlMock()->gl_FragmentLightModelfSGIX(pname, param);
}
PFNGLFRAGMENTLIGHTMODELFSGIXPROC __glewFragmentLightModelfSGIX = mockgl_FragmentLightModelfSGIX;

void  mockgl_FragmentLightModelfvSGIX(GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_FragmentLightModelfvSGIX(pname, params);
}
PFNGLFRAGMENTLIGHTMODELFVSGIXPROC __glewFragmentLightModelfvSGIX = mockgl_FragmentLightModelfvSGIX;

void  mockgl_FragmentLightModeliSGIX(GLenum pname, GLint param)
{
    return getGlMock()->gl_FragmentLightModeliSGIX(pname, param);
}
PFNGLFRAGMENTLIGHTMODELISGIXPROC __glewFragmentLightModeliSGIX = mockgl_FragmentLightModeliSGIX;

void  mockgl_FragmentLightModelivSGIX(GLenum pname, GLint * params)
{
    return getGlMock()->gl_FragmentLightModelivSGIX(pname, params);
}
PFNGLFRAGMENTLIGHTMODELIVSGIXPROC __glewFragmentLightModelivSGIX = mockgl_FragmentLightModelivSGIX;

void  mockgl_FragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param)
{
    return getGlMock()->gl_FragmentLightfSGIX(light, pname, param);
}
PFNGLFRAGMENTLIGHTFSGIXPROC __glewFragmentLightfSGIX = mockgl_FragmentLightfSGIX;

void  mockgl_FragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_FragmentLightfvSGIX(light, pname, params);
}
PFNGLFRAGMENTLIGHTFVSGIXPROC __glewFragmentLightfvSGIX = mockgl_FragmentLightfvSGIX;

void  mockgl_FragmentLightiSGIX(GLenum light, GLenum pname, GLint param)
{
    return getGlMock()->gl_FragmentLightiSGIX(light, pname, param);
}
PFNGLFRAGMENTLIGHTISGIXPROC __glewFragmentLightiSGIX = mockgl_FragmentLightiSGIX;

void  mockgl_FragmentLightivSGIX(GLenum light, GLenum pname, GLint * params)
{
    return getGlMock()->gl_FragmentLightivSGIX(light, pname, params);
}
PFNGLFRAGMENTLIGHTIVSGIXPROC __glewFragmentLightivSGIX = mockgl_FragmentLightivSGIX;

void  mockgl_FragmentMaterialfSGIX(GLenum face, GLenum pname, const GLfloat param)
{
    return getGlMock()->gl_FragmentMaterialfSGIX(face, pname, param);
}
PFNGLFRAGMENTMATERIALFSGIXPROC __glewFragmentMaterialfSGIX = mockgl_FragmentMaterialfSGIX;

void  mockgl_FragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_FragmentMaterialfvSGIX(face, pname, params);
}
PFNGLFRAGMENTMATERIALFVSGIXPROC __glewFragmentMaterialfvSGIX = mockgl_FragmentMaterialfvSGIX;

void  mockgl_FragmentMaterialiSGIX(GLenum face, GLenum pname, const GLint param)
{
    return getGlMock()->gl_FragmentMaterialiSGIX(face, pname, param);
}
PFNGLFRAGMENTMATERIALISGIXPROC __glewFragmentMaterialiSGIX = mockgl_FragmentMaterialiSGIX;

void  mockgl_FragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_FragmentMaterialivSGIX(face, pname, params);
}
PFNGLFRAGMENTMATERIALIVSGIXPROC __glewFragmentMaterialivSGIX = mockgl_FragmentMaterialivSGIX;

void  mockgl_GetFragmentLightfvSGIX(GLenum light, GLenum value, GLfloat * data)
{
    return getGlMock()->gl_GetFragmentLightfvSGIX(light, value, data);
}
PFNGLGETFRAGMENTLIGHTFVSGIXPROC __glewGetFragmentLightfvSGIX = mockgl_GetFragmentLightfvSGIX;

void  mockgl_GetFragmentLightivSGIX(GLenum light, GLenum value, GLint * data)
{
    return getGlMock()->gl_GetFragmentLightivSGIX(light, value, data);
}
PFNGLGETFRAGMENTLIGHTIVSGIXPROC __glewGetFragmentLightivSGIX = mockgl_GetFragmentLightivSGIX;

void  mockgl_GetFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat * data)
{
    return getGlMock()->gl_GetFragmentMaterialfvSGIX(face, pname, data);
}
PFNGLGETFRAGMENTMATERIALFVSGIXPROC __glewGetFragmentMaterialfvSGIX = mockgl_GetFragmentMaterialfvSGIX;

void  mockgl_GetFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint * data)
{
    return getGlMock()->gl_GetFragmentMaterialivSGIX(face, pname, data);
}
PFNGLGETFRAGMENTMATERIALIVSGIXPROC __glewGetFragmentMaterialivSGIX = mockgl_GetFragmentMaterialivSGIX;

void  mockgl_FrameZoomSGIX(GLint factor)
{
    return getGlMock()->gl_FrameZoomSGIX(factor);
}
PFNGLFRAMEZOOMSGIXPROC __glewFrameZoomSGIX = mockgl_FrameZoomSGIX;

void  mockgl_PixelTexGenSGIX(GLenum mode)
{
    return getGlMock()->gl_PixelTexGenSGIX(mode);
}
PFNGLPIXELTEXGENSGIXPROC __glewPixelTexGenSGIX = mockgl_PixelTexGenSGIX;

void  mockgl_ReferencePlaneSGIX(const GLdouble * equation)
{
    return getGlMock()->gl_ReferencePlaneSGIX(equation);
}
PFNGLREFERENCEPLANESGIXPROC __glewReferencePlaneSGIX = mockgl_ReferencePlaneSGIX;

void  mockgl_SpriteParameterfSGIX(GLenum pname, GLfloat param)
{
    return getGlMock()->gl_SpriteParameterfSGIX(pname, param);
}
PFNGLSPRITEPARAMETERFSGIXPROC __glewSpriteParameterfSGIX = mockgl_SpriteParameterfSGIX;

void  mockgl_SpriteParameterfvSGIX(GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_SpriteParameterfvSGIX(pname, params);
}
PFNGLSPRITEPARAMETERFVSGIXPROC __glewSpriteParameterfvSGIX = mockgl_SpriteParameterfvSGIX;

void  mockgl_SpriteParameteriSGIX(GLenum pname, GLint param)
{
    return getGlMock()->gl_SpriteParameteriSGIX(pname, param);
}
PFNGLSPRITEPARAMETERISGIXPROC __glewSpriteParameteriSGIX = mockgl_SpriteParameteriSGIX;

void  mockgl_SpriteParameterivSGIX(GLenum pname, GLint * params)
{
    return getGlMock()->gl_SpriteParameterivSGIX(pname, params);
}
PFNGLSPRITEPARAMETERIVSGIXPROC __glewSpriteParameterivSGIX = mockgl_SpriteParameterivSGIX;

void  mockgl_TagSampleBufferSGIX()
{
    return getGlMock()->gl_TagSampleBufferSGIX();
}
PFNGLTAGSAMPLEBUFFERSGIXPROC __glewTagSampleBufferSGIX = mockgl_TagSampleBufferSGIX;

void  mockgl_ColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat * params)
{
    return getGlMock()->gl_ColorTableParameterfvSGI(target, pname, params);
}
PFNGLCOLORTABLEPARAMETERFVSGIPROC __glewColorTableParameterfvSGI = mockgl_ColorTableParameterfvSGI;

void  mockgl_ColorTableParameterivSGI(GLenum target, GLenum pname, const GLint * params)
{
    return getGlMock()->gl_ColorTableParameterivSGI(target, pname, params);
}
PFNGLCOLORTABLEPARAMETERIVSGIPROC __glewColorTableParameterivSGI = mockgl_ColorTableParameterivSGI;

void  mockgl_ColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return getGlMock()->gl_ColorTableSGI(target, internalformat, width, format, type, table);
}
PFNGLCOLORTABLESGIPROC __glewColorTableSGI = mockgl_ColorTableSGI;

void  mockgl_CopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return getGlMock()->gl_CopyColorTableSGI(target, internalformat, x, y, width);
}
PFNGLCOPYCOLORTABLESGIPROC __glewCopyColorTableSGI = mockgl_CopyColorTableSGI;

void  mockgl_GetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat * params)
{
    return getGlMock()->gl_GetColorTableParameterfvSGI(target, pname, params);
}
PFNGLGETCOLORTABLEPARAMETERFVSGIPROC __glewGetColorTableParameterfvSGI = mockgl_GetColorTableParameterfvSGI;

void  mockgl_GetColorTableParameterivSGI(GLenum target, GLenum pname, GLint * params)
{
    return getGlMock()->gl_GetColorTableParameterivSGI(target, pname, params);
}
PFNGLGETCOLORTABLEPARAMETERIVSGIPROC __glewGetColorTableParameterivSGI = mockgl_GetColorTableParameterivSGI;

void  mockgl_GetColorTableSGI(GLenum target, GLenum format, GLenum type, void * table)
{
    return getGlMock()->gl_GetColorTableSGI(target, format, type, table);
}
PFNGLGETCOLORTABLESGIPROC __glewGetColorTableSGI = mockgl_GetColorTableSGI;

void  mockgl_FinishTextureSUNX()
{
    return getGlMock()->gl_FinishTextureSUNX();
}
PFNGLFINISHTEXTURESUNXPROC __glewFinishTextureSUNX = mockgl_FinishTextureSUNX;

void  mockgl_GlobalAlphaFactorbSUN(GLbyte factor)
{
    return getGlMock()->gl_GlobalAlphaFactorbSUN(factor);
}
PFNGLGLOBALALPHAFACTORBSUNPROC __glewGlobalAlphaFactorbSUN = mockgl_GlobalAlphaFactorbSUN;

void  mockgl_GlobalAlphaFactordSUN(GLdouble factor)
{
    return getGlMock()->gl_GlobalAlphaFactordSUN(factor);
}
PFNGLGLOBALALPHAFACTORDSUNPROC __glewGlobalAlphaFactordSUN = mockgl_GlobalAlphaFactordSUN;

void  mockgl_GlobalAlphaFactorfSUN(GLfloat factor)
{
    return getGlMock()->gl_GlobalAlphaFactorfSUN(factor);
}
PFNGLGLOBALALPHAFACTORFSUNPROC __glewGlobalAlphaFactorfSUN = mockgl_GlobalAlphaFactorfSUN;

void  mockgl_GlobalAlphaFactoriSUN(GLint factor)
{
    return getGlMock()->gl_GlobalAlphaFactoriSUN(factor);
}
PFNGLGLOBALALPHAFACTORISUNPROC __glewGlobalAlphaFactoriSUN = mockgl_GlobalAlphaFactoriSUN;

void  mockgl_GlobalAlphaFactorsSUN(GLshort factor)
{
    return getGlMock()->gl_GlobalAlphaFactorsSUN(factor);
}
PFNGLGLOBALALPHAFACTORSSUNPROC __glewGlobalAlphaFactorsSUN = mockgl_GlobalAlphaFactorsSUN;

void  mockgl_GlobalAlphaFactorubSUN(GLubyte factor)
{
    return getGlMock()->gl_GlobalAlphaFactorubSUN(factor);
}
PFNGLGLOBALALPHAFACTORUBSUNPROC __glewGlobalAlphaFactorubSUN = mockgl_GlobalAlphaFactorubSUN;

void  mockgl_GlobalAlphaFactoruiSUN(GLuint factor)
{
    return getGlMock()->gl_GlobalAlphaFactoruiSUN(factor);
}
PFNGLGLOBALALPHAFACTORUISUNPROC __glewGlobalAlphaFactoruiSUN = mockgl_GlobalAlphaFactoruiSUN;

void  mockgl_GlobalAlphaFactorusSUN(GLushort factor)
{
    return getGlMock()->gl_GlobalAlphaFactorusSUN(factor);
}
PFNGLGLOBALALPHAFACTORUSSUNPROC __glewGlobalAlphaFactorusSUN = mockgl_GlobalAlphaFactorusSUN;

void  mockgl_ReadVideoPixelsSUN(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels)
{
    return getGlMock()->gl_ReadVideoPixelsSUN(x, y, width, height, format, type, pixels);
}
PFNGLREADVIDEOPIXELSSUNPROC __glewReadVideoPixelsSUN = mockgl_ReadVideoPixelsSUN;

void  mockgl_ReplacementCodePointerSUN(GLenum type, GLsizei stride, const void * pointer)
{
    return getGlMock()->gl_ReplacementCodePointerSUN(type, stride, pointer);
}
PFNGLREPLACEMENTCODEPOINTERSUNPROC __glewReplacementCodePointerSUN = mockgl_ReplacementCodePointerSUN;

void  mockgl_ReplacementCodeubSUN(GLubyte code)
{
    return getGlMock()->gl_ReplacementCodeubSUN(code);
}
PFNGLREPLACEMENTCODEUBSUNPROC __glewReplacementCodeubSUN = mockgl_ReplacementCodeubSUN;

void  mockgl_ReplacementCodeubvSUN(const GLubyte * code)
{
    return getGlMock()->gl_ReplacementCodeubvSUN(code);
}
PFNGLREPLACEMENTCODEUBVSUNPROC __glewReplacementCodeubvSUN = mockgl_ReplacementCodeubvSUN;

void  mockgl_ReplacementCodeuiSUN(GLuint code)
{
    return getGlMock()->gl_ReplacementCodeuiSUN(code);
}
PFNGLREPLACEMENTCODEUISUNPROC __glewReplacementCodeuiSUN = mockgl_ReplacementCodeuiSUN;

void  mockgl_ReplacementCodeuivSUN(const GLuint * code)
{
    return getGlMock()->gl_ReplacementCodeuivSUN(code);
}
PFNGLREPLACEMENTCODEUIVSUNPROC __glewReplacementCodeuivSUN = mockgl_ReplacementCodeuivSUN;

void  mockgl_ReplacementCodeusSUN(GLushort code)
{
    return getGlMock()->gl_ReplacementCodeusSUN(code);
}
PFNGLREPLACEMENTCODEUSSUNPROC __glewReplacementCodeusSUN = mockgl_ReplacementCodeusSUN;

void  mockgl_ReplacementCodeusvSUN(const GLushort * code)
{
    return getGlMock()->gl_ReplacementCodeusvSUN(code);
}
PFNGLREPLACEMENTCODEUSVSUNPROC __glewReplacementCodeusvSUN = mockgl_ReplacementCodeusvSUN;

void  mockgl_Color3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_Color3fVertex3fSUN(r, g, b, x, y, z);
}
PFNGLCOLOR3FVERTEX3FSUNPROC __glewColor3fVertex3fSUN = mockgl_Color3fVertex3fSUN;

void  mockgl_Color3fVertex3fvSUN(const GLfloat * c, const GLfloat * v)
{
    return getGlMock()->gl_Color3fVertex3fvSUN(c, v);
}
PFNGLCOLOR3FVERTEX3FVSUNPROC __glewColor3fVertex3fvSUN = mockgl_Color3fVertex3fvSUN;

void  mockgl_Color4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_Color4fNormal3fVertex3fSUN(r, g, b, a, nx, ny, nz, x, y, z);
}
PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC __glewColor4fNormal3fVertex3fSUN = mockgl_Color4fNormal3fVertex3fSUN;

void  mockgl_Color4fNormal3fVertex3fvSUN(const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return getGlMock()->gl_Color4fNormal3fVertex3fvSUN(c, n, v);
}
PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC __glewColor4fNormal3fVertex3fvSUN = mockgl_Color4fNormal3fVertex3fvSUN;

void  mockgl_Color4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y)
{
    return getGlMock()->gl_Color4ubVertex2fSUN(r, g, b, a, x, y);
}
PFNGLCOLOR4UBVERTEX2FSUNPROC __glewColor4ubVertex2fSUN = mockgl_Color4ubVertex2fSUN;

void  mockgl_Color4ubVertex2fvSUN(const GLubyte * c, const GLfloat * v)
{
    return getGlMock()->gl_Color4ubVertex2fvSUN(c, v);
}
PFNGLCOLOR4UBVERTEX2FVSUNPROC __glewColor4ubVertex2fvSUN = mockgl_Color4ubVertex2fvSUN;

void  mockgl_Color4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_Color4ubVertex3fSUN(r, g, b, a, x, y, z);
}
PFNGLCOLOR4UBVERTEX3FSUNPROC __glewColor4ubVertex3fSUN = mockgl_Color4ubVertex3fSUN;

void  mockgl_Color4ubVertex3fvSUN(const GLubyte * c, const GLfloat * v)
{
    return getGlMock()->gl_Color4ubVertex3fvSUN(c, v);
}
PFNGLCOLOR4UBVERTEX3FVSUNPROC __glewColor4ubVertex3fvSUN = mockgl_Color4ubVertex3fvSUN;

void  mockgl_Normal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_Normal3fVertex3fSUN(nx, ny, nz, x, y, z);
}
PFNGLNORMAL3FVERTEX3FSUNPROC __glewNormal3fVertex3fSUN = mockgl_Normal3fVertex3fSUN;

void  mockgl_Normal3fVertex3fvSUN(const GLfloat * n, const GLfloat * v)
{
    return getGlMock()->gl_Normal3fVertex3fvSUN(n, v);
}
PFNGLNORMAL3FVERTEX3FVSUNPROC __glewNormal3fVertex3fvSUN = mockgl_Normal3fVertex3fvSUN;

void  mockgl_ReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_ReplacementCodeuiColor3fVertex3fSUN(rc, r, g, b, x, y, z);
}
PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC __glewReplacementCodeuiColor3fVertex3fSUN = mockgl_ReplacementCodeuiColor3fVertex3fSUN;

void  mockgl_ReplacementCodeuiColor3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * v)
{
    return getGlMock()->gl_ReplacementCodeuiColor3fVertex3fvSUN(rc, c, v);
}
PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC __glewReplacementCodeuiColor3fVertex3fvSUN = mockgl_ReplacementCodeuiColor3fVertex3fvSUN;

void  mockgl_ReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return getGlMock()->gl_ReplacementCodeuiColor4fNormal3fVertex3fvSUN(rc, c, n, v);
}
PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC __glewReplacementCodeuiColor4fNormal3fVertex3fvSUN = mockgl_ReplacementCodeuiColor4fNormal3fVertex3fvSUN;

void  mockgl_ReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_ReplacementCodeuiColor4ubVertex3fSUN(rc, r, g, b, a, x, y, z);
}
PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC __glewReplacementCodeuiColor4ubVertex3fSUN = mockgl_ReplacementCodeuiColor4ubVertex3fSUN;

void  mockgl_ReplacementCodeuiColor4ubVertex3fvSUN(const GLuint * rc, const GLubyte * c, const GLfloat * v)
{
    return getGlMock()->gl_ReplacementCodeuiColor4ubVertex3fvSUN(rc, c, v);
}
PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC __glewReplacementCodeuiColor4ubVertex3fvSUN = mockgl_ReplacementCodeuiColor4ubVertex3fvSUN;

void  mockgl_ReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_ReplacementCodeuiNormal3fVertex3fSUN(rc, nx, ny, nz, x, y, z);
}
PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC __glewReplacementCodeuiNormal3fVertex3fSUN = mockgl_ReplacementCodeuiNormal3fVertex3fSUN;

void  mockgl_ReplacementCodeuiNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * n, const GLfloat * v)
{
    return getGlMock()->gl_ReplacementCodeuiNormal3fVertex3fvSUN(rc, n, v);
}
PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC __glewReplacementCodeuiNormal3fVertex3fvSUN = mockgl_ReplacementCodeuiNormal3fVertex3fvSUN;

void  mockgl_ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return getGlMock()->gl_ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(rc, tc, c, n, v);
}
PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC __glewReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = mockgl_ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN;

void  mockgl_ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(rc, s, t, nx, ny, nz, x, y, z);
}
PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC __glewReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = mockgl_ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN;

void  mockgl_ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return getGlMock()->gl_ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(rc, tc, n, v);
}
PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC __glewReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = mockgl_ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN;

void  mockgl_ReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_ReplacementCodeuiTexCoord2fVertex3fSUN(rc, s, t, x, y, z);
}
PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC __glewReplacementCodeuiTexCoord2fVertex3fSUN = mockgl_ReplacementCodeuiTexCoord2fVertex3fSUN;

void  mockgl_ReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * v)
{
    return getGlMock()->gl_ReplacementCodeuiTexCoord2fVertex3fvSUN(rc, tc, v);
}
PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC __glewReplacementCodeuiTexCoord2fVertex3fvSUN = mockgl_ReplacementCodeuiTexCoord2fVertex3fvSUN;

void  mockgl_ReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_ReplacementCodeuiVertex3fSUN(rc, x, y, z);
}
PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC __glewReplacementCodeuiVertex3fSUN = mockgl_ReplacementCodeuiVertex3fSUN;

void  mockgl_ReplacementCodeuiVertex3fvSUN(const GLuint * rc, const GLfloat * v)
{
    return getGlMock()->gl_ReplacementCodeuiVertex3fvSUN(rc, v);
}
PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC __glewReplacementCodeuiVertex3fvSUN = mockgl_ReplacementCodeuiVertex3fvSUN;

void  mockgl_TexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_TexCoord2fColor3fVertex3fSUN(s, t, r, g, b, x, y, z);
}
PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC __glewTexCoord2fColor3fVertex3fSUN = mockgl_TexCoord2fColor3fVertex3fSUN;

void  mockgl_TexCoord2fColor3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * v)
{
    return getGlMock()->gl_TexCoord2fColor3fVertex3fvSUN(tc, c, v);
}
PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC __glewTexCoord2fColor3fVertex3fvSUN = mockgl_TexCoord2fColor3fVertex3fvSUN;

void  mockgl_TexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return getGlMock()->gl_TexCoord2fColor4fNormal3fVertex3fvSUN(tc, c, n, v);
}
PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC __glewTexCoord2fColor4fNormal3fVertex3fvSUN = mockgl_TexCoord2fColor4fNormal3fVertex3fvSUN;

void  mockgl_TexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_TexCoord2fColor4ubVertex3fSUN(s, t, r, g, b, a, x, y, z);
}
PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC __glewTexCoord2fColor4ubVertex3fSUN = mockgl_TexCoord2fColor4ubVertex3fSUN;

void  mockgl_TexCoord2fColor4ubVertex3fvSUN(const GLfloat * tc, const GLubyte * c, const GLfloat * v)
{
    return getGlMock()->gl_TexCoord2fColor4ubVertex3fvSUN(tc, c, v);
}
PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC __glewTexCoord2fColor4ubVertex3fvSUN = mockgl_TexCoord2fColor4ubVertex3fvSUN;

void  mockgl_TexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_TexCoord2fNormal3fVertex3fSUN(s, t, nx, ny, nz, x, y, z);
}
PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC __glewTexCoord2fNormal3fVertex3fSUN = mockgl_TexCoord2fNormal3fVertex3fSUN;

void  mockgl_TexCoord2fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return getGlMock()->gl_TexCoord2fNormal3fVertex3fvSUN(tc, n, v);
}
PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC __glewTexCoord2fNormal3fVertex3fvSUN = mockgl_TexCoord2fNormal3fVertex3fvSUN;

void  mockgl_TexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return getGlMock()->gl_TexCoord2fVertex3fSUN(s, t, x, y, z);
}
PFNGLTEXCOORD2FVERTEX3FSUNPROC __glewTexCoord2fVertex3fSUN = mockgl_TexCoord2fVertex3fSUN;

void  mockgl_TexCoord2fVertex3fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return getGlMock()->gl_TexCoord2fVertex3fvSUN(tc, v);
}
PFNGLTEXCOORD2FVERTEX3FVSUNPROC __glewTexCoord2fVertex3fvSUN = mockgl_TexCoord2fVertex3fvSUN;

void  mockgl_TexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return getGlMock()->gl_TexCoord4fColor4fNormal3fVertex4fvSUN(tc, c, n, v);
}
PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC __glewTexCoord4fColor4fNormal3fVertex4fvSUN = mockgl_TexCoord4fColor4fNormal3fVertex4fvSUN;

void  mockgl_TexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return getGlMock()->gl_TexCoord4fVertex4fSUN(s, t, p, q, x, y, z, w);
}
PFNGLTEXCOORD4FVERTEX4FSUNPROC __glewTexCoord4fVertex4fSUN = mockgl_TexCoord4fVertex4fSUN;

void  mockgl_TexCoord4fVertex4fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return getGlMock()->gl_TexCoord4fVertex4fvSUN(tc, v);
}
PFNGLTEXCOORD4FVERTEX4FVSUNPROC __glewTexCoord4fVertex4fvSUN = mockgl_TexCoord4fVertex4fvSUN;

void  mockgl_AddSwapHintRectWIN(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return getGlMock()->gl_AddSwapHintRectWIN(x, y, width, height);
}
PFNGLADDSWAPHINTRECTWINPROC __glewAddSwapHintRectWIN = mockgl_AddSwapHintRectWIN;

GLboolean glewIsSupported(const char * name)
{
    return getGlMock()->glew_IsSupported(name);
}
GLboolean glewGetExtension(const char * name)
{
    return getGlMock()->glew_GetExtension(name);
}
const GLubyte * glewGetErrorString(GLenum error)
{
    return getGlMock()->glew_GetErrorString(error);
}
const GLubyte * glewGetString(GLenum name)
{
    return getGlMock()->glew_GetString(name);
}
