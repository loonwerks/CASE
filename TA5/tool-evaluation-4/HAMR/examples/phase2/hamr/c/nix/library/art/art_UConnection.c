#include <all.h>

// art.UConnection

B art_UConnection__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Connection: return T;
    default: return F;
  }
}

art_UConnection art_UConnection__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Connection: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.UConnection.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_UConnection) this;
}

void art_UConnection_string_(STACK_FRAME String result, art_UConnection this);

void art_UConnection_from_(STACK_FRAME art_UPort result, art_UConnection this) {
  switch (this->type) {
    case Tart_Connection: Type_assign(result, art_Connection_from_((art_Connection) this), sizeof(union art_UPort)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_UConnection_to_(STACK_FRAME art_UPort result, art_UConnection this) {
  switch (this->type) {
    case Tart_Connection: Type_assign(result, art_Connection_to_((art_Connection) this), sizeof(union art_UPort)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}