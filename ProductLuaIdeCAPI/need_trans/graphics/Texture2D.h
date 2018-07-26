#ifndef TEXTURE2D_H
#define TEXTURE2D_H

#include "base/MTRef.h"
#include "base/Types.h"
#include "module/graphics/Image.h"
#include "module/graphics/opengl/Texture.h"

NS_MEDIA_BEGIN

class FileHandle;

class Texture2D : public Texture
{
public:
    static Texture2D *create();
    Texture2D();
public:
    virtual ~Texture2D();

    // load by textureID, that will not release texture
    virtual bool load(int textureID, GLenum format, int w, int h);
    //
    virtual bool load(const unsigned char* fileData, size_t dataLen);
    virtual bool load(const Image *image, const NS_MEDIA::Size &out = NS_MEDIA::Size::ZERO);
    virtual bool load(FileHandle *file);
    
    bool reload();

    bool isLoaded() const;

    void bind() const;

    virtual int getWidth() const;
    virtual int getHeight() const;
    
    void setWidthAndHeight(int pWidth, int pHeight);

    GLuint getTextureID() const;

    static void initMaxTextureSize();
    static GLint getMaxTextureSize();

    virtual GLuint getTexName() const;
    
    void setFileHandle(FileHandle* file);
    FileHandle* getFileHandle();

    void setFileName(const std::string &name);
    const std::string& getFileName() const;
    
protected:
    void unLoad();
    
protected:
    static const int TEXTURE_ID_INVALID = 0;
    
    //Depending on GPU
    static GLint s_maxTextureSize;
    
    int m_nWidth;
    int m_nHeight;
    GLuint m_textureID;
    GLenum m_textureFormat;
    
private:
    std::string m_sFileName;
    FileHandle* m_pFileHandle;

    // do not release texture
    bool m_bNeedRelease;
};

NS_MEDIA_END

#endif // !TEXTURE2D_H
