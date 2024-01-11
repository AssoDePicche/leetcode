#include "Solution.h"

#include <cstdint>

using std::uint32_t;

vector<int> Solution::runningSum(vector<int>& numbers) {
    for (uint32_t i = 1; i < numbers.size(); ++i) {
        numbers[i] += numbers[i - 1];
    }

    return numbers;
}
