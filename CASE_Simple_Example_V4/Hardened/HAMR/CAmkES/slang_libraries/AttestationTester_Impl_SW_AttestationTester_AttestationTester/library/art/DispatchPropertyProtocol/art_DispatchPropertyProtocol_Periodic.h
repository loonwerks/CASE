#ifndef SIREUM_H_art_DispatchPropertyProtocol_Periodic
#define SIREUM_H_art_DispatchPropertyProtocol_Periodic

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.DispatchPropertyProtocol.Periodic

#define art_DispatchPropertyProtocol_Periodic_period_(this) ((this)->period)

B art_DispatchPropertyProtocol_Periodic__eq(art_DispatchPropertyProtocol_Periodic this, art_DispatchPropertyProtocol_Periodic other);
inline B art_DispatchPropertyProtocol_Periodic__ne(art_DispatchPropertyProtocol_Periodic this, art_DispatchPropertyProtocol_Periodic other) {
  return !art_DispatchPropertyProtocol_Periodic__eq(this, other);
};
void art_DispatchPropertyProtocol_Periodic_string_(STACK_FRAME String result, art_DispatchPropertyProtocol_Periodic this);
void art_DispatchPropertyProtocol_Periodic_cprint(art_DispatchPropertyProtocol_Periodic this, B isOut);

inline B art_DispatchPropertyProtocol_Periodic__is(STACK_FRAME void* this) {
  return ((art_DispatchPropertyProtocol_Periodic) this)->type == Tart_DispatchPropertyProtocol_Periodic;
}

inline art_DispatchPropertyProtocol_Periodic art_DispatchPropertyProtocol_Periodic__as(STACK_FRAME void *this) {
  if (art_DispatchPropertyProtocol_Periodic__is(CALLER this)) return (art_DispatchPropertyProtocol_Periodic) this;
  sfAbortImpl(CALLER "Invalid cast to art.DispatchPropertyProtocol.Periodic.");
  abort();
}

void art_DispatchPropertyProtocol_Periodic_apply(STACK_FRAME art_DispatchPropertyProtocol_Periodic this, Z period);

#ifdef __cplusplus
}
#endif

#endif