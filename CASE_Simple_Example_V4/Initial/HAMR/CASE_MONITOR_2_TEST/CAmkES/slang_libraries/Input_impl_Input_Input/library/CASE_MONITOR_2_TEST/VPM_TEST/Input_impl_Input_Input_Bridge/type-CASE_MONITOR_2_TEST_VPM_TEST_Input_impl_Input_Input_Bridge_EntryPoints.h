#ifndef SIREUM_TYPE_H_CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints
#define SIREUM_TYPE_H_CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.EntryPoints
#include <type-org_sireum_Option_9AF35E.h>
#include <type-CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api.h>
#include <type-CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>

typedef struct CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints *CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints;
struct CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints {
  TYPE type;
  union Option_9AF35E dispatchTriggers;
  struct CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api initialization_api;
  struct CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api operational_api;
  struct IS_82ABD8 dataInPortIds;
  struct IS_82ABD8 eventInPortIds;
  struct IS_82ABD8 dataOutPortIds;
  struct IS_82ABD8 eventOutPortIds;
  Z Input_impl_Input_Input_BridgeId;
  Z Observed_Id;
};

#define DeclNewCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints(x) struct CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints x = { .type = TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints }

#ifdef __cplusplus
}
#endif

#endif