# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project (MissionComputer_Impl_Instance C)

add_definitions(-DCAMKES)

include(${CMAKE_CURRENT_LIST_DIR}/CMake_TranspilerOptions.cmake)

include(${CMAKE_CURRENT_LIST_DIR}/CMake_CAmkES_VM_Options.cmake)

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fstack-usage)
  add_compile_options("$<$<CONFIG:Release>:-Os>")
endif()

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/RadioDriver_Impl_SW_Radio_RadioDriver)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/FlightController_Impl_SW_FlightController_FlightController)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SlangTypeLibrary)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/VM)

DeclareCAmkESComponent(RadioDriver_Impl_SW_Radio_RadioDriver
  SOURCES components/RadioDriver_Impl_SW_Radio_RadioDriver/src/sb_RadioDriver_Impl.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/RadioDriver_Impl_SW_Radio_RadioDriver/includes/ types/includes
  LIBS RadioDriver_Impl_SW_Radio_RadioDriver
)

DeclareCAmkESComponent(FlightController_Impl_SW_FlightController_FlightController
  SOURCES components/FlightController_Impl_SW_FlightController_FlightController/src/sb_FlightController_Impl.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/FlightController_Impl_SW_FlightController_FlightController/includes/ types/includes
  LIBS FlightController_Impl_SW_FlightController_FlightController
)

DeclareCAmkESComponent(Pacer
  SOURCES components/Pacer/src/Pacer.c
  LIBS SB_Type_Library SlangTypeLibrary
)

DeclareCAmkESRootserver(MissionComputer_Impl_Instance.camkes)
