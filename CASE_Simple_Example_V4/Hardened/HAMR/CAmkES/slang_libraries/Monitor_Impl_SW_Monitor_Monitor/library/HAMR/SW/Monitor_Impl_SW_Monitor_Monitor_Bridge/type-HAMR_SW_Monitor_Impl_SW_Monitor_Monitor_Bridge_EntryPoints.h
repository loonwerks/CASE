#ifndef SIREUM_TYPE_H_HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_EntryPoints
#define SIREUM_TYPE_H_HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_EntryPoints

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.EntryPoints
#include <type-org_sireum_Option_9AF35E.h>
#include <type-HAMR_SW_Monitor_Impl_Initialization_Api.h>
#include <type-HAMR_SW_Monitor_Impl_Operational_Api.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>

typedef struct HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_EntryPoints *HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_EntryPoints;
struct HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_EntryPoints {
  TYPE type;
  union Option_9AF35E dispatchTriggers;
  struct HAMR_SW_Monitor_Impl_Initialization_Api initialization_api;
  struct HAMR_SW_Monitor_Impl_Operational_Api operational_api;
  struct IS_82ABD8 dataInPortIds;
  struct IS_82ABD8 eventInPortIds;
  struct IS_82ABD8 dataOutPortIds;
  struct IS_82ABD8 eventOutPortIds;
  Z Monitor_Impl_SW_Monitor_Monitor_BridgeId;
  Z FlightPlan_in_Id;
  Z FlightPlan_out_Id;
  Z Alert_Id;
};

#define DeclNewHAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_EntryPoints(x) struct HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_EntryPoints x = { .type = THAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_EntryPoints }

#ifdef __cplusplus
}
#endif

#endif