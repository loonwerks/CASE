#ifndef SIREUM_H_org_sireum_None_3026C5
#define SIREUM_H_org_sireum_None_3026C5

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[IS[Z, B]]


B None_3026C5__eq(None_3026C5 this, None_3026C5 other);
inline B None_3026C5__ne(None_3026C5 this, None_3026C5 other) {
  return !None_3026C5__eq(this, other);
};
void None_3026C5_string_(STACK_FRAME String result, None_3026C5 this);
void None_3026C5_cprint(None_3026C5 this, B isOut);

inline B None_3026C5__is(STACK_FRAME void* this) {
  return ((None_3026C5) this)->type == TNone_3026C5;
}

inline None_3026C5 None_3026C5__as(STACK_FRAME void *this) {
  if (None_3026C5__is(CALLER this)) return (None_3026C5) this;
  sfAbortImpl(CALLER "Invalid cast to None[IS[Z, B]].");
  abort();
}

void None_3026C5_apply(STACK_FRAME None_3026C5 this);

#ifdef __cplusplus
}
#endif

#endif