#include <all.h>

// Option[IS[Z, B]]

B Option_30119F__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_3026C5: return T;
    case TSome_8D03B1: return T;
    default: return F;
  }
}

Option_30119F Option_30119F__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_3026C5: break;
    case TSome_8D03B1: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[IS[Z, B]].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_30119F) this;
}

void Option_30119F_string_(STACK_FRAME String result, Option_30119F this);