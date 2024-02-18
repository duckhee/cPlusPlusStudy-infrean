cmake_minimum_required(VERSION 3.2.6)

project(ex04ClassConstructorDestructor LANGUAGES CXX)

message("chapter04-04 class constructor and destructor")

add_executable(ex04ClassConstructorDestructor)

target_sources(ex04ClassConstructorDestructor PRIVATE main.cpp)

set_target_properties(ex04ClassConstructorDestructor PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)