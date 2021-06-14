#ifndef SIREUM_TYPE_H_CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api
#define SIREUM_TYPE_H_CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// CASE_MONITOR_TEST.VPM_TEST.Input_impl_Operational_Api

typedef struct CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api *CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api;
struct CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api {
  TYPE type;
  Z id;
  Z Observed_Id;
};

#define DeclNewCASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api(x) struct CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api x = { .type = TCASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api }

#ifdef __cplusplus
}
#endif

#endif