#include <all.h>

// Option[art.Bridge]

B Option_7BBFBE__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_482E57: return T;
    case TNone_734370: return T;
    default: return F;
  }
}

Option_7BBFBE Option_7BBFBE__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_482E57: break;
    case TNone_734370: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.Bridge].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_7BBFBE) this;
}

void Option_7BBFBE_string_(STACK_FRAME String result, Option_7BBFBE this);