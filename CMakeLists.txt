cmake_minimum_required(VERSION 3.22)
project(test)

set(CMAKE_CXX_STANDARD 14)

add_library(lib 3_1.cpp 3_3.cpp 3_2.cpp 2_2.cpp 4_1.cpp 1_1.cpp 2_1.cpp)

add_executable(test main.cpp)

link_libraries(test lib)
