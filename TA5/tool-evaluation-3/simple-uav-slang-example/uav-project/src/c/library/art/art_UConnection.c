#include <all.h>

// art.UConnection

B art_UConnection__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Connection_112F4D: return T;
    case Tart_Connection_A24F1E: return T;
    case Tart_Connection_CAF041: return T;
    case Tart_Connection_2D82C4: return T;
    case Tart_Connection_E82682: return T;
    default: return F;
  }
}

art_UConnection art_UConnection__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Connection_112F4D: break;
    case Tart_Connection_A24F1E: break;
    case Tart_Connection_CAF041: break;
    case Tart_Connection_2D82C4: break;
    case Tart_Connection_E82682: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.UConnection.", TYPE_string(this));
      sfAbortImpl(CALLER "");
  }
  return (art_UConnection) this;
}

void art_UConnection_from_(STACK_FRAME art_UPort result, art_UConnection this) {
  switch (this->type) {
    case Tart_Connection_112F4D: Type_assign(result, art_Connection_112F4D_from_((art_Connection_112F4D) this), sizeof(union art_UPort)); return;
    case Tart_Connection_A24F1E: Type_assign(result, art_Connection_A24F1E_from_((art_Connection_A24F1E) this), sizeof(union art_UPort)); return;
    case Tart_Connection_CAF041: Type_assign(result, art_Connection_CAF041_from_((art_Connection_CAF041) this), sizeof(union art_UPort)); return;
    case Tart_Connection_2D82C4: Type_assign(result, art_Connection_2D82C4_from_((art_Connection_2D82C4) this), sizeof(union art_UPort)); return;
    case Tart_Connection_E82682: Type_assign(result, art_Connection_E82682_from_((art_Connection_E82682) this), sizeof(union art_UPort)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

void art_UConnection_to_(STACK_FRAME art_UPort result, art_UConnection this) {
  switch (this->type) {
    case Tart_Connection_112F4D: Type_assign(result, art_Connection_112F4D_to_((art_Connection_112F4D) this), sizeof(union art_UPort)); return;
    case Tart_Connection_A24F1E: Type_assign(result, art_Connection_A24F1E_to_((art_Connection_A24F1E) this), sizeof(union art_UPort)); return;
    case Tart_Connection_CAF041: Type_assign(result, art_Connection_CAF041_to_((art_Connection_CAF041) this), sizeof(union art_UPort)); return;
    case Tart_Connection_2D82C4: Type_assign(result, art_Connection_2D82C4_to_((art_Connection_2D82C4) this), sizeof(union art_UPort)); return;
    case Tart_Connection_E82682: Type_assign(result, art_Connection_E82682_to_((art_Connection_E82682) this), sizeof(union art_UPort)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}