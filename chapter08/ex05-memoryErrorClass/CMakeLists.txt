cmake_minimum_required(VERSION 3.27)

project(ex05MemoryErrorClass LANGUAGES CXX)

message("ex05 memory allocate error class")

add_executable(ex05MemoryErrorClass)

target_sources(ex05MemoryErrorClass PRIVATE main.cpp)

set_target_properties(ex05MemoryErrorClass PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)