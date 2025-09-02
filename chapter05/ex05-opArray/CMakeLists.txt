cmake_minimum_required(VERSION 3.27)

project(ex05opArray LANGUAGES CXX)

message("ex05 operator array redefine")

add_executable(ex05opArray)

target_sources(ex05opArray PRIVATE main.cpp)

set_target_properties(ex05opArray PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
