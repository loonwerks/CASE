#ifndef SIREUM_TYPE_H_CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge
#define SIREUM_TYPE_H_CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-org_sireum_Option_9AF35E.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_Bridge_Ports.h>
#include <type-CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api.h>
#include <type-CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge *CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge;
struct CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union Option_9AF35E dispatchTriggers;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_45E54D Observed;
  struct art_Port_45E54D Suspect_Traffic_Out;
  struct art_Bridge_Ports ports;
  struct CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api initialization_api;
  struct CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api operational_api;
  Z id;
};

#define DeclNewCASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge(x) struct CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge x = { .type = TCASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge }

#ifdef __cplusplus
}
#endif

#endif