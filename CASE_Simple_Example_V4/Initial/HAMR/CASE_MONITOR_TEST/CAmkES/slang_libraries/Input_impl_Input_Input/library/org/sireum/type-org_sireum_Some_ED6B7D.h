#ifndef SIREUM_TYPE_H_org_sireum_Some_ED6B7D
#define SIREUM_TYPE_H_org_sireum_Some_ED6B7D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api]
#include <type-CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api.h>

typedef struct Some_ED6B7D *Some_ED6B7D;
struct Some_ED6B7D {
  TYPE type;
  struct CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api value;
};

#define DeclNewSome_ED6B7D(x) struct Some_ED6B7D x = { .type = TSome_ED6B7D }

#ifdef __cplusplus
}
#endif

#endif