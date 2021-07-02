#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Bridge

#include <type-hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.h>
#include <type-hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.h>
#include <type-hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.h>
#include <type-hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.h>
#include <type-hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.h>
#include <type-hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.h>
#include <type-hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.h>
#include <type-hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.h>
#include <type-hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge;
  struct hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge;
  struct hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge;
  struct hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge;
  struct hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge;
  struct hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge;
  struct hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge;
  struct hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge;
  struct hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#ifdef __cplusplus
}
#endif

#endif