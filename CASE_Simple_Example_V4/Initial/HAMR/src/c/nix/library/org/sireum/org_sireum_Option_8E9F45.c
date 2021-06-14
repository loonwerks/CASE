#include <all.h>

// Option[art.DataContent]

B Option_8E9F45__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_964667: return T;
    case TSome_D29615: return T;
    default: return F;
  }
}

Option_8E9F45 Option_8E9F45__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_964667: break;
    case TSome_D29615: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.DataContent].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_8E9F45) this;
}

void Option_8E9F45_string_(STACK_FRAME String result, Option_8E9F45 this);

B Option_8E9F45_isEmpty_(STACK_FRAME Option_8E9F45 this) {
  switch (this->type) {
    case TNone_964667: return None_964667_isEmpty_(CALLER (None_964667) this);
    case TSome_D29615: return Some_D29615_isEmpty_(CALLER (Some_D29615) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

B Option_8E9F45_nonEmpty_(STACK_FRAME Option_8E9F45 this) {
  switch (this->type) {
    case TNone_964667: return None_964667_nonEmpty_(CALLER (None_964667) this);
    case TSome_D29615: return Some_D29615_nonEmpty_(CALLER (Some_D29615) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}