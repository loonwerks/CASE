cmake_minimum_required(VERSION 3.8.2)

project (top_Impl_Instance C)

add_definitions(-DCAMKES)

execute_process(COMMAND bash -c "${CMAKE_CURRENT_LIST_DIR}/bin/compile-hamr-lib.sh")

set(HAMR_LIB_top_Impl_Instance_am_gate_CASE_AttestationGate ${CMAKE_CURRENT_LIST_DIR}/hamr/top_Impl_Instance_am_gate_CASE_AttestationGate/sel4-build/libmain.a)

set(HAMR_INCLUDES_top_Impl_Instance_am_gate_CASE_AttestationGate
  hamr/top_Impl_Instance_am_gate_CASE_AttestationGate/library/org/sireum
  hamr/top_Impl_Instance_am_gate_CASE_AttestationGate/library/hamr
  hamr/top_Impl_Instance_am_gate_CASE_AttestationGate/library/hamr/top_Impl_Instance_am_gate_CASE_AttestationGate
  hamr/top_Impl_Instance_am_gate_CASE_AttestationGate/library/hamr/CASE_AttestationGate
  hamr/top_Impl_Instance_am_gate_CASE_AttestationGate/library/hamr/CASE_AttestationGate/CASE_AttestationGate_thr_Impl_Bridge
  hamr/top_Impl_Instance_am_gate_CASE_AttestationGate/library/hamr/Base_Types
  hamr/top_Impl_Instance_am_gate_CASE_AttestationGate/library/art
  hamr/top_Impl_Instance_am_gate_CASE_AttestationGate/library/art/DispatchPropertyProtocol
  hamr/top_Impl_Instance_am_gate_CASE_AttestationGate/library/art/PortMode
  hamr/top_Impl_Instance_am_gate_CASE_AttestationGate/library/art/Bridge
  hamr/top_Impl_Instance_am_gate_CASE_AttestationGate/runtime
  hamr/top_Impl_Instance_am_gate_CASE_AttestationGate/ext
)

set(HAMR_LIB_top_Impl_Instance_radio_RadioDriver ${CMAKE_CURRENT_LIST_DIR}/hamr/top_Impl_Instance_radio_RadioDriver/sel4-build/libmain.a)

set(HAMR_INCLUDES_top_Impl_Instance_radio_RadioDriver
  hamr/top_Impl_Instance_radio_RadioDriver/library/org/sireum
  hamr/top_Impl_Instance_radio_RadioDriver/library/hamr
  hamr/top_Impl_Instance_radio_RadioDriver/library/hamr/RadioDriver
  hamr/top_Impl_Instance_radio_RadioDriver/library/hamr/RadioDriver/RadioDriver_thr_Impl_Bridge
  hamr/top_Impl_Instance_radio_RadioDriver/library/hamr/top_Impl_Instance_radio_RadioDriver
  hamr/top_Impl_Instance_radio_RadioDriver/library/hamr/Base_Types
  hamr/top_Impl_Instance_radio_RadioDriver/library/art
  hamr/top_Impl_Instance_radio_RadioDriver/library/art/DispatchPropertyProtocol
  hamr/top_Impl_Instance_radio_RadioDriver/library/art/PortMode
  hamr/top_Impl_Instance_radio_RadioDriver/library/art/Bridge
  hamr/top_Impl_Instance_radio_RadioDriver/runtime
  hamr/top_Impl_Instance_radio_RadioDriver/ext
)

set(HAMR_LIB_top_Impl_Instance_uxas_UxAS_thread ${CMAKE_CURRENT_LIST_DIR}/hamr/top_Impl_Instance_uxas_UxAS_thread/sel4-build/libmain.a)

set(HAMR_INCLUDES_top_Impl_Instance_uxas_UxAS_thread
  hamr/top_Impl_Instance_uxas_UxAS_thread/library/org/sireum
  hamr/top_Impl_Instance_uxas_UxAS_thread/library/hamr
  hamr/top_Impl_Instance_uxas_UxAS_thread/library/hamr/Base_Types
  hamr/top_Impl_Instance_uxas_UxAS_thread/library/hamr/top_Impl_Instance_uxas_UxAS_thread
  hamr/top_Impl_Instance_uxas_UxAS_thread/library/hamr/SysContext
  hamr/top_Impl_Instance_uxas_UxAS_thread/library/hamr/SysContext/UxAS_thr_Impl_Bridge
  hamr/top_Impl_Instance_uxas_UxAS_thread/library/art
  hamr/top_Impl_Instance_uxas_UxAS_thread/library/art/DispatchPropertyProtocol
  hamr/top_Impl_Instance_uxas_UxAS_thread/library/art/PortMode
  hamr/top_Impl_Instance_uxas_UxAS_thread/library/art/Bridge
  hamr/top_Impl_Instance_uxas_UxAS_thread/runtime
  hamr/top_Impl_Instance_uxas_UxAS_thread/ext
)

set(HAMR_LIB_SlangTypeLibrary ${CMAKE_CURRENT_LIST_DIR}/hamr/SlangTypeLibrary/sel4-build/libmain.a)

set(HAMR_INCLUDES_SlangTypeLibrary
  hamr/SlangTypeLibrary/library/org/sireum
  hamr/SlangTypeLibrary/library/hamr
  hamr/SlangTypeLibrary/library/hamr/Base_Types
  hamr/SlangTypeLibrary/library/hamr/SlangTypeLibrary
  hamr/SlangTypeLibrary/library/art
  hamr/SlangTypeLibrary/runtime
)

DeclareCAmkESComponent(UxAS_thr_Impl
  SOURCES components/UxAS_thr_Impl/src/sb_UxAS_thr_Impl.c includes/sb_queue_union_art_DataContent_1.c includes/sb_queue_union_art_DataContent_1.c includes/sb_queue_union_art_DataContent_1.c
  INCLUDES ${HAMR_INCLUDES_top_Impl_Instance_uxas_UxAS_thread} components/UxAS_thr_Impl/includes/ includes
  LIBS ${HAMR_LIB_top_Impl_Instance_uxas_UxAS_thread}
)

DeclareCAmkESComponent(RadioDriver_thr_Impl
  SOURCES components/RadioDriver_thr_Impl/src/sb_RadioDriver_thr_Impl.c sampling_ports/sp_union_art_DataContent.c includes/sb_queue_union_art_DataContent_1.c includes/sb_queue_union_art_DataContent_1.c includes/sb_queue_union_art_DataContent_1.c
  INCLUDES ${HAMR_INCLUDES_top_Impl_Instance_radio_RadioDriver} components/RadioDriver_thr_Impl/includes/ sampling_ports includes
  LIBS ${HAMR_LIB_top_Impl_Instance_radio_RadioDriver}
)

DeclareCAmkESComponent(CASE_AttestationGate_thr_Impl
  SOURCES components/CASE_AttestationGate_thr_Impl/src/sb_CASE_AttestationGate_thr_Impl.c components/CASE_AttestationGate_thr_Impl/src/sb_CASE_AttestationGate_thr_Impl_ffi.c components/CASE_AttestationGate_thr_Impl/src/sb_CASE_AttestationGate_thr_Impl.S sampling_ports/sp_union_art_DataContent.c includes/sb_queue_union_art_DataContent_1.c includes/sb_queue_union_art_DataContent_1.c includes/sb_queue_union_art_DataContent_1.c includes/sb_queue_union_art_DataContent_1.c includes/sb_queue_union_art_DataContent_1.c includes/sb_queue_union_art_DataContent_1.c
  INCLUDES ${HAMR_INCLUDES_top_Impl_Instance_am_gate_CASE_AttestationGate} components/CASE_AttestationGate_thr_Impl/includes/ sampling_ports includes
  LIBS ${HAMR_LIB_top_Impl_Instance_am_gate_CASE_AttestationGate}
)

DeclareCAmkESComponent(Pacer
  SOURCES components/Pacer/src/Pacer.c
  INCLUDES ${HAMR_INCLUDES_SlangTypeLibrary} includes
  LIBS ${HAMR_LIB_SlangTypeLibrary}
)

DeclareCAmkESRootserver(top_Impl_Instance.camkes)
