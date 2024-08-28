# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(MyProject VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if (CMAKE_COMPILER_IS_GNUCXX OR CMAKE_COMPILER_ISClang)
    # GCC and Clang
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
elseif (MSVC)
    # MSVC
    add_compile_options(/W4 /WX)
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

# Include the src and test directories
add_subdirectory(src)
add_subdirectory(test)
