cmake_minimum_required(VERSION 3.2.6)

project(ex01Variable LANGUAGES CXX)

message("chapter02-01-01 variable")

add_executable(ex01Variable)

target_sources(ex01Variable PRIVATE main.cpp)

set_target_properties(ex01Variable PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)