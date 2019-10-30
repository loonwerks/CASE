#include <all.h>

// art.DataContent

B art_DataContent__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TACT_Demo_Dec2018__camkes_X_SW_Mission_Payload: return T;
    case TACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload: return T;
    case TACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload: return T;
    case TACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload: return T;
    case TACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload: return T;
    case Tart_Empty: return T;
    default: return F;
  }
}

art_DataContent art_DataContent__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TACT_Demo_Dec2018__camkes_X_SW_Mission_Payload: break;
    case TACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload: break;
    case TACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload: break;
    case TACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload: break;
    case TACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload: break;
    case Tart_Empty: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.DataContent.", TYPE_string(this));
      sfAbortImpl(CALLER "");
  }
  return (art_DataContent) this;
}