cmake_minimum_required(VERSION 3.12)
project(A)

add_custom_command(
    OUTPUT index.h
    COMMAND python ${PROJECT_SOURCE_DIR}/preparing.py
    DEPENDS ${PROJECT_SOURCE_DIR}/preparing.py
)

add_custom_target(gen_index DEPENDS index.h)
