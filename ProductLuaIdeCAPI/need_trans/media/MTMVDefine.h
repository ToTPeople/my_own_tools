#ifndef MTMVDefine_h
#define MTMVDefine_h

/***
 *   开放公共的头文件
 */
#include "base/MTConfig.h"
#include "base/MTErrNo.h"
#include "module/graphics/BackgroundType.h"
#include "platform/MTStdC.h"

/* /////////////////////////////////////////////////// */
/***
 *   定义功能宏
 */
/** Enable audio service */
#ifndef MT_ENABLE_AUDIO_SERVICE
#if MT_TARGET_PLATFORM == MT_PLATFORM_IOS
#define MT_ENABLE_AUDIO_SERVICE 1   // default is close
#else
#define MT_ENABLE_AUDIO_SERVICE 1   // default is close
#endif
#endif

#define LOAD_IMAGE_ASYNCHRONOUS

#undef MT_ENABLE_AVMOVIE_SERVIC
#if MT_TARGET_PLATFORM == MT_PLATFORM_IOS
//#define MT_ENABLE_AVMOVIE_SERVIC      1
#endif

#if MT_TARGET_PLATFORM == MT_PLATFORM_IOS
#define IMAGE_SAVE_IMPLEMENTATION
#endif

#define MT_NEW_FFMPEG_SAVE_MODE  1
#define MT_MODULE_SOUNDTOUCH_EXCLUDE  1
//#define MT_MODULE_YUV_EXCLUDE  1

#define  SAMPLE_TYPE_LINESIZE   0    /** 音频数据交叉存储 */
#define  SAMPLE_TYPE_PLANAR     1    /** 音频数据平面存储 */

#define  AUDIO_SHIFT_BY_FFMPEG       1
#define  AUDIO_SHIFT_BY_ALGORITHM    2
#define  AUDIO_SHIFT_BY_ALGORITHM2   3
#define  AUDIO_SHIFT_SPEED_STRATEGY  AUDIO_SHIFT_BY_FFMPEG

/* Minimum SDL audio buffer size, in samples. */
#define SDL_AUDIO_MIN_BUFFER_SIZE 512
/* Calculate actual buffer size keeping in mind not cause too frequent audio callbacks */
#define SDL_AUDIO_MAX_CALLBACKS_PER_SEC 30

///启用异步开启解码器模式
#define ASYNC_OPEN_DECODER_MODE 1

///允许同时开的解码器数量
#define DECODER_MAX_AMOUNT_OPEN 5

///启用按帧编号取帧模式
#define FRAME_NUMBER_MODE 1

///当视频宽或高(以最大边为准)大于该阈值时启用硬解码
#define HARDWARE_MODE_ENABLE_THRESHOLD 720

typedef struct AudioParams {
    int freq;
    int channels;
    int64_t channel_layout;
    int fmt;
    int frame_size;
    int bytes_per_sec;
    long mbitRate;
    /** 每个音频格式为fmt格式的sample字节大小 */
    int  mBytesOfPerSample;
} AudioParams;


/* /////////////////////////////////////////////////// */
/***
 *   定义枚举类型
 */
enum TrackType {
    UNKNOW_TRACK,
    NORMAL_TRACK,           // 图片或者视频 没有背景
    VIDEO_TRACK,            // 视频
    MUSIC_TRACK,            // 音乐
    PICTURE_TRACK,          // 图片
    SUBTITLE_TRACK,         // 字幕
    TEXT_TEMPLATE_TRACK,    // 文字模版
    WATERMARK_TRACK,        // 水印
    VIDEO_MATERIAL_TRACK,   // 视频素材

#if MT_USE_VFX                    //VFX特效（魔法涂鸦和Lottie动画）
    VFX_LOTTIE_TRACK = 100,       //Lottie动画
    VFX_MAGIC_TRACK = 101,        //魔法涂鸦包括（粒子和贴图）
    VFX_FRAMEMAGIC_TRACK,
    VFX_PARTICLE_TRACK,
#endif
};

/** 
 * 标识当前 Group 类型, 不参与类型顺序计算
 */
enum GroupType {
    VIDEO_GROUP,         // 视频
    PICTURE_GROUP,       // 图片
    SUBTITLE_GROUP,      // 字幕
    TEXT_TEMPLATE_GROUP, // 文字模版
    MATERIAL_GROUP,      // 视频素材
};

enum TrackZOrder {
    VIDEO_PICTURE_ZORDER = 0,
    VIDEO_MATERIAL_ZORDER = 100000,
    TRANSITION_ZORDER = 200000,
    WATERMARK_ZORDER = 300000,
    TEXT_TEMPLATE_ZORDER = 400000,
    SUBTITLE_ZORDER = 600000,
#if MT_USE_VFX                      //VFX特效（魔法涂鸦和Lottie动画）
    VFX_LOTTIE_ZORDER = 700000,
    VFX_FRAMEMAGIC_ZORDER = 800000,
    VFX_PARTICLE_ZORDER = 1000000,
#endif
};

#define MEDIA_AUDIO_DECODE_FINISHED  -1    // INFO for audio has been saved.
enum media_audio_recorder_status {
    AUDIO_RECORDER_STATUS_FINISHED   = -2,    // 标识 完成数据保存.
    AUDIO_RECORDER_STATUS_DO_NOTHING = -1,    // 标识 保存状态正常，但是此次调用未保存到数据.
    AUDIO_RECORDER_STATUS_NORMAL     = 0,     // 标识 当前保存状态正常 .
};

enum media_video_recorder_status {
    VIDEO_RECORDER_STATUS_PREPARING  = -5,  // 准备中
    VIDEO_RECORDER_STATUS_ERROR  = -4,      // 未知异常
    VIDEO_RECORDER_STATUS_FETCH_NEXT_FRAME_FAILED  = -3,    // 标识 获取下一帧失败.
    VIDEO_RECORDER_STATUS_FINISHED   = -2,    // 标识 完成数据保存.
    VIDEO_RECORDER_STATUS_DO_NOTHING = -1,    // 标识 保存状态正常，但是此次调用未保存到数据.
    VIDEO_RECORDER_STATUS_NORMAL     = 0,     // 标识 当前保存状态正常 .
};

enum media_video_refresh_status {
    VIDEO_REFRESH_STATUS_ABORT               = -4,     // 标识 当前异常退出
    VIDEO_REFRESH_STATUS_ABNORMAL_STATUS     = -3,     // 标识 当前保存状态异常
    VIDEO_REFRESH_STATUS_PREPARING           = -2,     // 标识 当前正在准备中
    VIDEO_REFRESH_STATUS_SEEKING             = -1,     // 标识 当前正在seek操作中
    VIDEO_REFRESH_STATUS_NORMAL              = 0,      // 标识 当前正常刷新
};

#define T_VIDEO_THREAD  (0x01)
#define T_AUDIO_THREAD  (0x02)
#define T_READ_THREAD   (0x04)

extern int64_t gPreGLPrepareThresholdTime;
extern int64_t gPreReadPktThresholdTime;
extern int64_t gPreVideoDecodeThresholdTime;
extern int64_t gSeekSyncThresholdTime;
extern int64_t gVideoPreloadThresholdTime;
#define GLPREPARE_EARLY            (gPreGLPrepareThresholdTime)
#define READ_PKT_EARLY             (gPreReadPktThresholdTime)
#define DECODE_VIDEO_EARLY         (gPreVideoDecodeThresholdTime)
#define MAX_SYNC_REQUEST_OFFSET    (gSeekSyncThresholdTime)
#define MAX_TIME_OF_VIDEO_PRELOAD  (gVideoPreloadThresholdTime)

enum SEEK_MODE {
    SEEK_MODE_NORMAL = 0,   // Mode for seek MediaCodec to pos that want to,
    SEEK_MODE_SMOOTH,       // Mode for seek MediaCodec frame by frame, do final seek to pos when seeking ended.
};

enum SEEK_TYPE {
    SEEK_TYPE_SYNC   = 0,   // 同步模式, seek in sync mode, wait for seek work all done.
    SEEK_TYPE_ASYNC,        // 异步模式, seek in async mode,
};

#if MT_ENABLE_AUDIO_SERVICE
/** MT_NOPTS_VALUE 借鉴 FFmpeg 中 AV_NOPTS_VALUE */
#define MT_NOPTS_VALUE          ((int64_t)UINT64_C(0x8000000000000000))

/**
 *  内部帧结构： MTFrame
 *  描述：描述 IOS 硬件解码得到的帧信息数据，到 ffmpeg 帧数据的转化，
 *       目标为了内部代码同外部的解耦合，该结构只是纯粹作为特定解码模块
 *       到内部ffmpeg 部分的过渡对象使用。
 *  注意事项： 内部对该对象进行复杂操作时，需要注意成员 opaque 的生命周期;
 */
typedef struct MTFrame {
    /**
     * format of the frame, -1 if unknown or unset
     * Values correspond to enum AVPixelFormat for video frames,
     * enum AVSampleFormat for audio)
     */
    int format;
    
    /**
     * Presentation timestamp in time_base units (time when frame should be shown to user).
     */
    int64_t pts;
    
    /**
     * for some private data of the user
     */
    void *opaque;

    /**
     * width and height of the video frame
     */
    int width, height;
} MTFrame;
#endif

#define MAX_STREAM_BUFF_LEN  20480
#define MT_ERROR_MAX_STRING_SIZE 64

#ifndef makeErrorStr
static char errorStr[MT_ERROR_MAX_STRING_SIZE];
#define makeErrorStr(errorCode) av_make_error_string(errorStr, MT_ERROR_MAX_STRING_SIZE, errorCode)
#endif

#endif /* MTMVDefine_h */
