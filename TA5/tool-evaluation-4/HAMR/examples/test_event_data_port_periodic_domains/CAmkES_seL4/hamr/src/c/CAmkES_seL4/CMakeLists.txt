cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

add_definitions(-DCAMKES)

execute_process(COMMAND bash -c "${CMAKE_CURRENT_LIST_DIR}/bin/compile-hamr-lib.sh")

set(HAMR_LIB_top_impl_Instance_src_process_src_thread ${CMAKE_CURRENT_LIST_DIR}/hamr/top_impl_Instance_src_process_src_thread/sel4-build/libmain.a)

set(HAMR_INCLUDES_top_impl_Instance_src_process_src_thread
  hamr/top_impl_Instance_src_process_src_thread/ext
  hamr/top_impl_Instance_src_process_src_thread/runtime
  hamr/top_impl_Instance_src_process_src_thread/library/org/sireum
  hamr/top_impl_Instance_src_process_src_thread/library/art
  hamr/top_impl_Instance_src_process_src_thread/library/art/Bridge
  hamr/top_impl_Instance_src_process_src_thread/library/art/PortMode
  hamr/top_impl_Instance_src_process_src_thread/library/art/DispatchPropertyProtocol
  hamr/top_impl_Instance_src_process_src_thread/library/hamr
  hamr/top_impl_Instance_src_process_src_thread/library/hamr/top_impl_Instance_src_process_src_thread
  hamr/top_impl_Instance_src_process_src_thread/library/hamr/test_event_data_port_periodic_domains
  hamr/top_impl_Instance_src_process_src_thread/library/hamr/test_event_data_port_periodic_domains/emitter_t_impl_Bridge
  hamr/top_impl_Instance_src_process_src_thread/library/hamr/Base_Types
)

set(HAMR_LIB_top_impl_Instance_dst_process_dst_thread ${CMAKE_CURRENT_LIST_DIR}/hamr/top_impl_Instance_dst_process_dst_thread/sel4-build/libmain.a)

set(HAMR_INCLUDES_top_impl_Instance_dst_process_dst_thread
  hamr/top_impl_Instance_dst_process_dst_thread/ext
  hamr/top_impl_Instance_dst_process_dst_thread/runtime
  hamr/top_impl_Instance_dst_process_dst_thread/library/org/sireum
  hamr/top_impl_Instance_dst_process_dst_thread/library/art
  hamr/top_impl_Instance_dst_process_dst_thread/library/art/Bridge
  hamr/top_impl_Instance_dst_process_dst_thread/library/art/PortMode
  hamr/top_impl_Instance_dst_process_dst_thread/library/art/DispatchPropertyProtocol
  hamr/top_impl_Instance_dst_process_dst_thread/library/hamr
  hamr/top_impl_Instance_dst_process_dst_thread/library/hamr/top_impl_Instance_dst_process_dst_thread
  hamr/top_impl_Instance_dst_process_dst_thread/library/hamr/test_event_data_port_periodic_domains
  hamr/top_impl_Instance_dst_process_dst_thread/library/hamr/test_event_data_port_periodic_domains/consumer_t_impl_Bridge
  hamr/top_impl_Instance_dst_process_dst_thread/library/hamr/Base_Types
)

set(HAMR_LIB_SlangTypeLibrary ${CMAKE_CURRENT_LIST_DIR}/hamr/SlangTypeLibrary/sel4-build/libmain.a)

set(HAMR_INCLUDES_SlangTypeLibrary
  hamr/SlangTypeLibrary/runtime
  hamr/SlangTypeLibrary/library/org/sireum
  hamr/SlangTypeLibrary/library/art
  hamr/SlangTypeLibrary/library/hamr
  hamr/SlangTypeLibrary/library/hamr/Base_Types
  hamr/SlangTypeLibrary/library/hamr/SlangTypeLibrary
)

DeclareCAmkESComponent(emitter_t_impl
  SOURCES components/emitter_t_impl/src/sb_emitter_t_impl.c includes/sb_queue_union_art_DataContent_1.c
  INCLUDES ${HAMR_INCLUDES_top_impl_Instance_src_process_src_thread} components/emitter_t_impl/includes/ includes
  LIBS ${HAMR_LIB_top_impl_Instance_src_process_src_thread}
)

DeclareCAmkESComponent(consumer_t_impl
  SOURCES components/consumer_t_impl/src/sb_consumer_t_impl.c includes/sb_queue_union_art_DataContent_1.c
  INCLUDES ${HAMR_INCLUDES_top_impl_Instance_dst_process_dst_thread} components/consumer_t_impl/includes/ includes
  LIBS ${HAMR_LIB_top_impl_Instance_dst_process_dst_thread}
)

DeclareCAmkESComponent(Pacer
  SOURCES components/Pacer/src/Pacer.c
  INCLUDES ${HAMR_INCLUDES_SlangTypeLibrary} includes
  LIBS ${HAMR_LIB_SlangTypeLibrary}
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
