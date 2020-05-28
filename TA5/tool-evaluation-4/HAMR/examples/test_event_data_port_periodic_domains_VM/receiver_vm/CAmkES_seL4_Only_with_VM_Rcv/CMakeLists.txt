cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

include(ExternalProject)
include(external-project-helpers)

add_definitions(-DCAMKES)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/vm)

DeclareCAmkESComponent(emitter_t_impl
  SOURCES components/emitter_t_impl/src/emitter.c components/emitter_t_impl/src/sb_emitter_t_impl.c 
  INCLUDES components/emitter_t_impl/includes
  LIBS SB_Type_Library
)

DeclareCAmkESComponent(Pacer
  SOURCES components/Pacer/src/Pacer.c 
  LIBS SB_Type_Library
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
