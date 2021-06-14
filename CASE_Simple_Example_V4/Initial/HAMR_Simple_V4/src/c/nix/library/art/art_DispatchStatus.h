#ifndef SIREUM_H_art_DispatchStatus
#define SIREUM_H_art_DispatchStatus

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.DispatchStatus

#define art_DispatchStatus__eq(this, other) Type__eq(this, other)
#define art_DispatchStatus__ne(this, other) (!Type__eq(this, other))
#define art_DispatchStatus_cprint(this, isOut) Type_cprint(this, isOut)
B art_DispatchStatus__is(STACK_FRAME void *this);
art_DispatchStatus art_DispatchStatus__as(STACK_FRAME void *this);
inline void art_DispatchStatus_string_(STACK_FRAME String result, art_DispatchStatus this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif