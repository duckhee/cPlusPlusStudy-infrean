cmake_minimum_required(VERSION 3.27)

project(ex06UnaryOperator LANGUAGES CXX)

message("ex06 unary operation redefine")

add_executable(ex06UnaryOperator)

target_sources(ex06UnaryOperator PRIVATE main.cpp)

set_target_properties(ex06UnaryOperator PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)