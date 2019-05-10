cmake_minimum_required(VERSION 3.8.2)

project (testdpmon C)



DeclareCAmkESComponent(source_t_impl
  SOURCES components/source_t_impl//src/source.c components/source_t_impl/src/sb_source_t_impl.c
  INCLUDES components/source_t_impl/includes/ includes
)

DeclareCAmkESComponent(destination_t_impl
  SOURCES components/destination_t_impl//src/destination.c components/destination_t_impl/src/sb_destination_t_impl.c
  INCLUDES components/destination_t_impl/includes/ includes
)

DeclareCAmkESComponent(sb_dest_deq_Monitor
  SOURCES components/sb_Monitors/sb_dest_deq_Monitor/src/sb_dest_deq_Monitor.c
  INCLUDES components/sb_Monitors/sb_dest_deq_Monitor/includes/ includes
)

DeclareCAmkESRootserver(testdpmon.camkes)
