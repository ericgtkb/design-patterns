cmake_minimum_required(VERSION 3.15)
project(ColorfulShapes)

set(CMAKE_CXX_STANDARD 17)

add_executable(ColorfulShapes main.cc color.cc color.h shape.cc shape.h)