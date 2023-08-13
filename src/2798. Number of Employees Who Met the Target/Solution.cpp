#include "./Solution.hpp"

int Solution::numberOfEmployeesWhoMetTarget(std::vector<int> &hours, int target) {
  int numberOfEmployeesWhoMetTarget = 0;

  for (int index = 0; index < hours.size(); ++index) {
    if (target <= hours[index]) ++numberOfEmployeesWhoMetTarget;
  }

  return numberOfEmployeesWhoMetTarget;
}
