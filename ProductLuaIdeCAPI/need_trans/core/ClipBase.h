#ifndef MTMVCORE_CLIPBASE_H
#define MTMVCORE_CLIPBASE_H

#include <memory>
#include <sstream>

#include "base/MTMacros.h"
#include "Exceptions.h"
#include "Point.h"
#include "KeyFrame.h"
#include "Json.h"

NS_MEDIA_BEGIN

class ClipBase {
protected:
  string id; ///< ID Property for all derived Clip and Effect classes.
  float position; ///< The position on the timeline where this clip should start playing
  int layer; ///< The layer this clip is on. Lower clips are covered up by higher clips.
  float start; ///< The position in seconds to start playing (used to trim the beginning of a clip)
  float end; ///< The position in seconds to end playing (used to trim the ending of a clip)
  string previous_properties; ///< This string contains the previous JSON properties
  int max_width; ///< The maximum image width needed by this clip (used for optimizations)
  int max_height; ///< The maximium image height needed by this clip (used for optimizations)

  /// Generate JSON for a property
  Json::Value add_property_json(std::string name, float value, std::string type, std::string memo, Keyframe* keyframe, float min_value, float max_value, bool readonly, int64_t requested_frame);

  /// Generate JSON choice for a property (dropdown properties)
  Json::Value add_property_choice_json(std::string name, int value, int selected_value);
public:

  /// Constructor for the base clip
  ClipBase() { max_width = 0; max_height = 0; };

  // Compare a clip using the Position() property
  bool operator< ( ClipBase& a) { return (Position() < a.Position()); }
  bool operator<= ( ClipBase& a) { return (Position() <= a.Position()); }
  bool operator> ( ClipBase& a) { return (Position() > a.Position()); }
  bool operator>= ( ClipBase& a) { return (Position() >= a.Position()); }

  /// Get basic properties
  string Id() { return id; } ///< Get the Id of this clip object
  float Position() { return position; } ///< Get position on timeline (in seconds)
  int Layer() { return layer; } ///< Get layer of clip on timeline (lower number is covered by higher numbers)
  float Start() { return start; } ///< Get start position (in seconds) of clip (trim start of video)
  virtual float End() { return end; } ///< Get end position (in seconds) of clip (trim end of video)
  float Duration() { return end - start; } ///< Get the length of this clip (in seconds)

  /// Set basic properties
  void Id(string value) { id = value; } ///> Set the Id of this clip object
  void Position(float value) { position = value; } ///< Set position on timeline (in seconds)
  void Layer(int value) { layer = value; } ///< Set layer of clip on timeline (lower number is covered by higher numbers)
  void Start(float value) { start = value; } ///< Set start position (in seconds) of clip (trim start of video)
  virtual void End(float value) { end = value; } ///< Set end position (in seconds) of clip (trim end of video)

  /// Set Max Image Size (used for performance optimization)
  void SetMaxSize(int width, int height) { max_width = width; max_height = height;  };

  /// Get and Set JSON methods
  virtual string Json() = 0; ///< Generate JSON string of this object
  virtual void SetJson(string value) = 0; ///< Load JSON string into this object
  virtual Json::Value JsonValue() = 0; ///< Generate Json::JsonValue for this object
  virtual void SetJsonValue(Json::Value root) = 0; ///< Load Json::JsonValue into this object

  /// Get all properties for a specific frame (perfect for a UI to display the current state
  /// of all properties at any time)
  virtual string PropertiesJSON(int64_t requested_frame) = 0;

};

NS_MEDIA_END

#endif //MTMVCORE_CLIPBASE_H
