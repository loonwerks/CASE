#include <all.h>

// Option[IS[Z, Z]]

B Option_9AF35E__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_5C1355: return T;
    default: return F;
  }
}

Option_9AF35E Option_9AF35E__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_5C1355: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[IS[Z, Z]].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_9AF35E) this;
}

void Option_9AF35E_string_(STACK_FRAME String result, Option_9AF35E this);