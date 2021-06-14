#ifndef SIREUM_TYPE_H_CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api
#define SIREUM_TYPE_H_CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Operational_Api

typedef struct CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api *CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api;
struct CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api {
  TYPE type;
  Z id;
  Z Suspect_Traffic_Out_Id;
};

#define DeclNewCASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api(x) struct CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api x = { .type = TCASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api }

#ifdef __cplusplus
}
#endif

#endif