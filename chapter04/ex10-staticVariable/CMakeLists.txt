cmake_minimum_required(VERSION 3.27)

project(ex10StaticMember LANGUAGES CXX)

message("chapter04-10 static member")

add_executable(ex10StaticMember)

target_sources(ex10StaticMember PRIVATE main.cpp)

set_target_properties(ex10StaticMember PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)