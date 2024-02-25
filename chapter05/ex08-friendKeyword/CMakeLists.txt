cmake_minimum_required(VERSION 3.2.6)

project(ex08FriendKeyword LANGUAGES CXX)

message("ex08 friend keyword")

add_executable(ex08FriendKeyword)

target_sources(ex08FriendKeyword PRIVATE main.cpp)

set_target_properties(ex08FriendKeyword PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)