cmake_minimum_required(VERSION 3.2.6)

project(ex02RefAndPointer LANGUAGES CXX)

message("chapter02-02 reference and pointer")

add_executable(ex02RefAndPointer)

target_sources(ex02RefAndPointer PRIVATE main.cpp)

set_target_properties(ex02RefAndPointer PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)