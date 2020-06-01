cmake_minimum_required(VERSION 3.15)
project(SmartHome)

set(CMAKE_CXX_STANDARD 17)

add_executable(SmartHome main.cc household_items.cc household_items.h command.cc command.h smart_home.cc smart_home.h)