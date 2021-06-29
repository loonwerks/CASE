#ifndef SIREUM_H_art_art_Port_45E54D
#define SIREUM_H_art_art_Port_45E54D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Port[IS[Z, B]]

#define art_Port_45E54D_id_(this) ((this)->id)
#define art_Port_45E54D_name_(this) ((String) &(this)->name)
#define art_Port_45E54D_mode_(this) ((this)->mode)

B art_Port_45E54D__eq(art_Port_45E54D this, art_Port_45E54D other);
inline B art_Port_45E54D__ne(art_Port_45E54D this, art_Port_45E54D other) {
  return !art_Port_45E54D__eq(this, other);
};
void art_Port_45E54D_string_(STACK_FRAME String result, art_Port_45E54D this);
void art_Port_45E54D_cprint(art_Port_45E54D this, B isOut);

inline B art_Port_45E54D__is(STACK_FRAME void* this) {
  return ((art_Port_45E54D) this)->type == Tart_Port_45E54D;
}

inline art_Port_45E54D art_Port_45E54D__as(STACK_FRAME void *this) {
  if (art_Port_45E54D__is(CALLER this)) return (art_Port_45E54D) this;
  sfAbortImpl(CALLER "Invalid cast to art.Port[IS[Z, B]].");
  abort();
}

void art_Port_45E54D_apply(STACK_FRAME art_Port_45E54D this, Z id, String name, art_PortMode_Type mode);

#ifdef __cplusplus
}
#endif

#endif