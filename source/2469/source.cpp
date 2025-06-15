// 2469. Convert the Temperature

#include <vector>

std::vector<double> convertTemperature(const double celsius) {
  return {
      celsius + 273.15,      // Kelvin
      celsius * 1.8 + 32.0,  // Fahrenheit
  };
}
