#ifndef MTMVCORE_READER_BASE_H
#define MTMVCORE_READER_BASE_H

#include <iostream>
#include <iomanip>
#include <memory>
#include <stdlib.h>
#include <sstream>
#include <string>
#include "ChannelLayouts.h"
#include "core/Fraction.h"
#include "Frame.h"
#include "Json.h"
#include "base/LogHelper.h"
#include "Fraction.h"
#include "module/media/MTMVDefine.h"
#include "VideoFrame.h"
#include "AudioFrame.h"

using namespace std;

NS_MEDIA_BEGIN
    /**
     * @brief This struct contains info about a media file, such as height, width, frames per second, etc...
     *
     * Each derived class of ReaderBase is responsible for updating this struct to reflect accurate information
     * about the streams. Derived classes of ReaderBase should call the InitFileInfo() method to initialize the
     * default values of this struct.
     */
    struct ReaderInfo
    {
        bool has_video;				///< Determines if this file has a video stream
        bool has_audio;				///< Determines if this file has an audio stream
        bool has_single_image;		///< Determines if this file only contains a single image
        float duration;				///< Length of time (in seconds)
        int64_t file_size;		///< Size of file (in bytes)
        int height;					///< The height of the video (in pixels)
        int width;					///< The width of the video (in pixesl)
        int pixel_format;			///< The pixel format (i.e. YUV420P, RGB24, etc...)
        Fraction fps;				///< Frames per second, as a fraction (i.e. 24/1 = 24 fps)
        int video_bit_rate;			///< The bit rate of the video stream (in bytes)
        Fraction pixel_ratio;		///< The pixel ratio of the video stream as a fraction (i.e. some pixels are not square)
        Fraction display_ratio;		///< The ratio of width to height of the video stream (i.e. 640x480 has a ratio of 4/3)
        string vcodec;				///< The name of the video codec used to encode / decode the video stream
        int64_t video_length;		///< The number of frames in the video stream
        int video_stream_index;		///< The index of the video stream
        Fraction video_timebase;	///< The video timebase determines how long each frame stays on the screen
        bool interlaced_frame;		// Are the contents of this frame interlaced
        bool top_field_first;		// Which interlaced field should be displayed first
        string acodec;				///< The name of the audio codec used to encode / decode the video stream
        int audio_bit_rate;			///< The bit rate of the audio stream (in bytes)
        int sample_rate;			///< The number of audio samples per second (44100 is a common sample rate)
        int channels;				///< The number of audio channels used in the audio stream
        ChannelLayout channel_layout;	///< The channel layout (mono, stereo, 5 point surround, etc...)
        int audio_stream_index;		///< The index of the audio stream
        Fraction audio_timebase;	///< The audio timebase determines how long each audio packet should be played
        std::map<string, string> metadata;	///< An optional map/dictionary of metadata for this reader
        int m_nBytesOfPerSample;
        int m_nChannels;
        int m_nSampleFormat;
        int m_nSampleRate;

    };

    /**
     * @brief This abstract class is the base class, used by all readers in libopenshot.
     *
     * Readers are types of classes that read video, audio, and image files, and
     * return openshot::Frame objects. The only requirements for a 'reader', are to
     * derive from this base class, implement the GetFrame method, and call the InitFileInfo() method.
     */
    class ReaderBase
    {
    protected:
        int max_width; ///< The maximum image width needed by this clip (used for optimizations)
        int max_height; ///< The maximium image height needed by this clip (used for optimizations)

        AudioParams *m_pExternAudioParam;
    public:

        /// Constructor for the base reader, where many things are initialized.
        ReaderBase();

        /// Information about the current media file
        ReaderInfo info;

        /// Display file information in the standard output stream (stdout)
        void DisplayInfo();

        /// This method is required for all derived classes of ReaderBase, and returns the
        /// openshot::Frame object, which contains the image and audio information for that
        /// frame of video.
        ///
        /// @returns The requested frame of video
        /// @param[in] number The frame number that is requested.
        virtual Frame *GetFrame(int64_t number) = 0;

        virtual bool getAudioFrame(AudioFrame *audioFrame) = 0;

        virtual bool getVideoFrame(VideoFrame *videoFrame, int64_t reqTime) = 0;

        virtual void seekTo(int64_t requested_frame, int mode) = 0;

        virtual void setAudioParams(AudioParams *externAudioParam) = 0;

        virtual void doDecodeFrame() = 0;

        virtual void disableAudio() = 0;
        virtual void disableVideo() = 0;

        virtual int getRotation() = 0;

        /// Determine if reader is open or closed
        virtual bool IsOpen() = 0;

        /// Return the type name of the class
        virtual string Name() = 0;

        /// Get and Set JSON methods
        virtual string Json() = 0; ///< Generate JSON string of this object
        virtual void SetJson(string value) = 0; ///< Load JSON string into this object
        virtual Json::Value JsonValue() = 0; ///< Generate Json::JsonValue for this object
        virtual void SetJsonValue(Json::Value root) = 0; ///< Load Json::JsonValue into this object

        /// Set Max Image Size (used for performance optimization)
        void SetMaxSize(int width, int height) { max_width = width; max_height = height; };

        /// Open the reader (and start consuming resources, such as images or video files)
        virtual void open() = 0;
        /// Close the reader (and any resources it was consuming)
        virtual void close() = 0;
        virtual void pause() = 0;
        virtual void resume() = 0;
        virtual void startDecoder(int64_t startPos) = 0;
        virtual void stopDecoder() = 0;
    };

NS_MEDIA_END

#endif //MTMVCORE_READER_BASE_H
