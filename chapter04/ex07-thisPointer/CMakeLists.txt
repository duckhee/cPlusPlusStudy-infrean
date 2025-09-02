cmake_minimum_required(VERSION 3.27)

project(ex07ThisPointer LANGUAGES CXX)

message("chapter04-07 this pointer")

add_executable(ex07ThisPointer)

target_sources(ex07ThisPointer PRIVATE main.cpp)

set_target_properties(ex07ThisPointer PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)