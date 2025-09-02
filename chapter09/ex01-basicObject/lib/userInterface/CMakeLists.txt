cmake_minimum_required(VERSION 3.27)

project(ex01UserInterface LANGUAGES CXX)

message("chapter09 example01 user interface lib")

add_library(ex01UserInterface STATIC)

target_link_directories(ex01UserInterface PRIVATE ../control/inc)

target_link_libraries(ex01UserInterface LINK_PRIVATE ex01DataControl)

target_link_directories(ex01UserInterface PRIVATE ../userData/inc)

target_link_libraries(ex01UserInterface LINK_PRIVATE ex01UserData)

target_include_directories(ex01UserInterface PUBLIC inc)

target_sources(ex01UserInterface PRIVATE src/userInterface.cpp)

set_target_properties(ex01UserInterface PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)