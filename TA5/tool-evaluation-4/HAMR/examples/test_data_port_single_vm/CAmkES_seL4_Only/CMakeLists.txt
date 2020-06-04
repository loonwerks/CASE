cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

include(ExternalProject)
include(external-project-helpers)

add_definitions(-DCAMKES)

DeclareCAmkESComponent(consumer_t_impl
  SOURCES components/consumer_t_impl/src/receiver.c components/consumer_t_impl/src/sb_consumer_t_impl.c components/sp_int8_t/sp_int8_t.c
  INCLUDES components/consumer_t_impl/includes/ sampling_ports includes

)

DeclareCAmkESComponent(Pacer
  SOURCES components/Pacer/src/Pacer.c components/sp_int8_t/sp_int8_t.c
  INCLUDES sampling_ports includes

)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/sp_int8_t)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/vm)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
