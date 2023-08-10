#include "./Solution.hpp"

std::vector<double> convertTemperature(double celsius) {
  std::vector<double> convertedTemperatures;

  convertedTemperatures.push_back(celsius + ABSOLUTE_ZERO);

  convertedTemperatures.push_back(celsius * CELSIUS_TO_FAHRENHEIT_RATE + FAHRENHEIT_WATER_FREEZING_POINT);

  return convertedTemperatures;
}
