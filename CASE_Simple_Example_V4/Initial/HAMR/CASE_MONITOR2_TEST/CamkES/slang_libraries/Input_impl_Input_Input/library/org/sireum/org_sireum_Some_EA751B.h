#ifndef SIREUM_H_org_sireum_Some_EA751B
#define SIREUM_H_org_sireum_Some_EA751B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Operational_Api]

#define Some_EA751B_value_(this) ((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &(this)->value)

B Some_EA751B__eq(Some_EA751B this, Some_EA751B other);
inline B Some_EA751B__ne(Some_EA751B this, Some_EA751B other) {
  return !Some_EA751B__eq(this, other);
};
void Some_EA751B_string_(STACK_FRAME String result, Some_EA751B this);
void Some_EA751B_cprint(Some_EA751B this, B isOut);

inline B Some_EA751B__is(STACK_FRAME void* this) {
  return ((Some_EA751B) this)->type == TSome_EA751B;
}

inline Some_EA751B Some_EA751B__as(STACK_FRAME void *this) {
  if (Some_EA751B__is(CALLER this)) return (Some_EA751B) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Operational_Api].");
  abort();
}

void Some_EA751B_apply(STACK_FRAME Some_EA751B this, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif