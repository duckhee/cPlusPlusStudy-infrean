cmake_minimum_required(VERSION 3.2.6)

project(ex0802ObjComposition LANGUAGES CXX)

message("ex08-02 Object Oriented Programming Composition")

add_executable(ex0802ObjComposition)

target_sources(ex0802ObjComposition PRIVATE main.cpp)

set_target_properties(ex0802ObjComposition PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)