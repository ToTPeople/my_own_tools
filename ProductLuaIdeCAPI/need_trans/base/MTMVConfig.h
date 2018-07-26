//
//  MTMVConfig.h
//  mtmv
//
//  Created by Javan on 15/9/9.
//  Copyright (c) 2015年 meitu. All rights reserved.
//

#ifndef __mtmv__MTMVConfig__
#define __mtmv__MTMVConfig__

#include <string>

#include "math/Geometry.h"

#ifndef ASSETS_ROOT
#define ASSETS_ROOT           "mtmv_assets.bundle/"
#endif

/* Raw path */
#ifndef LUA_ROOT
#define LUA_ROOT              ASSETS_ROOT"mtmvcore_lua/"
#endif

/* Raw path */
#ifndef RAW_ROOT
#define RAW_ROOT              ASSETS_ROOT"mtmvcore_raw/"
#endif

/* Shader path */
#ifndef SHADER_ROOT
#define SHADER_ROOT           ASSETS_ROOT"mtmvcore_shaders/"
#endif

NS_MEDIA_BEGIN
    
class MTMVConfig {
public:
    static MTMVConfig* getInstance();
    /**
     * releaseConfigResource 释放静态创建的config 空间
     */
    static void releaseConfigResource();
    
    /**
     * 底层库版本号，有改动就对该对应段的版本计数 +1
     */
    static std::string getMTMVCoreVersion();
    
    static void setLogLevel(int level);
    
    int getMVSizeWidth() const;
    int getMVSizeHeight() const;
    
    int getMVShortSide() const;
    
    const NS_MEDIA::Size& getMVSize() const;

    void setMVSize(int width, int height);
    
    const std::string& getMaterialPath() const;
    
    void setMaterialPath(const std::string& path);
    
    bool isVertical() const;
    
    void setUseGlFinish(bool use);
    
    bool getUseGlFinish() const;
    
    /**
     *  获取 & 配置软解码器的 crf 值
     *  取值范围: 18~25, 默认值24
     */
    void setVideoCRF(float crf) { mVideoCRF = crf; }
    float getVideoCRF() { return mVideoCRF; }

    /**
     * 设置视频保存的时候的码率
     *
     * @param bitrate 期望的码率数值
     **/
    void setVideoOutputBitrate(int64_t bitrate);

    /**
     * 获取视频输出的码率数值
     *
     * @return 具体码率数值
     **/
    int64_t getVideoOutputBitrate() const;

    /**
     * Set audio stream output bitrate.
     *
     * @param bitrate bitrate value, 64000(64kbs) 128000(128kbs)
     */
    void setAudioOutputBitrate(int64_t bitrate);

    /**
     * Get audio stream output bitrate. Default audio stream bitrate value is 128000(128kbs)
     * <br>
     * 获取音频流输出的配置码率。
     * <br>
     * 默认底层返回的码率是 128kbs 实际数值 128000。
     *
     * @return audio output stream bitrate.
     */
    int64_t getAudioOutputBitrate();

    /**
     * Set video output frame rate.
     *
     * @param fps video save fps.
     */
    void setVideoOutputFrameRate(int fps);

    /**
     * Get video output frame rate.
     *
     * @return video save fps.
     */
    int getVideoOutputFrameRate();
#if MT_TARGET_PLATFORM == MT_PLATFORM_IOS
    /**
     *  设置 & 获取保存输出大小，如果默认未调用该接口设置输出大小，默认按照初始化时调用
     *  setMVSize 接口设置的大小保存视频尺寸。目前只针对iOS 平台开放该接口。
     *  @param width 输出媒体视频的宽
     *  @param height 输出媒体视频的高
     *  备注: 如果 MVSize 大小的尺寸跟本接口尺寸不成比例，则会进行填充拉伸。
     *       调用 stop 接口后，之前设置的值会被清空; 每次保存都要重新调用该接口;
     *       该接口的调用必须位于调用 Stop() 之后 以及 Prepare() 之前;
     */
    void setRecorderOutputSize(float width, float height);
    const NS_MEDIA::Size& getRecorderOutputSize() const { return mOutputSizeOfRecorder; }
#endif

private:
    MTMVConfig();
    
    std::string materialPath;

    NS_MEDIA::Size mvSize;
#if MT_TARGET_PLATFORM == MT_PLATFORM_IOS
    /**
     *  iOS 硬件解码器可以根据传入的保存输出大小进行再次缩放拉伸
     *  如果设置额外设置保存输出大小，则使用该变量传递给硬件编解码器
     */
    NS_MEDIA::Size mOutputSizeOfRecorder;
#endif
    
    static MTMVConfig* mSharedConfig;
    
    // if draw use multi recycle-fbo effect will be wrong in some devices
    bool useGlFinish;
    
    /**
     *  视频编码的 CRF 值，取值范围: 18~25, 默认值24
     */
    float mVideoCRF;
    /**
     *  保存视频输出码率大小
     */
    int64_t mVideoOutputBitrate;

    /**
     * 输出音频的码率大小
     */
    int64_t mAudioOutputBitrate;

    /**
     * Video output frame rate.
     */
    int mVideoOutputFrameRate;
};

NS_MEDIA_END

#endif /* defined(__mtmv__MTMVConfig__) */
