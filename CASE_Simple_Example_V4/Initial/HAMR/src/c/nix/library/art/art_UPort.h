#ifndef SIREUM_H_art_UPort
#define SIREUM_H_art_UPort

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.UPort

#define art_UPort__eq(this, other) Type__eq(this, other)
#define art_UPort__ne(this, other) (!Type__eq(this, other))
#define art_UPort_cprint(this, isOut) Type_cprint(this, isOut)
B art_UPort__is(STACK_FRAME void *this);
art_UPort art_UPort__as(STACK_FRAME void *this);
inline void art_UPort_string_(STACK_FRAME String result, art_UPort this) {
  Type_string_(CALLER result, this);
}

Z art_UPort_id_(STACK_FRAME art_UPort this);

art_PortMode_Type art_UPort_mode_(STACK_FRAME art_UPort this);

void art_UPort_name_(STACK_FRAME String result, art_UPort this);

#ifdef __cplusplus
}
#endif

#endif