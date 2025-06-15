// 1672. Richest Customer Wealth

#include <algorithm>
#include <numeric>
#include <vector>

int maximumWealth(const std::vector<std::vector<int>>& accounts) {
  int maximumWealth = 0;

  std::for_each(accounts.begin(), accounts.end(),
                [&maximumWealth](const std::vector<int>& account) {
                  maximumWealth = std::max(
                      std::accumulate(account.begin(), account.end(), 0),
                      maximumWealth);
                });

  return maximumWealth;
}
