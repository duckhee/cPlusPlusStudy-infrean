cmake_minimum_required(VERSION 3.27)

project(ex01TemplateClass LANGUAGES CXX)

message("ex01 template class")

add_executable(ex01TemplateClass)

target_sources(ex01TemplateClass PRIVATE main.cpp)

set_target_properties(ex01TemplateClass PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)