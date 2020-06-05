cmake_minimum_required(VERSION 3.16)
project(ElectronicDevices)

set(CMAKE_CXX_STANDARD 17)

add_executable(ElectronicDevices main.cc device_visitor.cc device_visitor.h electronic_device.cc electronic_device.h)