cmake_minimum_required(VERSION 3.2.6)

project(ex03FunctionTemplate LANGUAGES CXX)

message("chapter03-03 function template")

add_executable(ex03FunctionTemplate)

target_sources(ex03FunctionTemplate PRIVATE main.cpp)

set_target_properties(ex03FunctionTemplate PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)