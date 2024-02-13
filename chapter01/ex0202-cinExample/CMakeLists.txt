cmake_minimum_required(VERSION 3.2.6)

project(ex0202CinExample LANGUAGES CXX)

message("chapter01-02-02 cin example")

add_executable(ex0202CinExample)

target_sources(ex0202CinExample PRIVATE main.cpp)

set_target_properties(ex0202CinExample PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)