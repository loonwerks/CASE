# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project (top_Impl_Instance C)

add_definitions(-DCAMKES)

include(${CMAKE_CURRENT_LIST_DIR}/CMake_CakeMLOptions.cmake)

include(${CMAKE_CURRENT_LIST_DIR}/CMake_TranspilerOptions.cmake)

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fstack-usage)
  add_compile_options("$<$<CONFIG:Release>:-Os>")
endif()

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/UxAS_thr_Impl_uxas_UxAS_thread)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/RadioDriver_thr_Impl_radio_RadioDriver)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SlangTypeLibrary)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

DeclareCAmkESComponent(UxAS_thr_Impl_uxas_UxAS_thread
  SOURCES components/UxAS_thr_Impl_uxas_UxAS_thread/src/sb_UxAS_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/UxAS_thr_Impl_uxas_UxAS_thread/includes/ types/includes
  LIBS UxAS_thr_Impl_uxas_UxAS_thread
)

DeclareCAmkESComponent(RadioDriver_thr_Impl_radio_RadioDriver
  SOURCES components/RadioDriver_thr_Impl_radio_RadioDriver/src/sb_RadioDriver_thr_Impl.c types/src/sp_union_art_DataContent.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/RadioDriver_thr_Impl_radio_RadioDriver/includes/ types/includes types/includes
  LIBS RadioDriver_thr_Impl_radio_RadioDriver
)

DeclareCAmkESComponent(CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate
  SOURCES components/CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate/src/sb_CASE_AttestationGate_thr_Impl_ffi.c components/CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate/src/sb_CASE_AttestationGate_thr_Impl.S components/CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate/src/sb_CASE_AttestationGate_thr_Impl.c types/src/sp_union_art_DataContent.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate/includes/ types/includes types/includes
  LIBS CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate
)

DeclareCAmkESRootserver(top_Impl_Instance.camkes)
