#ifndef SIREUM_H_art_Connection
#define SIREUM_H_art_Connection

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Connection

#define art_Connection_from_(this) ((art_UPort) &(this)->from)
#define art_Connection_to_(this) ((art_UPort) &(this)->to)

B art_Connection__eq(art_Connection this, art_Connection other);
inline B art_Connection__ne(art_Connection this, art_Connection other) {
  return !art_Connection__eq(this, other);
};
void art_Connection_string_(STACK_FRAME String result, art_Connection this);
void art_Connection_cprint(art_Connection this, B isOut);

inline B art_Connection__is(STACK_FRAME void* this) {
  return ((art_Connection) this)->type == Tart_Connection;
}

inline art_Connection art_Connection__as(STACK_FRAME void *this) {
  if (art_Connection__is(CALLER this)) return (art_Connection) this;
  sfAbortImpl(CALLER "Invalid cast to art.Connection.");
  abort();
}

void art_Connection_apply(STACK_FRAME art_Connection this, art_UPort from, art_UPort to);

#ifdef __cplusplus
}
#endif

#endif