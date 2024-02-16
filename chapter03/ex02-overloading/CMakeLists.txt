cmake_minimum_required(VERSION 3.2.6)

project(ex02OverLoading LANGUAGES CXX)

message("chapter03-02 overloading")

add_executable(ex02OverLoading)

target_sources(ex02OverLoading PRIVATE main.cpp)

set_target_properties(ex02OverLoading PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)