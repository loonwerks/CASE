cmake_minimum_required(VERSION 3.5.1)

project(main)

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
  to_hex("16*1024*1024" stack_size)
  set(CMAKE_EXE_LINKER_FLAGS "-Wl,-stack_size -Wl,${stack_size}")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  if (WIN32 OR MINGW OR MSYS OR CYGWIN)
    to_hex("16*1024*1024" stack_size)
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


add_library(main STATIC
        runtime/misc.h
        runtime/stackframe.h
        runtime/type.c
        runtime/stackframe.c
        runtime/type.h
        runtime/misc.c
        runtime/lib.h
        runtime/ztype.h
        runtime/type-composite.h
        runtime/types.h
        runtime/types.c
        runtime/all.h
        runtime/all.c
        library/HAMR_Simple_V4/type-HAMR_Simple_V4_Arch.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_Arch.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_Arch.c
        library/HAMR_Simple_V4/type-HAMR_Simple_V4_ArtNix.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_ArtNix.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_ArtNix.c
        library/HAMR_Simple_V4/type-HAMR_Simple_V4_Base_Types.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_Base_Types.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_Base_Types.c
        library/HAMR_Simple_V4/Base_Types/type-HAMR_Simple_V4_Base_Types_Bits_Payload.h
        library/HAMR_Simple_V4/Base_Types/HAMR_Simple_V4_Base_Types_Bits_Payload.h
        library/HAMR_Simple_V4/Base_Types/HAMR_Simple_V4_Base_Types_Bits_Payload.c
        library/HAMR_Simple_V4/type-HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App.c
        library/HAMR_Simple_V4/type-HAMR_Simple_V4_FlightPlanner_Impl_SW_FlightPlanner_App.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_FlightPlanner_Impl_SW_FlightPlanner_App.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_FlightPlanner_Impl_SW_FlightPlanner_App.c
        library/HAMR_Simple_V4/type-HAMR_Simple_V4_IPCPorts.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_IPCPorts.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_IPCPorts.c
        library/HAMR_Simple_V4/type-HAMR_Simple_V4_Main.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_Main.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_Main.c
        library/HAMR_Simple_V4/type-HAMR_Simple_V4_PlatformNix.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_PlatformNix.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_PlatformNix.c
        library/HAMR_Simple_V4/type-HAMR_Simple_V4_Process.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_Process.h
        library/HAMR_Simple_V4/type-HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App.c
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_FlightController_Impl_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightController_Impl_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightController_Impl_Api.c
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api.c
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api.c
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController.h
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge.c
        library/HAMR_Simple_V4/SW/FlightController_Impl_SW_FlightController_Bridge/type-HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_EntryPoints.h
        library/HAMR_Simple_V4/SW/FlightController_Impl_SW_FlightController_Bridge/HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_EntryPoints.h
        library/HAMR_Simple_V4/SW/FlightController_Impl_SW_FlightController_Bridge/HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_EntryPoints.c
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_FlightPlanner_Impl_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightPlanner_Impl_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightPlanner_Impl_Api.c
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api.c
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api.c
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner.h
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge.c
        library/HAMR_Simple_V4/SW/FlightPlanner_Impl_SW_FlightPlanner_Bridge/type-HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_EntryPoints.h
        library/HAMR_Simple_V4/SW/FlightPlanner_Impl_SW_FlightPlanner_Bridge/HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_EntryPoints.h
        library/HAMR_Simple_V4/SW/FlightPlanner_Impl_SW_FlightPlanner_Bridge/HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_EntryPoints.c
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_RadioDriver_Impl_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_RadioDriver_Impl_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_RadioDriver_Impl_Api.c
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api.c
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api.c
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio.h
        library/HAMR_Simple_V4/SW/type-HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge.h
        library/HAMR_Simple_V4/SW/HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge.c
        library/HAMR_Simple_V4/SW/RadioDriver_Impl_SW_Radio_Bridge/type-HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints.h
        library/HAMR_Simple_V4/SW/RadioDriver_Impl_SW_Radio_Bridge/HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints.h
        library/HAMR_Simple_V4/SW/RadioDriver_Impl_SW_Radio_Bridge/HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints.c
        library/HAMR_Simple_V4/type-HAMR_Simple_V4_SharedMemory.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_SharedMemory.h
        library/HAMR_Simple_V4/type-HAMR_Simple_V4_TranspilerToucher.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_TranspilerToucher.h
        library/HAMR_Simple_V4/HAMR_Simple_V4_TranspilerToucher.c
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
        library/art/type-art_Connection.h
        library/art/art_Connection.h
        library/art/art_Connection.c
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
        library/art/type-art_DispatchStatus.h
        library/art/art_DispatchStatus.h
        library/art/art_DispatchStatus.c
        library/art/type-art_Empty.h
        library/art/art_Empty.h
        library/art/art_Empty.c
        library/art/type-art_EventTriggered.h
        library/art/art_EventTriggered.h
        library/art/art_EventTriggered.c
        library/art/PortMode/type-art_PortMode_Type.h
        library/art/PortMode/art_PortMode_Type.h
        library/art/PortMode/art_PortMode_Type.c
        library/art/type-art_TimeTriggered.h
        library/art/art_TimeTriggered.h
        library/art/art_TimeTriggered.c
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
        library/org/sireum/type-org_sireum_IS_AA0F82.h
        library/org/sireum/org_sireum_IS_AA0F82.h
        library/org/sireum/org_sireum_IS_AA0F82.c
        library/org/sireum/type-org_sireum_IS_C4F575.h
        library/org/sireum/org_sireum_IS_C4F575.h
        library/org/sireum/org_sireum_IS_C4F575.c
        library/org/sireum/type-org_sireum_MBox2_1029D1.h
        library/org/sireum/org_sireum_MBox2_1029D1.h
        library/org/sireum/org_sireum_MBox2_1029D1.c
        library/org/sireum/type-org_sireum_MBox2_1CBFC4.h
        library/org/sireum/org_sireum_MBox2_1CBFC4.h
        library/org/sireum/org_sireum_MBox2_1CBFC4.c
        library/org/sireum/type-org_sireum_MS_2590FE.h
        library/org/sireum/org_sireum_MS_2590FE.h
        library/org/sireum/org_sireum_MS_2590FE.c
        library/org/sireum/type-org_sireum_MS_30A5B4.h
        library/org/sireum/org_sireum_MS_30A5B4.h
        library/org/sireum/org_sireum_MS_30A5B4.c
        library/org/sireum/type-org_sireum_MS_83D5EB.h
        library/org/sireum/org_sireum_MS_83D5EB.h
        library/org/sireum/org_sireum_MS_83D5EB.c
        library/org/sireum/type-org_sireum_MS_B5E3E6.h
        library/org/sireum/org_sireum_MS_B5E3E6.h
        library/org/sireum/org_sireum_MS_B5E3E6.c
        library/org/sireum/type-org_sireum_MS_E444B2.h
        library/org/sireum/org_sireum_MS_E444B2.h
        library/org/sireum/org_sireum_MS_E444B2.c
        library/org/sireum/type-org_sireum_MS_F55A18.h
        library/org/sireum/org_sireum_MS_F55A18.h
        library/org/sireum/org_sireum_MS_F55A18.c
        library/org/sireum/type-org_sireum_None.h
        library/org/sireum/org_sireum_None.h
        library/org/sireum/org_sireum_None.c
        library/org/sireum/type-org_sireum_None_2849BF.h
        library/org/sireum/org_sireum_None_2849BF.h
        library/org/sireum/org_sireum_None_2849BF.c
        library/org/sireum/type-org_sireum_None_3026C5.h
        library/org/sireum/org_sireum_None_3026C5.h
        library/org/sireum/org_sireum_None_3026C5.c
        library/org/sireum/type-org_sireum_None_39BC5F.h
        library/org/sireum/org_sireum_None_39BC5F.h
        library/org/sireum/org_sireum_None_39BC5F.c
        library/org/sireum/type-org_sireum_None_3F37D3.h
        library/org/sireum/org_sireum_None_3F37D3.h
        library/org/sireum/org_sireum_None_3F37D3.c
        library/org/sireum/type-org_sireum_None_43D596.h
        library/org/sireum/org_sireum_None_43D596.h
        library/org/sireum/org_sireum_None_43D596.c
        library/org/sireum/type-org_sireum_None_4E54E3.h
        library/org/sireum/org_sireum_None_4E54E3.h
        library/org/sireum/org_sireum_None_4E54E3.c
        library/org/sireum/type-org_sireum_None_5C1355.h
        library/org/sireum/org_sireum_None_5C1355.h
        library/org/sireum/org_sireum_None_5C1355.c
        library/org/sireum/type-org_sireum_None_734370.h
        library/org/sireum/org_sireum_None_734370.h
        library/org/sireum/org_sireum_None_734370.c
        library/org/sireum/type-org_sireum_None_76463B.h
        library/org/sireum/org_sireum_None_76463B.h
        library/org/sireum/org_sireum_None_76463B.c
        library/org/sireum/type-org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.c
        library/org/sireum/type-org_sireum_None_C64652.h
        library/org/sireum/org_sireum_None_C64652.h
        library/org/sireum/org_sireum_None_C64652.c
        library/org/sireum/type-org_sireum_None_E951B6.h
        library/org/sireum/org_sireum_None_E951B6.h
        library/org/sireum/org_sireum_None_E951B6.c
        library/org/sireum/type-org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.c
        library/org/sireum/type-org_sireum_Option_16C801.h
        library/org/sireum/org_sireum_Option_16C801.h
        library/org/sireum/org_sireum_Option_16C801.c
        library/org/sireum/type-org_sireum_Option_29F734.h
        library/org/sireum/org_sireum_Option_29F734.h
        library/org/sireum/org_sireum_Option_29F734.c
        library/org/sireum/type-org_sireum_Option_30119F.h
        library/org/sireum/org_sireum_Option_30119F.h
        library/org/sireum/org_sireum_Option_30119F.c
        library/org/sireum/type-org_sireum_Option_3A1F68.h
        library/org/sireum/org_sireum_Option_3A1F68.h
        library/org/sireum/org_sireum_Option_3A1F68.c
        library/org/sireum/type-org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.c
        library/org/sireum/type-org_sireum_Option_6F9BAD.h
        library/org/sireum/org_sireum_Option_6F9BAD.h
        library/org/sireum/org_sireum_Option_6F9BAD.c
        library/org/sireum/type-org_sireum_Option_7BBFBE.h
        library/org/sireum/org_sireum_Option_7BBFBE.h
        library/org/sireum/org_sireum_Option_7BBFBE.c
        library/org/sireum/type-org_sireum_Option_7C94AD.h
        library/org/sireum/org_sireum_Option_7C94AD.h
        library/org/sireum/org_sireum_Option_7C94AD.c
        library/org/sireum/type-org_sireum_Option_882048.h
        library/org/sireum/org_sireum_Option_882048.h
        library/org/sireum/org_sireum_Option_882048.c
        library/org/sireum/type-org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.c
        library/org/sireum/type-org_sireum_Option_994630.h
        library/org/sireum/org_sireum_Option_994630.h
        library/org/sireum/org_sireum_Option_994630.c
        library/org/sireum/type-org_sireum_Option_9AF35E.h
        library/org/sireum/org_sireum_Option_9AF35E.h
        library/org/sireum/org_sireum_Option_9AF35E.c
        library/org/sireum/type-org_sireum_Some.h
        library/org/sireum/org_sireum_Some.h
        library/org/sireum/org_sireum_Some.c
        library/org/sireum/type-org_sireum_Some_0FF3DD.h
        library/org/sireum/org_sireum_Some_0FF3DD.h
        library/org/sireum/org_sireum_Some_0FF3DD.c
        library/org/sireum/type-org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.c
        library/org/sireum/type-org_sireum_Some_482E57.h
        library/org/sireum/org_sireum_Some_482E57.h
        library/org/sireum/org_sireum_Some_482E57.c
        library/org/sireum/type-org_sireum_Some_488F47.h
        library/org/sireum/org_sireum_Some_488F47.h
        library/org/sireum/org_sireum_Some_488F47.c
        library/org/sireum/type-org_sireum_Some_8D03B1.h
        library/org/sireum/org_sireum_Some_8D03B1.h
        library/org/sireum/org_sireum_Some_8D03B1.c
        library/org/sireum/type-org_sireum_Some_9E368A.h
        library/org/sireum/org_sireum_Some_9E368A.h
        library/org/sireum/org_sireum_Some_9E368A.c
        library/org/sireum/type-org_sireum_Some_B4F3A8.h
        library/org/sireum/org_sireum_Some_B4F3A8.h
        library/org/sireum/org_sireum_Some_B4F3A8.c
        library/org/sireum/type-org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.c
        library/org/sireum/type-org_sireum_Some_DAEBD0.h
        library/org/sireum/org_sireum_Some_DAEBD0.h
        library/org/sireum/org_sireum_Some_DAEBD0.c
        library/org/sireum/type-org_sireum_Some_DDE9FD.h
        library/org/sireum/org_sireum_Some_DDE9FD.h
        library/org/sireum/org_sireum_Some_DDE9FD.c
        library/org/sireum/type-org_sireum_Some_FCFE69.h
        library/org/sireum/org_sireum_Some_FCFE69.h
        library/org/sireum/org_sireum_Some_FCFE69.c
        library/org/sireum/type-org_sireum_Tuple2_EC3B57.h
        library/org/sireum/org_sireum_Tuple2_EC3B57.h
        library/org/sireum/org_sireum_Tuple2_EC3B57.c
        library/org/sireum/type-org_sireum_U8.h
        library/org/sireum/org_sireum_U8.h
        library/org/sireum/org_sireum_U8.c
        library/org/sireum/ops/type-org_sireum_ops_ISZOps.h
        library/org/sireum/ops/org_sireum_ops_ISZOps.h
        library/org/sireum/ops/org_sireum_ops_ISZOps.c
        library/org/sireum/ops/type-org_sireum_ops_ops_ISZOps_A6D40E.h
        library/org/sireum/ops/org_sireum_ops_ops_ISZOps_A6D40E.h
        library/org/sireum/ops/org_sireum_ops_ops_ISZOps_A6D40E.c
        ext/ext-c/ext.c
        ext/ext-c/FlightPlanner_Impl_SW_FlightPlanner/FlightPlanner_Impl_SW_FlightPlanner_api.c
        ext/ext-c/FlightPlanner_Impl_SW_FlightPlanner/FlightPlanner_Impl_SW_FlightPlanner.h
        ext/ext-c/FlightPlanner_Impl_SW_FlightPlanner/FlightPlanner_Impl_SW_FlightPlanner.c
        ext/ext-c/FlightPlanner_Impl_SW_FlightPlanner/FlightPlanner_Impl_SW_FlightPlanner_api.h
        ext/ext-c/FlightController_Impl_SW_FlightController/FlightController_Impl_SW_FlightController_api.c
        ext/ext-c/FlightController_Impl_SW_FlightController/FlightController_Impl_SW_FlightController.h
        ext/ext-c/FlightController_Impl_SW_FlightController/FlightController_Impl_SW_FlightController_api.h
        ext/ext-c/FlightController_Impl_SW_FlightController/FlightController_Impl_SW_FlightController.c
        ext/ext-c/ext.h
        ext/ext-c/simple_v4.h
        ext/ext-c/simple_v4.c
        ext/ext-c/RadioDriver_Impl_SW_Radio/RadioDriver_Impl_SW_Radio_api.c
        ext/ext-c/RadioDriver_Impl_SW_Radio/RadioDriver_Impl_SW_Radio.c
        ext/ext-c/RadioDriver_Impl_SW_Radio/RadioDriver_Impl_SW_Radio.h
        ext/ext-c/RadioDriver_Impl_SW_Radio/RadioDriver_Impl_SW_Radio_api.h
        ext/etc/ipc.c)

target_include_directories(main
        PUBLIC PUBLIC app-RadioDriver_Impl_SW_Radio_App
        PUBLIC PUBLIC app-FlightPlanner_Impl_SW_FlightPlanner_App
        PUBLIC PUBLIC app-FlightController_Impl_SW_FlightController_App
        PUBLIC PUBLIC app-Main
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/HAMR_Simple_V4
        PUBLIC PUBLIC library/HAMR_Simple_V4/Base_Types
        PUBLIC PUBLIC library/HAMR_Simple_V4/SW
        PUBLIC PUBLIC library/HAMR_Simple_V4/SW/FlightController_Impl_SW_FlightController_Bridge
        PUBLIC PUBLIC library/HAMR_Simple_V4/SW/FlightPlanner_Impl_SW_FlightPlanner_Bridge
        PUBLIC PUBLIC library/HAMR_Simple_V4/SW/RadioDriver_Impl_SW_Radio_Bridge
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/art/Bridge
        PUBLIC PUBLIC library/art/DispatchPropertyProtocol
        PUBLIC PUBLIC library/art/PortMode
        PUBLIC PUBLIC library/org/sireum
        PUBLIC PUBLIC library/org/sireum/ops
        PUBLIC PUBLIC ext/ext-c
        PUBLIC PUBLIC ext/ext-c/FlightPlanner_Impl_SW_FlightPlanner
        PUBLIC PUBLIC ext/ext-c/FlightController_Impl_SW_FlightController
        PUBLIC PUBLIC ext/ext-c/RadioDriver_Impl_SW_Radio
        PUBLIC PUBLIC ext/etc)


add_executable(RadioDriver_Impl_SW_Radio_App-bin app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c)

target_link_libraries(RadioDriver_Impl_SW_Radio_App-bin LINK_PUBLIC main m)

set_target_properties(RadioDriver_Impl_SW_Radio_App-bin PROPERTIES OUTPUT_NAME RadioDriver_Impl_SW_Radio_App)


add_executable(FlightPlanner_Impl_SW_FlightPlanner_App-bin app-FlightPlanner_Impl_SW_FlightPlanner_App/FlightPlanner_Impl_SW_FlightPlanner_App.c)

target_link_libraries(FlightPlanner_Impl_SW_FlightPlanner_App-bin LINK_PUBLIC main m)

set_target_properties(FlightPlanner_Impl_SW_FlightPlanner_App-bin PROPERTIES OUTPUT_NAME FlightPlanner_Impl_SW_FlightPlanner_App)


add_executable(FlightController_Impl_SW_FlightController_App-bin app-FlightController_Impl_SW_FlightController_App/FlightController_Impl_SW_FlightController_App.c)

target_link_libraries(FlightController_Impl_SW_FlightController_App-bin LINK_PUBLIC main m)

set_target_properties(FlightController_Impl_SW_FlightController_App-bin PROPERTIES OUTPUT_NAME FlightController_Impl_SW_FlightController_App)


add_executable(Main-bin app-Main/Main.c)

target_link_libraries(Main-bin LINK_PUBLIC main m)

set_target_properties(Main-bin PROPERTIES OUTPUT_NAME Main)

