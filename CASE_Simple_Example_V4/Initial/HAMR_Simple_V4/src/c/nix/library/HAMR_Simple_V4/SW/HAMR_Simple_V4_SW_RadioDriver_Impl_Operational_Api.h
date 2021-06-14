#ifndef SIREUM_H_HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api
#define SIREUM_H_HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api

#define HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_id_(this) ((this)->id)
#define HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_AttestationTesterResponse_Id_(this) ((this)->AttestationTesterResponse_Id)
#define HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_AttestationTesterRequest_Id_(this) ((this)->AttestationTesterRequest_Id)
#define HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_MissionCommand_Id_(this) ((this)->MissionCommand_Id)

B HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api__eq(HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api this, HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api other);
inline B HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api__ne(HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api this, HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api other) {
  return !HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api__eq(this, other);
};
void HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_string_(STACK_FRAME String result, HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api this);
void HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_cprint(HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api this, B isOut);

inline B HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api__is(STACK_FRAME void* this) {
  return ((HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) this)->type == THAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api;
}

inline HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api__as(STACK_FRAME void *this) {
  if (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api__is(CALLER this)) return (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) this;
  sfAbortImpl(CALLER "Invalid cast to HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api.");
  abort();
}

void HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_apply(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api this, Z id, Z AttestationTesterResponse_Id, Z AttestationTesterRequest_Id, Z MissionCommand_Id);

void HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_get_AttestationTesterResponse_(STACK_FRAME Option_30119F result, HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api this);

#ifdef __cplusplus
}
#endif

#endif