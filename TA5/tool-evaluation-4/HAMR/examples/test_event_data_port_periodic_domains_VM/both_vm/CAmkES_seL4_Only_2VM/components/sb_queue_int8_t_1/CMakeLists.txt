cmake_minimum_required(VERSION 3.7.2)

project(sb_queue_int8_t_1 C)

add_library(sb_queue_int8_t_1 EXCLUDE_FROM_ALL sb_queue_int8_t_1.c)

# Assume that if the muslc target exists then this project is in an seL4 native
# component build environment, otherwise it is in a linux userlevel environment.
# In the linux userlevel environment, the C library will be linked automatically.
if(TARGET muslc)
	target_link_libraries(sb_queue_int8_t_1 muslc)
endif()

target_include_directories(sb_queue_int8_t_1 PUBLIC includes)
