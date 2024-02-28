cmake_minimum_required(VERSION 3.2.6)

project(ex09MultiInheritance LANGUAGES CXX)

message("ex09 multi inheritance")

add_executable(ex09MultiInheritance)

target_sources(ex09MultiInheritance PRIVATE main.cpp)

set_target_properties(ex09MultiInheritance PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)