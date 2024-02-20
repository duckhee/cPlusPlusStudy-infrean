cmake_minimum_required(VERSION 3.2.6)

project(ExampleCMyString LANGUAGES CXX)

message("chapter04 example cMyString")

add_executable(ExampleCMyString)

target_sources(ExampleCMyString PRIVATE main.cpp CMyString.h CMyString.cpp)


set_target_properties(ExampleCMyString PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)