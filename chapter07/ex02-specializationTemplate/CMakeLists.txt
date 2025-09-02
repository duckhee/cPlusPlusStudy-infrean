cmake_minimum_required(VERSION 3.27)

project(ex02SpecializationTemplate LANGUAGES CXX)

message("ex02 specialization class template")

add_executable(ex02SpecializationTemplate)

target_sources(ex02SpecializationTemplate PRIVATE main.cpp)

set_target_properties(ex02SpecializationTemplate PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)