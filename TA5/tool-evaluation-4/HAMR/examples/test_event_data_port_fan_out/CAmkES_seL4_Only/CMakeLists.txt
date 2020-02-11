cmake_minimum_required(VERSION 3.8.2)

project (test_event_data_port C)

add_definitions(-DCAMKES)

includeGlobalComponents()

DeclareCAmkESComponent(emitter_impl
  SOURCES components/emitter_impl//src/emitter.c components/emitter_impl/src/sb_emitter_impl.c includes/sb_queue_int8_t_5.c includes/sb_queue_int8_t_1.c includes/sb_queue_int8_t_2.c
  INCLUDES components/emitter_impl/includes/ includes

)

DeclareCAmkESComponent(consumer_queue_default_impl
  SOURCES components/consumer_queue_default_impl//src/consumer_queue_default.c components/consumer_queue_default_impl/src/sb_consumer_queue_default_impl.c includes/sb_queue_int8_t_1.c
  INCLUDES components/consumer_queue_default_impl/includes/ includes

)

DeclareCAmkESComponent(consumer_queue_2_impl
  SOURCES components/consumer_queue_2_impl//src/consumer_queue_2.c components/consumer_queue_2_impl/src/sb_consumer_queue_2_impl.c includes/sb_queue_int8_t_2.c
  INCLUDES components/consumer_queue_2_impl/includes/ includes

)

DeclareCAmkESComponent(consumer_queue_2_impl
  SOURCES components/consumer_queue_2_impl//src/consumer_queue_2.c components/consumer_queue_2_impl/src/sb_consumer_queue_2_impl.c includes/sb_queue_int8_t_2.c
  INCLUDES components/consumer_queue_2_impl/includes/ includes

)

DeclareCAmkESComponent(consumer_queue_5_impl
  SOURCES components/consumer_queue_5_impl//src/consumer_queue_5.c components/consumer_queue_5_impl/src/sb_consumer_queue_5_impl.c includes/sb_queue_int8_t_5.c
  INCLUDES components/consumer_queue_5_impl/includes/ includes

)

DeclareCAmkESComponent(dispatch_periodic
  SOURCES components/dispatch_periodic/src/sb_dispatch_periodic.c
  INCLUDES includes

)

DeclareCAmkESRootserver(test_event_data_port.camkes)
