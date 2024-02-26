cmake_minimum_required(VERSION 3.2.6)

project(ex0801ObjAggregation LANGUAGES CXX)

message("ex08-01 Object Oriented Programming Aggregation")

add_executable(ex0801ObjAggregation)

target_sources(ex0801ObjAggregation PRIVATE main.cpp)

set_target_properties(ex0801ObjAggregation PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)