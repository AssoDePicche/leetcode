#include "./Solution.hpp"

#define ODD_BIT_POSITIONS 0x55555555

bool Solution::isPowerOfFour(int number) {
  if (number <= 0) return false;

  // if it isn't a power of two
  if ((number & (number - 1)) != 0) return false;

  // if the power of two is at an odd bit
  return (number & ODD_BIT_POSITIONS) != 0;
}
