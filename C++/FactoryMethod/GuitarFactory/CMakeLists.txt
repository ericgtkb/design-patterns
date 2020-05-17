cmake_minimum_required(VERSION 3.15)
project(GuitarFactory)

set(CMAKE_CXX_STANDARD 17)

add_executable(GuitarFactory main.cc guitar.cc guitar.h guitar_factory.cc guitar_factory.h)