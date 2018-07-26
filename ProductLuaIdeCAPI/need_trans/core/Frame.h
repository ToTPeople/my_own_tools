#ifndef MTMVCORE_FRAME_H
#define MTMVCORE_FRAME_H

#include <iomanip>
#include <sstream>
#include <queue>
#include <memory>
#include <unistd.h>

#include "base/MTMacros.h"
#include "module/graphics/Image.h"
#include "platform/Application.h"

#include "core/ChannelLayouts.h"
#include "core/Fraction.h"
#include "module/mtmedia/base/FrameData.hpp"

NS_MEDIA_BEGIN

/**
 * @brief This class represents a single frame of video (i.e. image & audio data)
 *
 * FileReaders (such as FFmpegReader) use instances of this class to store the individual frames of video,
 * which include both the image data (i.e. pixels) and audio samples. An openshot::Frame also has many debug
 * methods, such as the ability to display the image (using X11), play the audio samples (using JUCE), or
 * display the audio waveform as an image.
 *
 * FileWriters (such as FFmpegWriter) use instances of this class to create new video files, image files, or
 * video streams. So, think of these openshot::Frame instances as the smallest unit of work in a video
 * editor.
 *
 * There are many ways to create an instance of an openshot::Frame:
 * @code
 *
 * // Most basic: a blank frame (300x200 blank image, 48kHz audio silence)
 * Frame();
 *
 * // Image only settings (48kHz audio silence)
 * Frame(1, // Frame number
 *       720, // Width of image
 *       480, // Height of image
 *       "#000000" // HTML color code of background color
 *       );
 *
 * // Audio only (300x200 blank image)
 * Frame(number, // Frame number
 *       44100, // Sample rate of audio stream
 *       2 // Number of audio channels
 *       );
 *
 * // Image and Audio settings (user defines all key settings)
 * Frame(number, // Frame number
 *       720, // Width of image
 *       480, // Height of image
 *       "#000000" // HTML color code of background color
 *       44100, // Sample rate of audio stream
 *       2 // Number of audio channels
 *       );
 *
 * // Some methods require a shared pointer to an openshot::Frame object.
 * std::shared_ptr<Frame> f(new Frame(1, 720, 480, "#000000", 44100, 2));
 *
 * @endcode
 */
class Frame : public Ref
{
protected:
  Image* image;
  Image* wave_image;
  std::shared_ptr<Application> previewApp;
  const unsigned char *qbuffer;
  Fraction pixel_ratio;
  int channels;
  ChannelLayout channel_layout;
  int width;
  int height;
  int sample_rate;
  std::string color;

  /// Constrain a color value from 0 to 255
  int constrain(int color_value);

  uint8_t *m_Data;
  size_t m_nDataSize;
public:
  int64_t number;	 ///< This is the frame number (starting at 1)
  bool has_audio_data; ///< This frame has been loaded with audio data
  bool has_image_data; ///< This frame has been loaded with pixel data

  MMTOOLS::FrameData *m_pFrameData;


  /// Constructor - blank frame (300x200 blank image, 48kHz audio silence)
  Frame();

  /// Constructor - image only (48kHz audio silence)
  Frame(int64_t number, int width, int height, std::string color);

  /// Constructor - audio only (300x200 blank image)
  Frame(int64_t number, int samples, int channels);

  /// Constructor - image & audio
  Frame(int64_t number, int width, int height, std::string color, int samples, int channels);

  /// Copy constructor
  Frame ( const Frame &other );

  /// Assignment operator
  Frame& operator= (const Frame& other);

  /// Destructor
  ~Frame();

  /// Add (or replace) pixel data to the frame (based on a solid color)
  void AddColor(int new_width, int new_height, std::string new_color);

  /// Add (or replace) pixel data to the frame
  void AddImage(int new_width, int new_height, int bytes_per_pixel, Image::Format type, const unsigned char *pixels_);

  /// Add (or replace) pixel data to the frame
  void AddImage(Image* new_image);

  /// Add (or replace) pixel data to the frame (for only the odd or even lines)
  void AddImage(Image* new_image, bool only_odd_lines);

  virtual void addAudioFrameData(MMTOOLS::FrameData *audioFrameData){};

  virtual bool assembleFrame(){ return false; };

  bool write(uint8_t *data, size_t dataSize);

  uint8_t *read(size_t &size);

  /// Channel Layout of audio samples. A frame needs to keep track of this, since Writers do not always
  /// know the original channel layout of a frame's audio samples (i.e. mono, stereo, 5 point surround, etc...)
  ChannelLayout ChannelsLayout();

  // Set the channel layout of audio samples (i.e. mono, stereo, 5 point surround, etc...)
  void ChannelsLayout(ChannelLayout new_channel_layout) { channel_layout = new_channel_layout; };

  /// Clean up buffer after QImage is deleted
  static void cleanUpBuffer(void *info);

  /// Clear the waveform image (and deallocate it's memory)
  void ClearWaveform();

  /// Copy data and pointers from another Frame instance
  void DeepCopy(const Frame& other);

  /// Display the frame image to the screen (primarily used for debugging reasons)
  void Display();

  /// Display the wave form
  void DisplayWaveform();

  /// Get the size in bytes of this frame (rough estimate)
  int64_t GetBytes();

  /// Get pointer to Qt QImage image object
  Image *getImage();

#ifdef USE_IMAGEMAGICK
  /// Get pointer to ImageMagick image object
		std::shared_ptr<Magick::Image> GetMagickImage();
#endif

  /// Set Pixel Aspect Ratio
  Fraction GetPixelRatio() { return pixel_ratio; };

  /// Get pixel data (as packets)
  const unsigned char* GetPixels();

  /// Get pixel data (for only a single scan-line)
  const unsigned char* GetPixels(int row);

  /// Get height of image
  int GetHeight();

  /// Calculate the # of samples per video frame (for the current frame number)
  int GetSamplesPerFrame(Fraction fps, int sample_rate, int channels);

  /// Calculate the # of samples per video frame (for a specific frame number and frame rate)
  static int GetSamplesPerFrame(int64_t frame_number, Fraction fps, int sample_rate, int channels);

  /// Get an audio waveform image
  Image *GetWaveform(int width, int height, int Red, int Green, int Blue, int Alpha);

  /// Get an audio waveform image pixels
  const unsigned char* GetWaveformPixels(int width, int height, int Red, int Green, int Blue, int Alpha);

  /// Get height of image
  int GetWidth();

  /// Get the original sample rate of this frame's audio data
  int SampleRate();

  /// Set the original sample rate of this frame's audio data
  void SampleRate(int orig_sample_rate) { sample_rate = orig_sample_rate; };

  /// Save the frame image to the specified path.  The image format can be BMP, JPG, JPEG, PNG, PPM, XBM, XPM
    void Save(std::string path, float scale, std::string format="PNG", int quality=100);

  /// Set frame number
  void SetFrameNumber(int64_t number);

  /// Set Pixel Aspect Ratio
  void SetPixelRatio(int num, int den);

  /// Thumbnail the frame image with tons of options to the specified path.  The image format is determined from the extension (i.e. image.PNG, image.JPEG).
  /// This method allows for masks, overlays, background color, and much more accurate resizing (including padding and centering)
    void Thumbnail(std::string path, int new_width, int new_height, std::string mask_path, std::string overlay_path,
                 std::string background_color, bool ignore_aspect, std::string format="png", int quality=100, float rotate=0.0);

};

NS_MEDIA_END

#endif //MTMVCORE_FRAME_H
