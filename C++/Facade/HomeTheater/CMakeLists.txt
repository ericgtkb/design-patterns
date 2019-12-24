cmake_minimum_required(VERSION 3.15)
project(HomeTheater)

set(CMAKE_CXX_STANDARD 17)

add_executable(HomeTheater main.cc home_theater.cc home_theater.h components.cc components.h)