#ifndef SIREUM_H_org_sireum_None_0CCA05
#define SIREUM_H_org_sireum_None_0CCA05
#include <types.h>

// None[ACT_Demo_Dec2018__camkes_X.SW.Mission]


B None_0CCA05__eq(None_0CCA05 this, None_0CCA05 other);
static inline B None_0CCA05__ne(None_0CCA05 this, None_0CCA05 other) {
  return !None_0CCA05__eq(this, other);
};
void None_0CCA05_cprint(None_0CCA05 this, B isOut);
void None_0CCA05_string(STACK_FRAME String result, None_0CCA05 this);

static inline B None_0CCA05__is(STACK_FRAME void* this) {
  return ((None_0CCA05) this)->type == TNone_0CCA05;
}

static inline None_0CCA05 None_0CCA05__as(STACK_FRAME void *this) {
  if (None_0CCA05__is(CALLER this)) return (None_0CCA05) this;
  fprintf(stderr, "Invalid case from %s to None[ACT_Demo_Dec2018__camkes_X.SW.Mission].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void None_0CCA05_apply(STACK_FRAME None_0CCA05 this);

#endif