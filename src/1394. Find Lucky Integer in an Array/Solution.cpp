#include <map>
#include <vector>

class Solution {
  public:
    int findLucky(std::vector<int>& arr) {
      std::map<int,int> count;

      for (const auto& number : arr) {
        ++count[number];
      }

      int lucky = -1;

      for (const auto& [number, frequency] : count) {
        if (number == frequency && number > lucky) {
          lucky = number;
        }
      }

      return lucky;
    }
}
