cmake_minimum_required(VERSION 3.8.2)

project (test_data_port_periodic C)

add_definitions(-DCAMKES)

find_program(CAKEML_COMPILER NAMES "cake")

set(source_t_dir ${CMAKE_CURRENT_LIST_DIR}/components/source_t_impl/src/)
set(destination_t_dir ${CMAKE_CURRENT_LIST_DIR}/components/destination_t_impl/src/)

add_custom_command(
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/source.S
  DEPENDS ${source_t_dir}/api.cml ${source_t_dir}/source.cml ${source_t_dir}/control.cml
#  COMMAND ${CAKEML_COMPILER} --print_sexp --exclude_prelude=true --skip_type_inference=true < ${source_t_dir}/api.cml 2> ${CMAKE_CURRENT_BINARY_DIR}/source_api.sexp || true
#  COMMAND tail -n -1 ${CMAKE_CURRENT_BINARY_DIR}/source_api.sexp > ${CMAKE_CURRENT_BINARY_DIR}/source_api.sexp.tmp
#  COMMAND head -c -2 ${CMAKE_CURRENT_BINARY_DIR}/source_api.sexp.tmp > ${CMAKE_CURRENT_BINARY_DIR}/source_api.sexp
#  COMMAND rm ${CMAKE_CURRENT_BINARY_DIR}/source_api.sexp.tmp
#  
#  COMMAND ${CAKEML_COMPILER} --print_sexp --exclude_prelude=true --skip_type_inference=true < ${source_t_dir}/source.cml 2> ${CMAKE_CURRENT_BINARY_DIR}/source.sexp || true
#  COMMAND tail -n -1 ${CMAKE_CURRENT_BINARY_DIR}/source.sexp > ${CMAKE_CURRENT_BINARY_DIR}/source.sexp.tmp
#  COMMAND tail -c +2 ${CMAKE_CURRENT_BINARY_DIR}/source.sexp.tmp > ${CMAKE_CURRENT_BINARY_DIR}/source.sexp
#  COMMAND head -c -2 ${CMAKE_CURRENT_BINARY_DIR}/source.sexp > ${CMAKE_CURRENT_BINARY_DIR}/source.sexp.tmp
#  COMMAND mv ${CMAKE_CURRENT_BINARY_DIR}/source.sexp.tmp ${CMAKE_CURRENT_BINARY_DIR}/source.sexp
#  
#  COMMAND ${CAKEML_COMPILER} --print_sexp --exclude_prelude=true --skip_type_inference=true < ${source_t_dir}/control.cml 2> ${CMAKE_CURRENT_BINARY_DIR}/source_control.sexp || true
#  COMMAND tail -n -1 ${CMAKE_CURRENT_BINARY_DIR}/source_control.sexp > ${CMAKE_CURRENT_BINARY_DIR}/source_control.sexp.tmp
#  COMMAND tail -c +2 ${CMAKE_CURRENT_BINARY_DIR}/source_control.sexp.tmp > ${CMAKE_CURRENT_BINARY_DIR}/source_control.sexp
#  COMMAND rm ${CMAKE_CURRENT_BINARY_DIR}/source_control.sexp.tmp
#
#  COMMAND cat ${CMAKE_CURRENT_BINARY_DIR}/source_api.sexp ${CMAKE_CURRENT_BINARY_DIR}/source.sexp ${CMAKE_CURRENT_BINARY_DIR}/source_control.sexp > ${CMAKE_CURRENT_BINARY_DIR}/cml.sexp
#
#  COMMAND ${CAKEML_COMPILER} --heap_size=1 --stack_size=1 --sexp=true < ${CMAKE_CURRENT_BINARY_DIR}/cml.sexp > ${CMAKE_CURRENT_BINARY_DIR}/source.S

  COMMAND cat ${CMAKE_CURRENT_LIST_DIR}/components/source_t_impl/src/api.cml ${CMAKE_CURRENT_LIST_DIR}/components/source_t_impl/src/source.cml ${CMAKE_CURRENT_LIST_DIR}/components/source_t_impl/src/control.cml > ${CMAKE_CURRENT_BINARY_DIR}/source.cml

  COMMAND ${CAKEML_COMPILER} --heap_size=1 --stack_size=1 < ${CMAKE_CURRENT_BINARY_DIR}/source.cml > ${CMAKE_CURRENT_BINARY_DIR}/source.S
  COMMAND sed -i 's/cdecl\(main\)/cdecl\(run\)/' ${CMAKE_CURRENT_BINARY_DIR}/source.S
)

add_custom_command(
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/destination.S
  DEPENDS ${destination_t_dir}/api.cml ${destination_t_dir}/destination.cml ${destination_t_dir}/control.cml
#  COMMAND ${CAKEML_COMPILER} --print_sexp --exclude_prelude=true --skip_type_inference=true < ${destination_t_dir}/api.cml 2> ${CMAKE_CURRENT_BINARY_DIR}/destination_api.sexp || true
#  COMMAND tail -n -1 ${CMAKE_CURRENT_BINARY_DIR}/destination_api.sexp > ${CMAKE_CURRENT_BINARY_DIR}/destination_api.sexp.tmp
#  COMMAND head -c -2 ${CMAKE_CURRENT_BINARY_DIR}/destination_api.sexp.tmp > ${CMAKE_CURRENT_BINARY_DIR}/destination_api.sexp
#  COMMAND rm ${CMAKE_CURRENT_BINARY_DIR}/destination_api.sexp.tmp
#  
#  COMMAND ${CAKEML_COMPILER} --print_sexp --exclude_prelude=true --skip_type_inference=true < ${destination_t_dir}/destination.cml 2> ${CMAKE_CURRENT_BINARY_DIR}/destination.sexp || true
#  COMMAND tail -n -1 ${CMAKE_CURRENT_BINARY_DIR}/destination.sexp > ${CMAKE_CURRENT_BINARY_DIR}/destination.sexp.tmp
#  COMMAND tail -c +2 ${CMAKE_CURRENT_BINARY_DIR}/destination.sexp.tmp > ${CMAKE_CURRENT_BINARY_DIR}/destination.sexp
#  COMMAND head -c -2 ${CMAKE_CURRENT_BINARY_DIR}/destination.sexp > ${CMAKE_CURRENT_BINARY_DIR}/destination.sexp.tmp
#  COMMAND mv ${CMAKE_CURRENT_BINARY_DIR}/destination.sexp.tmp ${CMAKE_CURRENT_BINARY_DIR}/destination.sexp
#  
#  COMMAND ${CAKEML_COMPILER} --print_sexp --exclude_prelude=true --skip_type_inference=true < ${destination_t_dir}/control.cml 2> ${CMAKE_CURRENT_BINARY_DIR}/destination_control.sexp || true
#  COMMAND tail -n -1 ${CMAKE_CURRENT_BINARY_DIR}/destination_control.sexp > ${CMAKE_CURRENT_BINARY_DIR}/destination_control.sexp.tmp
#  COMMAND tail -c +2 ${CMAKE_CURRENT_BINARY_DIR}/destination_control.sexp.tmp > ${CMAKE_CURRENT_BINARY_DIR}/destination_control.sexp
#  COMMAND rm ${CMAKE_CURRENT_BINARY_DIR}/destination_control.sexp.tmp
#
#  COMMAND cat ${CMAKE_CURRENT_BINARY_DIR}/destination_api.sexp ${CMAKE_CURRENT_BINARY_DIR}/destination.sexp ${CMAKE_CURRENT_BINARY_DIR}/destination_control.sexp > ${CMAKE_CURRENT_BINARY_DIR}/cml.sexp
#
#  COMMAND ${CAKEML_COMPILER} --heap_size=1 --stack_size=1 --sexp=true < ${CMAKE_CURRENT_BINARY_DIR}/cml.sexp > ${CMAKE_CURRENT_BINARY_DIR}/destination.S

  COMMAND cat ${CMAKE_CURRENT_LIST_DIR}/components/destination_t_impl/src/api.cml ${CMAKE_CURRENT_LIST_DIR}/components/destination_t_impl/src/destination.cml ${CMAKE_CURRENT_LIST_DIR}/components/destination_t_impl/src/control.cml > ${CMAKE_CURRENT_BINARY_DIR}/destination.cml

  COMMAND ${CAKEML_COMPILER} --heap_size=1 --stack_size=1 < ${CMAKE_CURRENT_BINARY_DIR}/destination.cml > ${CMAKE_CURRENT_BINARY_DIR}/destination.S
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
