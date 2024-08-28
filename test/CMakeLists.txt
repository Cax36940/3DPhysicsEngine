# Include directories for test files
include_directories(${CMAKE_SOURCE_DIR}/src)

# Define the executable for the tests
add_executable(test_vector TestVector3.cpp)