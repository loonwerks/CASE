#ifndef SIREUM_H_org_sireum_Some_9A9753
#define SIREUM_H_org_sireum_Some_9A9753

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Operational_Api]

#define Some_9A9753_value_(this) ((CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api) &(this)->value)

B Some_9A9753__eq(Some_9A9753 this, Some_9A9753 other);
inline B Some_9A9753__ne(Some_9A9753 this, Some_9A9753 other) {
  return !Some_9A9753__eq(this, other);
};
void Some_9A9753_string_(STACK_FRAME String result, Some_9A9753 this);
void Some_9A9753_cprint(Some_9A9753 this, B isOut);

inline B Some_9A9753__is(STACK_FRAME void* this) {
  return ((Some_9A9753) this)->type == TSome_9A9753;
}

inline Some_9A9753 Some_9A9753__as(STACK_FRAME void *this) {
  if (Some_9A9753__is(CALLER this)) return (Some_9A9753) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Operational_Api].");
  abort();
}

void Some_9A9753_apply(STACK_FRAME Some_9A9753 this, CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif