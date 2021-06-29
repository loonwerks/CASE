#ifndef SIREUM_TYPE_H_hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge
#define SIREUM_TYPE_H_hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-org_sireum_Option_9AF35E.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_9CBF18.h>
#include <type-art_Bridge_Ports.h>
#include <type-hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api.h>
#include <type-hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge *hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge;
struct hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union Option_9AF35E dispatchTriggers;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_45E54D keep_in_zones;
  struct art_Port_45E54D keep_out_zones;
  struct art_Port_45E54D observed;
  struct art_Port_45E54D output;
  struct art_Port_9CBF18 alert;
  struct art_Bridge_Ports ports;
  struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api initialization_api;
  struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api operational_api;
  Z id;
};

#define DeclNewhamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge(x) struct hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge x = { .type = Thamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge }

#ifdef __cplusplus
}
#endif

#endif