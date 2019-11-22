cmake_minimum_required(VERSION 3.8.2)

project (testepmon C)

DeclareCAmkESComponent(emitter_t_impl
  SOURCES components/emitter_t_impl//src/emitter.c components/emitter_t_impl/src/sb_emitter_t_impl.c
  INCLUDES components/emitter_t_impl/includes/ includes

)

DeclareCAmkESComponent(consumer_t_impl
  SOURCES components/consumer_t_impl//src/consumer.c components/consumer_t_impl/src/sb_consumer_t_impl.c
  INCLUDES components/consumer_t_impl/includes/ includes

)

DeclareCAmkESComponent(sb_dest_deq_Monitor
  SOURCES components/sb_Monitors/sb_dest_deq_Monitor/src/sb_dest_deq_Monitor.c
  INCLUDES components/sb_Monitors/sb_dest_deq_Monitor/includes/ includes

)

DeclareCAmkESRootserver(testepmon.camkes)
