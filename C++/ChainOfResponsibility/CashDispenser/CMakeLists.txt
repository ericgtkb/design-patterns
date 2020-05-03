cmake_minimum_required(VERSION 3.15)
project(CashDispenser)

set(CMAKE_CXX_STANDARD 17)

add_executable(CashDispenser main.cc dispense_chain.h dispense_chain.cc cash_dispenser.h cash_dispenser.cc)

