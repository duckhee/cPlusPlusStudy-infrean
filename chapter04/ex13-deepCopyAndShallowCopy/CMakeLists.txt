cmake_minimum_required(VERSION 3.27)

project(ex13DeepCopyAndShallowCopy LANGUAGES CXX)

message("chapter04-13 deep copy and shallow copy")

add_executable(ex13DeepCopyAndShallowCopy)

target_sources(ex13DeepCopyAndShallowCopy PRIVATE main.cpp)

set_target_properties(ex13DeepCopyAndShallowCopy PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)