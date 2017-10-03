cmake_minimum_required(VERSION 3.8)
project(irrationalNumbers)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES myOwnMath.cpp myOwnMath.h Driver.cpp)
add_executable(irrationalNumbers ${SOURCE_FILES})