cmake_minimum_required(VERSION 3.2.6)

project(ex1701RvalueReference LANGUAGES CXX)

message("chapter04-17-01 r-value reference")

add_executable(ex1701RvalueReference)

target_sources(ex1701RvalueReference PRIVATE main.cpp)

set_target_properties(ex1701RvalueReference PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)