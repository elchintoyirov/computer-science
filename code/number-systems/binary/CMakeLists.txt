cmake_minimum_required(VERSION 3.31)
project(Converter)

set(CMAKE_CXX_STANDARD 23)

add_executable(Converter main.cpp
        converter.h
        bin2dec.cpp
        dec2bin.cpp)
