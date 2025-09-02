cmake_minimum_required(VERSION 3.27)

project(ex05ClassMemberVariableReset LANGUAGES CXX)

message("chapter04-05 class member variable reset")

add_executable(ex05ClassMemberVariableReset)

target_sources(ex05ClassMemberVariableReset PRIVATE main.cpp)

set_target_properties(ex05ClassMemberVariableReset PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)