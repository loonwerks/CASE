#ifndef SIREUM_H_org_sireum_Some_CFA8D1
#define SIREUM_H_org_sireum_Some_CFA8D1

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api]

#define Some_CFA8D1_value_(this) ((HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &(this)->value)

B Some_CFA8D1__eq(Some_CFA8D1 this, Some_CFA8D1 other);
inline B Some_CFA8D1__ne(Some_CFA8D1 this, Some_CFA8D1 other) {
  return !Some_CFA8D1__eq(this, other);
};
void Some_CFA8D1_string_(STACK_FRAME String result, Some_CFA8D1 this);
void Some_CFA8D1_cprint(Some_CFA8D1 this, B isOut);

inline B Some_CFA8D1__is(STACK_FRAME void* this) {
  return ((Some_CFA8D1) this)->type == TSome_CFA8D1;
}

inline Some_CFA8D1 Some_CFA8D1__as(STACK_FRAME void *this) {
  if (Some_CFA8D1__is(CALLER this)) return (Some_CFA8D1) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api].");
  abort();
}

void Some_CFA8D1_apply(STACK_FRAME Some_CFA8D1 this, HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif