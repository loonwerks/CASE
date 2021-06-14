#ifndef SIREUM_H_org_sireum_Some_DBA49C
#define SIREUM_H_org_sireum_Some_DBA49C

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Initialization_Api]

#define Some_DBA49C_value_(this) ((CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api) &(this)->value)

B Some_DBA49C__eq(Some_DBA49C this, Some_DBA49C other);
inline B Some_DBA49C__ne(Some_DBA49C this, Some_DBA49C other) {
  return !Some_DBA49C__eq(this, other);
};
void Some_DBA49C_string_(STACK_FRAME String result, Some_DBA49C this);
void Some_DBA49C_cprint(Some_DBA49C this, B isOut);

inline B Some_DBA49C__is(STACK_FRAME void* this) {
  return ((Some_DBA49C) this)->type == TSome_DBA49C;
}

inline Some_DBA49C Some_DBA49C__as(STACK_FRAME void *this) {
  if (Some_DBA49C__is(CALLER this)) return (Some_DBA49C) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Initialization_Api].");
  abort();
}

void Some_DBA49C_apply(STACK_FRAME Some_DBA49C this, CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif