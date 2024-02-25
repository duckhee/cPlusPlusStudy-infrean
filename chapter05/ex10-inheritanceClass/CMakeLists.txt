cmake_minimum_required(VERSION 3.2.6)

project(ex10InheritanceClass LANGUAGES CXX)

message("ex10 inheritance class")

add_executable(ex10InheritanceClass)

target_sources(ex10InheritanceClass PRIVATE main.cpp)

set_target_properties(ex10InheritanceClass PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)