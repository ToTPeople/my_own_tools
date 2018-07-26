#ifndef mtmv_MTMVTrack_h
#define mtmv_MTMVTrack_h

#include "module/media/MTITrack.h"
#include "module/media/MTMVDefine.h"

class MTMediaCodec;

namespace media
{

class GLES20Shader;
class Texture2D;
class VideoFrame;
class AudioFrame;

class MTMVTrack : public MTITrack
{
public:
    static MTMVTrack *CreateNormalTrack(const std::string &source, int64_t startPos, int64_t duration, int64_t fileStartTime);
    static MTMVTrack *CreateVideoTrack(const std::string &source, int64_t startPos, int64_t duration, int64_t fileStartTime);
    static MTMVTrack *CreateVideoMaterialTrack(const std::string &source, int64_t startPos, int64_t duration, int64_t fileStartTime);
    static MTMVTrack *CreateMusicTrack(const std::string &source, int64_t startPos, int64_t duration, int64_t fileStartTime);

    /**
     * @brief Destructor
     */
    virtual ~MTMVTrack();

    ///注释详见基类 `MTITrack`
    virtual void cleanup() override;
    virtual void glPrepare(CBaseGraphicsService &graphicService) override;
    virtual bool getAudioFrame(unsigned char *buffer, int &len);
    virtual int getNextFrame(CBaseGraphicsService &graphicService, int64_t reqTime) override;
    virtual void start() override;
    virtual void stop() override;
    virtual void startDecoder() override;
    virtual void stopDecoder() override;
    virtual void cleanMediaCodec() override;
    virtual void releaseMediaCodec() override;
    virtual void tagRecycleResource(CBaseGraphicsService*graphicService) override;
    virtual int doReadPkt(int64_t clock) override;
    virtual int doDecodeVideoFrame(int64_t clock) override;
    virtual int doDecodeAudioFrame() override;
    virtual int readAudio(unsigned char *buffer, int len) override;
    virtual int getAudioLength() override;
    virtual bool hasVideo() override;
    virtual bool hasAudio() override;
    virtual int doAnalysisPeakValueOfVideo(int64_t clock, int64_t *nextClock) override;
    virtual void seekTo(int64_t msec, int seekType, int mode) override;
    virtual void seekToFileStart(int seekType = SEEK_TYPE_SYNC, int mode = SEEK_MODE_NORMAL) override;
    virtual void setSpeed(float speed) override;

    /**
     * 设置 bezier 控制参数
     * @param p1X 控制点P1的X值
     * @param p1Y 控制点P1的Y值
     * @param p2X 控制点P2的X值
     * @param p2Y 控制点P2的Y值
     * @param precision 分割精度
     */
    void setBezierParam(double p1X, double p1Y, double p2X, double p2Y, double precision);

    void switchAudioTrack();
protected:
    /**
     * @brief Constructor
     * @param id
     * @param source
     * @param startPos
     * @param duration
     * @param fileStartTime
     */
    MTMVTrack(int id, const std::string &source, int64_t startPos, int64_t duration, int64_t fileStartTime);

    virtual void setSpeedNoOrig(float speed) override;

private:
    Texture2D *m_pTexture;
//    MTMediaCodec *m_pCodec;

    ///视频帧
    VideoFrame* m_pVideoFrame;

    ///音频帧
    AudioFrame* m_pAudioFrame;
};

} /* namespace media */

#endif
