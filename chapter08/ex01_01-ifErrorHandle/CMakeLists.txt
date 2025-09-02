cmake_minimum_required(VERSION 3.27)

project(ex0101IfErrorHandling LANGUAGES CXX)

message("ex01-01 if error handle")

add_executable(ex0101IfErrorHandling)

target_sources(ex0101IfErrorHandling PRIVATE main.cpp)

set_target_properties(ex0101IfErrorHandling PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)