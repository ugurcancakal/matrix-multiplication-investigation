#include "utils.h"
#include <iostream>

void printMatrix(const Matrix &matrix) {
    for (const auto &row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}
