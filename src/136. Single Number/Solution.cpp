#include "./Solution.hpp"
#include <functional>
#include <numeric>

int Solution::singleNumber(std::vector<int> &numbers) {
  return std::accumulate(numbers.begin(), numbers.end(), 0, std::bit_xor<int>());
}
