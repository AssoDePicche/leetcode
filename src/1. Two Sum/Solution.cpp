#include "./Solution.hpp"

#include <unordered_map>

std::vector<int> Solution::twoSum(std::vector<int> &nums, int target) {
  std::unordered_map<int, int> cache;

  for (int index = 0; index < nums.size(); ++index) {
    if (cache.find(target - nums.at(index)) != cache.end()) {
      return {cache[target - nums[index]], index};
    }

    cache[nums[index]] = index;
  }

  return {};
}
