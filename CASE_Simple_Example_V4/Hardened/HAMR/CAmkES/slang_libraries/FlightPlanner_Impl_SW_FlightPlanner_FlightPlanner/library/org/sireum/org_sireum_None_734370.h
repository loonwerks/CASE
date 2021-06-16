#ifndef SIREUM_H_org_sireum_None_734370
#define SIREUM_H_org_sireum_None_734370

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[art.Bridge]


B None_734370__eq(None_734370 this, None_734370 other);
inline B None_734370__ne(None_734370 this, None_734370 other) {
  return !None_734370__eq(this, other);
};
void None_734370_string_(STACK_FRAME String result, None_734370 this);
void None_734370_cprint(None_734370 this, B isOut);

inline B None_734370__is(STACK_FRAME void* this) {
  return ((None_734370) this)->type == TNone_734370;
}

inline None_734370 None_734370__as(STACK_FRAME void *this) {
  if (None_734370__is(CALLER this)) return (None_734370) this;
  sfAbortImpl(CALLER "Invalid cast to None[art.Bridge].");
  abort();
}

void None_734370_apply(STACK_FRAME None_734370 this);

#ifdef __cplusplus
}
#endif

#endif