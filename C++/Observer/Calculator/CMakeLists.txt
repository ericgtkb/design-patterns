cmake_minimum_required(VERSION 3.14)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(Calculator main.cc observer.cc observer.h subject.cc subject.h)