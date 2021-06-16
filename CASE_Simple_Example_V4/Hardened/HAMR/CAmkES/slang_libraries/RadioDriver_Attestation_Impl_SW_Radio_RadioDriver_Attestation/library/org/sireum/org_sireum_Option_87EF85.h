#ifndef SIREUM_H_org_sireum_Option_87EF85
#define SIREUM_H_org_sireum_Option_87EF85

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api]

#define Option_87EF85__eq(this, other) Type__eq(this, other)
#define Option_87EF85__ne(this, other) (!Type__eq(this, other))
#define Option_87EF85_cprint(this, isOut) Type_cprint(this, isOut)
B Option_87EF85__is(STACK_FRAME void *this);
Option_87EF85 Option_87EF85__as(STACK_FRAME void *this);
inline void Option_87EF85_string_(STACK_FRAME String result, Option_87EF85 this) {
  Type_string_(CALLER result, this);
}

void Option_87EF85_get_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api result, Option_87EF85 this);

#ifdef __cplusplus
}
#endif

#endif