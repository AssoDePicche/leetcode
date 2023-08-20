#include "./Solution.hpp"

void Solution::reverseString(std::vector<char> &string) {
  int start = 0;

  int end = string.size() - 1;

  while (start < end) {
    char temp = string[start];

    string[start] = string[end];

    string[end] = temp;

    ++start;

    --end;
  }
}
