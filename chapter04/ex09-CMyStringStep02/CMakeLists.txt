cmake_minimum_required(VERSION 3.27)

project(ExampleCMyStringStep02 LANGUAGES CXX)

message("chapter04 example step02 CMyString")

add_executable(ExampleCMyStringStep02)

target_sources(ExampleCMyStringStep02 PRIVATE main.cpp CMyString.h CMyString.cpp)

set_target_properties(ExampleCMyStringStep02 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
