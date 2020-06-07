cmake_minimum_required(VERSION 3.16)
project(BooleanExpressions)

set(CMAKE_CXX_STANDARD 17)

add_executable(BooleanExpressions main.cc context.cc context.h boolean_expression.cc boolean_expression.h)