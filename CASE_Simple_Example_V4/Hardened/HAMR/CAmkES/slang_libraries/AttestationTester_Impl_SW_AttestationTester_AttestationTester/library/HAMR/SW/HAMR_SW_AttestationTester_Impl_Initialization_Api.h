#ifndef SIREUM_H_HAMR_SW_AttestationTester_Impl_Initialization_Api
#define SIREUM_H_HAMR_SW_AttestationTester_Impl_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// HAMR.SW.AttestationTester_Impl_Initialization_Api

#define HAMR_SW_AttestationTester_Impl_Initialization_Api_id_(this) ((this)->id)
#define HAMR_SW_AttestationTester_Impl_Initialization_Api_AttestationRequest_Id_(this) ((this)->AttestationRequest_Id)
#define HAMR_SW_AttestationTester_Impl_Initialization_Api_AttestationResponse_Id_(this) ((this)->AttestationResponse_Id)

B HAMR_SW_AttestationTester_Impl_Initialization_Api__eq(HAMR_SW_AttestationTester_Impl_Initialization_Api this, HAMR_SW_AttestationTester_Impl_Initialization_Api other);
inline B HAMR_SW_AttestationTester_Impl_Initialization_Api__ne(HAMR_SW_AttestationTester_Impl_Initialization_Api this, HAMR_SW_AttestationTester_Impl_Initialization_Api other) {
  return !HAMR_SW_AttestationTester_Impl_Initialization_Api__eq(this, other);
};
void HAMR_SW_AttestationTester_Impl_Initialization_Api_string_(STACK_FRAME String result, HAMR_SW_AttestationTester_Impl_Initialization_Api this);
void HAMR_SW_AttestationTester_Impl_Initialization_Api_cprint(HAMR_SW_AttestationTester_Impl_Initialization_Api this, B isOut);

inline B HAMR_SW_AttestationTester_Impl_Initialization_Api__is(STACK_FRAME void* this) {
  return ((HAMR_SW_AttestationTester_Impl_Initialization_Api) this)->type == THAMR_SW_AttestationTester_Impl_Initialization_Api;
}

inline HAMR_SW_AttestationTester_Impl_Initialization_Api HAMR_SW_AttestationTester_Impl_Initialization_Api__as(STACK_FRAME void *this) {
  if (HAMR_SW_AttestationTester_Impl_Initialization_Api__is(CALLER this)) return (HAMR_SW_AttestationTester_Impl_Initialization_Api) this;
  sfAbortImpl(CALLER "Invalid cast to HAMR.SW.AttestationTester_Impl_Initialization_Api.");
  abort();
}

void HAMR_SW_AttestationTester_Impl_Initialization_Api_apply(STACK_FRAME HAMR_SW_AttestationTester_Impl_Initialization_Api this, Z id, Z AttestationRequest_Id, Z AttestationResponse_Id);

#ifdef __cplusplus
}
#endif

#endif