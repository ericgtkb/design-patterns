cmake_minimum_required(VERSION 3.15)
project(CellPhone)

set(CMAKE_CXX_STANDARD 17)

add_executable(CellPhone main.cc cell_phone.cc cell_phone.h cell_phone_mode.cc cell_phone_mode.h)