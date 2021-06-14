#ifndef SIREUM_TYPE_H_org_sireum_Some_A8BCDF
#define SIREUM_TYPE_H_org_sireum_Some_A8BCDF

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]
#include <type-CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api.h>

typedef struct Some_A8BCDF *Some_A8BCDF;
struct Some_A8BCDF {
  TYPE type;
  struct CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api value;
};

#define DeclNewSome_A8BCDF(x) struct Some_A8BCDF x = { .type = TSome_A8BCDF }

#ifdef __cplusplus
}
#endif

#endif