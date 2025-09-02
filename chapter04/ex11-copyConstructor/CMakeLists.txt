cmake_minimum_required(VERSION 3.27)

project(ex11CopyConstructor LANGUAGES CXX)

message("chapter04-11 copy constructor")

add_executable(ex11CopyConstructor)

target_sources(ex11CopyConstructor PRIVATE main.cpp)

set_target_properties(ex11CopyConstructor PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)