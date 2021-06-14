#ifndef SIREUM_TYPE_H_org_sireum_Some_DBA49C
#define SIREUM_TYPE_H_org_sireum_Some_DBA49C

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Initialization_Api]
#include <type-CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api.h>

typedef struct Some_DBA49C *Some_DBA49C;
struct Some_DBA49C {
  TYPE type;
  struct CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api value;
};

#define DeclNewSome_DBA49C(x) struct Some_DBA49C x = { .type = TSome_DBA49C }

#ifdef __cplusplus
}
#endif

#endif