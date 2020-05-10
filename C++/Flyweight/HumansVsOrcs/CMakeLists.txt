cmake_minimum_required(VERSION 3.15)
project(HumansVsOrcs)

set(CMAKE_CXX_STANDARD 17)

add_executable(HumansVsOrcs main.cc player.cc player.h player_creator.cc player_creator.h)