cmake_minimum_required(VERSION 3.5.1)

project(CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Werror)

function(to_hex DEC HEX)
  while(DEC GREATER 0)
    math(EXPR _val "${DEC} % 16")
    math(EXPR DEC "${DEC} / 16")
    if(_val EQUAL 10)
      set(_val "A")
    elseif(_val EQUAL 11)
      set(_val "B")
    elseif(_val EQUAL 12)
      set(_val "C")
    elseif(_val EQUAL 13)
      set(_val "D")
    elseif(_val EQUAL 14)
      set(_val "E")
    elseif(_val EQUAL 15)
      set(_val "F")
    endif()
    set(_res "${_val}${_res}")
  endwhile()
  set(${HEX} "0x${_res}" PARENT_SCOPE)
endfunction()

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  to_hex("122880" stack_size)
  set(CMAKE_EXE_LINKER_FLAGS "-Wl,-stack_size -Wl,${stack_size}")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  if (WIN32 OR MINGW OR MSYS OR CYGWIN)
    to_hex("122880" stack_size)
    set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")
  endif()
  add_compile_options(-fstack-usage)
  add_compile_options("$<$<CONFIG:Release>:-Os>")
endif()

option(BOUND_CHECK
  "Build the program with sequence bound checking."
  OFF)

if(BOUND_CHECK)
  add_definitions(-DSIREUM_BOUND_CHECK)
endif(BOUND_CHECK)

option(RANGE_CHECK
  "Build the program with range checking."
  OFF)

if(RANGE_CHECK)
  add_definitions(-DSIREUM_RANGE_CHECK)
endif(RANGE_CHECK)

option(NO_PRINT
  "Build the program without console output."
  OFF)

if(NO_PRINT)
  add_definitions(-DSIREUM_NO_PRINT)
endif(NO_PRINT)

option(WITH_LOC
  "Build the program with Slang location info."
  OFF)

if(WITH_LOC)
  add_definitions(-DSIREUM_LOC)
endif(WITH_LOC)


add_library(CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2 STATIC
        runtime/lib.h
        runtime/misc.h
        runtime/stackframe.c
        runtime/type.c
        runtime/stackframe.h
        runtime/type.h
        runtime/misc.c
        runtime/ztype.h
        runtime/type-composite.h
        runtime/types.h
        runtime/types.c
        runtime/all.h
        runtime/all.c
        library/CASE_MONITOR2_TEST/type-CASE_MONITOR2_TEST_Base_Types.h
        library/CASE_MONITOR2_TEST/CASE_MONITOR2_TEST_Base_Types.h
        library/CASE_MONITOR2_TEST/CASE_MONITOR2_TEST_Base_Types.c
        library/CASE_MONITOR2_TEST/Base_Types/type-CASE_MONITOR2_TEST_Base_Types_Bits_Payload.h
        library/CASE_MONITOR2_TEST/Base_Types/CASE_MONITOR2_TEST_Base_Types_Bits_Payload.h
        library/CASE_MONITOR2_TEST/Base_Types/CASE_MONITOR2_TEST_Base_Types_Bits_Payload.c
        library/CASE_MONITOR2_TEST/CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2/type-CASE_MONITOR2_TEST_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_CASE_Monitor2.h
        library/CASE_MONITOR2_TEST/CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2/CASE_MONITOR2_TEST_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_CASE_Monitor2.h
        library/CASE_MONITOR2_TEST/CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2/CASE_MONITOR2_TEST_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_CASE_Monitor2.c
        library/CASE_MONITOR2_TEST/type-CASE_MONITOR2_TEST_TranspilerToucher.h
        library/CASE_MONITOR2_TEST/CASE_MONITOR2_TEST_TranspilerToucher.h
        library/CASE_MONITOR2_TEST/CASE_MONITOR2_TEST_TranspilerToucher.c
        library/CASE_MONITOR2_TEST/VPM/type-CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Api.h
        library/CASE_MONITOR2_TEST/VPM/CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Api.h
        library/CASE_MONITOR2_TEST/VPM/CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Api.c
        library/CASE_MONITOR2_TEST/VPM/type-CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2.h
        library/CASE_MONITOR2_TEST/VPM/CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2.h
        library/CASE_MONITOR2_TEST/VPM/type-CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.h
        library/CASE_MONITOR2_TEST/VPM/CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.h
        library/CASE_MONITOR2_TEST/VPM/CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.c
        library/CASE_MONITOR2_TEST/VPM/CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge/type-CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_EntryPoints.h
        library/CASE_MONITOR2_TEST/VPM/CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge/CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_EntryPoints.h
        library/CASE_MONITOR2_TEST/VPM/CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge/CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_EntryPoints.c
        library/CASE_MONITOR2_TEST/VPM/type-CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_seL4Nix.h
        library/CASE_MONITOR2_TEST/VPM/CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_seL4Nix.h
        library/CASE_MONITOR2_TEST/VPM/type-CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api.h
        library/CASE_MONITOR2_TEST/VPM/CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api.h
        library/CASE_MONITOR2_TEST/VPM/CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api.c
        library/CASE_MONITOR2_TEST/VPM/type-CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api.h
        library/CASE_MONITOR2_TEST/VPM/CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api.h
        library/CASE_MONITOR2_TEST/VPM/CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api.c
        library/art/type-art_ArchitectureDescription.h
        library/art/art_ArchitectureDescription.h
        library/art/art_ArchitectureDescription.c
        library/art/type-art_Art.h
        library/art/art_Art.h
        library/art/art_Art.c
        library/art/type-art_Bridge.h
        library/art/art_Bridge.h
        library/art/art_Bridge.c
        library/art/Bridge/type-art_Bridge_EntryPoints.h
        library/art/Bridge/art_Bridge_EntryPoints.h
        library/art/Bridge/art_Bridge_EntryPoints.c
        library/art/Bridge/type-art_Bridge_Ports.h
        library/art/Bridge/art_Bridge_Ports.h
        library/art/Bridge/art_Bridge_Ports.c
        library/art/type-art_DataContent.h
        library/art/art_DataContent.h
        library/art/art_DataContent.c
        library/art/type-art_DispatchPropertyProtocol.h
        library/art/art_DispatchPropertyProtocol.h
        library/art/art_DispatchPropertyProtocol.c
        library/art/DispatchPropertyProtocol/type-art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.c
        library/art/DispatchPropertyProtocol/type-art_DispatchPropertyProtocol_Sporadic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Sporadic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Sporadic.c
        library/art/type-art_Empty.h
        library/art/art_Empty.h
        library/art/art_Empty.c
        library/art/PortMode/type-art_PortMode_Type.h
        library/art/PortMode/art_PortMode_Type.h
        library/art/PortMode/art_PortMode_Type.c
        library/art/type-art_UConnection.h
        library/art/art_UConnection.h
        library/art/art_UConnection.c
        library/art/type-art_UPort.h
        library/art/art_UPort.h
        library/art/art_UPort.c
        library/art/type-art_art_Port_45E54D.h
        library/art/art_art_Port_45E54D.h
        library/art/art_art_Port_45E54D.c
        library/org/sireum/type-org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.c
        library/org/sireum/type-org_sireum_IS_7E8796.h
        library/org/sireum/org_sireum_IS_7E8796.h
        library/org/sireum/org_sireum_IS_7E8796.c
        library/org/sireum/type-org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.c
        library/org/sireum/type-org_sireum_IS_82ABD8.h
        library/org/sireum/org_sireum_IS_82ABD8.h
        library/org/sireum/org_sireum_IS_82ABD8.c
        library/org/sireum/type-org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.c
        library/org/sireum/type-org_sireum_IS_C4F575.h
        library/org/sireum/org_sireum_IS_C4F575.h
        library/org/sireum/org_sireum_IS_C4F575.c
        library/org/sireum/type-org_sireum_MS_83D5EB.h
        library/org/sireum/org_sireum_MS_83D5EB.h
        library/org/sireum/org_sireum_MS_83D5EB.c
        library/org/sireum/type-org_sireum_MS_E444B2.h
        library/org/sireum/org_sireum_MS_E444B2.h
        library/org/sireum/org_sireum_MS_E444B2.c
        library/org/sireum/type-org_sireum_MS_F55A18.h
        library/org/sireum/org_sireum_MS_F55A18.h
        library/org/sireum/org_sireum_MS_F55A18.c
        library/org/sireum/type-org_sireum_None.h
        library/org/sireum/org_sireum_None.h
        library/org/sireum/org_sireum_None.c
        library/org/sireum/type-org_sireum_None_3026C5.h
        library/org/sireum/org_sireum_None_3026C5.h
        library/org/sireum/org_sireum_None_3026C5.c
        library/org/sireum/type-org_sireum_None_39BC5F.h
        library/org/sireum/org_sireum_None_39BC5F.h
        library/org/sireum/org_sireum_None_39BC5F.c
        library/org/sireum/type-org_sireum_None_3D0813.h
        library/org/sireum/org_sireum_None_3D0813.h
        library/org/sireum/org_sireum_None_3D0813.c
        library/org/sireum/type-org_sireum_None_5C1355.h
        library/org/sireum/org_sireum_None_5C1355.h
        library/org/sireum/org_sireum_None_5C1355.c
        library/org/sireum/type-org_sireum_None_734370.h
        library/org/sireum/org_sireum_None_734370.h
        library/org/sireum/org_sireum_None_734370.c
        library/org/sireum/type-org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.c
        library/org/sireum/type-org_sireum_None_EC3D0D.h
        library/org/sireum/org_sireum_None_EC3D0D.h
        library/org/sireum/org_sireum_None_EC3D0D.c
        library/org/sireum/type-org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.c
        library/org/sireum/type-org_sireum_Option_30119F.h
        library/org/sireum/org_sireum_Option_30119F.h
        library/org/sireum/org_sireum_Option_30119F.c
        library/org/sireum/type-org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.c
        library/org/sireum/type-org_sireum_Option_6F33AF.h
        library/org/sireum/org_sireum_Option_6F33AF.h
        library/org/sireum/org_sireum_Option_6F33AF.c
        library/org/sireum/type-org_sireum_Option_7BBFBE.h
        library/org/sireum/org_sireum_Option_7BBFBE.h
        library/org/sireum/org_sireum_Option_7BBFBE.c
        library/org/sireum/type-org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.c
        library/org/sireum/type-org_sireum_Option_9AF35E.h
        library/org/sireum/org_sireum_Option_9AF35E.h
        library/org/sireum/org_sireum_Option_9AF35E.c
        library/org/sireum/type-org_sireum_Option_F9C054.h
        library/org/sireum/org_sireum_Option_F9C054.h
        library/org/sireum/org_sireum_Option_F9C054.c
        library/org/sireum/type-org_sireum_Some.h
        library/org/sireum/org_sireum_Some.h
        library/org/sireum/org_sireum_Some.c
        library/org/sireum/type-org_sireum_Some_2D0976.h
        library/org/sireum/org_sireum_Some_2D0976.h
        library/org/sireum/org_sireum_Some_2D0976.c
        library/org/sireum/type-org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.c
        library/org/sireum/type-org_sireum_Some_482E57.h
        library/org/sireum/org_sireum_Some_482E57.h
        library/org/sireum/org_sireum_Some_482E57.c
        library/org/sireum/type-org_sireum_Some_8D03B1.h
        library/org/sireum/org_sireum_Some_8D03B1.h
        library/org/sireum/org_sireum_Some_8D03B1.c
        library/org/sireum/type-org_sireum_Some_C4344F.h
        library/org/sireum/org_sireum_Some_C4344F.h
        library/org/sireum/org_sireum_Some_C4344F.c
        library/org/sireum/type-org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.c
        library/org/sireum/type-org_sireum_U8.h
        library/org/sireum/org_sireum_U8.h
        library/org/sireum/org_sireum_U8.c
        ext/ext.c
        ext/ext.h
        ext/CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2.h
        ext/CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2.c
        ext/CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_api.h
        ext/CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_api.c
        ext/CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_adapter.h
        ext/CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_adapter.c)

target_include_directories(CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2
        PUBLIC PUBLIC app-CASE_Monitor2
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/CASE_MONITOR2_TEST
        PUBLIC PUBLIC library/CASE_MONITOR2_TEST/Base_Types
        PUBLIC PUBLIC library/CASE_MONITOR2_TEST/CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2
        PUBLIC PUBLIC library/CASE_MONITOR2_TEST/VPM
        PUBLIC PUBLIC library/CASE_MONITOR2_TEST/VPM/CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/art/Bridge
        PUBLIC PUBLIC library/art/DispatchPropertyProtocol
        PUBLIC PUBLIC library/art/PortMode
        PUBLIC PUBLIC library/org/sireum
        PUBLIC PUBLIC ext)


add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2
                        muslc)
endif()