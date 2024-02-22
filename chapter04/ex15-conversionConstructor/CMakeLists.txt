cmake_minimum_required(VERSION 3.2.6)

project(ex15ConversionConstructor LANGUAGES CXX)

message("chapter04-15 conversion constructor")

add_executable(ex15ConversionConstructor)

target_sources(ex15ConversionConstructor PRIVATE main.cpp)

set_target_properties(ex15ConversionConstructor PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)