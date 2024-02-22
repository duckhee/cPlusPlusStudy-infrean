cmake_minimum_required(VERSION 3.2.6)

project(ex12TempObjAndCopyConstructor LANGUAGES CXX)

message("chapter04-12 temp obj and copy constructor")

add_executable(ex12TempObjAndCopyConstructor)

target_sources(ex12TempObjAndCopyConstructor PRIVATE main.cpp)

set_target_properties(ex12TempObjAndCopyConstructor PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)