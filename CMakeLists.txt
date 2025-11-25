cmake_minimum_required(VERSION 3.10)

project(FastMath VERSION 1.0)

# GoogleTest requires at least C++17
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src/util)
add_subdirectory(src/math)

add_executable(MAIN math util)