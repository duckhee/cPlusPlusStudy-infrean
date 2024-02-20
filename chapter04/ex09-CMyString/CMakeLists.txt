cmake_minimum_required(VERSION 3.2.6)

project(ex09CMyString LANGUAGES CXX)

message("chapter04 example step02 CMyString")

add_executable(ex09CMyString)

target_sources(ex09CMyString PRIVATE main.cpp CMyString.h CMyString.cpp)

set_target_properties(ex09CMyString PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
