cmake_minimum_required(VERSION 3.8.2)

project (test_event_port C)

DeclareCAmkESComponent(emitter_impl
  SOURCES components/emitter_impl//src/emitter.c components/emitter_impl/src/sb_emitter_impl.c
  INCLUDES components/emitter_impl/includes/ includes

)

DeclareCAmkESComponent(consumer_impl
  SOURCES components/consumer_impl//src/consumer.c components/consumer_impl/src/sb_consumer_impl.c
  INCLUDES components/consumer_impl/includes/ includes

)

DeclareCAmkESRootserver(test_event_port.camkes)
