#ifndef SIREUM_H_org_sireum_Option_994630
#define SIREUM_H_org_sireum_Option_994630

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api]

#define Option_994630__eq(this, other) Type__eq(this, other)
#define Option_994630__ne(this, other) (!Type__eq(this, other))
#define Option_994630_cprint(this, isOut) Type_cprint(this, isOut)
B Option_994630__is(STACK_FRAME void *this);
Option_994630 Option_994630__as(STACK_FRAME void *this);
inline void Option_994630_string_(STACK_FRAME String result, Option_994630 this) {
  Type_string_(CALLER result, this);
}

void Option_994630_get_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api result, Option_994630 this);

#ifdef __cplusplus
}
#endif

#endif