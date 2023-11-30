cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MatrixMultiplication)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directory for header files
include_directories(include)

# Add an executable
add_executable(matrix_multiply_baseline 
    src/main.cpp 
    src/matrix_multiply_baseline.cpp 
    src/utils.cpp
)
