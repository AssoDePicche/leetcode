#include "Solution.h"

#include <cstdint>

using std::uint32_t;

vector<int> Solution::runningSum(vector<int>& numbers) {
    vector<int> runningSum(numbers);

    for (uint32_t i = 1; i < numbers.size(); ++i) {
        for (uint32_t j = 0; j < i; ++j) {
            runningSum[i] += numbers[j];
        }
    }

    return runningSum;
}
