cmake_minimum_required(VERSION 3.8)
project(StringEx)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp String.cpp String.h)
add_executable(StringEx ${SOURCE_FILES})