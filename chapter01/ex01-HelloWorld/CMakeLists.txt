cmake_minimum_required(VERSION 3.27)
project(ex01ExampleHelloWorld LANGUAGES CXX)

message("chapter01 example 01 - hello world")

add_executable(ex01ExampleHelloWorld)

target_sources(ex01ExampleHelloWorld PRIVATE main.cpp)

set_target_properties(ex01ExampleHelloWorld PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)