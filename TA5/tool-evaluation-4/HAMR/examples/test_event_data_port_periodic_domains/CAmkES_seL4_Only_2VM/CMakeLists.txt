cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

include(ExternalProject)
include(external-project-helpers)

add_definitions(-DCAMKES)

DeclareCAmkESComponent(Pacer
  SOURCES components/Pacer/src/Pacer.c components/sb_queue_int8_t_1/sb_queue_int8_t_1.c
  INCLUDES includes

)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/sb_queue_int8_t_1)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/vm)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
