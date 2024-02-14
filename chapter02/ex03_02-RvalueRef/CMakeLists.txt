cmake_minimum_required(VERSION 3.2.6)

project(ex0302RvalueRef LANGUAGES C)

message("chapter02-03 r-value ref c")

add_executable(ex0302RvalueRef)

target_sources(ex0302RvalueRef PRIVATE main.c)

set_target_properties(ex0302RvalueRef PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)