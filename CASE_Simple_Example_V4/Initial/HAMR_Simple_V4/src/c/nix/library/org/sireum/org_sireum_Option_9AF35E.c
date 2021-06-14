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

B Option_9AF35E_isEmpty_(STACK_FRAME Option_9AF35E this) {
  switch (this->type) {
    case TNone_5C1355: return None_5C1355_isEmpty_(CALLER (None_5C1355) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void Option_9AF35E_get_(STACK_FRAME IS_82ABD8 result, Option_9AF35E this) {
  switch (this->type) {
    case TNone_5C1355: None_5C1355_get_(CALLER (IS_82ABD8) result, (None_5C1355) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}