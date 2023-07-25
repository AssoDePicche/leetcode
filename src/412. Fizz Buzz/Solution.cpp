#include "./Solution.hpp"
#include <vector>
#include <string>

std::vector<std::string> Solution::fizzBuzz(int n) {
  std::vector<std::string> answear;

  for (unsigned short int index = 1; index <= n; ++index) {
    bool divisible_by_3 = ((index % 3) == 0);
    
    bool divisible_by_5 = ((index % 5) == 0);

    if (divisible_by_3 && divisible_by_5) {
      answear.push_back("FizzBuzz");
    } else if (divisible_by_3) {
      answear.push_back("Fizz");
    } else if (divisible_by_5) {
      answear.push_back("Buzz");
    } else {
      answear.push_back(std::to_string(index));
    }
  }

  return answear;
}