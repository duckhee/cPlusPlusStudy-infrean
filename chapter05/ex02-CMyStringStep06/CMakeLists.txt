cmake_minimum_required(VERSION 3.27)

project(ExampleCMyStringStep06)

message("chapter05 example CMyString step 06")

add_executable(ExampleCMyStringStep06)

target_sources(ExampleCMyStringStep06 PRIVATE main.cpp CMyString.h CMyString.cpp)

set_target_properties(ExampleCMyStringStep06 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)