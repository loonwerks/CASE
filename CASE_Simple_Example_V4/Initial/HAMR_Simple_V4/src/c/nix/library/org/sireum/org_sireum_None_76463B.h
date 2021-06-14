#ifndef SIREUM_H_org_sireum_None_76463B
#define SIREUM_H_org_sireum_None_76463B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[Z]


B None_76463B__eq(None_76463B this, None_76463B other);
inline B None_76463B__ne(None_76463B this, None_76463B other) {
  return !None_76463B__eq(this, other);
};
void None_76463B_string_(STACK_FRAME String result, None_76463B this);
void None_76463B_cprint(None_76463B this, B isOut);

inline B None_76463B__is(STACK_FRAME void* this) {
  return ((None_76463B) this)->type == TNone_76463B;
}

inline None_76463B None_76463B__as(STACK_FRAME void *this) {
  if (None_76463B__is(CALLER this)) return (None_76463B) this;
  sfAbortImpl(CALLER "Invalid cast to None[Z].");
  abort();
}

void None_76463B_apply(STACK_FRAME None_76463B this);

#ifdef __cplusplus
}
#endif

#endif