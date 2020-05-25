cmake_minimum_required(VERSION 3.15)
project(BookCollection)

set(CMAKE_CXX_STANDARD 17)

add_executable(BookCollection main.cc book.cc book.h book_collection.cc book_collection.h collection_iterator.cc collection_iterator.h)