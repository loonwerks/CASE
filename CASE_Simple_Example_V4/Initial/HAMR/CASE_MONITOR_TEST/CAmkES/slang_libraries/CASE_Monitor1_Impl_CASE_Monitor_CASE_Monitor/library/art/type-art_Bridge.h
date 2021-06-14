#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Bridge

#include <type-CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#ifdef __cplusplus
}
#endif

#endif