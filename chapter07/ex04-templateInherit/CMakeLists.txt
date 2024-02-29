cmake_minimum_required(VERSION 3.2.6)

project(ex04TemplateInherit LANGUAGES CXX)

message("ex04 template inheritance")

add_executable(ex04TemplateInherit)

target_sources(ex04TemplateInherit PRIVATE main.cpp)

set_target_properties(ex04TemplateInherit PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)