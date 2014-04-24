Mock for Opengl functions. It uses GoogleMock for mocking opengl.

Build:<\br>
    mkdir build <\br>
    cd build <\br>
    cmake ../ <\br>
    make

Usage:
    #include "glmock.hpp" <\br>
    TEST(ShaderLoaderTest, load_shader_from_file) <\br>
    {</br>
        GlMock mock;</br>
        const GLuint vertextShaderId = 1;</br>
        EXPECT_CALL(mock, gl_CreateShader(GL_VERTEX_SHADER)).WillOnce(Return(vertexShaderId));</br>
   }
