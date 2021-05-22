cmake_minimum_required(VERSION 3.8.2)

project(vmproducer C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(${SlangTypeLibrary_DIR} SlangTypeLibrary)

add_subdirectory(${SB_Type_Library_DIR} SB_Type_Library)

add_executable(vmproducer 
               vmproducer.c
               vm_utils.h
               vm_utils.c)

target_link_libraries(vmproducer
                      SB_Type_Library
                      SlangTypeLibrary
                      -static-libgcc -static)