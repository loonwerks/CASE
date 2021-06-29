#include <all.h>

// Option[art.UPort]

B Option_6239DB__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_3E197E: return T;
    case TNone_39BC5F: return T;
    default: return F;
  }
}

Option_6239DB Option_6239DB__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_3E197E: break;
    case TNone_39BC5F: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.UPort].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_6239DB) this;
}

void Option_6239DB_string_(STACK_FRAME String result, Option_6239DB this);