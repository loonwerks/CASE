#ifndef SIREUM_H_HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api
#define SIREUM_H_HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api

#define HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_id_(this) ((this)->id)
#define HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_AttestationTesterResponse_Id_(this) ((this)->AttestationTesterResponse_Id)
#define HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_AttestationTesterRequest_Id_(this) ((this)->AttestationTesterRequest_Id)
#define HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_MissionCommand_Id_(this) ((this)->MissionCommand_Id)

B HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api__eq(HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api this, HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api other);
inline B HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api__ne(HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api this, HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api other) {
  return !HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api__eq(this, other);
};
void HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_string_(STACK_FRAME String result, HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api this);
void HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_cprint(HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api this, B isOut);

inline B HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api__is(STACK_FRAME void* this) {
  return ((HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) this)->type == THAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api;
}

inline HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api__as(STACK_FRAME void *this) {
  if (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api__is(CALLER this)) return (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) this;
  sfAbortImpl(CALLER "Invalid cast to HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api.");
  abort();
}

void HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_apply(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api this, Z id, Z AttestationTesterResponse_Id, Z AttestationTesterRequest_Id, Z MissionCommand_Id);

#ifdef __cplusplus
}
#endif

#endif