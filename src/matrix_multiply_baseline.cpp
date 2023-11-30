#include "matrix_multiply_baseline.h"
#include <iostream>

Matrix multiplyMatrices(const Matrix &a, const Matrix &b) {
    size_t a_rows = a.size();
    size_t a_cols = a[0].size();
    size_t b_cols = b[0].size();
    Matrix result(a_rows, std::vector<int>(b_cols, 0));

    for (size_t i = 0; i < a_rows; ++i) {
        for (size_t j = 0; j < b_cols; ++j) {
            for (size_t k = 0; k < a_cols; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return result;
}
