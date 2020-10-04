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

DeclareCAmkESComponent(emitter_impl_test_event_data_port_src
  SOURCES components/emitter_impl_test_event_data_port_src//src/emitter.c components/emitter_impl_test_event_data_port_src/src/sb_emitter_impl.c
  INCLUDES components/emitter_impl_test_event_data_port_src/includes/ types/includes
)

DeclareCAmkESComponent(consumer_queue_default_impl_test_event_data_port_snk_default
  SOURCES components/consumer_queue_default_impl_test_event_data_port_snk_default//src/consumer_queue_default.c components/consumer_queue_default_impl_test_event_data_port_snk_default/src/sb_consumer_queue_default_impl.c
  INCLUDES components/consumer_queue_default_impl_test_event_data_port_snk_default/includes/ types/includes
)

DeclareCAmkESComponent(consumer_queue_2_impl_test_event_data_port_snk_2_A
  SOURCES components/consumer_queue_2_impl_test_event_data_port_snk_2_A//src/consumer_queue_2.c components/consumer_queue_2_impl_test_event_data_port_snk_2_A/src/sb_consumer_queue_2_impl.c
  INCLUDES components/consumer_queue_2_impl_test_event_data_port_snk_2_A/includes/ types/includes
)

DeclareCAmkESComponent(consumer_queue_2_impl_test_event_data_port_snk_2_B
  SOURCES components/consumer_queue_2_impl_test_event_data_port_snk_2_B//src/consumer_queue_2.c components/consumer_queue_2_impl_test_event_data_port_snk_2_B/src/sb_consumer_queue_2_impl.c
  INCLUDES components/consumer_queue_2_impl_test_event_data_port_snk_2_B/includes/ types/includes
)

DeclareCAmkESComponent(consumer_queue_5_impl_test_event_data_port_snk_5
  SOURCES components/consumer_queue_5_impl_test_event_data_port_snk_5//src/consumer_queue_5.c components/consumer_queue_5_impl_test_event_data_port_snk_5/src/sb_consumer_queue_5_impl.c
  INCLUDES components/consumer_queue_5_impl_test_event_data_port_snk_5/includes/ types/includes
)

DeclareCAmkESComponent(dispatch_periodic
  SOURCES components/dispatch_periodic/src/sb_dispatch_periodic.c
  LIBS SB_Type_Library
)

DeclareCAmkESComponent(sb_snk_default_deq_Monitor
  SOURCES components/sb_Monitors/sb_snk_default_deq_Monitor/src/sb_snk_default_deq_Monitor.c
  INCLUDES components/sb_Monitors/sb_snk_default_deq_Monitor/includes/ types/includes
)

DeclareCAmkESComponent(sb_snk_2_A_deq_Monitor
  SOURCES components/sb_Monitors/sb_snk_2_A_deq_Monitor/src/sb_snk_2_A_deq_Monitor.c
  INCLUDES components/sb_Monitors/sb_snk_2_A_deq_Monitor/includes/ types/includes
)

DeclareCAmkESComponent(sb_snk_2_B_deq_Monitor
  SOURCES components/sb_Monitors/sb_snk_2_B_deq_Monitor/src/sb_snk_2_B_deq_Monitor.c
  INCLUDES components/sb_Monitors/sb_snk_2_B_deq_Monitor/includes/ types/includes
)

DeclareCAmkESComponent(sb_snk_5_deq_Monitor
  SOURCES components/sb_Monitors/sb_snk_5_deq_Monitor/src/sb_snk_5_deq_Monitor.c
  INCLUDES components/sb_Monitors/sb_snk_5_deq_Monitor/includes/ types/includes
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
