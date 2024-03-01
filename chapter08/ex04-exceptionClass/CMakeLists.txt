cmake_minimum_required(VERSION 3.2.6)

project(ex04ExceptionClass LANGUAGES CXX)

message("ex04 exception class")

add_executable(ex04ExceptionClass)

target_sources(ex04ExceptionClass PRIVATE main.cpp)

set_target_properties(ex04ExceptionClass PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)