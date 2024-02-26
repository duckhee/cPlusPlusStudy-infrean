cmake_minimum_required(VERSION 3.2.6)

project(ex14InheritanceSelectConstructor LANGUAGES CXX)

message("ex14 inheritance select constructor")

add_executable(InheritanceSelectConstructor)

target_sources(InheritanceSelectConstructor PRIVATE main.cpp)

set_target_properties(InheritanceSelectConstructor PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)