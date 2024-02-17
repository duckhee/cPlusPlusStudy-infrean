cmake_minimum_required(VERSION 3.2.6)

project(ex0402NestNamespace LANGUAGES CXX)

message("chapter03-04-02 nest namespace")

add_executable(ex0402NestNamespace)

target_sources(ex0402NestNamespace PRIVATE main.cpp)

set_target_properties(ex0402NestNamespace PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)