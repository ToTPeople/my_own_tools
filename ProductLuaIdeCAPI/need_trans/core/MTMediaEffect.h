#ifndef MTMediaEffect_h
#define MTMediaEffect_h

#include "base/MTMacros.h"
#include "module/media/MTMVDefine.h"

NS_MEDIA_BEGIN

enum {

};

class ReaderBase;
class VideoFrame;
class AudioFrame;
class MTMediaEffect {
public:
    MTMediaEffect();

    virtual ~MTMediaEffect();

    virtual bool getVideoWithEffect(ReaderBase *reader, VideoFrame *videoFrame, int64_t reqTime) = 0;

    virtual bool getAudioWithEffect(ReaderBase *reader, AudioFrame *audioFrame) = 0;

    virtual void restart() = 0;
};

NS_MEDIA_END
#endif /* MTMediaEffect_h */
