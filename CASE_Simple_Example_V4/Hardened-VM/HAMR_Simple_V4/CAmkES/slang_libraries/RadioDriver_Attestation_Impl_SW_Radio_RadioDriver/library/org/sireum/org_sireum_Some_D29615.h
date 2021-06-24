#ifndef SIREUM_H_org_sireum_Some_D29615
#define SIREUM_H_org_sireum_Some_D29615

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[art.DataContent]

#define Some_D29615_value_(this) ((art_DataContent) &(this)->value)

B Some_D29615__eq(Some_D29615 this, Some_D29615 other);
inline B Some_D29615__ne(Some_D29615 this, Some_D29615 other) {
  return !Some_D29615__eq(this, other);
};
void Some_D29615_string_(STACK_FRAME String result, Some_D29615 this);
void Some_D29615_cprint(Some_D29615 this, B isOut);

inline B Some_D29615__is(STACK_FRAME void* this) {
  return ((Some_D29615) this)->type == TSome_D29615;
}

inline Some_D29615 Some_D29615__as(STACK_FRAME void *this) {
  if (Some_D29615__is(CALLER this)) return (Some_D29615) this;
  sfAbortImpl(CALLER "Invalid cast to Some[art.DataContent].");
  abort();
}

void Some_D29615_apply(STACK_FRAME Some_D29615 this, art_DataContent value);

#ifdef __cplusplus
}
#endif

#endif