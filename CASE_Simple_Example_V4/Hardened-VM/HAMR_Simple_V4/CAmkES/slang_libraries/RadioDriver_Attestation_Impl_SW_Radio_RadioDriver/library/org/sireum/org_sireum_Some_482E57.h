#ifndef SIREUM_H_org_sireum_Some_482E57
#define SIREUM_H_org_sireum_Some_482E57

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[art.Bridge]

#define Some_482E57_value_(this) ((art_Bridge) &(this)->value)

B Some_482E57__eq(Some_482E57 this, Some_482E57 other);
inline B Some_482E57__ne(Some_482E57 this, Some_482E57 other) {
  return !Some_482E57__eq(this, other);
};
void Some_482E57_string_(STACK_FRAME String result, Some_482E57 this);
void Some_482E57_cprint(Some_482E57 this, B isOut);

inline B Some_482E57__is(STACK_FRAME void* this) {
  return ((Some_482E57) this)->type == TSome_482E57;
}

inline Some_482E57 Some_482E57__as(STACK_FRAME void *this) {
  if (Some_482E57__is(CALLER this)) return (Some_482E57) this;
  sfAbortImpl(CALLER "Invalid cast to Some[art.Bridge].");
  abort();
}

void Some_482E57_apply(STACK_FRAME Some_482E57 this, art_Bridge value);

#ifdef __cplusplus
}
#endif

#endif