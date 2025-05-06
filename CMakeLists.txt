cmake_minimum_required(VERSION 3.10)
project(graphs)

set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_STANDARD 26)

add_executable(graphs src/main.cpp src/graph.cpp)