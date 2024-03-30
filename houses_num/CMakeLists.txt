cmake_minimum_required(VERSION 3.10)
project(sea)
add_executable(sea main.cpp)
target_link_libraries(sea gtest)