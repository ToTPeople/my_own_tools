#ifndef MTMVCORE_COORDINATE_H
#define MTMVCORE_COORDINATE_H

#include <iostream>

#include "base/MTMacros.h"
#include "Exceptions.h"
#include "Fraction.h"
#include "Json.h"

NS_MEDIA_BEGIN

/**
 * @brief This class represents a Cartesian coordinate (X, Y) used in the Keyframe animation system.
 *
 * Animation involves the changing (i.e. interpolation) of numbers over time.  A series of Coordinate
 * objects allows us to plot a specific curve or line used during interpolation.  In other words, it helps us
 * control how a number changes over time (quickly or slowly).
 *
 * Please see the following <b>Example Code</b>:
 * \code
 * Coordinate c1(2,4);
 * assert(c1.X == 2.0f);
 * assert(c1.Y == 4.0f);
 * \endcode
 */
class Coordinate {
private:
  bool increasing; ///< Is the Y value increasing or decreasing?
  Fraction repeated; ///< Fraction of repeated Y values (for example, 1/3 would be the first Y value of 3 repeated values)
  double delta; ///< This difference in Y value (from the previous unique Y value)

public:
  double X; ///< The X value of the coordinate (usually representing the frame #)
  double Y; ///< The Y value of the coordinate (usually representing the value of the property being animated)

  /// The default constructor, which defaults to (0,0)
  Coordinate();

  /// @brief Constructor which also sets the X and Y
  /// @param x The X coordinate (usually representing the frame #)
  /// @param y The Y coordinate (usually representing the value of the property being animated)
  Coordinate(double x, double y);

  /// @brief Set the repeating Fraction (used internally on the timeline, to track changes to coordinates)
  /// @param is_repeated The fraction representing how many times this coordinate Y value repeats (only used on the timeline)
  void Repeat(Fraction is_repeated) { repeated=is_repeated; }

  /// Get the repeating Fraction (used internally on the timeline, to track changes to coordinates)
  Fraction Repeat() { return repeated; }

  /// @brief Set the increasing flag (used internally on the timeline, to track changes to coordinates)
  /// @param is_increasing Indicates if this coordinate Y value is increasing (when compared to the previous coordinate)
  void IsIncreasing(bool is_increasing) { increasing = is_increasing; }

  /// Get the increasing flag (used internally on the timeline, to track changes to coordinates)
  bool IsIncreasing() { return increasing; }

  /// @brief Set the delta / difference between previous coordinate value (used internally on the timeline, to track changes to coordinates)
  /// @param new_delta Indicates how much this Y value differs from the previous Y value
  void Delta(double new_delta) { delta=new_delta; }

  /// Get the delta / difference between previous coordinate value (used internally on the timeline, to track changes to coordinates)
  float Delta() { return delta; }

  /// Get and Set JSON methods
  string Json(); ///< Generate JSON string of this object
  Json::Value JsonValue(); ///< Generate Json::JsonValue for this object
  void SetJson(string value); ///< Load JSON string into this object
  void SetJsonValue(Json::Value root); ///< Load Json::JsonValue into this object
};

NS_MEDIA_END

#endif //MTMVCORE_COORDINATE_H
