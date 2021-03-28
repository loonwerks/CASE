# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

add_definitions(-DCAMKES)

include(${CMAKE_CURRENT_LIST_DIR}/CMake_CAmkES_VM_Options.cmake)

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fstack-usage)
  add_compile_options("$<$<CONFIG:Release>:-Os>")
endif()

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/VM)

DeclareCAmkESComponent(emitter_t_impl_src_process_src_thread
  SOURCES components/emitter_t_impl_src_process_src_thread//src/emitter.c components/emitter_t_impl_src_process_src_thread/src/sb_emitter_t_impl.c types/src/sp_int8_t.c
  INCLUDES components/emitter_t_impl_src_process_src_thread/includes/ types/includes types/includes
)

DeclareCAmkESComponent(Pacer
  SOURCES components/Pacer/src/Pacer.c
  LIBS SB_Type_Library
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
