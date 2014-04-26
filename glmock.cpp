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
