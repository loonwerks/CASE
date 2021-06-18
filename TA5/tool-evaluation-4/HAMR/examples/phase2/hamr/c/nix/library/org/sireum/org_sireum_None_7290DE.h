#ifndef SIREUM_H_org_sireum_None_7290DE
#define SIREUM_H_org_sireum_None_7290DE

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]


B None_7290DE__eq(None_7290DE this, None_7290DE other);
inline B None_7290DE__ne(None_7290DE this, None_7290DE other) {
  return !None_7290DE__eq(this, other);
};
void None_7290DE_string_(STACK_FRAME String result, None_7290DE this);
void None_7290DE_cprint(None_7290DE this, B isOut);

inline B None_7290DE__is(STACK_FRAME void* this) {
  return ((None_7290DE) this)->type == TNone_7290DE;
}

inline None_7290DE None_7290DE__as(STACK_FRAME void *this) {
  if (None_7290DE__is(CALLER this)) return (None_7290DE) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api].");
  abort();
}

void None_7290DE_apply(STACK_FRAME None_7290DE this);

#ifdef __cplusplus
}
#endif

#endif