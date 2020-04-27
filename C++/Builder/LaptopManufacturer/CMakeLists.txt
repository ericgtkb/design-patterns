cmake_minimum_required(VERSION 3.15)
project(LaptopManufacturer)

set(CMAKE_CXX_STANDARD 17)

add_executable(LaptopManufacturer main.cc laptop.cc laptop.h laptop_builder.cc laptop_builder.h laptop_manufacturer.cc laptop_manufacturer.h)