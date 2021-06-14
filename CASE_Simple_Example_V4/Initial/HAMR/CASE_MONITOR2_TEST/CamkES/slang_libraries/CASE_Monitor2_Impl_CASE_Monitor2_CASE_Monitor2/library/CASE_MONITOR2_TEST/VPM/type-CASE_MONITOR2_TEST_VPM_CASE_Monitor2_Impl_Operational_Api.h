#ifndef SIREUM_TYPE_H_CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api
#define SIREUM_TYPE_H_CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Operational_Api

typedef struct CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api *CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api;
struct CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api {
  TYPE type;
  Z id;
  Z Observed_Id;
  Z Suspect_Traffic_Out_Id;
};

#define DeclNewCASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api(x) struct CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api x = { .type = TCASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api }

#ifdef __cplusplus
}
#endif

#endif