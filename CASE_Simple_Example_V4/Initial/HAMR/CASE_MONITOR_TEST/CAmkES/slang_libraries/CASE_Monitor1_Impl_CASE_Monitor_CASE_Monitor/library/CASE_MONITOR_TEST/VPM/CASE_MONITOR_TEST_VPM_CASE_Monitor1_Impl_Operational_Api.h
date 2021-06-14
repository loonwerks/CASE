#ifndef SIREUM_H_CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api
#define SIREUM_H_CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Operational_Api

#define CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_id_(this) ((this)->id)
#define CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_Observed_Id_(this) ((this)->Observed_Id)
#define CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_Suspect_Traffic_Out_Id_(this) ((this)->Suspect_Traffic_Out_Id)

B CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api__eq(CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api this, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api other);
inline B CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api__ne(CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api this, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api other) {
  return !CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api__eq(this, other);
};
void CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_string_(STACK_FRAME String result, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api this);
void CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_cprint(CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api this, B isOut);

inline B CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api__is(STACK_FRAME void* this) {
  return ((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) this)->type == TCASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api;
}

inline CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api__as(STACK_FRAME void *this) {
  if (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api__is(CALLER this)) return (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) this;
  sfAbortImpl(CALLER "Invalid cast to CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Operational_Api.");
  abort();
}

void CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_apply(STACK_FRAME CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api this, Z id, Z Observed_Id, Z Suspect_Traffic_Out_Id);

void CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_get_Observed_(STACK_FRAME Option_30119F result, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api this);

#ifdef __cplusplus
}
#endif

#endif