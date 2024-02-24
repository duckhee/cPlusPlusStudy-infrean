cmake_minimum_required(VERSION 3.2.6)

project(ex18MoveSemantics LANGUAGES CXX)

message("chapter04-18 move semantics")

add_executable(ex18MoveSemantics)

target_sources(ex18MoveSemantics PRIVATE main.cpp)

set_target_properties(ex18MoveSemantics PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)