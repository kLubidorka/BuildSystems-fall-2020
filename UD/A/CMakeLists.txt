cmake_minimum_required(VERSION 3.12)
project(A)

if(UNIX AND NOT APPLE)
    add_custom_command(
        OUTPUT index.h
        COMMAND sudo apt-get update && sudo apt-get install python3 && python3 ${PROJECT_SOURCE_DIR}/preparing.py
        DEPENDS ${PROJECT_SOURCE_DIR}/preparing.py
    )
endif (UNIX AND NOT APPLE)

if(APPLE)
    add_custom_command(
        OUTPUT index.h
        COMMAND brew update && brew upgrade && brew install python3 && python3 ${PROJECT_SOURCE_DIR}/preparing.py
        DEPENDS ${PROJECT_SOURCE_DIR}/preparing.py
    )
endif(APPLE)


add_custom_target(gen_index DEPENDS index.h)
