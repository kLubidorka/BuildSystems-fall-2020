cmake_minimum_required(VERSION 3.12)
project(UD)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_subdirectory(A)
add_subdirectory(B)
add_subdirectory(C)

