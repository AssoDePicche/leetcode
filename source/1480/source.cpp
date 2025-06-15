// 1480. Running Sum of 1d Array

#include <cstdint>
#include <vector>

std::vector<int> runningSum(std::vector<int>& numbers) {
  for (uint64_t index = 1; index < numbers.size(); ++index) {
    numbers[index] += numbers[index - 1];
  }

  return numbers;
}
