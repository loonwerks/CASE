# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project(SB_Type_Library)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Werror)


add_library(SB_Type_Library
            EXCLUDE_FROM_ALL
            src/sb_queue_int8_t_1.c
            src/sp_int8_t.c)


# Assume that if the muslc target exists then this project is in an seL4 native
# component build environment, otherwise it is in a linux userlevel environment.
# In the linux userlevel environment, the C library will be linked automatically.
if(TARGET muslc)
	target_link_libraries(SB_Type_Library muslc)
endif()

target_include_directories(SB_Type_Library
                           PUBLIC PUBLIC includes
                           )
