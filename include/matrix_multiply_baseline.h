#ifndef MATRIX_MULTIPLY_BASELINE_H
#define MATRIX_MULTIPLY_BASELINE_H

#include <vector>

typedef std::vector<std::vector<int>> Matrix;

Matrix multiplyMatrices(const Matrix& a, const Matrix& b);
void printMatrix(const Matrix& matrix);

#endif // MATRIX_MULTIPLY_BASELINE_H
