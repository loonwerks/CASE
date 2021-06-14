#ifndef SIREUM_H_org_sireum_Option_9AF35E
#define SIREUM_H_org_sireum_Option_9AF35E

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[IS[Z, Z]]

#define Option_9AF35E__eq(this, other) Type__eq(this, other)
#define Option_9AF35E__ne(this, other) (!Type__eq(this, other))
#define Option_9AF35E_cprint(this, isOut) Type_cprint(this, isOut)
B Option_9AF35E__is(STACK_FRAME void *this);
Option_9AF35E Option_9AF35E__as(STACK_FRAME void *this);
inline void Option_9AF35E_string_(STACK_FRAME String result, Option_9AF35E this) {
  Type_string_(CALLER result, this);
}

B Option_9AF35E_isEmpty_(STACK_FRAME Option_9AF35E this);

void Option_9AF35E_get_(STACK_FRAME IS_82ABD8 result, Option_9AF35E this);

#ifdef __cplusplus
}
#endif

#endif