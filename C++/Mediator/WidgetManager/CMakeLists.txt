cmake_minimum_required(VERSION 3.16)
project(WidgetManager)

set(CMAKE_CXX_STANDARD 17)

add_executable(WidgetManager main.cc widget_manager.cc widget_manager.h widget.cc widget.h)