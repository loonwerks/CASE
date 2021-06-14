#ifndef SIREUM_TYPE_H_CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api
#define SIREUM_TYPE_H_CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// CASE_MONITOR_TEST.VPM_TEST.Output_impl_Initialization_Api

typedef struct CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api *CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api;
struct CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api {
  TYPE type;
  Z id;
  Z Suspect_Traffic_Out_Id;
};

#define DeclNewCASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api(x) struct CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api x = { .type = TCASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api }

#ifdef __cplusplus
}
#endif

#endif