cmake_minimum_required(VERSION 3.27)

project(ex0802DynamicCasting LANGUAGES CXX)

message("ex08-02 dynamic casting")

add_executable(ex0802DynamicCasting)

target_sources(ex0802DynamicCasting PRIVATE main.cpp)

set_target_properties(ex0802DynamicCasting PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)