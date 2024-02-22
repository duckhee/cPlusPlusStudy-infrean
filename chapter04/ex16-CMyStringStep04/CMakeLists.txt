cmake_minimum_required(VERSION 3.2.6)

project(ExampleCMyStringStep04 LANGUAGES CXX)

message("chapter04 example CMyString step 03")

add_executable(ExampleCMyStringStep04)

target_sources(ExampleCMyStringStep04 PRIVATE main.cpp CMyString.h CMyString.cpp)

set_target_properties(ExampleCMyStringStep04 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)