cmake_minimum_required(VERSION 3.2.6)

project(ex0103TryCatchErrorHandling LANGUAGES CXX)

message("ex01-03 try catch error handling")

add_executable(ex0103TryCatchErrorHandling)

target_sources(ex0103TryCatchErrorHandling PRIVATE main.cpp)

set_target_properties(ex0103TryCatchErrorHandling PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)