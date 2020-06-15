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

DeclareCAmkESComponent(emitter_impl
  SOURCES components/emitter_impl//src/emitter.c components/emitter_impl/src/sb_emitter_impl.c
  INCLUDES components/emitter_impl/includes/ types/includes
)

DeclareCAmkESComponent(consumer_queue_default_impl
  SOURCES components/consumer_queue_default_impl//src/consumer_queue_default.c components/consumer_queue_default_impl/src/sb_consumer_queue_default_impl.c
  INCLUDES components/consumer_queue_default_impl/includes/ types/includes
)

DeclareCAmkESComponent(consumer_queue_2_impl
  SOURCES components/consumer_queue_2_impl//src/consumer_queue_2.c components/consumer_queue_2_impl/src/sb_consumer_queue_2_impl.c
  INCLUDES components/consumer_queue_2_impl/includes/ types/includes
)

DeclareCAmkESComponent(consumer_queue_2_impl
  SOURCES components/consumer_queue_2_impl//src/consumer_queue_2.c components/consumer_queue_2_impl/src/sb_consumer_queue_2_impl.c
  INCLUDES components/consumer_queue_2_impl/includes/ types/includes
)

DeclareCAmkESComponent(consumer_queue_5_impl
  SOURCES components/consumer_queue_5_impl//src/consumer_queue_5.c components/consumer_queue_5_impl/src/sb_consumer_queue_5_impl.c
  INCLUDES components/consumer_queue_5_impl/includes/ types/includes
)

DeclareCAmkESComponent(dispatch_periodic
  SOURCES components/dispatch_periodic/src/sb_dispatch_periodic.c
  LIBS SB_Type_Library
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
