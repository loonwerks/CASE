cmake_minimum_required(VERSION 3.8.2)

project (testepmon C)



DeclareCAmkESComponent(emitter_t_impl
  SOURCES components/emitter_t_impl/src/tb_emitter_t_impl.c
  INCLUDES components/emitter_t_impl/includes/ includes
)

DeclareCAmkESComponent(consumer_t_impl
  SOURCES components/consumer_t_impl/src/tb_consumer_t_impl.c
  INCLUDES components/consumer_t_impl/includes/ includes
)

DeclareCAmkESComponent(tb_dest_deq_Monitor
  SOURCES components/tb_Monitors/tb_dest_deq_Monitor/src/tb_dest_deq_Monitor.c
  INCLUDES components/tb_Monitors/tb_dest_deq_Monitor/includes/ includes
)

DeclareCAmkESRootserver(testepmon.camkes)
