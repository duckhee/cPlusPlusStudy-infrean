cmake_minimum_required(VERSION 3.27)


project(ExampleCMyStringStep07 LANGUAGES CXX)

message("chapter05 example CMyString step 07")

add_executable(ExampleCMyStringStep07)

target_sources(ExampleCMyStringStep07 PRIVATE main.cpp CMyString.h CMyString.cpp)

set_target_properties(ExampleCMyStringStep07 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)