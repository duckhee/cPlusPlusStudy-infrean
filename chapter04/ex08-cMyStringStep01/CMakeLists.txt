cmake_minimum_required(VERSION 3.27)

project(ExampleCMyStringStep01 LANGUAGES CXX)

message("chapter04 example cMyString")

add_executable(ExampleCMyStringStep01)

target_sources(ExampleCMyStringStep01 PRIVATE main.cpp CMyString.h CMyString.cpp)


set_target_properties(ExampleCMyStringStep01 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)