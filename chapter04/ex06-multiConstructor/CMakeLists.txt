cmake_minimum_required(VERSION 3.2.6)

project(ex06MultiConstructor LANGUAGES CXX)

message("chapter04-06 multi constructor")

add_executable(ex06MultiConstructor)

target_sources(ex06MultiConstructor PRIVATE main.cpp)

set_target_properties(ex06MultiConstructor PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)