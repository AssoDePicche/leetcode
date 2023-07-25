#include "./Solution.hpp"
#include <string>
#include <unordered_map>

int Solution::romanToInt(const std::string &roman) {
  const std::unordered_map<char, unsigned short int> numerals = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

  const size_t length = roman.length();

  if (length == 1) return numerals.at(roman.at(0));

  unsigned int integer = 0;

  for (unsigned short int index = 0; index < (length - 1); ++index)
  {
    unsigned short int current = numerals.at(roman.at(index));

    unsigned short int next = numerals.at(roman.at(index + 1));

    integer += (current < next) ? -current : current;
  }

  return (integer + numerals.at(roman.at(length - 1)));
}
