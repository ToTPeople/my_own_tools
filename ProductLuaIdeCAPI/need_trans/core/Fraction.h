#ifndef MTMVCORE_FRACTION_H
#define MTMVCORE_FRACTION_H

#include "base/MTMacros.h"

NS_MEDIA_BEGIN

/**
 * @brief This class represents a fraction
 *
 * Fractions are often used in video editing to represent ratios and rates, for example:
 * pixel ratios, frames per second, timebase, and other common ratios.  Fractions are preferred
 * over decimals due to their increased precision.
 */
class Fraction {
public:
  int num; ///<Numerator for the fraction
  int den; ///<Denominator for the fraction

  /// Default Constructor
  Fraction();
  /// Constructor with numerator and denominator
  Fraction(int num, int den);

  /// Calculate the greatest common denominator
  int GreatestCommonDenominator();

  /// Reduce this fraction (i.e. 640/480 = 4/3)
  void Reduce();

  /// Return this fraction as a float (i.e. 1/2 = 0.5)
  float ToFloat();

  /// Return this fraction as a double (i.e. 1/2 = 0.5)
  double ToDouble();

  /// Return a rounded integer of the fraction (for example 30000/1001 returns 30)
  int ToInt();

  /// Return the reciprocal as a Fraction
  Fraction Reciprocal();
};

NS_MEDIA_END

#endif //MTMVCORE_FRACTION_H
