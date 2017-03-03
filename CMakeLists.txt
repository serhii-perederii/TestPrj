cmake_minimum_required(VERSION 3.6)
project(TestPrj)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp myvector.cpp myvector.h)
add_executable(TestPrj ${SOURCE_FILES})