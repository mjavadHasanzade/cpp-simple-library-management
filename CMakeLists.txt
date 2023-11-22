cmake_minimum_required(VERSION 3.21)
project(library)

set(CMAKE_CXX_STANDARD 14)

add_executable(library main.cpp library.cpp library.h)
