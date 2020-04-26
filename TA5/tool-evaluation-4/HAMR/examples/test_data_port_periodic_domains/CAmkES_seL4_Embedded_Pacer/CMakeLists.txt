cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

add_definitions(-DCAMKES)

DeclareCAmkESComponent(source_thread_impl
  SOURCES components/source_thread_impl//src/source.c components/source_thread_impl/src/sb_source_thread_impl.c sampling_ports/sp_int8_t.c
  INCLUDES components/source_thread_impl/includes/ sampling_ports includes

)

DeclareCAmkESComponent(destination_thread_impl
  SOURCES components/destination_thread_impl//src/destination.c components/destination_thread_impl/src/sb_destination_thread_impl.c sampling_ports/sp_int8_t.c
  INCLUDES components/destination_thread_impl/includes/ sampling_ports includes

)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
