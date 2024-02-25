cmake_minimum_required(VERSION 3.2.6)

project(ex11OverRide LANGUAGES CXX)

message("ex11 over ride example")

add_executable(ex11OverRide)

target_sources(ex11OverRide PRIVATE main.cpp)

set_target_properties(ex11OverRide PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
