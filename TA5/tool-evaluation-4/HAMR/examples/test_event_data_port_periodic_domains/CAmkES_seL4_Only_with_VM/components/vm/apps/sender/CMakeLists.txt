cmake_minimum_required(VERSION 3.8.2)

project(sender C)
set(CMAKE_C_STANDARD 11)

add_subdirectory(${QUEUE_LIB} sb_queue_int8_t_1)
add_executable(sender sender.c)
#target_link_libraries(sender queue -static-libgcc -static)
target_link_libraries(sender sb_queue_int8_t_1 -static-libgcc -static)
