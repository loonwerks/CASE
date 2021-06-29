#ifndef SIREUM_H_org_sireum_Option_55CC5B
#define SIREUM_H_org_sireum_Option_55CC5B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.Filter_Impl_Operational_Api]

#define Option_55CC5B__eq(this, other) Type__eq(this, other)
#define Option_55CC5B__ne(this, other) (!Type__eq(this, other))
#define Option_55CC5B_cprint(this, isOut) Type_cprint(this, isOut)
B Option_55CC5B__is(STACK_FRAME void *this);
Option_55CC5B Option_55CC5B__as(STACK_FRAME void *this);
inline void Option_55CC5B_string_(STACK_FRAME String result, Option_55CC5B this) {
  Type_string_(CALLER result, this);
}

void Option_55CC5B_get_(STACK_FRAME HAMR_Simple_V4_SW_Filter_Impl_Operational_Api result, Option_55CC5B this);

#ifdef __cplusplus
}
#endif

#endif