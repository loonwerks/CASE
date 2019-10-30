#ifndef SIREUM_H_org_sireum_MS_852149
#define SIREUM_H_org_sireum_MS_852149
#include <types.h>

// MS[Z, art.Bridge]
B MS_852149__eq(MS_852149 this, MS_852149 other);
void MS_852149_create(STACK_FRAME MS_852149 result, Z size, art_Bridge dflt);
void MS_852149_zreate(STACK_FRAME MS_852149 result, Z size, art_Bridge dflt);
void MS_852149__append(STACK_FRAME MS_852149 result, MS_852149 this, art_Bridge value);
void MS_852149__prepend(STACK_FRAME MS_852149 result, MS_852149 this, art_Bridge value);
void MS_852149__appendAll(STACK_FRAME MS_852149 result, MS_852149 this, MS_852149 other);
void MS_852149__remove(STACK_FRAME MS_852149 result, MS_852149 this, art_Bridge value);
void MS_852149__removeAll(STACK_FRAME MS_852149 result, MS_852149 this, MS_852149 other);
void MS_852149_cprint(MS_852149 this, B isOut);
void MS_852149_string(STACK_FRAME String result, MS_852149 this);

static inline B MS_852149__ne(MS_852149 this, MS_852149 other) {
  return !MS_852149__eq(this, other);
}


#endif