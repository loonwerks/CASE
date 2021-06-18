cmake_minimum_required(VERSION 3.8.2)

project(vmRADIO C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(${SlangTypeLibrary_DIR} SlangTypeLibrary)

add_subdirectory(${SB_Type_Library_DIR} SB_Type_Library)

add_executable(vmRADIO 
               vmRADIO.c
               vm_utils.h
               vm_utils.c)

target_link_libraries(vmRADIO
                      SB_Type_Library
                      SlangTypeLibrary
                      -static-libgcc -static)