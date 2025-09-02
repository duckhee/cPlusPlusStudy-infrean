cmake_minimum_required(VERSION 3.27)

project(ex01DataControl LANGUAGES CXX)

message("chapter09 example01 data control lib")

add_library(ex01DataControl STATIC)

target_link_directories(ex01DataControl PRIVATE ../userData/inc)

target_link_libraries(ex01DataControl LINK_PRIVATE ex01UserData)

target_include_directories(ex01DataControl PUBLIC inc)

target_sources(ex01DataControl PRIVATE src/myList.cpp)

set_target_properties(ex01DataControl PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)