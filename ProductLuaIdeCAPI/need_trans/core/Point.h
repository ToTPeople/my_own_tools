#ifndef MTMVCORE_POINT_H
#define MTMVCORE_POINT_H

#include "base/MTMacros.h"

#include "Coordinate.h"
#include "Exceptions.h"
#include "Json.h"

NS_MEDIA_BEGIN

/**
 * @brief This controls how a Keyframe uses this point to interpolate between two points.
 *
 * Bezier is a smooth curve. Linear is a straight line. Constant is a jump from the
 * previous point to this one.
 */
enum InterpolationType {
  BEZIER,		///< Bezier curves are quadratic curves, which create a smooth curve.
  LINEAR,		///< Linear curves are angular, straight lines between two points.
  CONSTANT	///< Constant curves jump from their previous position to a new one (with no interpolation).
};

/**
 * @brief When BEZIER interpolation is used, the point's left and right handles are used
 * to influence the direction of the curve.
 *
 * AUTO will try and adjust the handles automatically, to achieve the smoothest curves.
 * MANUAL will leave the handles alone, making it the responsibility of the user to set them.
 */
enum HandleType {
  AUTO,	///< Automatically adjust the handles to achieve the smoothest curve
  MANUAL	///< Do not automatically adjust handles (set them manually)
};

/**
 * @brief A Point is the basic building block of a key-frame curve.
 *
 * Points have a primary coordinate and a left and right handle coordinate.
 * The handles are used to influence the direction of the curve as it
 * moves between the primary coordinate and the next primary coordinate when the
 * interpolation mode is BEZIER.  When using LINEAR or CONSTANT, the handles are
 * ignored.
 *
 * Please see the following <b>Example Code</b>:
 * \code
 * Coordinate c1(3,9);
 * Point p1(c1, BEZIER);
 * assert(c1.X == 3);
 * assert(c1.Y == 9);
 *
 * \endcode
 */
class Point {
public:
  Coordinate co; 					///< This is the primary coordinate
  Coordinate handle_left; 			///< This is the left handle coordinate (in percentages from 0 to 1)
  Coordinate handle_right; 			///< This is the right handle coordinate (in percentages from 0 to 1)
  InterpolationType interpolation;	///< This is the interpolation mode
  HandleType handle_type; 			///< This is the handle mode

  /// Default constructor (defaults to 1,0)
  Point();

  /// Constructor which creates a single coordinate at X=1
  Point(float y);

  /// Constructor which also creates a Point and sets the X and Y of the Point.
  Point(float x, float y);

  /// Constructor which also creates a Point and sets the X,Y, and interpolation of the Point.
  Point(float x, float y, InterpolationType interpolation);

  /// Constructor which takes a coordinate
  Point(Coordinate co);

  /// Constructor which takes a coordinate and interpolation mode
  Point(Coordinate co, InterpolationType interpolation);

  /// Constructor which takes a coordinate, interpolation mode, and handle type
  Point(Coordinate co, InterpolationType interpolation, HandleType handle_type);

  /// Set the left and right handles to a percent of the primary coordinate (0 to 1)
  /// Defaults to a smooth curve (Ease in and out)
  void Initialize_Handles();

  /// Set the left handle to a percent of the primary coordinate (0 to 1)
  void Initialize_LeftHandle(float x, float y);

  /// Set the right handle to a percent of the primary coordinate (0 to 1)
  void Initialize_RightHandle(float x, float y);

  /// Get and Set JSON methods
  string Json(); ///< Generate JSON string of this object
  Json::Value JsonValue(); ///< Generate Json::JsonValue for this object
  void SetJson(string value); ///< Load JSON string into this object
  void SetJsonValue(Json::Value root); ///< Load Json::JsonValue into this object

};

NS_MEDIA_END

#endif //MTMVCORE_POINT_H