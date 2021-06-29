#ifndef SIREUM_ALL_H
#define SIREUM_ALL_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>
#include <art_ArchitectureDescription.h>
#include <art_Art.h>
#include <art_Bridge.h>
#include <art_Bridge_EntryPoints.h>
#include <art_Bridge_Ports.h>
#include <art_Connection.h>
#include <art_DataContent.h>
#include <art_DispatchPropertyProtocol.h>
#include <art_DispatchPropertyProtocol_Periodic.h>
#include <art_DispatchPropertyProtocol_Sporadic.h>
#include <art_Empty.h>
#include <art_PortMode_Type.h>
#include <art_UConnection.h>
#include <art_UPort.h>
#include <art_art_Port_45E54D.h>
#include <art_art_Port_9CBF18.h>
#include <hamr_Arch.h>
#include <hamr_ArtNix.h>
#include <hamr_Base_Types.h>
#include <hamr_Base_Types_Bits_Payload.h>
#include <hamr_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App.h>
#include <hamr_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App.h>
#include <hamr_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App.h>
#include <hamr_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App.h>
#include <hamr_Drivers_UARTDriver_Impl_Api.h>
#include <hamr_Drivers_UARTDriver_Impl_Initialization_Api.h>
#include <hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.h>
#include <hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.h>
#include <hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints.h>
#include <hamr_Drivers_UARTDriver_Impl_Operational_Api.h>
#include <hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.h>
#include <hamr_IPCPorts.h>
#include <hamr_Main.h>
#include <hamr_PlatformNix.h>
#include <hamr_Process.h>
#include <hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.h>
#include <hamr_SW_CASE_AttestationGate_thr_Impl_Api.h>
#include <hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api.h>
#include <hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.h>
#include <hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.h>
#include <hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints.h>
#include <hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api.h>
#include <hamr_SW_CASE_Filter_LST_thr_Impl_Api.h>
#include <hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api.h>
#include <hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.h>
#include <hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.h>
#include <hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_EntryPoints.h>
#include <hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api.h>
#include <hamr_SW_CASE_Monitor_Geo_thr_Impl_Api.h>
#include <hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api.h>
#include <hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.h>
#include <hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.h>
#include <hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints.h>
#include <hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api.h>
#include <hamr_SW_CASE_Monitor_Req_thr_Impl_Api.h>
#include <hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api.h>
#include <hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.h>
#include <hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.h>
#include <hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints.h>
#include <hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api.h>
#include <hamr_SW_FlyZonesDatabase_thr_Impl_Api.h>
#include <hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api.h>
#include <hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.h>
#include <hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.h>
#include <hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_EntryPoints.h>
#include <hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api.h>
#include <hamr_SW_RadioDriver_Attestation_thr_Impl_Api.h>
#include <hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api.h>
#include <hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.h>
#include <hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.h>
#include <hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_EntryPoints.h>
#include <hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api.h>
#include <hamr_SW_UxAS_thr_Impl_Api.h>
#include <hamr_SW_UxAS_thr_Impl_Initialization_Api.h>
#include <hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS.h>
#include <hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.h>
#include <hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints.h>
#include <hamr_SW_UxAS_thr_Impl_Operational_Api.h>
#include <hamr_SW_WaypointPlanManagerService_thr_Impl_Api.h>
#include <hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api.h>
#include <hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.h>
#include <hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.h>
#include <hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_EntryPoints.h>
#include <hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api.h>
#include <hamr_SharedMemory.h>
#include <hamr_TranspilerToucher.h>
#include <hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.h>
#include <hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.h>
#include <hamr_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App.h>
#include <org_sireum_IS_08117A.h>
#include <org_sireum_IS_7E8796.h>
#include <org_sireum_IS_820232.h>
#include <org_sireum_IS_82ABD8.h>
#include <org_sireum_IS_948B60.h>
#include <org_sireum_IS_AA0F82.h>
#include <org_sireum_IS_C4F575.h>
#include <org_sireum_MBox2_1029D1.h>
#include <org_sireum_MBox2_1CBFC4.h>
#include <org_sireum_MS_2590FE.h>
#include <org_sireum_MS_83D5EB.h>
#include <org_sireum_MS_B5E3E6.h>
#include <org_sireum_MS_E444B2.h>
#include <org_sireum_MS_F55A18.h>
#include <org_sireum_None.h>
#include <org_sireum_None_3026C5.h>
#include <org_sireum_None_306A73.h>
#include <org_sireum_None_392677.h>
#include <org_sireum_None_39BC5F.h>
#include <org_sireum_None_3A40F5.h>
#include <org_sireum_None_45110B.h>
#include <org_sireum_None_4BF8A4.h>
#include <org_sireum_None_5189C1.h>
#include <org_sireum_None_579C8E.h>
#include <org_sireum_None_5C1355.h>
#include <org_sireum_None_60EB73.h>
#include <org_sireum_None_69DE14.h>
#include <org_sireum_None_7290DE.h>
#include <org_sireum_None_734370.h>
#include <org_sireum_None_76463B.h>
#include <org_sireum_None_77A6BF.h>
#include <org_sireum_None_78A1D4.h>
#include <org_sireum_None_844F3C.h>
#include <org_sireum_None_964667.h>
#include <org_sireum_None_A929A3.h>
#include <org_sireum_None_C554A3.h>
#include <org_sireum_None_D64418.h>
#include <org_sireum_None_E7D454.h>
#include <org_sireum_None_ED72E1.h>
#include <org_sireum_None_FE10D0.h>
#include <org_sireum_Nothing.h>
#include <org_sireum_Option_21F455.h>
#include <org_sireum_Option_30119F.h>
#include <org_sireum_Option_54EF1B.h>
#include <org_sireum_Option_6239DB.h>
#include <org_sireum_Option_63CBE2.h>
#include <org_sireum_Option_6F37E4.h>
#include <org_sireum_Option_73B21F.h>
#include <org_sireum_Option_7BBFBE.h>
#include <org_sireum_Option_80DF3B.h>
#include <org_sireum_Option_849849.h>
#include <org_sireum_Option_8499A8.h>
#include <org_sireum_Option_869AEE.h>
#include <org_sireum_Option_882048.h>
#include <org_sireum_Option_8E9F45.h>
#include <org_sireum_Option_9382FA.h>
#include <org_sireum_Option_9AD908.h>
#include <org_sireum_Option_9AF35E.h>
#include <org_sireum_Option_9CA19A.h>
#include <org_sireum_Option_AE3831.h>
#include <org_sireum_Option_B4E093.h>
#include <org_sireum_Option_B4EF66.h>
#include <org_sireum_Option_C04856.h>
#include <org_sireum_Option_C622DB.h>
#include <org_sireum_Option_E8930C.h>
#include <org_sireum_Option_F010C8.h>
#include <org_sireum_Some.h>
#include <org_sireum_Some_003142.h>
#include <org_sireum_Some_018CE9.h>
#include <org_sireum_Some_08A5F4.h>
#include <org_sireum_Some_181FDB.h>
#include <org_sireum_Some_30503C.h>
#include <org_sireum_Some_3E197E.h>
#include <org_sireum_Some_4782C6.h>
#include <org_sireum_Some_481DA5.h>
#include <org_sireum_Some_482E57.h>
#include <org_sireum_Some_488F47.h>
#include <org_sireum_Some_5BDE4D.h>
#include <org_sireum_Some_6322F0.h>
#include <org_sireum_Some_65C258.h>
#include <org_sireum_Some_74DA67.h>
#include <org_sireum_Some_7F8DC4.h>
#include <org_sireum_Some_8D03B1.h>
#include <org_sireum_Some_967389.h>
#include <org_sireum_Some_993707.h>
#include <org_sireum_Some_BAA603.h>
#include <org_sireum_Some_CA0A4D.h>
#include <org_sireum_Some_D29615.h>
#include <org_sireum_Some_D48312.h>
#include <org_sireum_Some_F82A4D.h>
#include <org_sireum_Some_FCAC0B.h>
#include <org_sireum_Tuple2_EC3B57.h>
#include <org_sireum_U8.h>

void Z_apply(Option_882048 result, String s);

#ifdef __cplusplus
}
#endif

#endif