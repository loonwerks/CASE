#ifndef SIREUM_TYPE_H_org_sireum_Some_EA751B
#define SIREUM_TYPE_H_org_sireum_Some_EA751B

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Operational_Api]
#include <type-CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api.h>

typedef struct Some_EA751B *Some_EA751B;
struct Some_EA751B {
  TYPE type;
  struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api value;
};

#define DeclNewSome_EA751B(x) struct Some_EA751B x = { .type = TSome_EA751B }

#ifdef __cplusplus
}
#endif

#endif