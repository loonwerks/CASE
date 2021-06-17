#ifndef SIREUM_TYPE_H_hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints
#define SIREUM_TYPE_H_hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.EntryPoints
#include <type-org_sireum_Option_9AF35E.h>
#include <type-hamr_SW_UxAS_thr_Impl_Initialization_Api.h>
#include <type-hamr_SW_UxAS_thr_Impl_Operational_Api.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>

typedef struct hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints *hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints;
struct hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints {
  TYPE type;
  union Option_9AF35E dispatchTriggers;
  struct hamr_SW_UxAS_thr_Impl_Initialization_Api initialization_api;
  struct hamr_SW_UxAS_thr_Impl_Operational_Api operational_api;
  struct IS_82ABD8 dataInPortIds;
  struct IS_82ABD8 eventInPortIds;
  struct IS_82ABD8 dataOutPortIds;
  struct IS_82ABD8 eventOutPortIds;
  Z UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_BridgeId;
  Z AutomationRequest_Id;
  Z AirVehicleState_Id;
  Z OperatingRegion_Id;
  Z LineSearchTask_Id;
  Z AutomationResponse_MON_GEO_Id;
  Z AutomationResponse_MON_REQ_Id;
};

#define DeclNewhamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints(x) struct hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints x = { .type = Thamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints }

#ifdef __cplusplus
}
#endif

#endif