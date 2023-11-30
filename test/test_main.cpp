#include "matrix_multiply_baseline.h"
#include <gtest/gtest.h>

TEST(MatrixMultiplyTest, MultiplyTwoMatrices) {
    Matrix a = {{1, 2}, {3, 4}};
    Matrix b = {{5, 6}, {7, 8}};
    Matrix expected = {{19, 22}, {43, 50}};

    EXPECT_EQ(multiplyMatrices(a, b), expected);
}
