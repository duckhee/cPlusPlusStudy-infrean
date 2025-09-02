cmake_minimum_required(VERSION 3.27)

project(ex02cStyleCcode LANGUAGES C)

message("chapter04-02 c code")

add_executable(ex02cStyleCcode)

target_sources(ex02cStyleCcode PRIVATE main.c)

set_target_properties(ex02cStyleCcode PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)