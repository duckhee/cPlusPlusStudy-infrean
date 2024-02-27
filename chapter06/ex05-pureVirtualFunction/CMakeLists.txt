cmake_minimum_required(VERSION 3.2.6)

project(ex05PureVirtualFunction LANGUAGES CXX)

message("ex05 pure virtual function")

add_executable(ex05PureVirtualFunction)

target_sources(ex05PureVirtualFunction PRIVATE main.cpp)

set_target_properties(ex05PureVirtualFunction PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)