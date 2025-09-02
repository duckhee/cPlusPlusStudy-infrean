cmake_minimum_required(VERSION 3.27)

project(ex02VirtualDestructor LANGUAGES CXX)

message("ex02 virtual destructor")

add_executable(ex02VirtualDestructor)

target_sources(ex02VirtualDestructor PRIVATE main.cpp)

set_target_properties(ex02VirtualDestructor PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)