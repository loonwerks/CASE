#ifndef SIREUM_TYPE_H_hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints
#define SIREUM_TYPE_H_hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.EntryPoints
#include <type-org_sireum_Option_9AF35E.h>
#include <type-hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api.h>
#include <type-hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>

typedef struct hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints *hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints;
struct hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints {
  TYPE type;
  union Option_9AF35E dispatchTriggers;
  struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api initialization_api;
  struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api operational_api;
  struct IS_82ABD8 dataInPortIds;
  struct IS_82ABD8 eventInPortIds;
  struct IS_82ABD8 dataOutPortIds;
  struct IS_82ABD8 eventOutPortIds;
  Z CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_BridgeId;
  Z keep_in_zones_Id;
  Z keep_out_zones_Id;
  Z observed_Id;
  Z output_Id;
  Z alert_Id;
};

#define DeclNewhamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints(x) struct hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints x = { .type = Thamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints }

#ifdef __cplusplus
}
#endif

#endif