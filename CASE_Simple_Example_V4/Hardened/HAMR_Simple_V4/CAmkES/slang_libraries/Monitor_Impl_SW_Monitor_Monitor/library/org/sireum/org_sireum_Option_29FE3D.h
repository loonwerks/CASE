#ifndef SIREUM_H_org_sireum_Option_29FE3D
#define SIREUM_H_org_sireum_Option_29FE3D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api]

#define Option_29FE3D__eq(this, other) Type__eq(this, other)
#define Option_29FE3D__ne(this, other) (!Type__eq(this, other))
#define Option_29FE3D_cprint(this, isOut) Type_cprint(this, isOut)
B Option_29FE3D__is(STACK_FRAME void *this);
Option_29FE3D Option_29FE3D__as(STACK_FRAME void *this);
inline void Option_29FE3D_string_(STACK_FRAME String result, Option_29FE3D this) {
  Type_string_(CALLER result, this);
}

void Option_29FE3D_get_(STACK_FRAME HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api result, Option_29FE3D this);

#ifdef __cplusplus
}
#endif

#endif