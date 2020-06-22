# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

add_definitions(-DCAMKES)

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fstack-usage)
  add_compile_options("$<$<CONFIG:Release>:-Os>")
endif()

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/top_impl_Instance_source_process_component_source_thread_component)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/top_impl_Instance_destination_process_component_destination_thread_component)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SlangTypeLibrary)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

DeclareCAmkESComponent(source_thread_impl
  SOURCES components/source_thread_impl/src/sb_source_thread_impl.c types/src/sp_union_art_DataContent.c
  INCLUDES components/source_thread_impl/includes/ types/includes types/includes
  LIBS top_impl_Instance_source_process_component_source_thread_component
)

DeclareCAmkESComponent(destination_thread_impl
  SOURCES components/destination_thread_impl/src/sb_destination_thread_impl.c types/src/sp_union_art_DataContent.c
  INCLUDES components/destination_thread_impl/includes/ types/includes types/includes
  LIBS top_impl_Instance_destination_process_component_destination_thread_component
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
