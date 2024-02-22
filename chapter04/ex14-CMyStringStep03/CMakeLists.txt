cmake_minimum_required(VERSION 3.2.6)

project(ExampleCMyStringStep03 LANGUAGES CXX)

message("chapter04 example CMyString step 03")

add_executable(ExampleCMyStringStep03)

target_sources(ExampleCMyStringStep03 PRIVATE main.cpp CMyString.h CMyString.cpp)

set_target_properties(ExampleCMyStringStep03 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)