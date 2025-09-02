cmake_minimum_required(VERSION 3.27)

project(ExampleCMyStringStep09 LANGUAGES CXX)

message("chapter05 example CMyString step 09")

add_executable(ExampleCMyStringStep09)

target_sources(ExampleCMyStringStep09 PRIVATE main.cpp CMyString.h CMyString.cpp CMyStringFilter.h CMyStringFilter.cpp)

set_target_properties(ExampleCMyStringStep09 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)