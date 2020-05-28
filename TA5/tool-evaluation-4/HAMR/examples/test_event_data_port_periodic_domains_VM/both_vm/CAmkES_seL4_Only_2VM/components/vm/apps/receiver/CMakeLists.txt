cmake_minimum_required(VERSION 3.8.2)

project(receiver C)
set(CMAKE_C_STANDARD 11)

add_subdirectory(${QUEUE_LIB} sb_queue_int8_t_1)
add_executable(receiver receiver.c)
target_link_libraries(receiver sb_queue_int8_t_1 -static-libgcc -static)
