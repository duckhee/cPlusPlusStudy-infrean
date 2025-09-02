cmake_minimum_required(VERSION 3.27)

project(ex0401VTable LANGUAGES CXX)

message("ex04-01 vtable")

add_executable(ex0401VTable)

target_sources(ex0401VTable PRIVATE main.cpp)

set_target_properties(ex0401VTable PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)