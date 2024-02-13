cmake_minimum_required(VERSION 3.2.6)

project(ex02CoutExample LANGUAGES CXX)

message("chapter01-02 cout example")

add_executable(ex02CoutExample)

target_sources(ex02CoutExample PRIVATE main.cpp)

set_target_properties(ex02CoutExample PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)