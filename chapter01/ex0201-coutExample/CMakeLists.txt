cmake_minimum_required(VERSION 3.27)
project(ex0201CoutExample LANGUAGES CXX)

message("chapter01-02 cout example")

add_executable(ex0201CoutExample)

target_sources(ex0201CoutExample PRIVATE main.cpp)

set_target_properties(ex0201CoutExample PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)