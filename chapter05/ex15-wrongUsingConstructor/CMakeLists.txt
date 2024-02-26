cmake_minimum_required(VERSION 3.2.6)

project(ex15WrongUsingConstructor LANGUAGES CXX)

message("ex15 wrong using constructor")

add_executable(ex15WrongUsingConstructor)

target_sources(ex15WrongUsingConstructor PRIVATE main.cpp)

set_target_properties(ex15WrongUsingConstructor PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)