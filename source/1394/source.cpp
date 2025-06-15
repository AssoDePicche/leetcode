// 1394. Find Lucky Integer in an Array

#include <map>
#include <vector>

int findLucky(const std::vector<int>& array) {
  std::map<int, int> count;

  for (const auto& number : array) {
    ++count[number];
  }

  int lucky = -1;

  for (const auto& [number, frequency] : count) {
    if (number == frequency && number > lucky) {
      lucky = number;
    }
  }

  return lucky;
}
