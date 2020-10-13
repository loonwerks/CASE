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

DeclareCAmkESComponent(emitter_t_impl_src_process_src_thread
  SOURCES components/emitter_t_impl_src_process_src_thread//src/emitter.c components/emitter_t_impl_src_process_src_thread/src/sb_emitter_t_impl.c
  INCLUDES components/emitter_t_impl_src_process_src_thread/includes/ types/includes
)

DeclareCAmkESComponent(consumer_t_impl_dst_process_dst_thread
  SOURCES components/consumer_t_impl_dst_process_dst_thread//src/consumer.c components/consumer_t_impl_dst_process_dst_thread/src/sb_consumer_t_impl.c
  INCLUDES components/consumer_t_impl_dst_process_dst_thread/includes/ types/includes
)

DeclareCAmkESComponent(dispatch_periodic
  SOURCES components/dispatch_periodic/src/sb_dispatch_periodic.c
  LIBS SB_Type_Library
)

DeclareCAmkESComponent(sb_dst_thread_consume_Monitor
  SOURCES components/sb_Monitors/sb_dst_thread_consume_Monitor/src/sb_dst_thread_consume_Monitor.c
  INCLUDES components/sb_Monitors/sb_dst_thread_consume_Monitor/includes/ types/includes
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
