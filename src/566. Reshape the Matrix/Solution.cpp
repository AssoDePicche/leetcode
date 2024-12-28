#include <iostream>
#include <vector>

class Solution {
  public:
    std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>>& mat, int r, int c) {
      const auto m = mat.size();

      const auto n = mat[0].size();

      if (r * c != m * n) {
        return mat;
      }

      std::vector<std::vector<int>> reshaped = std::vector(r, std::vector(c, 0));

      for (auto k = 0, i = 0; i < m; ++i) {
        for (auto j = 0; j < n; ++j, ++k) {
          reshaped[k / c][k % c] = mat[i][j];
        }
      }

      return reshaped;
    }
};
