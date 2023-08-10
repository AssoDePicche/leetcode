#ifndef SOLUTION_H_
#define SOLUTION_H_

#define ABSOLUTE_ZERO 273.15
#define CELSIUS_TO_FAHRENHEIT_RATE 1.8
#define FAHRENHEIT_WATER_FREEZING_POINT 32

#include <vector>

class Solution {
public:
  std::vector<double> convertTemperature(double celsius);
};

#endif SOLUTION_H_
