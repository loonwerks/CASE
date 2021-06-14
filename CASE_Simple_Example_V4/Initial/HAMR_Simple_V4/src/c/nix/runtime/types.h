#ifndef SIREUM_GEN_H
#define SIREUM_GEN_H

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>
#include <type-HAMR_Simple_V4_Arch.h>
#include <type-HAMR_Simple_V4_ArtNix.h>
#include <type-HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App.h>
#include <type-HAMR_Simple_V4_Base_Types.h>
#include <type-HAMR_Simple_V4_Base_Types_Bits_Payload.h>
#include <type-HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App.h>
#include <type-HAMR_Simple_V4_FlightPlanner_Impl_SW_FlightPlanner_App.h>
#include <type-HAMR_Simple_V4_IPCPorts.h>
#include <type-HAMR_Simple_V4_Main.h>
#include <type-HAMR_Simple_V4_PlatformNix.h>
#include <type-HAMR_Simple_V4_Process.h>
#include <type-HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App.h>
#include <type-HAMR_Simple_V4_SW_AttestationTester_Impl_Api.h>
#include <type-HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api.h>
#include <type-HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api.h>
#include <type-HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester.h>
#include <type-HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge.h>
#include <type-HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_EntryPoints.h>
#include <type-HAMR_Simple_V4_SW_FlightController_Impl_Api.h>
#include <type-HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api.h>
#include <type-HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api.h>
#include <type-HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController.h>
#include <type-HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge.h>
#include <type-HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_EntryPoints.h>
#include <type-HAMR_Simple_V4_SW_FlightPlanner_Impl_Api.h>
#include <type-HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api.h>
#include <type-HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api.h>
#include <type-HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner.h>
#include <type-HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge.h>
#include <type-HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_EntryPoints.h>
#include <type-HAMR_Simple_V4_SW_RadioDriver_Impl_Api.h>
#include <type-HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api.h>
#include <type-HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api.h>
#include <type-HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio.h>
#include <type-HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge.h>
#include <type-HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints.h>
#include <type-HAMR_Simple_V4_SharedMemory.h>
#include <type-HAMR_Simple_V4_TranspilerToucher.h>
#include <type-art_ArchitectureDescription.h>
#include <type-art_Art.h>
#include <type-art_Bridge.h>
#include <type-art_Bridge_EntryPoints.h>
#include <type-art_Bridge_Ports.h>
#include <type-art_Connection.h>
#include <type-art_DataContent.h>
#include <type-art_DispatchPropertyProtocol.h>
#include <type-art_DispatchPropertyProtocol_Periodic.h>
#include <type-art_DispatchPropertyProtocol_Sporadic.h>
#include <type-art_DispatchStatus.h>
#include <type-art_Empty.h>
#include <type-art_EventTriggered.h>
#include <type-art_PortMode_Type.h>
#include <type-art_TimeTriggered.h>
#include <type-art_UConnection.h>
#include <type-art_UPort.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_9CBF18.h>
#include <type-org_sireum_IS_08117A.h>
#include <type-org_sireum_IS_7E8796.h>
#include <type-org_sireum_IS_820232.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_948B60.h>
#include <type-org_sireum_IS_AA0F82.h>
#include <type-org_sireum_IS_C4F575.h>
#include <type-org_sireum_MBox2_1029D1.h>
#include <type-org_sireum_MBox2_1CBFC4.h>
#include <type-org_sireum_MS_2590FE.h>
#include <type-org_sireum_MS_30A5B4.h>
#include <type-org_sireum_MS_83D5EB.h>
#include <type-org_sireum_MS_B5E3E6.h>
#include <type-org_sireum_MS_E444B2.h>
#include <type-org_sireum_MS_F55A18.h>
#include <type-org_sireum_None.h>
#include <type-org_sireum_None_2849BF.h>
#include <type-org_sireum_None_3026C5.h>
#include <type-org_sireum_None_39BC5F.h>
#include <type-org_sireum_None_3F37D3.h>
#include <type-org_sireum_None_43D596.h>
#include <type-org_sireum_None_4E54E3.h>
#include <type-org_sireum_None_5C1355.h>
#include <type-org_sireum_None_600AAD.h>
#include <type-org_sireum_None_6557E1.h>
#include <type-org_sireum_None_734370.h>
#include <type-org_sireum_None_76463B.h>
#include <type-org_sireum_None_964667.h>
#include <type-org_sireum_None_C64652.h>
#include <type-org_sireum_None_E951B6.h>
#include <type-org_sireum_None_ED72E1.h>
#include <type-org_sireum_Nothing.h>
#include <type-org_sireum_Option_089975.h>
#include <type-org_sireum_Option_16C801.h>
#include <type-org_sireum_Option_29F734.h>
#include <type-org_sireum_Option_30119F.h>
#include <type-org_sireum_Option_3A1F68.h>
#include <type-org_sireum_Option_6239DB.h>
#include <type-org_sireum_Option_680CAA.h>
#include <type-org_sireum_Option_6F9BAD.h>
#include <type-org_sireum_Option_7BBFBE.h>
#include <type-org_sireum_Option_7C94AD.h>
#include <type-org_sireum_Option_882048.h>
#include <type-org_sireum_Option_8E9F45.h>
#include <type-org_sireum_Option_994630.h>
#include <type-org_sireum_Option_9AF35E.h>
#include <type-org_sireum_Option_C622DB.h>
#include <type-org_sireum_Some.h>
#include <type-org_sireum_Some_0FF3DD.h>
#include <type-org_sireum_Some_3A7E15.h>
#include <type-org_sireum_Some_3E197E.h>
#include <type-org_sireum_Some_4782C6.h>
#include <type-org_sireum_Some_482E57.h>
#include <type-org_sireum_Some_488F47.h>
#include <type-org_sireum_Some_8D03B1.h>
#include <type-org_sireum_Some_9E368A.h>
#include <type-org_sireum_Some_B4F3A8.h>
#include <type-org_sireum_Some_CFA8D1.h>
#include <type-org_sireum_Some_D29615.h>
#include <type-org_sireum_Some_DAEBD0.h>
#include <type-org_sireum_Some_DDE9FD.h>
#include <type-org_sireum_Some_FCFE69.h>
#include <type-org_sireum_Tuple2_EC3B57.h>
#include <type-org_sireum_U8.h>
#include <type-org_sireum_ops_ISZOps.h>
#include <type-org_sireum_ops_ops_ISZOps_A6D40E.h>

#if defined(static_assert)
#define STATIC_ASSERT static_assert
#define GLOBAL_STATIC_ASSERT(a, b, c) static_assert(b, c)
#else
#define STATIC_ASSERT(pred, explanation); {char assert[1/(pred)];(void)assert;}
#define GLOBAL_STATIC_ASSERT(unique, pred, explanation); namespace ASSERTION {char unique[1/(pred)];}
#endif

size_t sizeOf(Type t);
void Type_assign(void *dest, void *src, size_t destSize);

#ifdef __cplusplus
}
#endif

#endif