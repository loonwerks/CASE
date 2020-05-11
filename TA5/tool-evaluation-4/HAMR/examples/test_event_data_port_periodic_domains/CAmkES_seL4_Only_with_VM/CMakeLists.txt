cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

include(ExternalProject)
include(external-project-helpers)

add_definitions(-DCAMKES)

DeclareCAmkESComponent(emitter_t_impl
  SOURCES components/emitter_t_impl/src/emitter.c components/emitter_t_impl/src/sb_emitter_t_impl.c components/sb_queue_int8_t_1/sb_queue_int8_t_1.c
  INCLUDES includes components/emitter_t_impl/includes

)

DeclareCAmkESComponent(consumer_t_impl
  SOURCES components/consumer_t_impl/src/consumer.c components/consumer_t_impl/src/sb_consumer_t_impl.c components/sb_queue_int8_t_1/sb_queue_int8_t_1.c
  INCLUDES includes components/consumer_t_impl/includes

)

DeclareCAmkESComponent(Pacer
  SOURCES components/Pacer/src/Pacer.c
  INCLUDES includes

)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/sb_queue_int8_t_1)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/vm)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
