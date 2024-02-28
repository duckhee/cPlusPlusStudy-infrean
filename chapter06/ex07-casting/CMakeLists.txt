cmake_minimum_required(VERSION 3.2.6)

project(ex07Casting LANGUAGES CXX)

message("ex07 casting")

add_executable(ex07Casting)

target_sources(ex07Casting PRIVATE main.cpp)

set_target_properties(ex07Casting PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)