cmake_minimum_required(VERSION 3.27)

project(ex0401Namespace LANGUAGES CXX)

message("chapter03-04 namespace")

add_executable(ex0401Namespace)

target_sources(ex0401Namespace PRIVATE main.cpp)

set_target_properties(ex0401Namespace PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)