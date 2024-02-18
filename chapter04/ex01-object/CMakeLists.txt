cmake_minimum_required(VERSION 3.2.6)

project(ex01Object LANGUAGES CXX)

message("chapter04-01 object")

add_executable(ex01Object)

target_sources(ex01Object PRIVATE main.cpp)

set_target_properties(ex01Object PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)