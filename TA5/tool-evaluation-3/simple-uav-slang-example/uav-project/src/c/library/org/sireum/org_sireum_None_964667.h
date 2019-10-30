#ifndef SIREUM_H_org_sireum_None_964667
#define SIREUM_H_org_sireum_None_964667
#include <types.h>

// None[art.DataContent]


B None_964667__eq(None_964667 this, None_964667 other);
static inline B None_964667__ne(None_964667 this, None_964667 other) {
  return !None_964667__eq(this, other);
};
void None_964667_cprint(None_964667 this, B isOut);
void None_964667_string(STACK_FRAME String result, None_964667 this);

static inline B None_964667__is(STACK_FRAME void* this) {
  return ((None_964667) this)->type == TNone_964667;
}

static inline None_964667 None_964667__as(STACK_FRAME void *this) {
  if (None_964667__is(CALLER this)) return (None_964667) this;
  fprintf(stderr, "Invalid case from %s to None[art.DataContent].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void None_964667_apply(STACK_FRAME None_964667 this);

#endif