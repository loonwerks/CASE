#ifndef SIREUM_H_org_sireum_None_863C2F
#define SIREUM_H_org_sireum_None_863C2F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Operational_Api]


B None_863C2F__eq(None_863C2F this, None_863C2F other);
inline B None_863C2F__ne(None_863C2F this, None_863C2F other) {
  return !None_863C2F__eq(this, other);
};
void None_863C2F_string_(STACK_FRAME String result, None_863C2F this);
void None_863C2F_cprint(None_863C2F this, B isOut);

inline B None_863C2F__is(STACK_FRAME void* this) {
  return ((None_863C2F) this)->type == TNone_863C2F;
}

inline None_863C2F None_863C2F__as(STACK_FRAME void *this) {
  if (None_863C2F__is(CALLER this)) return (None_863C2F) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Operational_Api].");
  abort();
}

void None_863C2F_apply(STACK_FRAME None_863C2F this);

#ifdef __cplusplus
}
#endif

#endif