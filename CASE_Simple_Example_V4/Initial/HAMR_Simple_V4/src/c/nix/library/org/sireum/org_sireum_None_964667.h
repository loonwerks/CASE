#ifndef SIREUM_H_org_sireum_None_964667
#define SIREUM_H_org_sireum_None_964667

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[art.DataContent]


B None_964667__eq(None_964667 this, None_964667 other);
inline B None_964667__ne(None_964667 this, None_964667 other) {
  return !None_964667__eq(this, other);
};
void None_964667_string_(STACK_FRAME String result, None_964667 this);
void None_964667_cprint(None_964667 this, B isOut);

inline B None_964667__is(STACK_FRAME void* this) {
  return ((None_964667) this)->type == TNone_964667;
}

inline None_964667 None_964667__as(STACK_FRAME void *this) {
  if (None_964667__is(CALLER this)) return (None_964667) this;
  sfAbortImpl(CALLER "Invalid cast to None[art.DataContent].");
  abort();
}

void None_964667_apply(STACK_FRAME None_964667 this);

#ifdef __cplusplus
}
#endif

#endif