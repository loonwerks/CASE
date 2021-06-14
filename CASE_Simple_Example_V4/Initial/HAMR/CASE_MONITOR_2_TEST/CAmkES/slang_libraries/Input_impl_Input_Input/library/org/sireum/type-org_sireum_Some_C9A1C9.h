#ifndef SIREUM_TYPE_H_org_sireum_Some_C9A1C9
#define SIREUM_TYPE_H_org_sireum_Some_C9A1C9

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Initialization_Api]
#include <type-CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api.h>

typedef struct Some_C9A1C9 *Some_C9A1C9;
struct Some_C9A1C9 {
  TYPE type;
  struct CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api value;
};

#define DeclNewSome_C9A1C9(x) struct Some_C9A1C9 x = { .type = TSome_C9A1C9 }

#ifdef __cplusplus
}
#endif

#endif