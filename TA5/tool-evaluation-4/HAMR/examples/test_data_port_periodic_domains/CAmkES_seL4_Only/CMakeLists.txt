cmake_minimum_required(VERSION 3.8.2)

project (source_process_component C)

add_definitions(-DCAMKES)

includeGlobalComponents()

DeclareCAmkESComponent(source_thread_impl
  SOURCES components/source_thread_impl//src/source.c components/source_thread_impl/src/sb_source_thread_impl.c sampling_ports/sp_int8_t.c
  INCLUDES components/source_thread_impl/includes/ sampling_ports includes

)

DeclareCAmkESComponent(destination_thread_impl
  SOURCES components/destination_thread_impl//src/destination.c components/destination_thread_impl/src/sb_destination_thread_impl.c sampling_ports/sp_int8_t.c
  INCLUDES components/destination_thread_impl/includes/ sampling_ports includes

)

DeclareCAmkESComponent(Pacer
  SOURCES components/Pacer/src/Pacer.c
)  

DeclareCAmkESRootserver(source_process_component.camkes)

