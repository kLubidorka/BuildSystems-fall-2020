cmake_minimum_required(VERSION 3.12)
project(C)

include_directories(${CMAKE_SOURCE_DIR}/A)
include_directories(${CMAKE_SOURCE_DIR}/B)
include_directories(${CMAKE_BINARY_DIR})
include_directories(${CMAKE_SOURCE_DIR})

add_executable(C main.cpp)
target_link_libraries(C lib)
add_dependencies(C gen_index)

