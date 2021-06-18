#ifndef SIREUM_H_org_sireum_Option_6F37E4
#define SIREUM_H_org_sireum_Option_6F37E4

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]

#define Option_6F37E4__eq(this, other) Type__eq(this, other)
#define Option_6F37E4__ne(this, other) (!Type__eq(this, other))
#define Option_6F37E4_cprint(this, isOut) Type_cprint(this, isOut)
B Option_6F37E4__is(STACK_FRAME void *this);
Option_6F37E4 Option_6F37E4__as(STACK_FRAME void *this);
inline void Option_6F37E4_string_(STACK_FRAME String result, Option_6F37E4 this) {
  Type_string_(CALLER result, this);
}

void Option_6F37E4_get_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api result, Option_6F37E4 this);

#ifdef __cplusplus
}
#endif

#endif