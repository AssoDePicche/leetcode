#include "./Solution.hpp"

int Solution::subtractProductAndSum(int n) {
  int sumOfDigits = 0;

  int productOfDigits = 1;

  while (n >= 1)
  {
    int digit = (n % 10);

    sumOfDigits += digit;

    productOfDigits *= digit;

    n /= 10;
  }

  return (productOfDigits - sumOfDigits);
}
