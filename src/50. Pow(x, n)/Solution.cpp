#include <cmath>
#include "./Solution.hpp"

double Solution::myPow(double base, int exponent) {
  if (base == 0.0) return 0.0;

  if (exponent == 0) return 1.0;

  if (exponent < 0) {
    base = (1.0 / base);

    exponent = abs(exponent);
  }

  double power = 1.0;

  while (exponent > 0) {
    if (exponent % 2 == 1) {
      power *= base;
    }

    base *= base;

    exponent /= 2;
  }

  return power;
}
