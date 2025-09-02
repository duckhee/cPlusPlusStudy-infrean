cmake_minimum_required(VERSION 3.27)

project(ex0102GotoErrorHandling LANGUAGES CXX)

message("ex01-02 goto error handling")

add_executable(ex0102GotoErrorHandling)

target_sources(ex0102GotoErrorHandling PRIVATE main.cpp)

set_target_properties(ex0102GotoErrorHandling PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)