#include <all.h>

// Option[art.Empty]

B Option_C622DB__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_ED72E1: return T;
    case TSome_4782C6: return T;
    default: return F;
  }
}

Option_C622DB Option_C622DB__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_ED72E1: break;
    case TSome_4782C6: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.Empty].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_C622DB) this;
}

void Option_C622DB_string_(STACK_FRAME String result, Option_C622DB this);