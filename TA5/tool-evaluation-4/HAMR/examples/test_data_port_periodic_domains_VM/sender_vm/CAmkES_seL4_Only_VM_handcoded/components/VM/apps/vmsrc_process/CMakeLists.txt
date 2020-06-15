cmake_minimum_required(VERSION 3.8.2)

project(vmsrc_process C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(${QUEUE_LIB} SB_Type_Library)

add_executable(vmsrc_process vmsrc_process.c)

target_link_libraries(vmsrc_process SB_Type_Library -static-libgcc -static)