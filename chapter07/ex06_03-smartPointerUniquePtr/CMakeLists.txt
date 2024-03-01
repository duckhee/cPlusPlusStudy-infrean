cmake_minimum_required(VERSION 3.2.6)

project(ex0603SmartPointerUniquePtr LANGUAGES CXX)

message("ex06-03 smart pointer unique_ptr")

add_executable(ex0603SmartPointerUniquePtr)

target_sources(ex0603SmartPointerUniquePtr PRIVATE main.cpp)

set_target_properties(ex0603SmartPointerUniquePtr PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
