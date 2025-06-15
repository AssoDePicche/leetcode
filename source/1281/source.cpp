// 1281. Subtract the Product and Sum of Digits of an Integer

int subtractProductAndSum(int number) {
  int sumOfDigits = 0;

  int productOfDigits = 1;

  while (number >= 1) {
    int digit = (number % 10);

    sumOfDigits += digit;

    productOfDigits *= digit;

    number /= 10;
  }

  return (productOfDigits - sumOfDigits);
}
