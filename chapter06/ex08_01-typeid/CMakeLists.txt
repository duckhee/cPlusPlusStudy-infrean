cmake_minimum_required(VERSION 3.27)

project(ex08TypeId LANGUAGES CXX)

message("ex08 type id dynamic_cast<>")

add_executable(ex08TypeId)

target_sources(ex08TypeId PRIVATE main.cpp)

set_target_properties(ex08TypeId PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)