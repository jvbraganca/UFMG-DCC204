cmake_minimum_required(VERSION 3.17)
project(VPL2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(VPL2
        main.cpp
        Point.cpp
        Point.h)
