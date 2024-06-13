cmake_minimum_required(VERSION 3.28)
project(vectorscody)

set(CMAKE_CXX_STANDARD 17)

add_executable(vectorscody main.cpp
        vector.cpp
        vector.h)
