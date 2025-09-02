cmake_minimum_required(VERSION 3.27)

project(ex0902MultiInterface LANGUAGES CXX)

message("ex09-02 multi interface")

add_executable(ex0902MultiInterface)

target_sources(ex0902MultiInterface PRIVATE main.cpp)

set_target_properties(ex0902MultiInterface PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)