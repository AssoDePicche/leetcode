#include "./Solution.hpp"

int Solution::maximumWealth(std::vector<std::vector<int>> &accounts) {
  int maximumWealth = 0;

  for (int i = 0; i < accounts.size(); ++i) {
    int currentWealth = 0;

    for (int j = 0; j < accounts[i].size(); ++j) {
      currentWealth += accounts[i][j];
    }

    maximumWealth = std::max(currentWealth, maximumWealth);
  }

  return maximumWealth;
}