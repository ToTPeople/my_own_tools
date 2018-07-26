#ifndef RENDERER_TEXTURESHADER_H
#define RENDERER_TEXTURESHADER_H

#include <string>

#include "base/MTRef.h"
#include "math/Mat4.h"
#include "platform/MTGL.h"

NS_MEDIA_BEGIN

/**
 * just for GraphicsService
 * draw final texture to final FBO use VBO
 */
class TextureShader : public media::Ref
{
protected:
    GLint			m_programId;
    std::string		m_vertexShaderCode;
    std::string		m_fragmentShaderCode;
    
    GLint		m_positionAttributeHandle;
    GLint		m_texCoordAttributeHandle;
    GLint		m_samplerHandle;
    GLint		m_matrixHandle;
    GLint		m_useColorHandle;
    GLint		m_textColorHandle;
    GLint		m_alphaHandle;

    Mat4 matrix;
    
    int useColor;
    Vec3 textColor;
    
    const int USE_COLOR;
    const int DONOT_USE_COLOR;
    const int JUDGE_USE_COLOR;

public:
    static TextureShader* create();
    TextureShader();
    virtual ~TextureShader();

    bool link();
    
    // set before setup
    void setMatrix(const Mat4& m);
    
    // set before setup
    void setUseColor(bool use);
    
    // set before setup
    void setTextColor(const Vec3& color);

    void setup(int texName, float alpha = 1) const;
};

NS_MEDIA_END

#endif // !RENDERER_TEXTURESHADER_H
