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

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/VM)

# add path to connector templates
CAmkESAddTemplatesPath(${CMAKE_CURRENT_LIST_DIR}/templates)

DeclareCAmkESConnector(CASE_AADL_EventDataport
  FROM CASE_AADL_EventDataport-from.template.c
  FROM_LIBS SB_Type_Library
  TO CASE_AADL_EventDataport-to.template.c
  TO_LIBS SB_Type_Library
)

DeclareCAmkESComponent(consumer_native_t_impl_dst_native_process_dst_thread
  SOURCES components/consumer_native_t_impl_dst_native_process_dst_thread//src/consumer.c components/consumer_native_t_impl_dst_native_process_dst_thread/src/sb_consumer_native_t_impl.c types/src/sb_queue_int8_t_1.c
  INCLUDES components/consumer_native_t_impl_dst_native_process_dst_thread/includes/ types/includes
)

DeclareCAmkESComponent(Pacer
  SOURCES components/Pacer/src/Pacer.c
  LIBS SB_Type_Library
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
