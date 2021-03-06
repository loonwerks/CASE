#ifndef SIREUM_H_hamr_Arch
#define SIREUM_H_hamr_Arch

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void hamr_Arch_init(STACK_FRAME_ONLY);

hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(STACK_FRAME_ONLY);
hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(STACK_FRAME_ONLY);
hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(STACK_FRAME_ONLY);
hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(STACK_FRAME_ONLY);
hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(STACK_FRAME_ONLY);
hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(STACK_FRAME_ONLY);
hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(STACK_FRAME_ONLY);
hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(STACK_FRAME_ONLY);
hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(STACK_FRAME_ONLY);
art_ArchitectureDescription hamr_Arch_ad(STACK_FRAME_ONLY);

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(STACK_FRAME_ONLY);

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(STACK_FRAME_ONLY);

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(STACK_FRAME_ONLY);

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(STACK_FRAME_ONLY);

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(STACK_FRAME_ONLY);

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(STACK_FRAME_ONLY);

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(STACK_FRAME_ONLY);

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(STACK_FRAME_ONLY);

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(STACK_FRAME_ONLY);

void hamr_Arch_init_ad(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif