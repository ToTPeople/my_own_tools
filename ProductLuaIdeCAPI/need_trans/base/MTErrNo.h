#ifndef _MTERRNO_H_
#define _MTERRNO_H_

#include "base/MTMacros.h"

NS_MEDIA_BEGIN

#define MT_TRUE     true
#define MT_FALSE    false

#define MT_OK       0
#define MT_ERROR   -1

#define EMVCORE_FAILED             -1
#define EMVCORE_OUT_OF_MEMORY      -2
#define EMVCORE_INVALID_STATE      -3
#define EMVCORE_NULL_IS_PTR        -4

// add by Javan 2014.12.1
#define EMVCORE_STREAM_NOT_FOUND  	-20000  // 没有找到媒体流数据，Can not find any AVStream in meida stream.

enum MEDIA_DECODE_VIDEO_STATE {
    MEDIA_DECODE_VIDEO_END     = -2,
    MEDIA_DECODE_VIDEO_ERROR   = -1,
    MEDIA_DECODE_VIDEO_NOTHING = 0,
    MEDIA_DECODE_VIDEO_RETRY   = 1,
    MEDIA_DECODE_VIDEO_SUCCESS = 2,
};

enum MEDIA_READ_PKT_STATE {
    MEDIA_READ_PKT_END      = -2,
    MEDIA_READ_PKT_NOTHING  = -1,
    MEDIA_READ_PKT_RETRY    = 0,
    MEDIA_READ_PKT_SUCCESS  = 1,
};

enum MEDIA_DECODE_AUDIO_STATE {
    MEDIA_DECODE_AUDIO_END   = -2,
    MEDIA_DECODE_AUDIO_ERROR   = -1,
    MEDIA_DECODE_AUDIO_NOTHING = 0,
    MEDIA_DECODE_AUDIO_SUCCESS = 1,
};

NS_MEDIA_END

#endif
