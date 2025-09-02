cmake_minimum_required(VERSION 3.27)

project(ex03TemplateArray LANGUAGES CXX)

message("ex03 template static member and used")

add_executable(ex03TemplateArray)

target_sources(ex03TemplateArray  PRIVATE main.cpp)

set_target_properties(ex03TemplateArray PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)