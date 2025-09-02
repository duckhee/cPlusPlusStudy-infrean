cmake_minimum_required(VERSION 3.27)

project(ex04OperatorFunctionRedefine LANGUAGES CXX)

message("ex04 operator function redefine")

add_executable(ex04OperatorFunctionRedefine)

target_sources(ex04OperatorFunctionRedefine PRIVATE main.cpp)

set_target_properties(ex04OperatorFunctionRedefine PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)