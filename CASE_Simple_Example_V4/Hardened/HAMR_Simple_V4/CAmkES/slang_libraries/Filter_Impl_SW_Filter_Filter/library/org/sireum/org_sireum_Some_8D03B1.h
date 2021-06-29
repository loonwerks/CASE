#ifndef SIREUM_H_org_sireum_Some_8D03B1
#define SIREUM_H_org_sireum_Some_8D03B1

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[IS[Z, B]]

#define Some_8D03B1_value_(this) ((IS_C4F575) &(this)->value)

B Some_8D03B1__eq(Some_8D03B1 this, Some_8D03B1 other);
inline B Some_8D03B1__ne(Some_8D03B1 this, Some_8D03B1 other) {
  return !Some_8D03B1__eq(this, other);
};
void Some_8D03B1_string_(STACK_FRAME String result, Some_8D03B1 this);
void Some_8D03B1_cprint(Some_8D03B1 this, B isOut);

inline B Some_8D03B1__is(STACK_FRAME void* this) {
  return ((Some_8D03B1) this)->type == TSome_8D03B1;
}

inline Some_8D03B1 Some_8D03B1__as(STACK_FRAME void *this) {
  if (Some_8D03B1__is(CALLER this)) return (Some_8D03B1) this;
  sfAbortImpl(CALLER "Invalid cast to Some[IS[Z, B]].");
  abort();
}

void Some_8D03B1_apply(STACK_FRAME Some_8D03B1 this, IS_C4F575 value);

#ifdef __cplusplus
}
#endif

#endif