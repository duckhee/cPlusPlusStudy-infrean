cmake_minimum_required(VERSION 3.27)

project(ex01VirtualKeyword LANGUAGES CXX)

message("ex01 virtual keyword")

add_executable(ex01VirtualKeyword)

target_sources(ex01VirtualKeyword PRIVATE main.cpp)

set_target_properties(ex01VirtualKeyword PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)