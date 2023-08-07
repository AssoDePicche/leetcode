#include "./Solution.hpp"

int Solution::numberOfSteps(int num) {
  int numberOfSteps = 0;

  while (num != 0) {
    if (num % 2 == 0) {
      num /= 2;
    } else {
      --num;
    }

    ++numberOfSteps;
  }

  return numberOfSteps;
}