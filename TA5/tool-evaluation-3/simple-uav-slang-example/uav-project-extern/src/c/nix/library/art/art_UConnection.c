#include <all.h>

// art.UConnection

B art_UConnection__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Connection_210187: return T;
    case Tart_Connection_C6DC10: return T;
    case Tart_Connection_F3A765: return T;
    case Tart_Connection_B6057D: return T;
    case Tart_Connection_A6262C: return T;
    default: return F;
  }
}

art_UConnection art_UConnection__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Connection_210187: break;
    case Tart_Connection_C6DC10: break;
    case Tart_Connection_F3A765: break;
    case Tart_Connection_B6057D: break;
    case Tart_Connection_A6262C: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.UConnection.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_UConnection) this;
}

void art_UConnection_string_(STACK_FRAME String result, art_UConnection this);

void art_UConnection_from_(STACK_FRAME art_UPort result, art_UConnection this) {
  switch (this->type) {
    case Tart_Connection_210187: Type_assign(result, art_Connection_210187_from_((art_Connection_210187) this), sizeof(union art_UPort)); return;
    case Tart_Connection_C6DC10: Type_assign(result, art_Connection_C6DC10_from_((art_Connection_C6DC10) this), sizeof(union art_UPort)); return;
    case Tart_Connection_F3A765: Type_assign(result, art_Connection_F3A765_from_((art_Connection_F3A765) this), sizeof(union art_UPort)); return;
    case Tart_Connection_B6057D: Type_assign(result, art_Connection_B6057D_from_((art_Connection_B6057D) this), sizeof(union art_UPort)); return;
    case Tart_Connection_A6262C: Type_assign(result, art_Connection_A6262C_from_((art_Connection_A6262C) this), sizeof(union art_UPort)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_UConnection_to_(STACK_FRAME art_UPort result, art_UConnection this) {
  switch (this->type) {
    case Tart_Connection_210187: Type_assign(result, art_Connection_210187_to_((art_Connection_210187) this), sizeof(union art_UPort)); return;
    case Tart_Connection_C6DC10: Type_assign(result, art_Connection_C6DC10_to_((art_Connection_C6DC10) this), sizeof(union art_UPort)); return;
    case Tart_Connection_F3A765: Type_assign(result, art_Connection_F3A765_to_((art_Connection_F3A765) this), sizeof(union art_UPort)); return;
    case Tart_Connection_B6057D: Type_assign(result, art_Connection_B6057D_to_((art_Connection_B6057D) this), sizeof(union art_UPort)); return;
    case Tart_Connection_A6262C: Type_assign(result, art_Connection_A6262C_to_((art_Connection_A6262C) this), sizeof(union art_UPort)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}