// 1342. Number of Steps to Reduce a Number to Zero

#include <cstdint>

int numberOfSteps(int number) {
  uint64_t numberOfSteps = 0;

  while (0 != number) {
    if (0 == number % 2) {
      number /= 2;
    } else {
      --number;
    }

    ++numberOfSteps;
  }

  return numberOfSteps;
}
