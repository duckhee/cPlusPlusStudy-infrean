cmake_minimum_required(VERSION 3.27)
project(ex01VariableArray LANGUAGES CXX)

message("chapter02-01-02 variable array")

add_executable(ex01VariableArray)

target_sources(ex01VariableArray PRIVATE main.cpp)

set_target_properties(ex01VariableArray PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)