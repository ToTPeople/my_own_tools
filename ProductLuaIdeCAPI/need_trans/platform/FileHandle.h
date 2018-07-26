#ifndef __MTMVCORE__FILEHANDLE__
#define __MTMVCORE__FILEHANDLE__

#include <string>
#include <functional>

#include "base/MTData.h"
#include "base/MTRef.h"
#include "base/Types.h"
#include "platform/Files.h"

NS_MEDIA_BEGIN

class FileHandle : public media::Ref {
public:
    FileHandle(const std::string &filename);
    FileHandle(const std::string &filename, FileType type);
    virtual ~FileHandle() {};
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
    
    std::string getPathForFile() const;
    
    void setPreprocessFileDataFunc(const std::function<void(MTData &)> &func);

protected:
    FileHandle(){};

protected:
    std::string mFile;
    FileType mType;
    
    std::function<void(MTData&)> mPreprocessFunc;
};

NS_MEDIA_END

#endif /* defined(__MTMVCORE__FILEHANDLE__) */
