// 50. Pow(x, n)

#include <cmath>

double myPow(double base, int exponent) {
  if (0.0 == base) return 0.0;

  if (0 == exponent) return 1.0;

  if (exponent < 0) {
    base = (1.0 / base);

    exponent = abs(exponent);
  }

  double power = 1.0;

  while (exponent > 0) {
    if (1 == exponent % 2) {
      power *= base;
    }

    base *= base;

    exponent /= 2;
  }

  return power;
}
