cmake_minimum_required(VERSION 3.14)
project(TurkeyDuck)

set(CMAKE_CXX_STANDARD 17)

add_executable(TurkeyDuck main.cpp duck.cpp duck.h turkey.cpp turkey.h turkey_adapter.cpp turkey_adapter.h)