cmake_minimum_required(VERSION 3.2.6)

project(ex02RefAndPointerCLanguage LANGUAGES C)

message("chapter02-02 reference and pointer language C")

add_executable(ex02RefAndPointerCLanguage)

target_sources(ex02RefAndPointerCLanguage PRIVATE main.c)

set_target_properties(ex02RefAndPointerCLanguage PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)