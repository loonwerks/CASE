cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

add_definitions(-DCAMKES)

DeclareCAmkESComponent(emitter_t_impl
  SOURCES components/emitter_t_impl//src/emitter.c components/emitter_t_impl/src/sb_emitter_t_impl.c includes/sb_queue_int8_t_1.c
  INCLUDES components/emitter_t_impl/includes/ includes

)

DeclareCAmkESComponent(Pacer
  SOURCES components/Pacer/src/Pacer.c
  INCLUDES includes

)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
