cmake_minimum_required(VERSION 3.2.6)

project(ex01DefaultParameter LANGUAGES CXX)

message("chapter03-01 default parameter")

add_executable(ex01DefaultParameter)

target_sources(ex01DefaultParameter PRIVATE main.cpp)

set_target_properties(ex01DefaultParameter PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
