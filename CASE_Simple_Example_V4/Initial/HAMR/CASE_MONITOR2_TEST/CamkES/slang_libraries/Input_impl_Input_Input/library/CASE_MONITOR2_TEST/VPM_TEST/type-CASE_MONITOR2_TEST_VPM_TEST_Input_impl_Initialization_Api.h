#ifndef SIREUM_TYPE_H_CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api
#define SIREUM_TYPE_H_CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Initialization_Api

typedef struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api *CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api;
struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api {
  TYPE type;
  Z id;
  Z Observed_Id;
};

#define DeclNewCASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api(x) struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api x = { .type = TCASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api }

#ifdef __cplusplus
}
#endif

#endif