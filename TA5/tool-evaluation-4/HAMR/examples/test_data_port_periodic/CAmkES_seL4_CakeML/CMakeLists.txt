cmake_minimum_required(VERSION 3.8.2)

project (test_data_port_periodic C)

add_definitions(-DCAMKES)

find_program(CAKEML_COMPILER NAMES "cake")

set(source_t_dir ${CMAKE_CURRENT_LIST_DIR}/components/source_t_impl/src/)
set(destination_t_dir ${CMAKE_CURRENT_LIST_DIR}/components/destination_t_impl/src/)

add_custom_command(
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/source.S
  COMMAND ${CAKEML_COMPILER} --heap_size=1 --stack_size=1 < ${source_t_dir}/source.cml > ${CMAKE_CURRENT_BINARY_DIR}/source.S
  COMMAND sed -i 's/cdecl\(main\)/cdecl\(run\)/' ${CMAKE_CURRENT_BINARY_DIR}/source.S
)

add_custom_command(
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/destination.S
  COMMAND ${CAKEML_COMPILER} --heap_size=1 --stack_size=1 < ${destination_t_dir}/destination.cml > ${CMAKE_CURRENT_BINARY_DIR}/destination.S
  COMMAND sed -i 's/cdecl\(main\)/cdecl\(run\)/' ${CMAKE_CURRENT_BINARY_DIR}/destination.S
)

includeGlobalComponents()

DeclareCAmkESComponent(source_t_impl
  SOURCES components/source_t_impl//src/source.c components/source_t_impl/src/sb_source_t_impl.c sampling_ports/sp_int8_t.c
   ${CMAKE_CURRENT_BINARY_DIR}/source.S
  INCLUDES components/source_t_impl/includes/ sampling_ports includes

)

DeclareCAmkESComponent(destination_t_impl
  SOURCES components/destination_t_impl//src/destination.c components/destination_t_impl/src/sb_destination_t_impl.c sampling_ports/sp_int8_t.c
   ${CMAKE_CURRENT_BINARY_DIR}/destination.S  
  INCLUDES components/destination_t_impl/includes/ sampling_ports includes

)

DeclareCAmkESComponent(dispatch_periodic
  SOURCES components/dispatch_periodic/src/sb_dispatch_periodic.c
  INCLUDES includes

)

DeclareCAmkESRootserver(test_data_port_periodic.camkes)
