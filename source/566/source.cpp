// 566. Reshape the Matrix

#include <iostream>
#include <vector>

std::vector<std::vector<int>> matrixReshape(
    std::vector<std::vector<int>>& matrix, int r, int c) {
  const int m = matrix.size();

  const int n = matrix[0].size();

  if (r * c != m * n) {
    return matrix;
  }

  std::vector<std::vector<int>> reshaped = std::vector(r, std::vector(c, 0));

  for (int k = 0, i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j, ++k) {
      reshaped[k / c][k % c] = matrix[i][j];
    }
  }

  return reshaped;
}
