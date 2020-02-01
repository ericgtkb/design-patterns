cmake_minimum_required(VERSION 3.15)
project(HouseBuilder)

set(CMAKE_CXX_STANDARD 17)

add_executable(HouseBuilder main.cc house.cc house.h)