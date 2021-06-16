#include <all.h>

B Type__eq(void *t1, void *t2) {
  TYPE type = ((Type) t1)->type;
  if (type != ((Type) t2)->type) return F;
  switch (type) {
    case THAMR_Base_Types_Bits_Payload: return HAMR_Base_Types_Bits_Payload__eq((HAMR_Base_Types_Bits_Payload) t1, (HAMR_Base_Types_Bits_Payload) t2);
    case TIS_C4F575: return IS_C4F575__eq((IS_C4F575) t1, (IS_C4F575) t2);
    case TIS_948B60: return IS_948B60__eq((IS_948B60) t1, (IS_948B60) t2);
    case TString: return String__eq((String) t1, (String) t2);
    case Tart_Empty: return art_Empty__eq((art_Empty) t1, (art_Empty) t2);
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_cprint(void *this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  TYPE type = ((Type) this)->type;
  switch (type) {
    case THAMR_Base_Types_Bits_Payload: HAMR_Base_Types_Bits_Payload_cprint((HAMR_Base_Types_Bits_Payload) this, isOut); return;
    case TIS_C4F575: IS_C4F575_cprint((IS_C4F575) this, isOut); return;
    case TIS_948B60: IS_948B60_cprint((IS_948B60) this, isOut); return;
    case TString: String_cprint((String) this, isOut); return;
    case Tart_Empty: art_Empty_cprint((art_Empty) this, isOut); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
  #endif
}

void Type_string_(STACK_FRAME String result, void *this) {
  TYPE type = ((Type) this)->type;
  switch (type) {
    case THAMR_Base_Types_Bits_Payload: HAMR_Base_Types_Bits_Payload_string_(CALLER result, (HAMR_Base_Types_Bits_Payload) this); return;
    case TIS_C4F575: IS_C4F575_string_(CALLER result, (IS_C4F575) this); return;
    case TIS_948B60: IS_948B60_string_(CALLER result, (IS_948B60) this); return;
    case TString: String_string_(CALLER result, (String) this); return;
    case Tart_Empty: art_Empty_string_(CALLER result, (art_Empty) this); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

