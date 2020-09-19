cmake_minimum_required(VERSION 3.17)
project(VPL1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(VPL1
        main.cpp
        Word.cpp
        Word.hpp
        WordCounter.cpp
        WordCounter.hpp)
