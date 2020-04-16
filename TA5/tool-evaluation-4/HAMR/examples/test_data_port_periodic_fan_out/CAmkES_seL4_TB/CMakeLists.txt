cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

add_definitions(-DCAMKES)

includeGlobalComponents()

DeclareCAmkESComponent(source_t_impl
  SOURCES components/source_t_impl//src/source.c components/source_t_impl/src/sb_source_t_impl.c
  INCLUDES components/source_t_impl/includes/ includes

)

DeclareCAmkESComponent(destination_t_impl
  SOURCES components/destination_t_impl//src/destination.c components/destination_t_impl/src/sb_destination_t_impl.c
  INCLUDES components/destination_t_impl/includes/ includes

)

DeclareCAmkESComponent(destination_t_impl
  SOURCES components/destination_t_impl//src/destination.c components/destination_t_impl/src/sb_destination_t_impl.c
  INCLUDES components/destination_t_impl/includes/ includes

)

DeclareCAmkESComponent(dispatch_periodic
  SOURCES components/dispatch_periodic/src/sb_dispatch_periodic.c
  INCLUDES includes

)

DeclareCAmkESComponent(sb_dest_A_read_port_Monitor
  SOURCES components/sb_Monitors/sb_dest_A_read_port_Monitor/src/sb_dest_A_read_port_Monitor.c
  INCLUDES components/sb_Monitors/sb_dest_A_read_port_Monitor/includes/ includes

)

DeclareCAmkESComponent(sb_dest_B_read_port_Monitor
  SOURCES components/sb_Monitors/sb_dest_B_read_port_Monitor/src/sb_dest_B_read_port_Monitor.c
  INCLUDES components/sb_Monitors/sb_dest_B_read_port_Monitor/includes/ includes

)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
