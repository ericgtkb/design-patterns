cmake_minimum_required(VERSION 3.14)
project(TurkeyDuck)

set(CMAKE_CXX_STANDARD 17)

add_executable(TurkeyDuck main.cc duck.cc duck.h turkey.cc turkey.h turkey_adapter.cc turkey_adapter.h)