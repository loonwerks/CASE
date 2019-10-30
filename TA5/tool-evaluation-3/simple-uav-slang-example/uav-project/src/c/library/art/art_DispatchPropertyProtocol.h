#ifndef SIREUM_H_art_DispatchPropertyProtocol
#define SIREUM_H_art_DispatchPropertyProtocol
#include <types.h>

// art.DispatchPropertyProtocol

#define art_DispatchPropertyProtocol__eq(this, other) Type__eq(this, other)
#define art_DispatchPropertyProtocol__ne(this, other) (!Type__eq(this, other))
#define art_DispatchPropertyProtocol_cprint(this, isOut) Type_cprint(this, isOut)
B art_DispatchPropertyProtocol__is(STACK_FRAME void *this);
art_DispatchPropertyProtocol art_DispatchPropertyProtocol__as(STACK_FRAME void *this);
static inline void art_DispatchPropertyProtocol_string(STACK_FRAME String result, art_DispatchPropertyProtocol this) {
  Type_string(CALLER result, this);
}

#endif