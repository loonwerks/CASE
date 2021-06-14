#ifndef SIREUM_H_org_sireum_Some_638F73
#define SIREUM_H_org_sireum_Some_638F73

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]

#define Some_638F73_value_(this) ((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &(this)->value)

B Some_638F73__eq(Some_638F73 this, Some_638F73 other);
inline B Some_638F73__ne(Some_638F73 this, Some_638F73 other) {
  return !Some_638F73__eq(this, other);
};
void Some_638F73_string_(STACK_FRAME String result, Some_638F73 this);
void Some_638F73_cprint(Some_638F73 this, B isOut);

inline B Some_638F73__is(STACK_FRAME void* this) {
  return ((Some_638F73) this)->type == TSome_638F73;
}

inline Some_638F73 Some_638F73__as(STACK_FRAME void *this) {
  if (Some_638F73__is(CALLER this)) return (Some_638F73) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Operational_Api].");
  abort();
}

void Some_638F73_apply(STACK_FRAME Some_638F73 this, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif