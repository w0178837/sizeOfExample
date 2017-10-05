cmake_minimum_required(VERSION 3.8)
project(Inheritance)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp animal.cpp animal.h cat.cpp cat.h fish.cpp fish.h human.cpp human.h)
add_executable(Inheritance ${SOURCE_FILES})