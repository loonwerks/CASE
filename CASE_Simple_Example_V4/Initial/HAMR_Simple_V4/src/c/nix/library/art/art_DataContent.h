#ifndef SIREUM_H_art_DataContent
#define SIREUM_H_art_DataContent

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.DataContent

#define art_DataContent__eq(this, other) Type__eq(this, other)
#define art_DataContent__ne(this, other) (!Type__eq(this, other))
#define art_DataContent_cprint(this, isOut) Type_cprint(this, isOut)
B art_DataContent__is(STACK_FRAME void *this);
art_DataContent art_DataContent__as(STACK_FRAME void *this);
inline void art_DataContent_string_(STACK_FRAME String result, art_DataContent this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif