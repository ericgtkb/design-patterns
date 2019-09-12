cmake_minimum_required(VERSION 3.14)
project(DuckSimulation)

set(CMAKE_CXX_STANDARD 17)

add_executable(DuckSimulation main.cpp duck.cpp duck.h duck_behaviors.cpp duck_behaviors.h)