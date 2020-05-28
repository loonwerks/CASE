# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

add_definitions(-DCAMKES)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/VM)

DeclareCAmkESComponent(Pacer
  SOURCES components/Pacer/src/Pacer.c
  LIBS SB_Type_Library
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
