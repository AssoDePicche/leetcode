#include <climits>

class Solution {
 public:
  bool isPalindrome(const int number) const {
    if (number < 0) {
      return false;
    }

    auto temp = number;

    auto reverse = 0;

    while (temp > 0) {
      if (reverse < MIN || reverse > MAX) {
        return false;
      }

      reverse = reverse * 10 + (temp % 10);

      temp /= 10;
    }

    return number == reverse;
  }

 private:
  constexpr static auto MIN = INT_MIN / 10;

  constexpr static auto MAX = INT_MAX / 10;
};
