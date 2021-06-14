#ifndef SIREUM_H_org_sireum_Option_30119F
#define SIREUM_H_org_sireum_Option_30119F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[IS[Z, B]]

#define Option_30119F__eq(this, other) Type__eq(this, other)
#define Option_30119F__ne(this, other) (!Type__eq(this, other))
#define Option_30119F_cprint(this, isOut) Type_cprint(this, isOut)
B Option_30119F__is(STACK_FRAME void *this);
Option_30119F Option_30119F__as(STACK_FRAME void *this);
inline void Option_30119F_string_(STACK_FRAME String result, Option_30119F this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif