#include "./Solution.hpp"

int Solution::addDigits(int number) {
  return 1 + (number - 1) % 9;
}
