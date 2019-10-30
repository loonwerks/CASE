#ifndef SIREUM_H_org_sireum_None_93AA2B
#define SIREUM_H_org_sireum_None_93AA2B
#include <types.h>

// None[(Z, art.DataContent)]


B None_93AA2B__eq(None_93AA2B this, None_93AA2B other);
static inline B None_93AA2B__ne(None_93AA2B this, None_93AA2B other) {
  return !None_93AA2B__eq(this, other);
};
void None_93AA2B_cprint(None_93AA2B this, B isOut);
void None_93AA2B_string(STACK_FRAME String result, None_93AA2B this);

static inline B None_93AA2B__is(STACK_FRAME void* this) {
  return ((None_93AA2B) this)->type == TNone_93AA2B;
}

static inline None_93AA2B None_93AA2B__as(STACK_FRAME void *this) {
  if (None_93AA2B__is(CALLER this)) return (None_93AA2B) this;
  fprintf(stderr, "Invalid case from %s to None[(Z, art.DataContent)].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void None_93AA2B_apply(STACK_FRAME None_93AA2B this);

#endif