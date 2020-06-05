# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project(SB_Type_Library)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Werror)

set(HAMR_LIB_SlangTypeLibrary ${CMAKE_CURRENT_LIST_DIR}/../hamr/SlangTypeLibrary/sel4-build/libmain.a)

set(HAMR_INCLUDES_SlangTypeLibrary
  ../hamr/SlangTypeLibrary/library/org/sireum
  ../hamr/SlangTypeLibrary/library/art
  ../hamr/SlangTypeLibrary/library/CAmkES_seL4_VM
  ../hamr/SlangTypeLibrary/library/CAmkES_seL4_VM/Base_Types
  ../hamr/SlangTypeLibrary/library/CAmkES_seL4_VM/SlangTypeLibrary
  ../hamr/SlangTypeLibrary/runtime
)

add_library(SB_Type_Library
            EXCLUDE_FROM_ALL
            src/sb_queue_union_art_DataContent_1.c
            src/sb_queue_int8_t_1.c)

target_link_libraries(SB_Type_Library ${HAMR_LIB_SlangTypeLibrary})

# Assume that if the muslc target exists then this project is in an seL4 native
# component build environment, otherwise it is in a linux userlevel environment.
# In the linux userlevel environment, the C library will be linked automatically.
if(TARGET muslc)
	target_link_libraries(SB_Type_Library muslc)
endif()

target_include_directories(SB_Type_Library
                           PUBLIC PUBLIC includes
                           PUBLIC PUBLIC ${HAMR_INCLUDES_SlangTypeLibrary}
                           )
