cmake_minimum_required(VERSION 3.2.6)

project(ExampleCMyStringStep08 LANGUAGES CXX)

message("chapter05 example CMyString step 08")

add_executable(ExampleCMyStringStep08)

target_sources(ExampleCMyStringStep08 PRIVATE main.cpp CMyString.h CMyString.cpp)

set_target_properties(ExampleCMyStringStep08 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)