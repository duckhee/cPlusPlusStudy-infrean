cmake_minimum_required(VERSION 3.27)

project(ex0602SmartPointerSharedPtrArray LANGUAGES CXX)

message("ex06-02 smart pointer shared pointer array ")

add_executable(ex0602SmartPointerSharedPtrArray)

target_sources(ex0602SmartPointerSharedPtrArray PRIVATE main.cpp)

set_target_properties(ex0602SmartPointerSharedPtrArray PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)