#ifndef SIREUM_H_org_sireum_Some_3E197E
#define SIREUM_H_org_sireum_Some_3E197E
#include <types.h>

// Some[art.UPort]

#define Some_3E197E_value_(this) ((art_UPort) &(this)->value)

B Some_3E197E__eq(Some_3E197E this, Some_3E197E other);
inline B Some_3E197E__ne(Some_3E197E this, Some_3E197E other) {
  return !Some_3E197E__eq(this, other);
};
void Some_3E197E_string_(STACK_FRAME String result, Some_3E197E this);
void Some_3E197E_cprint(Some_3E197E this, B isOut);

inline B Some_3E197E__is(STACK_FRAME void* this) {
  return ((Some_3E197E) this)->type == TSome_3E197E;
}

inline Some_3E197E Some_3E197E__as(STACK_FRAME void *this) {
  if (Some_3E197E__is(CALLER this)) return (Some_3E197E) this;
  fprintf(stderr, "Invalid case from %s to Some[art.UPort].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void Some_3E197E_apply(STACK_FRAME Some_3E197E this, art_UPort value);

#endif