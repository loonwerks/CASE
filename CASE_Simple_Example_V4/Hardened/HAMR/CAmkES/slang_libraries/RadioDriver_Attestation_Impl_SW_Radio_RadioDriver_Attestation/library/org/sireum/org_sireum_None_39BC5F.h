#ifndef SIREUM_H_org_sireum_None_39BC5F
#define SIREUM_H_org_sireum_None_39BC5F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[art.UPort]


B None_39BC5F__eq(None_39BC5F this, None_39BC5F other);
inline B None_39BC5F__ne(None_39BC5F this, None_39BC5F other) {
  return !None_39BC5F__eq(this, other);
};
void None_39BC5F_string_(STACK_FRAME String result, None_39BC5F this);
void None_39BC5F_cprint(None_39BC5F this, B isOut);

inline B None_39BC5F__is(STACK_FRAME void* this) {
  return ((None_39BC5F) this)->type == TNone_39BC5F;
}

inline None_39BC5F None_39BC5F__as(STACK_FRAME void *this) {
  if (None_39BC5F__is(CALLER this)) return (None_39BC5F) this;
  sfAbortImpl(CALLER "Invalid cast to None[art.UPort].");
  abort();
}

void None_39BC5F_apply(STACK_FRAME None_39BC5F this);

#ifdef __cplusplus
}
#endif

#endif