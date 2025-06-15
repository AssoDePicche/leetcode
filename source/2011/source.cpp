// 2011. Final Value of Variable After Performing Operations

#include <algorithm>
#include <string>
#include <vector>

int finalValueAfterOperations(const std::vector<std::string>& operations) {
  int variable = 0;

  std::for_each(operations.begin(), operations.end(),
                [&variable](const std::string& operation) {
                  if (operation[1] == '+') {
                    ++variable;
                  } else {
                    --variable;
                  }
                });

  return variable;
}
