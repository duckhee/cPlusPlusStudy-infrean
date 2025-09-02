cmake_minimum_required(VERSION 3.27)

project(ex02MultiCatch LANGUAGES CXX)

message("ex02 multi catch")

add_executable(ex02MultiCatch)

target_sources(ex02MultiCatch PRIVATE main.cpp)

set_target_properties(ex02MultiCatch PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)