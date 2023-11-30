cmake_minimum_required(VERSION 3.14)

project(MatrixMultiplication)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
add_executable(MatrixMultiplication
    src/main.cpp
    src/matrix_multiply_baseline.cpp
    src/utils.cpp
    # Add other source files here
)

# Include directories
target_include_directories(MatrixMultiplication
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

# Fetch Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip # Update this line
)
FetchContent_MakeAvailable(googletest)

# Enable testing and define test executable
enable_testing()
add_executable(matrix_tests
    test/test_main.cpp
    src/matrix_multiply_baseline.cpp
    # Add other test files here
)

# Link Google Test to the test executable
target_link_libraries(matrix_tests
    PRIVATE 
        gtest_main
)

# Include the Google Test and Google Mock headers
target_include_directories(matrix_tests
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include 
        ${googletest_SOURCE_DIR}/include
        ${googletest_SOURCE_DIR}/googlemock/include
)

# Discover tests
include(GoogleTest)
gtest_discover_tests(matrix_tests)
