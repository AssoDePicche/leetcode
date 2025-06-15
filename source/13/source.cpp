// 13. Roman to Integer

#include <cstdint>
#include <string>
#include <unordered_map>

int romanToInt(const std::string &roman) {
  const std::unordered_map<char, uint8_t> numerals = {
      {'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
      {'C', 100}, {'D', 500}, {'M', 1000}};

  const size_t length = roman.length();

  if (1 == length) return numerals.at(roman.at(0));

  uint64_t integer = 0;

  for (unsigned short int index = 0; index < (length - 1); ++index) {
    uint8_t current = numerals.at(roman.at(index));

    uint8_t next = numerals.at(roman.at(index + 1));

    integer += (current < next) ? -current : current;
  }

  return (integer + numerals.at(roman.at(length - 1)));
}
