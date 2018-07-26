#ifndef IMAGE_H
#define IMAGE_H

#include <stddef.h>
#include <string>

#include "base/MTRef.h"
#include "platform/MTGL.h"
#include "math/Geometry.h"

/**
 * Use libpng or not.
 * If your application don't use 16pbc png format picture, you can undefine this macro to save package size.
 */
#ifndef MT_USE_PNG
#define MT_USE_PNG  1
#endif

/**
 * Use libjpeg or not.
 * If your application don't use 12bpc jpeg format picture, you can undefine this macro to save package size.
 */
#ifndef MT_USE_JPEG
#define MT_USE_JPEG  1
#endif

/**
 * Support TIFF or not.
 * If your application don't use TIFF format picture, you can undefine this macro to save package size.
 */
#ifndef MT_USE_TIFF
#define MT_USE_TIFF  1
#endif

NS_MEDIA_BEGIN

class FileHandle;
class Image : public Ref
{
    enum {
      MAX_WIDTH = 16384, // force a limit somehow
      MAX_HEIGHT = 16384 // force a limit somehow
    };

public:

    enum Format {

      FORMAT_L8, //luminance
      FORMAT_LA8, //luminance-alpha
      FORMAT_R8,
      FORMAT_RG8,
      FORMAT_RGB8,
      FORMAT_RGBA8,
      FORMAT_RGBA4444,
      FORMAT_RGBA5551,
      FORMAT_RF, //float
      FORMAT_RGF,
      FORMAT_RGBF,
      FORMAT_RGBAF,
      FORMAT_RH, //half float
      FORMAT_RGH,
      FORMAT_RGBH,
      FORMAT_RGBAH,
      FORMAT_RGBE9995,
      FORMAT_DXT1, //s3tc bc1
      FORMAT_DXT3, //bc2
      FORMAT_DXT5, //bc3
      FORMAT_RGTC_R,
      FORMAT_RGTC_RG,
      FORMAT_BPTC_RGBA, //btpc bc7
      FORMAT_BPTC_RGBF, //float bc6h
      FORMAT_BPTC_RGBFU, //unsigned float bc6hu
      FORMAT_PVRTC2, //pvrtc
      FORMAT_PVRTC2A,
      FORMAT_PVRTC4,
      FORMAT_PVRTC4A,
      FORMAT_ETC, //etc1
      FORMAT_ETC2_R11, //etc2
      FORMAT_ETC2_R11S, //signed, NOT srgb.
      FORMAT_ETC2_RG11,
      FORMAT_ETC2_RG11S,
      FORMAT_ETC2_RGB8,
      FORMAT_ETC2_RGBA8,
      FORMAT_ETC2_RGB8A1,
      FORMAT_MAX
    };

    virtual ~Image();

    bool initWithFileHandel(const FileHandle *file);
    bool initWithFileData(const unsigned char* fileData, ssize_t dataLen);
    virtual bool initWithImageInfo(int pWidth, int pHeight, GLenum format, bool needMallocPixels = true);

    /**
     *  set image pixels
     *
     *  @param ps   pixels (malloc)
     *  @param copy true: memcpy; fales: pixels = ps; will call free(pixels)
     *
     *  @return true if success
     */
    virtual bool setPixels(void *ps, bool copy = true);
    virtual void* getPixels() const;

    int getWidth() const; ///< Get image width
    int getHeight() const; ///< Get image height

    int getLineSize() const;


    __attribute__((deprecated)) int getComponents() const;

    bool isUpdated() const;
    void setUpdated(bool update);
///------------------------------ new api

    /**
     * Get the current image format.
     */
    GLenum getFormat() const;

    Size size() const;
    
    /**
     * Create a new image of a given size and format. Current image will be lost
     */
    void create(int p_width, int p_height, bool p_use_mipmaps, Format p_format);
//    void create(int p_width, int p_height, bool p_use_mipmaps, Format p_format, const PoolVector<uint8_t> &p_data);

    void create(const char **p_xpm);
    /**
     * returns true when the image is empty (0,0) in size
     */
    bool empty() const;

    /**
     * create an empty image
     */
    Image();


    /**
     * create an empty image of a specific size and format
     */
    Image(int p_width, int p_height, Format p_format, bool p_use_mipmaps = false);
    /**
     * import an image of a specific size and format from a pointer
     */
//    Image(int p_width, int p_height, bool p_mipmaps, Format p_format, const PoolVector<uint8_t> &p_data);

    /**
     * Get Image format pixel info in bytes.
     * Use this method to replace old Image.getComponents()
     *
     * @param p_format Image.Format info
     * @return pixel size in bytes.
     */
    static int get_format_pixel_size(Format p_format);
    static int get_format_pixel_rshift(Format p_format);
    static int get_format_block_size(Format p_format);
    static void get_format_min_pixel_size(Format p_format, int &r_w, int &r_h);

private:

    /*_FORCE_INLINE_ */ void _get_mipmap_offset_and_size(int p_mipmap, int &r_offset, int &r_width, int &r_height) const; //get where the mipmap begins in data

    static int _get_dst_image_size(int p_width, int p_height, Format p_format, int &r_mipmaps, int p_mipmaps = -1);

protected:
    bool mallocPixels(size_t size);
    void freePixels();

    bool initWithTiffData(const unsigned char * data, ssize_t dataLen);
    bool initWithPngData(const unsigned char * data, ssize_t dataLen);
    bool initWithJpgData(const unsigned char *  data, ssize_t dataLen);
    bool isPng(const unsigned char * data, ssize_t dataLen);
    bool isJpg(const unsigned char * data, ssize_t dataLen);
    bool isTiff(const unsigned char * data, ssize_t dataLen);

    void* pixels;
    size_t pSize;
    Format m_format;
    int m_width;
    int m_height;
    bool mipmaps;

    // number of bytes per line
    int lineSize;

    //changed pixels, Texture2D need to reload
    bool updated;
};

NS_MEDIA_END

#endif // !IMAGE_H
