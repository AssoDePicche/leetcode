// 9. Palindrome Number

#include <climits>

bool isPalindrome(const int number) {
  if (number < 0) return false;

  constexpr static int MIN = INT_MIN / 10;

  constexpr static int MAX = INT_MAX / 10;

  int buffer = number;

  int reverse = 0;

  while (buffer > 0) {
    if (reverse < MIN || reverse > MAX) return false;

    reverse = reverse * 10 + (buffer % 10);

    buffer /= 10;
  }

  return number == reverse;
}
