// 344. Reverse String

#include <algorithm>
#include <vector>

void reverseString(std::vector<char> &string) {
  int start = 0;

  int end = string.size() - 1;

  while (start < end) {
    std::swap(string[start], string[end]);

    ++start;

    --end;
  }
}
