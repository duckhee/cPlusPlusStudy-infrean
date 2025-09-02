cmake_minimum_required(VERSION 3.27)

project(ex03OpAssignReturnValue LANGUAGES CXX)

message("ex03 operator assign return value")

add_executable(ex03OpAssignReturnValue)

target_sources(ex03OpAssignReturnValue PRIVATE main.cpp)

set_target_properties(ex03OpAssignReturnValue PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)