// 1. Two Sum

#include <unordered_map>
#include <vector>

std::vector<int> twoSum(const std::vector<int> &numbers, int target) {
  std::unordered_map<int, int> cache;

  for (unsigned index = 0; index < numbers.size(); ++index) {
    if (cache.find(target - numbers.at(index)) != cache.end()) {
      return {cache[target - numbers[index]], index};
    }

    cache[numbers[index]] = index;
  }

  return {};
}
