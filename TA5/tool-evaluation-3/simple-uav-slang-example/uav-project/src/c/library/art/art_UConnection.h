#ifndef SIREUM_H_art_UConnection
#define SIREUM_H_art_UConnection
#include <types.h>

// art.UConnection

#define art_UConnection__eq(this, other) Type__eq(this, other)
#define art_UConnection__ne(this, other) (!Type__eq(this, other))
#define art_UConnection_cprint(this, isOut) Type_cprint(this, isOut)
B art_UConnection__is(STACK_FRAME void *this);
art_UConnection art_UConnection__as(STACK_FRAME void *this);
static inline void art_UConnection_string(STACK_FRAME String result, art_UConnection this) {
  Type_string(CALLER result, this);
}

void art_UConnection_from_(STACK_FRAME art_UPort result, art_UConnection this);

void art_UConnection_to_(STACK_FRAME art_UPort result, art_UConnection this);

#endif