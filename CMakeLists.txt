cmake_minimum_required(VERSION 3.15)

set (PROJECT_NAME cpp_primer_practice)
project(${PROJECT_NAME})

message("工程名: " ${PROJECT_NAME})
message("工程目录: " ${PROJECT_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(src/ch01)
add_subdirectory(src/ch02)
add_subdirectory(src/ch03)