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

DeclareCAmkESComponent(source_t_impl
  SOURCES components/source_t_impl//src/source.c components/source_t_impl/src/sb_source_t_impl.c
  INCLUDES components/source_t_impl/includes/ types/includes
)

DeclareCAmkESComponent(destination_t_impl
  SOURCES components/destination_t_impl//src/destination.c components/destination_t_impl/src/sb_destination_t_impl.c
  INCLUDES components/destination_t_impl/includes/ types/includes
)

DeclareCAmkESComponent(sb_dest_read_port_Monitor
  SOURCES components/sb_Monitors/sb_dest_read_port_Monitor/src/sb_dest_read_port_Monitor.c
  INCLUDES components/sb_Monitors/sb_dest_read_port_Monitor/includes/ types/includes
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
