cmake_minimum_required(VERSION 3.27)

project(ex17RvalueReferenceError LANGUAGES CXX)

message("chapter04-17-02 R-value Error")

add_executable(ex17RvalueReferenceError)

target_sources(ex17RvalueReferenceError PRIVATE main.cpp)

set_target_properties(ex17RvalueReferenceError PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)