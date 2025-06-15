// 342. Power of Four

bool isPowerOfFour(const int number) {
  if (number <= 0) return false;

  // if it isn't a power of two
  if ((number & (number - 1)) != 0) return false;

  // if the power of two is at an odd bit
  return (number & 0x55555555) != 0;
}
