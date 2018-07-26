#ifndef VideoFrame_h
#define VideoFrame_h

#include "core/Frame.h"

NS_MEDIA_BEGIN
class VideoFrame :public Frame {

public:
    VideoFrame();
    ~VideoFrame();
    void updateSize(int width, int height);
    virtual bool assembleFrame();
private:
    int m_nWidth;
    int m_nHeight;
};

NS_MEDIA_END
#endif /* VideoFrame_h */
