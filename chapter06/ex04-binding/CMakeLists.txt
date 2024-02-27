cmake_minimum_required(VERSION 3.2.6)

project(ex04Binding LANGUAGES CXX)

message("ex04 binding")

add_executable(ex04Binding)

target_sources(ex04Binding PRIVATE main.cpp)

set_target_properties(ex04Binding PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)