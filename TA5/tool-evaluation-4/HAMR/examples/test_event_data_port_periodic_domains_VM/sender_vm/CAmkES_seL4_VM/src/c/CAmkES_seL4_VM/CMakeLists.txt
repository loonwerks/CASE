# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

add_definitions(-DCAMKES)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/VM)

execute_process(COMMAND bash -c "${CMAKE_CURRENT_LIST_DIR}/bin/compile-hamr-lib.sh")

set(HAMR_LIB_top_impl_Instance_src_process_src_thread ${CMAKE_CURRENT_LIST_DIR}/hamr/top_impl_Instance_src_process_src_thread/sel4-build/libmain.a)

set(HAMR_INCLUDES_top_impl_Instance_src_process_src_thread
  hamr/top_impl_Instance_src_process_src_thread/library/org/sireum
  hamr/top_impl_Instance_src_process_src_thread/library/art
  hamr/top_impl_Instance_src_process_src_thread/library/art/DispatchPropertyProtocol
  hamr/top_impl_Instance_src_process_src_thread/library/art/PortMode
  hamr/top_impl_Instance_src_process_src_thread/library/art/Bridge
  hamr/top_impl_Instance_src_process_src_thread/library/CAmkES_seL4_VM
  hamr/top_impl_Instance_src_process_src_thread/library/CAmkES_seL4_VM/top_impl_Instance_src_process_src_thread
  hamr/top_impl_Instance_src_process_src_thread/library/CAmkES_seL4_VM/Base_Types
  hamr/top_impl_Instance_src_process_src_thread/library/CAmkES_seL4_VM/test_event_data_port_periodic_domains
  hamr/top_impl_Instance_src_process_src_thread/library/CAmkES_seL4_VM/test_event_data_port_periodic_domains/emitter_t_impl_Bridge
  hamr/top_impl_Instance_src_process_src_thread/runtime
  hamr/top_impl_Instance_src_process_src_thread/ext
)

set(HAMR_LIB_SlangTypeLibrary ${CMAKE_CURRENT_LIST_DIR}/hamr/SlangTypeLibrary/sel4-build/libmain.a)

set(HAMR_INCLUDES_SlangTypeLibrary
  hamr/SlangTypeLibrary/library/org/sireum
  hamr/SlangTypeLibrary/library/art
  hamr/SlangTypeLibrary/library/CAmkES_seL4_VM
  hamr/SlangTypeLibrary/library/CAmkES_seL4_VM/Base_Types
  hamr/SlangTypeLibrary/library/CAmkES_seL4_VM/SlangTypeLibrary
  hamr/SlangTypeLibrary/runtime
)

set(HAMR_LIB_top_impl_Instance_dst_process_dst_thread ${CMAKE_CURRENT_LIST_DIR}/hamr/top_impl_Instance_dst_process_dst_thread/sel4-build/libmain.a)

set(HAMR_INCLUDES_top_impl_Instance_dst_process_dst_thread
  hamr/top_impl_Instance_dst_process_dst_thread/library/org/sireum
  hamr/top_impl_Instance_dst_process_dst_thread/library/art
  hamr/top_impl_Instance_dst_process_dst_thread/library/art/DispatchPropertyProtocol
  hamr/top_impl_Instance_dst_process_dst_thread/library/art/PortMode
  hamr/top_impl_Instance_dst_process_dst_thread/library/art/Bridge
  hamr/top_impl_Instance_dst_process_dst_thread/library/CAmkES_seL4_VM
  hamr/top_impl_Instance_dst_process_dst_thread/library/CAmkES_seL4_VM/Base_Types
  hamr/top_impl_Instance_dst_process_dst_thread/library/CAmkES_seL4_VM/top_impl_Instance_dst_process_dst_thread
  hamr/top_impl_Instance_dst_process_dst_thread/library/CAmkES_seL4_VM/test_event_data_port_periodic_domains
  hamr/top_impl_Instance_dst_process_dst_thread/library/CAmkES_seL4_VM/test_event_data_port_periodic_domains/consumer_t_impl_Bridge
  hamr/top_impl_Instance_dst_process_dst_thread/runtime
  hamr/top_impl_Instance_dst_process_dst_thread/ext
)

DeclareCAmkESComponent(consumer_t_impl
  SOURCES components/consumer_t_impl/src/sb_consumer_t_impl.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES ${HAMR_INCLUDES_top_impl_Instance_dst_process_dst_thread} components/consumer_t_impl/includes/ types/includes
  LIBS ${HAMR_LIB_top_impl_Instance_dst_process_dst_thread}
)

DeclareCAmkESComponent(Pacer
  SOURCES components/Pacer/src/Pacer.c
  INCLUDES ${HAMR_INCLUDES_SlangTypeLibrary}
  LIBS SB_Type_Library ${HAMR_LIB_SlangTypeLibrary}
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
