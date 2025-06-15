// 2798. Number of Employees Whot Met the Target

#include <numeric>
#include <vector>

int numberOfEmployeesWhoMetTarget(const std::vector<int> &hours,
                                  const int target) {
  return std::accumulate(hours.begin(), hours.end(), 0,
                         [&](int accumulate, const int hour) {
                           if (target <= hour) {
                             ++accumulate;
                           }

                           return accumulate;
                         });
}
