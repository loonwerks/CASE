#ifndef SIREUM_H_org_sireum_None_60EB73
#define SIREUM_H_org_sireum_None_60EB73

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]


B None_60EB73__eq(None_60EB73 this, None_60EB73 other);
inline B None_60EB73__ne(None_60EB73 this, None_60EB73 other) {
  return !None_60EB73__eq(this, other);
};
void None_60EB73_string_(STACK_FRAME String result, None_60EB73 this);
void None_60EB73_cprint(None_60EB73 this, B isOut);

inline B None_60EB73__is(STACK_FRAME void* this) {
  return ((None_60EB73) this)->type == TNone_60EB73;
}

inline None_60EB73 None_60EB73__as(STACK_FRAME void *this) {
  if (None_60EB73__is(CALLER this)) return (None_60EB73) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api].");
  abort();
}

void None_60EB73_apply(STACK_FRAME None_60EB73 this);

#ifdef __cplusplus
}
#endif

#endif