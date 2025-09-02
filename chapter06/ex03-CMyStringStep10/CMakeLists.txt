cmake_minimum_required(VERSION 3.27)

project(ExampleCMyStringStep10 LANGUAGES CXX)

message("chapter05 example CMyString step 10")

add_executable(ExampleCMyStringStep10)

target_sources(ExampleCMyStringStep10 PRIVATE main.cpp CMyString.h CMyString.cpp CMyStringFilter.h CMyStringFilter.cpp)

set_target_properties(ExampleCMyStringStep10 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)