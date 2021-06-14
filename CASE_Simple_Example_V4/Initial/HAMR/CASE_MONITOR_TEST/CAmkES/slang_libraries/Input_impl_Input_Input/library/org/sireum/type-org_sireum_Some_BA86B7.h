#ifndef SIREUM_TYPE_H_org_sireum_Some_BA86B7
#define SIREUM_TYPE_H_org_sireum_Some_BA86B7

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Operational_Api]
#include <type-CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api.h>

typedef struct Some_BA86B7 *Some_BA86B7;
struct Some_BA86B7 {
  TYPE type;
  struct CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api value;
};

#define DeclNewSome_BA86B7(x) struct Some_BA86B7 x = { .type = TSome_BA86B7 }

#ifdef __cplusplus
}
#endif

#endif