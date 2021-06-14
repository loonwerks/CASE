#ifndef SIREUM_TYPE_H_CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge
#define SIREUM_TYPE_H_CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-org_sireum_Option_9AF35E.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_Bridge_Ports.h>
#include <type-CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api.h>
#include <type-CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge *CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge;
struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union Option_9AF35E dispatchTriggers;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_45E54D Observed;
  struct art_Bridge_Ports ports;
  struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api initialization_api;
  struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api operational_api;
  Z id;
};

#define DeclNewCASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge(x) struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge x = { .type = TCASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge }

#ifdef __cplusplus
}
#endif

#endif