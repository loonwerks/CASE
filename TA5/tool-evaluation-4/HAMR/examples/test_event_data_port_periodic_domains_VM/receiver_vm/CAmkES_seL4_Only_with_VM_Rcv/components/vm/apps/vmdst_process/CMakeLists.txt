cmake_minimum_required(VERSION 3.8.2)

project(receiver C)
set(CMAKE_C_STANDARD 11)

add_subdirectory(${QUEUE_LIB} SB_Type_Library)
add_executable(vmdst_process vmdst_process.c)

target_link_libraries(vmdst_process SB_Type_Library -static-libgcc -static)
