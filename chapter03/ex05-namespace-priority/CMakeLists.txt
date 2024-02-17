cmake_minimum_required(VERSION 3.2.6)

project(ex05NamespacePriority LANGUAGES CXX)

message("chapter03-05 namespace priority")

add_executable(ex05NamespacePriority)

target_sources(ex05NamespacePriority PRIVATE main.cpp)

set_target_properties(ex05NamespacePriority PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)