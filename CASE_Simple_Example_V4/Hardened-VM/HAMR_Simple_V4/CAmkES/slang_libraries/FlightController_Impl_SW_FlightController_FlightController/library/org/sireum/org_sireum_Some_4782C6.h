#ifndef SIREUM_H_org_sireum_Some_4782C6
#define SIREUM_H_org_sireum_Some_4782C6

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[art.Empty]

#define Some_4782C6_value_(this) ((art_Empty) &(this)->value)

B Some_4782C6__eq(Some_4782C6 this, Some_4782C6 other);
inline B Some_4782C6__ne(Some_4782C6 this, Some_4782C6 other) {
  return !Some_4782C6__eq(this, other);
};
void Some_4782C6_string_(STACK_FRAME String result, Some_4782C6 this);
void Some_4782C6_cprint(Some_4782C6 this, B isOut);

inline B Some_4782C6__is(STACK_FRAME void* this) {
  return ((Some_4782C6) this)->type == TSome_4782C6;
}

inline Some_4782C6 Some_4782C6__as(STACK_FRAME void *this) {
  if (Some_4782C6__is(CALLER this)) return (Some_4782C6) this;
  sfAbortImpl(CALLER "Invalid cast to Some[art.Empty].");
  abort();
}

void Some_4782C6_apply(STACK_FRAME Some_4782C6 this, art_Empty value);

#ifdef __cplusplus
}
#endif

#endif