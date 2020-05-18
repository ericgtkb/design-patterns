cmake_minimum_required(VERSION 3.15)
project(WidgetFactory)

set(CMAKE_CXX_STANDARD 17)

add_executable(WidgetFactory main.cc button.cc button.h scrollbar.cc scrollbar.h widget_factory.cc widget_factory.h)