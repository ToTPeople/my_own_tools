#ifndef TEXTURECACHE_H
#define TEXTURECACHE_H

//#include "base/Singleton.h"
#include <string>
#include <unordered_map>
#include "base/MTMacros.h"

NS_MEDIA_BEGIN

class Texture2D;
class FileHandle;

class TextureCache// : public Singleton<TextureCache>
{
public:
//    TextureCache();
//    ~TextureCache();

    static const int MAX_CACHE = 3;

    static void setCurrentCache(int index);
    
    // if in cache, return texture; else return NULL
    static Texture2D* findTexture(const FileHandle *file);
    static Texture2D* findTexture(const std::string &fileName);
    
    // texture->setFileHandle(file) and put into cache
    static void addTextureToCache(FileHandle *file, Texture2D* texture);
    static void addTextureToCache(const std::string &fileName,Texture2D* texture);

//    static Texture2D* addTexture(const std::string &fileName);
    static Texture2D* addTexture(FileHandle *file);
    static void releaseTexture(const std::string &fileName);
    static void releaseTexture(const FileHandle *file);
    static void releaseTexture(Texture2D* texture);

//    static bool reloadTexture(const std::string& fileName);
    static bool reloadTexture(Texture2D* texture);
    static void reloadAllTextures();

    static void removeAllTextures(int cacheIndex = s_nCurrentIndex);

    /**
     * @brief Removes unused textures.
     * Textures that have a retain count of 1 will be deleted.
     * It is convenient to call this method after when starting a new TimeLine.
     */
    static void removeUnusedTextures();

    static void dump();

private:
    static std::unordered_map<std::string, Texture2D*> s_textures[MAX_CACHE];
    static int s_nCurrentIndex;
};

NS_MEDIA_END

#endif // !TEXTURECACHE_H
