Mock for Opengl functions. It uses GoogleMock for mocking opengl.

Build:
 mkdir build
 cd build
 cmake ../
 make

Usage:
 #include "glmock.hpp"
 TEST(ShaderLoaderTest, load_shader_from_file)
 {
    GlMock mock;
    const GLuint vertextShaderId = 1;
    EXPECT_CALL(mock, gl_CreateShader(GL_VERTEX_SHADER)).WillOnce(Return(vertexShaderId));
 }
