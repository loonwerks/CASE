cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

add_definitions(-DCAMKES)

DeclareCAmkESComponent(emitter_impl
  SOURCES components/emitter_impl//src/emitter.c components/emitter_impl/src/sb_emitter_impl.c
  INCLUDES components/emitter_impl/includes/ includes

)

DeclareCAmkESComponent(consumer_impl
  SOURCES components/consumer_impl//src/consumer.c components/consumer_impl/src/sb_consumer_impl.c
  INCLUDES components/consumer_impl/includes/ includes

)

DeclareCAmkESComponent(sb_snk_s_Monitor
  SOURCES components/sb_Monitors/sb_snk_s_Monitor/src/sb_snk_s_Monitor.c
  INCLUDES components/sb_Monitors/sb_snk_s_Monitor/includes/ includes

)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
