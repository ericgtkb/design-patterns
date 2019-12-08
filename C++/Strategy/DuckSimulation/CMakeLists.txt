cmake_minimum_required(VERSION 3.14)
project(DuckSimulation)

set(CMAKE_CXX_STANDARD 17)

add_executable(DuckSimulation main.cc duck.cc duck.h duck_behaviors.cc duck_behaviors.h)