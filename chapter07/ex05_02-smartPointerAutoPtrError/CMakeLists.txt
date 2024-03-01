cmake_minimum_required(VERSION 3.2.6)

project(ex0502SmartPointerAutoPtrError LANGUAGES CXX)

message("ex05-02 smart pointer auto ptr error")

add_executable(ex0502SmartPointerAutoPtrError)

target_sources(ex0502SmartPointerAutoPtrError PRIVATE main.cpp)

set_target_properties(ex0502SmartPointerAutoPtrError PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)