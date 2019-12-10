cmake_minimum_required(VERSION 3.8.2)

project (test_data_port C)

DeclareCAmkESComponent(source_t_impl
  SOURCES components/source_t_impl//src/source.c components/source_t_impl/src/sb_source_t_impl.c sampling_ports/sp_int8_t.c
  INCLUDES components/source_t_impl/includes/ sampling_ports includes

)

DeclareCAmkESComponent(destination_t_impl
  SOURCES components/destination_t_impl//src/destination.c components/destination_t_impl/src/sb_destination_t_impl.c sampling_ports/sp_int8_t.c
  INCLUDES components/destination_t_impl/includes/ sampling_ports includes

)

DeclareCAmkESRootserver(test_data_port.camkes)
