#ifndef SIREUM_H_org_sireum_Some_488F47
#define SIREUM_H_org_sireum_Some_488F47

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[Z]

#define Some_488F47_value_(this) ((this)->value)

B Some_488F47__eq(Some_488F47 this, Some_488F47 other);
inline B Some_488F47__ne(Some_488F47 this, Some_488F47 other) {
  return !Some_488F47__eq(this, other);
};
void Some_488F47_string_(STACK_FRAME String result, Some_488F47 this);
void Some_488F47_cprint(Some_488F47 this, B isOut);

inline B Some_488F47__is(STACK_FRAME void* this) {
  return ((Some_488F47) this)->type == TSome_488F47;
}

inline Some_488F47 Some_488F47__as(STACK_FRAME void *this) {
  if (Some_488F47__is(CALLER this)) return (Some_488F47) this;
  sfAbortImpl(CALLER "Invalid cast to Some[Z].");
  abort();
}

void Some_488F47_apply(STACK_FRAME Some_488F47 this, Z value);

#ifdef __cplusplus
}
#endif

#endif