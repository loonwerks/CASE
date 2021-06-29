#ifndef SIREUM_H_org_sireum_Option_9382FA
#define SIREUM_H_org_sireum_Option_9382FA

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]

#define Option_9382FA__eq(this, other) Type__eq(this, other)
#define Option_9382FA__ne(this, other) (!Type__eq(this, other))
#define Option_9382FA_cprint(this, isOut) Type_cprint(this, isOut)
B Option_9382FA__is(STACK_FRAME void *this);
Option_9382FA Option_9382FA__as(STACK_FRAME void *this);
inline void Option_9382FA_string_(STACK_FRAME String result, Option_9382FA this) {
  Type_string_(CALLER result, this);
}

void Option_9382FA_get_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api result, Option_9382FA this);

#ifdef __cplusplus
}
#endif

#endif