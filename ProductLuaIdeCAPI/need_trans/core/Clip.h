#ifndef MTMVCORE_CLIP_H
#define MTMVCORE_CLIP_H

#include <memory>
#include <string>
#include <list>

#include "base/MTMacros.h"
#include "core/ClipBase.h"
#include "core/Enums.h"
#include "core/Fraction.h"

#include "core/MTImageReader.h"
#include "core/KeyFrame.h"
#include "core/ReaderBase.h"
#include "base/rbuf.h"
#include "core/MTBezierShiftSpeedEffect.h"

NS_MEDIA_BEGIN

class MTMediaEffect;
class Clip : public ClipBase {
protected:

private:
  ReaderBase* reader;
  bool manage_reader;

  /// Get file extension
  string get_file_extension(string path);

  /// Init default settings for a clip
  void init_settings();

  /// Update default rotation from reader
  void init_reader_rotation();

  /// Sort effects by order
//  void sort_effects();

public:
  GravityType gravity; ///< The gravity of a clip determines where it snaps to it's parent
  ScaleType scale; ///< The scale determines how a clip should be resized to fit it's parent
  AnchorType anchor; ///< The anchor determines what parent a clip should snap to
  FrameDisplayType display; ///< The format to display the frame number (if any)

  /// Default Constructor
  Clip();

  /// @brief Constructor with filepath (reader is automatically created... by guessing file extensions)
  /// @param path The path of a reader (video file, image file, etc...). The correct reader will be used automatically.
  Clip(string path);

  /// @brief Constructor with reader
  /// @param new_reader The reader to be used by this clip
  Clip(ReaderBase* new_reader);

  /// Destructor
  ~Clip();

  bool getAudioFrame(AudioFrame *frame);

  /**
   * 根据时间获取帧
   */
  bool GetFrameByTime(VideoFrame *frame, int64_t time);

  ReaderBase *getReader(){return reader;};

  void seekTo(int64_t time, int mode);

  void setAudioParams(AudioParams *externAudioParam);

  void applyEffect(MTMediaEffect *effect);

  bool hasVideo() {return reader && reader->info.has_video; }

  bool hasAudio() {return reader && reader->info.has_audio; }

  int getRotation(){ return reader->getRotation(); };

  void disableAudio() { reader->disableAudio(); };
  void disableVideo() { reader->disableVideo(); };

  /// Open the internal reader
  void open();
  /// Close the internal reader
  void close();
  void pause();
  void resume();
  void startDecoder();
  void stopDecoder();
  /**
   * 切换音轨
   */
  void switchAudioTrack();

  /// @brief Set the current reader
  /// @param new_reader The reader to be used by this clip
  void Reader(ReaderBase* new_reader);

  /// Get the current reader
  ReaderBase* Reader();

  /// Override End() method
  float End() override ; ///< Get end position (in seconds) of clip (trim end of video), which can be affected by the time curve.
  void End(float value) override { end = value; } ///< Set end position (in seconds) of clip (trim end of video)

  /// Get and Set JSON methods
  string Json(); ///< Generate JSON string of this object
  void SetJson(string value); ///< Load JSON string into this object
  Json::Value JsonValue(); ///< Generate Json::JsonValue for this object
  void SetJsonValue(Json::Value root); ///< Load Json::JsonValue into this object

  /// Get all properties for a specific frame (perfect for a UI to display the current state
  /// of all properties at any time)
  string PropertiesJSON(int64_t requested_frame);

  /// @brief Remove an effect from the clip
  /// @param effect Remove an effect from the clip.
//  void RemoveEffect(EffectBase* effect);

  // Scale and Location curves
  Keyframe scale_x; ///< Curve representing the horizontal scaling in percent (0 to 1)
  Keyframe scale_y; ///< Curve representing the vertical scaling in percent (0 to 1)
  Keyframe location_x; ///< Curve representing the relative X position in percent based on the gravity (-1 to 1)
  Keyframe location_y; ///< Curve representing the relative Y position in percent based on the gravity (-1 to 1)

  // Alpha and Rotation curves
  Keyframe alpha; ///< Curve representing the alpha (1 to 0)
  Keyframe rotation; ///< Curve representing the rotation (0 to 360)

  // Time and Volume curves
  Keyframe time; ///< Curve representing the frames over time to play (used for speed and direction of video)
  Keyframe volume; ///< Curve representing the volume (0 to 1)

  /// Curve representing the color of the audio wave form
//  Color wave_color;

  // Crop settings and curves
  GravityType crop_gravity; ///< Cropping needs to have a gravity to determine what side we are cropping
  Keyframe crop_width; ///< Curve representing width in percent (0.0=0%, 1.0=100%)
  Keyframe crop_height; ///< Curve representing height in percent (0.0=0%, 1.0=100%)
  Keyframe crop_x; ///< Curve representing X offset in percent (-1.0=-100%, 0.0=0%, 1.0=100%)
  Keyframe crop_y; ///< Curve representing Y offset in percent (-1.0=-100%, 0.0=0%, 1.0=100%)

  // Shear and perspective curves
  Keyframe shear_x; ///< Curve representing X shear angle in degrees (-45.0=left, 45.0=right)
  Keyframe shear_y; ///< Curve representing Y shear angle in degrees (-45.0=down, 45.0=up)
  Keyframe perspective_c1_x; ///< Curves representing X for coordinate 1
  Keyframe perspective_c1_y; ///< Curves representing Y for coordinate 1
  Keyframe perspective_c2_x; ///< Curves representing X for coordinate 2
  Keyframe perspective_c2_y; ///< Curves representing Y for coordinate 2
  Keyframe perspective_c3_x; ///< Curves representing X for coordinate 3
  Keyframe perspective_c3_y; ///< Curves representing Y for coordinate 3
  Keyframe perspective_c4_x; ///< Curves representing X for coordinate 4
  Keyframe perspective_c4_y; ///< Curves representing Y for coordinate 4

  /// Audio channel filter and mappings
  Keyframe channel_filter; ///< A number representing an audio channel to filter (clears all other channels)
  Keyframe channel_mapping; ///< A number representing an audio channel to output (only works when filtering a channel)

  /// Override has_video and has_audio properties of clip (and their readers)
  Keyframe has_audio; ///< An optional override to determine if this clip has audio (-1=undefined, 0=no, 1=yes)
  Keyframe has_video; ///< An optional override to determine if this clip has video (-1=undefined, 0=no, 1=yes)

private:
  MTMediaEffect *m_pMTMediaEffect;

};


NS_MEDIA_END

#endif //MTMVCORE_CLIP_H
