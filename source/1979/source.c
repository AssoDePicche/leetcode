// 1979. Find Greatest Common Divisor of Array

int findGCD(int* nums, int numsSize) {
  int min = nums[0];

  int max = nums[0];

  int greatestCommonDivisor = 1;

  for (int index = 0; index < numsSize; ++index) {
    if (min > nums[index]) {
      min = nums[index];
    }

    if (max < nums[index]) {
      max = nums[index];
    }
  }

  if (min == max) {
    return min;
  }

  for (int currentDivisor = 1; currentDivisor <= max; ++currentDivisor) {
    if (0 == min % currentDivisor && 0 == max % currentDivisor) {
      greatestCommonDivisor = currentDivisor;
    }
  }

  return greatestCommonDivisor;
}
