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

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/producer_t_i_producer_producer)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/consumer_t_i_consumer_consumer)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SlangTypeLibrary)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

DeclareCAmkESComponent(producer_t_i_producer_producer
  SOURCES components/producer_t_i_producer_producer/src/sb_producer_t_i.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/producer_t_i_producer_producer/includes/ types/includes
  LIBS producer_t_i_producer_producer
)

DeclareCAmkESComponent(consumer_t_i_consumer_consumer
  SOURCES components/consumer_t_i_consumer_consumer/src/sb_consumer_t_i.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/consumer_t_i_consumer_consumer/includes/ types/includes
  LIBS consumer_t_i_consumer_consumer
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
