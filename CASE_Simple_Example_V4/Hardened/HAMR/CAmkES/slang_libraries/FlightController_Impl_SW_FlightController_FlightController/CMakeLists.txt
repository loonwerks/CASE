cmake_minimum_required(VERSION 3.5.1)

project(FlightController_Impl_SW_FlightController_FlightController)

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
  to_hex("1048576" stack_size)
  set(CMAKE_EXE_LINKER_FLAGS "-Wl,-stack_size -Wl,${stack_size}")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  if (WIN32 OR MINGW OR MSYS OR CYGWIN)
    to_hex("1048576" stack_size)
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


add_library(FlightController_Impl_SW_FlightController_FlightController STATIC
        runtime/type.c
        runtime/stackframe.c
        runtime/stackframe.h
        runtime/misc.c
        runtime/misc.h
        runtime/lib.h
        runtime/type.h
        runtime/ztype.h
        runtime/type-composite.h
        runtime/types.h
        runtime/types.c
        runtime/all.h
        runtime/all.c
        library/HAMR/type-HAMR_Base_Types.h
        library/HAMR/HAMR_Base_Types.h
        library/HAMR/HAMR_Base_Types.c
        library/HAMR/Base_Types/type-HAMR_Base_Types_Bits_Payload.h
        library/HAMR/Base_Types/HAMR_Base_Types_Bits_Payload.h
        library/HAMR/Base_Types/HAMR_Base_Types_Bits_Payload.c
        library/HAMR/FlightController_Impl_SW_FlightController_FlightController/type-HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController.h
        library/HAMR/FlightController_Impl_SW_FlightController_FlightController/HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController.h
        library/HAMR/FlightController_Impl_SW_FlightController_FlightController/HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController.c
        library/HAMR/SW/type-HAMR_SW_FlightController_Impl_Api.h
        library/HAMR/SW/HAMR_SW_FlightController_Impl_Api.h
        library/HAMR/SW/HAMR_SW_FlightController_Impl_Api.c
        library/HAMR/SW/type-HAMR_SW_FlightController_Impl_Initialization_Api.h
        library/HAMR/SW/HAMR_SW_FlightController_Impl_Initialization_Api.h
        library/HAMR/SW/HAMR_SW_FlightController_Impl_Initialization_Api.c
        library/HAMR/SW/type-HAMR_SW_FlightController_Impl_Operational_Api.h
        library/HAMR/SW/HAMR_SW_FlightController_Impl_Operational_Api.h
        library/HAMR/SW/HAMR_SW_FlightController_Impl_Operational_Api.c
        library/HAMR/SW/type-HAMR_SW_FlightController_Impl_SW_FlightController_FlightController.h
        library/HAMR/SW/HAMR_SW_FlightController_Impl_SW_FlightController_FlightController.h
        library/HAMR/SW/type-HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge.h
        library/HAMR/SW/HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge.h
        library/HAMR/SW/HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge.c
        library/HAMR/SW/FlightController_Impl_SW_FlightController_FlightController_Bridge/type-HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_EntryPoints.h
        library/HAMR/SW/FlightController_Impl_SW_FlightController_FlightController_Bridge/HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_EntryPoints.h
        library/HAMR/SW/FlightController_Impl_SW_FlightController_FlightController_Bridge/HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_EntryPoints.c
        library/HAMR/SW/type-HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_seL4Nix.h
        library/HAMR/SW/HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_seL4Nix.h
        library/HAMR/type-HAMR_TranspilerToucher.h
        library/HAMR/HAMR_TranspilerToucher.h
        library/HAMR/HAMR_TranspilerToucher.c
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
        library/art/type-art_art_Port_9CBF18.h
        library/art/art_art_Port_9CBF18.h
        library/art/art_art_Port_9CBF18.c
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
        library/org/sireum/type-org_sireum_None_5C1355.h
        library/org/sireum/org_sireum_None_5C1355.h
        library/org/sireum/org_sireum_None_5C1355.c
        library/org/sireum/type-org_sireum_None_734370.h
        library/org/sireum/org_sireum_None_734370.h
        library/org/sireum/org_sireum_None_734370.c
        library/org/sireum/type-org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.c
        library/org/sireum/type-org_sireum_None_D43E83.h
        library/org/sireum/org_sireum_None_D43E83.h
        library/org/sireum/org_sireum_None_D43E83.c
        library/org/sireum/type-org_sireum_None_ED72E1.h
        library/org/sireum/org_sireum_None_ED72E1.h
        library/org/sireum/org_sireum_None_ED72E1.c
        library/org/sireum/type-org_sireum_None_F62B67.h
        library/org/sireum/org_sireum_None_F62B67.h
        library/org/sireum/org_sireum_None_F62B67.c
        library/org/sireum/type-org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.c
        library/org/sireum/type-org_sireum_Option_30119F.h
        library/org/sireum/org_sireum_Option_30119F.h
        library/org/sireum/org_sireum_Option_30119F.c
        library/org/sireum/type-org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.c
        library/org/sireum/type-org_sireum_Option_642C2E.h
        library/org/sireum/org_sireum_Option_642C2E.h
        library/org/sireum/org_sireum_Option_642C2E.c
        library/org/sireum/type-org_sireum_Option_7A3D33.h
        library/org/sireum/org_sireum_Option_7A3D33.h
        library/org/sireum/org_sireum_Option_7A3D33.c
        library/org/sireum/type-org_sireum_Option_7BBFBE.h
        library/org/sireum/org_sireum_Option_7BBFBE.h
        library/org/sireum/org_sireum_Option_7BBFBE.c
        library/org/sireum/type-org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.c
        library/org/sireum/type-org_sireum_Option_9AF35E.h
        library/org/sireum/org_sireum_Option_9AF35E.h
        library/org/sireum/org_sireum_Option_9AF35E.c
        library/org/sireum/type-org_sireum_Option_C622DB.h
        library/org/sireum/org_sireum_Option_C622DB.h
        library/org/sireum/org_sireum_Option_C622DB.c
        library/org/sireum/type-org_sireum_Some.h
        library/org/sireum/org_sireum_Some.h
        library/org/sireum/org_sireum_Some.c
        library/org/sireum/type-org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.c
        library/org/sireum/type-org_sireum_Some_4782C6.h
        library/org/sireum/org_sireum_Some_4782C6.h
        library/org/sireum/org_sireum_Some_4782C6.c
        library/org/sireum/type-org_sireum_Some_482E57.h
        library/org/sireum/org_sireum_Some_482E57.h
        library/org/sireum/org_sireum_Some_482E57.c
        library/org/sireum/type-org_sireum_Some_8D03B1.h
        library/org/sireum/org_sireum_Some_8D03B1.h
        library/org/sireum/org_sireum_Some_8D03B1.c
        library/org/sireum/type-org_sireum_Some_9535B2.h
        library/org/sireum/org_sireum_Some_9535B2.h
        library/org/sireum/org_sireum_Some_9535B2.c
        library/org/sireum/type-org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.c
        library/org/sireum/type-org_sireum_Some_E082A6.h
        library/org/sireum/org_sireum_Some_E082A6.h
        library/org/sireum/org_sireum_Some_E082A6.c
        library/org/sireum/type-org_sireum_U8.h
        library/org/sireum/org_sireum_U8.h
        library/org/sireum/org_sireum_U8.c
        ext/ext.c
        ext/ext.h
        ext/FlightController_Impl_SW_FlightController_FlightController.h
        ext/FlightController_Impl_SW_FlightController_FlightController.c
        ext/FlightController_Impl_SW_FlightController_FlightController_api.h
        ext/FlightController_Impl_SW_FlightController_FlightController_api.c
        ext/FlightController_Impl_SW_FlightController_FlightController_adapter.h
        ext/FlightController_Impl_SW_FlightController_FlightController_adapter.c)

target_include_directories(FlightController_Impl_SW_FlightController_FlightController
        PUBLIC PUBLIC app-FlightController
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/HAMR
        PUBLIC PUBLIC library/HAMR/Base_Types
        PUBLIC PUBLIC library/HAMR/FlightController_Impl_SW_FlightController_FlightController
        PUBLIC PUBLIC library/HAMR/SW
        PUBLIC PUBLIC library/HAMR/SW/FlightController_Impl_SW_FlightController_FlightController_Bridge
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/art/Bridge
        PUBLIC PUBLIC library/art/DispatchPropertyProtocol
        PUBLIC PUBLIC library/art/PortMode
        PUBLIC PUBLIC library/org/sireum
        PUBLIC PUBLIC ext)


add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(FlightController_Impl_SW_FlightController_FlightController
                        muslc)
endif()