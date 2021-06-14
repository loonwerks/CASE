#ifndef SIREUM_TYPE_H_org_sireum_Some_CBF40F
#define SIREUM_TYPE_H_org_sireum_Some_CBF40F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Initialization_Api]
#include <type-CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api.h>

typedef struct Some_CBF40F *Some_CBF40F;
struct Some_CBF40F {
  TYPE type;
  struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api value;
};

#define DeclNewSome_CBF40F(x) struct Some_CBF40F x = { .type = TSome_CBF40F }

#ifdef __cplusplus
}
#endif

#endif