cmake_minimum_required(VERSION 3.2.6)

project(ex03oopAddressBookStep03 LANGUAGES CXX)

message("ex02 basic object step02")

add_executable(ex03oopAddressBookStep03)

target_sources(ex03oopAddressBookStep03 PRIVATE main.cpp MyList.h MyList.cpp MyNode.h MyNode.cpp UserData.h UserData.cpp UserInterface.h UserInterface.cpp MyIterator.h MyIterator.cpp MyListEx.h MyListEx.cpp MyString.h MyString.cpp)

set_target_properties(ex03oopAddressBookStep03 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)