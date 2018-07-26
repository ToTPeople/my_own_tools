#ifndef AudioFrame_h
#define AudioFrame_h

#include "core/Frame.h"

NS_MEDIA_BEGIN
class AudioFrame :public Frame {
public:
    AudioFrame();
    ~AudioFrame();
    virtual void addAudioFrameData(MMTOOLS::FrameData *audioFrameData);
    virtual bool assembleFrame();
};
NS_MEDIA_END

#endif /* AudioFrame_h */
