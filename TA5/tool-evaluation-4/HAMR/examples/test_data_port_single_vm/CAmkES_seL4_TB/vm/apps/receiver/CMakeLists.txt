cmake_minimum_required(VERSION 3.8.2)

project(receiver C)
set(CMAKE_C_STANDARD 11)

add_subdirectory(${QUEUE_LIB} queue)
add_executable(receiver receiver.c)
target_link_libraries(receiver queue -static-libgcc -static)
