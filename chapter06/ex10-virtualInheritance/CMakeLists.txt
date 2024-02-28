cmake_minimum_required(VERSION 3.2.6)

project(ex10VirtualInheritance LANGUAGES CXX)

message("ex10 virtual inheritance")

add_executable(ex10VirtualInheritance)

target_sources(ex10VirtualInheritance PRIVATE main.cpp)

set_target_properties(ex10VirtualInheritance PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)