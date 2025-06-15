// 1512. Number of Good Pairs

#include <cstdint>
#include <vector>

int numIdenticalPairs(const std::vector<int> &numbers) {
  uint64_t goodPairs = 0;

  for (uint64_t i = 0; i < numbers.size() - 1; ++i) {
    for (uint64_t j = i + 1; j < numbers.size(); ++j) {
      if (numbers[i] == numbers[j]) ++goodPairs;
    }
  }

  return goodPairs;
}
