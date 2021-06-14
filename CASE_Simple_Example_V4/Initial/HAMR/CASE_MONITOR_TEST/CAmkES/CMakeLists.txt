# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project (CASE_MONITOR_TEST_impl_Instance C)

add_definitions(-DCAMKES)

include(${CMAKE_CURRENT_LIST_DIR}/CMake_CakeMLOptions.cmake)

include(${CMAKE_CURRENT_LIST_DIR}/CMake_TranspilerOptions.cmake)

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fstack-usage)
  add_compile_options("$<$<CONFIG:Release>:-Os>")
endif()

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/Input_impl_Input_Input)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/Output_impl_Output_Output)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SlangTypeLibrary)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

DeclareCAmkESComponent(Input_impl_Input_Input
  SOURCES components/Input_impl_Input_Input/src/tc.c components/Input_impl_Input_Input/src/sb_Input_impl.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/Input_impl_Input_Input/includes/ types/includes
  LIBS Input_impl_Input_Input
)

DeclareCAmkESComponent(Output_impl_Output_Output
  SOURCES components/Output_impl_Output_Output/src/sb_Output_impl.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/Output_impl_Output_Output/includes/ types/includes
  LIBS Output_impl_Output_Output
)

DeclareCAmkESComponent(CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor
  SOURCES /usr/local/bin/cake-x64-64/basis_ffi.c components/CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor/src/monitorBoundaries.c components/CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor/src/sb_CASE_Monitor1_Impl_ffi.c components/CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor/src/sb_CASE_Monitor1_Impl.S components/CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor/src/sb_CASE_Monitor1_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor/includes/ types/includes
  LIBS CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor
)

DeclareCAmkESRootserver(CASE_MONITOR_TEST_impl_Instance.camkes)
