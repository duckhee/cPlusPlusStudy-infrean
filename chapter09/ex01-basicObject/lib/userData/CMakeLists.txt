cmake_minimum_required(VERSION 3.27)

project(ex01UserData LANGUAGES CXX)

message("chapter09 example01 user data lib")

add_library(ex01UserData STATIC)

target_include_directories(ex01UserData PUBLIC inc)

target_sources(ex01UserData PRIVATE src/userData.cpp)

set_target_properties(ex01UserData PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)