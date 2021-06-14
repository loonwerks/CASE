#ifndef SIREUM_H_CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api
#define SIREUM_H_CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api

#define CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api_id_(this) ((this)->id)
#define CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api_Suspect_Traffic_Out_Id_(this) ((this)->Suspect_Traffic_Out_Id)

B CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api__eq(CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api this, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api other);
inline B CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api__ne(CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api this, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api other) {
  return !CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api__eq(this, other);
};
void CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api_string_(STACK_FRAME String result, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api this);
void CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api_cprint(CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api this, B isOut);

inline B CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api__is(STACK_FRAME void* this) {
  return ((CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api) this)->type == TCASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api;
}

inline CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api__as(STACK_FRAME void *this) {
  if (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api__is(CALLER this)) return (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api) this;
  sfAbortImpl(CALLER "Invalid cast to CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api.");
  abort();
}

void CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api_apply(STACK_FRAME CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api this, Z id, Z Suspect_Traffic_Out_Id);

#ifdef __cplusplus
}
#endif

#endif