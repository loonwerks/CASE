#ifndef SIREUM_TYPE_H_org_sireum_Some_2EBF4C
#define SIREUM_TYPE_H_org_sireum_Some_2EBF4C

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Operational_Api]
#include <type-CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api.h>

typedef struct Some_2EBF4C *Some_2EBF4C;
struct Some_2EBF4C {
  TYPE type;
  struct CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api value;
};

#define DeclNewSome_2EBF4C(x) struct Some_2EBF4C x = { .type = TSome_2EBF4C }

#ifdef __cplusplus
}
#endif

#endif