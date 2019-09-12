cmake_minimum_required(VERSION 3.14)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(Calculator main.cpp observer.cpp observer.h subject.cpp subject.h)