cmake_minimum_required(VERSION 3.27)

project(ex03RvalueRef LANGUAGES CXX)

message("chapter02-03 r-value ref")

add_executable(ex03RvalueRef)

target_sources(ex03RvalueRef PRIVATE main.cpp)

set_target_properties(ex03RvalueRef PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)