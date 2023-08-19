#include "./Solution.hpp"

#define SIGN_INDEX 1
#define PLUS '+'

int Solution::finalValueAfterOperations(std::vector<std::string> &operations)
{
  int x = 0;

  for (int index = 0; index < operations.size(); ++index)
  {
    if (operations[index][SIGN_INDEX] == PLUS) {
      ++x;

      continue;
    }

    --x;
  }

  return x;
}
