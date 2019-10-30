#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Impl

B ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl__eq(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl other) {
  if (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api__ne((ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api) &this->api, (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api) &other->api)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Impl", "string", 0);
  String_string(SF result, string("UARTDriver_Impl_Impl("));
  ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_string(SF result, (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api) &this->api);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_cprint(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("UARTDriver_Impl_Impl("), isOut);
  ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_cprint((ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api api) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api));
  this->i = Z64_C(1);
}

Unit ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_handlemission_window_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_MissionWindow value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Impl", "handlemission_window", 0);

  sfUpdateLoc(14);
  ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_api_(this), (String) string("UART:< Received mission window"));

  sfUpdateLoc(15);
  DeclNewString(t_0);
  String_string(SF (String) &t_0, string("  "));
  ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_string(SF (String) &t_0, value);
  String_string(SF (String) &t_0, string(""));
  ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_api_(this), (String) ((String) &t_0));

  sfUpdateLoc(17);
  {
    Z busywait = Z_C(0);
    Z t_1 = Z_C(100000000);
    Z t_2 = 1;
    while (busywait <= t_1) {

      sfUpdateLoc(17);
      busywait = (Z) (busywait + t_2);
    }
  }

  sfUpdateLoc(19);
  DeclNewString(t_3);
  String_string(SF (String) &t_3, string("UART:> Sending "));
  Z64_string(SF (String) &t_3, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_i_(this));
  String_string(SF (String) &t_3, string(" as the next tracking id."));
  ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_api_(this), (String) ((String) &t_3));

  sfUpdateLoc(22);
  DeclNewACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64(t_4);
  ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_apply(SF &t_4, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_i_(this));
  ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_sendtracking_id_(SF ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_api_(this), (ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64) (&t_4));

  sfUpdateLoc(24);
  ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_i_a(this,(Z64) Z64__add(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_i_(this), Z64_C(1)));
}