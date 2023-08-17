#include "./Solution.hpp"

std::vector<int> Solution::twoSum(std::vector<int> &nums, int target) {
  for (int i = 0; i < nums.size(); ++i) {
    for (int j = i + 1; j < nums.size(); ++j) {
      if (nums.at(i) + nums.at(j) == target) {
        return {i, j};
      }
    }
  }

  return {};
}
