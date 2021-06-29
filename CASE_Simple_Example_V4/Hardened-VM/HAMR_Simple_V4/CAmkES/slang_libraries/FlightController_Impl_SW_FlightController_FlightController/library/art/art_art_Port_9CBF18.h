#ifndef SIREUM_H_art_art_Port_9CBF18
#define SIREUM_H_art_art_Port_9CBF18

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Port[art.Empty]

#define art_Port_9CBF18_id_(this) ((this)->id)
#define art_Port_9CBF18_name_(this) ((String) &(this)->name)
#define art_Port_9CBF18_mode_(this) ((this)->mode)

B art_Port_9CBF18__eq(art_Port_9CBF18 this, art_Port_9CBF18 other);
inline B art_Port_9CBF18__ne(art_Port_9CBF18 this, art_Port_9CBF18 other) {
  return !art_Port_9CBF18__eq(this, other);
};
void art_Port_9CBF18_string_(STACK_FRAME String result, art_Port_9CBF18 this);
void art_Port_9CBF18_cprint(art_Port_9CBF18 this, B isOut);

inline B art_Port_9CBF18__is(STACK_FRAME void* this) {
  return ((art_Port_9CBF18) this)->type == Tart_Port_9CBF18;
}

inline art_Port_9CBF18 art_Port_9CBF18__as(STACK_FRAME void *this) {
  if (art_Port_9CBF18__is(CALLER this)) return (art_Port_9CBF18) this;
  sfAbortImpl(CALLER "Invalid cast to art.Port[art.Empty].");
  abort();
}

void art_Port_9CBF18_apply(STACK_FRAME art_Port_9CBF18 this, Z id, String name, art_PortMode_Type mode);

#ifdef __cplusplus
}
#endif

#endif