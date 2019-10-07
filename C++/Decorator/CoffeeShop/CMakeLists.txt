cmake_minimum_required(VERSION 3.14)
project(CoffeeShop)

set(CMAKE_CXX_STANDARD 17)

add_executable(CoffeeShop main.cpp beverage.cpp beverage.h condiment_decorator.cpp condiment_decorator.h)