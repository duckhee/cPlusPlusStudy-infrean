cmake_minimum_required(VERSION 3.2.6)

add_subdirectory(lib)

project(ex01BasicObject LANGUAGES CXX)

message("ex01 basic object step01")

add_executable(ex01BasicObject)

target_link_directories(ex01BasicObject PRIVATE lib/userData/inc)
target_link_libraries(ex01BasicObject LINK_PRIVATE ex01UserData)
target_link_directories(ex01BasicObject PRIVATE lib/userInterface/inc)
target_link_libraries(ex01BasicObject LINK_PRIVATE ex01UserInterface)
target_link_directories(ex01BasicObject PRIVATE lib/control/inc)
target_link_libraries(ex01BasicObject LINK_PRIVATE ex01DataControl)

target_sources(ex01BasicObject PRIVATE main.cpp)

set_target_properties(ex01BasicObject PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)