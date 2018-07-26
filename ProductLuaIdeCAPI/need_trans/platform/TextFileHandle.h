#ifndef __mtmv__TextFileHandle__
#define __mtmv__TextFileHandle__

#include "base/MTMacros.h"
#include "base/MTData.h"
#include "base/Types.h"
#include "platform/FileHandle.h"

NS_MEDIA_BEGIN

class TextFileHandle : public FileHandle {
public:
    static TextFileHandle* create();

    TextFileHandle(){};

    virtual ~TextFileHandle() {};
    
    /** Initializes a texture from a string with dimensions, alignment, font name and font size.
     
     @param text A null terminated string.
     @param fontName The font name.
     @param fontSize The font size.
     @param dimensions The font dimension.
     @param hAlignment The font horizontal text alignment type.
     @param vAlignment The font vertical text alignment type.
     */
    bool initWithString(const char *text,  const std::string &fontName, float fontSize, const Size& dimensions = Size::ZERO, TextHAlignment hAlignment = TextHAlignment::CENTER, TextVAlignment vAlignment = TextVAlignment::TOP);
    
    /** Initializes a texture from a string using a text definition.
     
     @param text A null terminated string.
     @param textDefinition A FontDefinition object contains font attributes.
     */
    bool initWithString(const char *text, const FontDefinition& textDefinition);
    
    /**
     *  Gets string from a file.
     */
    virtual std::string getStringFromFile() const ;
    /**
     *  Creates binary data from a file.
     *  @return A data object.
     */
    virtual MTData getDataFromFile(bool* imageDataOnly = NULL, NS_MEDIA::Size* size = NULL) const ;
    
    virtual std::string getFullPathForFile() const;
    
private:
    std::string text;
    FontDefinition textDefinition;
};

NS_MEDIA_END

#endif /* defined(__mtmv__TextFileHandle__) */
