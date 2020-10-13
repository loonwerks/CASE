# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

add_definitions(-DCAMKES)

include(${CMAKE_CURRENT_LIST_DIR}/CMake_TranspilerOptions.cmake)

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fstack-usage)
  add_compile_options("$<$<CONFIG:Release>:-Os>")
endif()

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/emitter_t_impl_src_process_src_thread)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/consumer_t_impl_dst_process_dst_thread)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SlangTypeLibrary)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

DeclareCAmkESComponent(emitter_t_impl_src_process_src_thread
  SOURCES components/emitter_t_impl_src_process_src_thread/src/sb_emitter_t_impl.c
  INCLUDES components/emitter_t_impl_src_process_src_thread/includes/ types/includes
  LIBS emitter_t_impl_src_process_src_thread
)

DeclareCAmkESComponent(consumer_t_impl_dst_process_dst_thread
  SOURCES components/consumer_t_impl_dst_process_dst_thread/src/sb_consumer_t_impl.c
  INCLUDES components/consumer_t_impl_dst_process_dst_thread/includes/ types/includes
  LIBS consumer_t_impl_dst_process_dst_thread
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
