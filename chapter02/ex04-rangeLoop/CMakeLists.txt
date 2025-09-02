cmake_minimum_required(VERSION 3.27)

project(ex04RangLoop LANGUAGES CXX)

message("chapter02-04 range loop for (iterator)")

add_executable(ex04RangLoop)

target_sources(ex04RangLoop PRIVATE main.cpp)

set_target_properties(ex04RangLoop PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)