cmake_minimum_required(VERSION 3.2.6)

project(ex05SmartPointerAutoPtr LANGUAGES CXX)

message("ex05 smart pointer auto_ptr")

add_executable(ex05SmartPointerAutoPtr)

target_sources(ex05SmartPointerAutoPtr PRIVATE main.cpp)

set_target_properties(ex05SmartPointerAutoPtr PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
