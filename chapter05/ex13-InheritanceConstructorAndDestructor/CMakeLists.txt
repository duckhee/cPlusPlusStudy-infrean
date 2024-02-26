cmake_minimum_required(VERSION 3.2.6)

project(InheritanceConstructorAndDestructor LANGUAGES CXX)

message("ex13 - inheritance constructor and destructor flow")

add_executable(InheritanceConstructorAndDestructor)


target_sources(InheritanceConstructorAndDestructor PRIVATE main.cpp)

set_target_properties(InheritanceConstructorAndDestructor PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)