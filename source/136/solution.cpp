// 136. Single Number

#include <functional>
#include <numeric>
#include <vector>

int singleNumber(const std::vector<int> &numbers) {
  return std::accumulate(numbers.begin(), numbers.end(), 0,
                         std::bit_xor<int>());
}
