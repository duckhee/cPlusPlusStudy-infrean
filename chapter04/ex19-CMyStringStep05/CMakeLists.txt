cmake_minimum_required(VERSION 3.27)

project(ExampleCMyStringStep05 LANGUAGES CXX)

message("chapter04 example CMyString step 05")

add_executable(ExampleCMyStringStep05)

target_sources(ExampleCMyStringStep05 PRIVATE main.cpp CMyString.cpp CMyString.h)

set_target_properties(ExampleCMyStringStep05 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)