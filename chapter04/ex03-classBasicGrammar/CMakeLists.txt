cmake_minimum_required(VERSION 3.2.6)

project(ex03classBasicGrammar LANGUAGES CXX)

message("chapter04-03 class basic grammar")

add_executable(ex03classBasicGrammar)

target_sources(ex03classBasicGrammar PRIVATE main.cpp)

set_target_properties(ex03classBasicGrammar PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)