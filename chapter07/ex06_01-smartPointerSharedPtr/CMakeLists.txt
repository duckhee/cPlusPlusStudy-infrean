cmake_minimum_required(VERSION 3.2.6)

project(ex0601SmartPointerSharedPtr LANGUAGES CXX)

message("ex06-01 smart pointer shared_ptr")

add_executable(ex0601SmartPointerSharedPtr)

target_sources(ex0601SmartPointerSharedPtr PRIVATE main.cpp)

set_target_properties(ex0601SmartPointerSharedPtr PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)