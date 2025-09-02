cmake_minimum_required(VERSION 3.27)

project(ex03StackUnwinding LANGUAGES CXX)

message("ex03 stack unwinding")

add_executable(ex03StackUnwinding)

target_sources(ex03StackUnwinding PRIVATE main.cpp)

set_target_properties(ex03StackUnwinding PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)