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

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

DeclareCAmkESComponent(source_thread_impl_source_process_component_source_thread_component
  SOURCES components/source_thread_impl_source_process_component_source_thread_component//src/source.c components/source_thread_impl_source_process_component_source_thread_component/src/sb_source_thread_impl.c types/src/sp_int8_t.c
  INCLUDES components/source_thread_impl_source_process_component_source_thread_component/includes/ types/includes types/includes
)

DeclareCAmkESComponent(destination_thread_impl_destination_process_component_destination_thread_component
  SOURCES components/destination_thread_impl_destination_process_component_destination_thread_component//src/destination.c components/destination_thread_impl_destination_process_component_destination_thread_component/src/sb_destination_thread_impl.c types/src/sp_int8_t.c
  INCLUDES components/destination_thread_impl_destination_process_component_destination_thread_component/includes/ types/includes types/includes
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
