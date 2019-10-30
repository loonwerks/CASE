#ifndef SIREUM_H_art_DispatchPropertyProtocol_Sporadic
#define SIREUM_H_art_DispatchPropertyProtocol_Sporadic
#include <types.h>

// art.DispatchPropertyProtocol.Sporadic

#define art_DispatchPropertyProtocol_Sporadic_min_(this) ((this)->min)

B art_DispatchPropertyProtocol_Sporadic__eq(art_DispatchPropertyProtocol_Sporadic this, art_DispatchPropertyProtocol_Sporadic other);
inline B art_DispatchPropertyProtocol_Sporadic__ne(art_DispatchPropertyProtocol_Sporadic this, art_DispatchPropertyProtocol_Sporadic other) {
  return !art_DispatchPropertyProtocol_Sporadic__eq(this, other);
};
void art_DispatchPropertyProtocol_Sporadic_string_(STACK_FRAME String result, art_DispatchPropertyProtocol_Sporadic this);
void art_DispatchPropertyProtocol_Sporadic_cprint(art_DispatchPropertyProtocol_Sporadic this, B isOut);

inline B art_DispatchPropertyProtocol_Sporadic__is(STACK_FRAME void* this) {
  return ((art_DispatchPropertyProtocol_Sporadic) this)->type == Tart_DispatchPropertyProtocol_Sporadic;
}

inline art_DispatchPropertyProtocol_Sporadic art_DispatchPropertyProtocol_Sporadic__as(STACK_FRAME void *this) {
  if (art_DispatchPropertyProtocol_Sporadic__is(CALLER this)) return (art_DispatchPropertyProtocol_Sporadic) this;
  fprintf(stderr, "Invalid case from %s to art.DispatchPropertyProtocol.Sporadic.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_DispatchPropertyProtocol_Sporadic_apply(STACK_FRAME art_DispatchPropertyProtocol_Sporadic this, Z min);

#endif