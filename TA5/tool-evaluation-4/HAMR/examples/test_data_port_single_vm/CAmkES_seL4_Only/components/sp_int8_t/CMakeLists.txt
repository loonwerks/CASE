cmake_minimum_required(VERSION 3.7.2)

project(sp_int8_t C)

add_library(sp_int8_t EXCLUDE_FROM_ALL sp_int8_t.c)

# Assume that if the muslc target exists then this project is in an seL4 native
# component build environment, otherwise it is in a linux userlevel environment.
# In the linux userlevel environment, the C library will be linked automatically.
if(TARGET muslc)
	target_link_libraries(sp_int8_t muslc)
endif()

target_include_directories(sp_int8_t PUBLIC includes)
