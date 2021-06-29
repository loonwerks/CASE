#ifndef SIREUM_H_org_sireum_Option_680CAA
#define SIREUM_H_org_sireum_Option_680CAA

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api]

#define Option_680CAA__eq(this, other) Type__eq(this, other)
#define Option_680CAA__ne(this, other) (!Type__eq(this, other))
#define Option_680CAA_cprint(this, isOut) Type_cprint(this, isOut)
B Option_680CAA__is(STACK_FRAME void *this);
Option_680CAA Option_680CAA__as(STACK_FRAME void *this);
inline void Option_680CAA_string_(STACK_FRAME String result, Option_680CAA this) {
  Type_string_(CALLER result, this);
}

void Option_680CAA_get_(STACK_FRAME HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api result, Option_680CAA this);

#ifdef __cplusplus
}
#endif

#endif