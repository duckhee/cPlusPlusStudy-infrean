cmake_minimum_required(VERSION 3.27)

project(ex02oopAddressBookStep02 LANGUAGES CXX)

message("ex02 basic object step02")

add_executable(ex02oopAddressBookStep02)

target_sources(ex02oopAddressBookStep02 PRIVATE main.cpp MyList.h MyList.cpp MyNode.h MyNode.cpp UserData.h UserData.cpp UserInterface.h UserInterface.cpp)

set_target_properties(ex02oopAddressBookStep02 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)