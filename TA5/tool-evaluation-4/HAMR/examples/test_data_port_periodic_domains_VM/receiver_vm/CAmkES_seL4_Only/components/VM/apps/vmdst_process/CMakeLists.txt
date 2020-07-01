cmake_minimum_required(VERSION 3.8.2)

project(vmdst_process C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(${SB_Type_Library_DIR} SB_Type_Library)

add_library(vmdst_process_lib STATIC
            vmdst_process.c
            consumer.c
            includes/sb_consumer_t_impl.h)

target_include_directories(vmdst_process_lib
                           PUBLIC PUBLIC includes)
                         
target_link_libraries(vmdst_process_lib
                      SB_Type_Library
                      -static-libgcc -static)
                      
add_executable(vmdst_process vmdst_process.c)

target_link_libraries(vmdst_process LINK_PUBLIC vmdst_process_lib)
