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

includeGlobalComponents()

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

DeclareCAmkESComponent(emitter_t_impl
  SOURCES components/emitter_t_impl//src/emitter.c components/emitter_t_impl/src/sb_emitter_t_impl.c
  INCLUDES components/emitter_t_impl/includes/ types/includes
)

DeclareCAmkESComponent(consumer_t_impl
  SOURCES components/consumer_t_impl//src/consumer.c components/consumer_t_impl/src/sb_consumer_t_impl.c
  INCLUDES components/consumer_t_impl/includes/ types/includes
)

DeclareCAmkESComponent(dispatch_periodic
  SOURCES components/dispatch_periodic/src/sb_dispatch_periodic.c
  LIBS SB_Type_Library
)

DeclareCAmkESComponent(sb_dst_thread_read_port_Monitor
  SOURCES components/sb_Monitors/sb_dst_thread_read_port_Monitor/src/sb_dst_thread_read_port_Monitor.c
  INCLUDES components/sb_Monitors/sb_dst_thread_read_port_Monitor/includes/ types/includes
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
