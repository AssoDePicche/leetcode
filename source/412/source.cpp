// 412. Fizz Buzz

#include <ranges>
#include <string>
#include <vector>

std::vector<std::string> fizzBuzz(const int upper_bound) {
  std::vector<std::string> answear;

  for (const auto& number : std::views::iota(1, upper_bound + 1)) {
    bool divisible_by_3 = ((number % 3) == 0);

    bool divisible_by_5 = ((number % 5) == 0);

    if (divisible_by_3 && divisible_by_5) {
      answear.push_back("FizzBuzz");
    } else if (divisible_by_3) {
      answear.push_back("Fizz");
    } else if (divisible_by_5) {
      answear.push_back("Buzz");
    } else {
      answear.push_back(std::to_string(number));
    }
  }

  return answear;
}
