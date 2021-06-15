cmake_minimum_required(VERSION 3.8.2)

project(vmFlightPlanner C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(${SlangTypeLibrary_DIR} SlangTypeLibrary)

add_subdirectory(${SB_Type_Library_DIR} SB_Type_Library)

add_executable(vmFlightPlanner 
               vmFlightPlanner.c
               simple_v4.c
               simple_v4.h
               vm_utils.h
               vm_utils.c)

target_link_libraries(vmFlightPlanner
                      SB_Type_Library
                      SlangTypeLibrary
                      -static-libgcc -static)