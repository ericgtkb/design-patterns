cmake_minimum_required(VERSION 3.15)
project(ShapeFactory)

set(CMAKE_CXX_STANDARD 17)

add_executable(ShapeFactory main.cc shape.cc shape.h shape_factory.cc shape_factory.h)