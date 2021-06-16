#ifndef SIREUM_H_org_sireum_Option_75F258
#define SIREUM_H_org_sireum_Option_75F258

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.AttestationManager_Impl_Operational_Api]

#define Option_75F258__eq(this, other) Type__eq(this, other)
#define Option_75F258__ne(this, other) (!Type__eq(this, other))
#define Option_75F258_cprint(this, isOut) Type_cprint(this, isOut)
B Option_75F258__is(STACK_FRAME void *this);
Option_75F258 Option_75F258__as(STACK_FRAME void *this);
inline void Option_75F258_string_(STACK_FRAME String result, Option_75F258 this) {
  Type_string_(CALLER result, this);
}

void Option_75F258_get_(STACK_FRAME HAMR_SW_AttestationManager_Impl_Operational_Api result, Option_75F258 this);

#ifdef __cplusplus
}
#endif

#endif