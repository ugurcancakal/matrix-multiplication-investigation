#include "matrix.h"
#include "matrix_multiply_baseline.h"
#include "utils.h"
#include <iostream>

int main() {
    Matrix a = {{1, 2}, {3, 4}};
    Matrix b = {{5, 6}, {7, 8}};

    Matrix result = multiplyMatrices(a, b);

    std::cout << "Result of matrix multiplication:" << std::endl;
    printMatrix(result);

    return 0;
}