cmake_minimum_required(VERSION 3.2.6)

project(ex01OpArithmetic LANGUAGES CXX)

message("chapter05-01 operator arithmetic")

add_executable(ex01OpArithmetic)

target_sources(ex01OpArithmetic PRIVATE main.cpp)

set_target_properties(ex01OpArithmetic PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)