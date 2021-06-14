#ifndef SIREUM_H_CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints
#define SIREUM_H_CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Output_Output_Bridge.EntryPoints

#define CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_Output_impl_Output_Output_BridgeId_(this) ((this)->Output_impl_Output_Output_BridgeId)
#define CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_Suspect_Traffic_Out_Id_(this) ((this)->Suspect_Traffic_Out_Id)
#define CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_dispatchTriggers_(this) ((Option_9AF35E) &(this)->dispatchTriggers)
#define CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_initialization_api_(this) ((CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api) &(this)->initialization_api)
#define CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_operational_api_(this) ((CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api) &(this)->operational_api)
#define CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_dataInPortIds_(this) ((IS_82ABD8) &(this)->dataInPortIds)
#define CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_eventInPortIds_(this) ((IS_82ABD8) &(this)->eventInPortIds)
#define CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_dataOutPortIds_(this) ((IS_82ABD8) &(this)->dataOutPortIds)
#define CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_eventOutPortIds_(this) ((IS_82ABD8) &(this)->eventOutPortIds)

B CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints__eq(CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints this, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints other);
inline B CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints__ne(CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints this, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints other) {
  return !CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints__eq(this, other);
};
void CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_string_(STACK_FRAME String result, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints this);
void CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_cprint(CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints this, B isOut);

inline B CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints__is(STACK_FRAME void* this) {
  return ((CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints) this)->type == TCASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints;
}

inline CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints__as(STACK_FRAME void *this) {
  if (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints__is(CALLER this)) return (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints) this;
  sfAbortImpl(CALLER "Invalid cast to CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Output_Output_Bridge.EntryPoints.");
  abort();
}

void CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_apply(STACK_FRAME CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints this, Z Output_impl_Output_Output_BridgeId, Z Suspect_Traffic_Out_Id, Option_9AF35E dispatchTriggers, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api initialization_api, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api operational_api);

Unit CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_initialise_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints this);

Unit CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_compute_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints this);

Unit CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_finalise_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints this);

#ifdef __cplusplus
}
#endif

#endif