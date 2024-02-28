cmake_minimum_required(VERSION 3.2.6)

project(ex06InterfaceExample LANGUAGES CXX)

message("ex06 interface example")

add_executable(ex06InterfaceExample)

target_sources(ex06InterfaceExample PRIVATE main.cpp)

set_target_properties(ex06InterfaceExample PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)