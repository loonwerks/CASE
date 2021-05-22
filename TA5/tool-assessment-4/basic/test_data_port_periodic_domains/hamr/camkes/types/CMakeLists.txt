# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project(SB_Type_Library)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Werror)

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fstack-usage)
  add_compile_options("$<$<CONFIG:Release>:-Os>")
endif()

add_library(SB_Type_Library
            src/sp_union_art_DataContent.c)

# Assume that if the muslc target exists then this project is in an seL4 native
# component build environment, otherwise it is in a linux userlevel environment.
# In the linux userlevel environment, the C library will be linked automatically.
if(TARGET muslc)
  target_link_libraries(SB_Type_Library
                        muslc)
endif()

add_definitions(-DCAMKES)

if(TARGET SlangTypeLibrary)
  target_link_libraries(SB_Type_Library
                        SlangTypeLibrary)
endif()

target_include_directories(SB_Type_Library
                           PUBLIC includes)
