cmake_minimum_required(VERSION 3.8)
project(BirthdayCalc)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp DayOfYear.cpp DayOfYear.h)
add_executable(BirthdayCalc ${SOURCE_FILES})