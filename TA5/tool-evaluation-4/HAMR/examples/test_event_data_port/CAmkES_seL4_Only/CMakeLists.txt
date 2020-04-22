cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

add_definitions(-DCAMKES)

DeclareCAmkESComponent(emitter_t_impl
  SOURCES components/emitter_t_impl//src/emitter.c components/emitter_t_impl/src/sb_emitter_t_impl.c includes/sb_queue_int8_t_1.c
  INCLUDES components/emitter_t_impl/includes/ includes

)

DeclareCAmkESComponent(consumer_t_impl
  SOURCES components/consumer_t_impl//src/consumer.c components/consumer_t_impl/src/sb_consumer_t_impl.c includes/sb_queue_int8_t_1.c
  INCLUDES components/consumer_t_impl/includes/ includes

)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
