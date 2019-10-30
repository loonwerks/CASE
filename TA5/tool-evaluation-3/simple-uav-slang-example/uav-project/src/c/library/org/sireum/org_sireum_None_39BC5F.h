#ifndef SIREUM_H_org_sireum_None_39BC5F
#define SIREUM_H_org_sireum_None_39BC5F
#include <types.h>

// None[art.UPort]


B None_39BC5F__eq(None_39BC5F this, None_39BC5F other);
static inline B None_39BC5F__ne(None_39BC5F this, None_39BC5F other) {
  return !None_39BC5F__eq(this, other);
};
void None_39BC5F_cprint(None_39BC5F this, B isOut);
void None_39BC5F_string(STACK_FRAME String result, None_39BC5F this);

static inline B None_39BC5F__is(STACK_FRAME void* this) {
  return ((None_39BC5F) this)->type == TNone_39BC5F;
}

static inline None_39BC5F None_39BC5F__as(STACK_FRAME void *this) {
  if (None_39BC5F__is(CALLER this)) return (None_39BC5F) this;
  fprintf(stderr, "Invalid case from %s to None[art.UPort].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void None_39BC5F_apply(STACK_FRAME None_39BC5F this);

#endif