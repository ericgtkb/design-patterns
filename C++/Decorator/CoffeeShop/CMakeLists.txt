cmake_minimum_required(VERSION 3.14)
project(CoffeeShop)

set(CMAKE_CXX_STANDARD 17)

add_executable(CoffeeShop main.cc beverage.cc beverage.h condiment_decorator.cc condiment_decorator.h)