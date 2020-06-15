cmake_minimum_required(VERSION 3.8.2)

project(vmdst_process C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(${SlangTypeLibrary_DIR} SlangTypeLibrary)

add_subdirectory(${SB_Type_Library_DIR} SB_Type_Library)

add_executable(vmdst_process vmdst_process.c)

target_link_libraries(vmdst_process
                      SB_Type_Library
                      SlangTypeLibrary
                      -static-libgcc -static)