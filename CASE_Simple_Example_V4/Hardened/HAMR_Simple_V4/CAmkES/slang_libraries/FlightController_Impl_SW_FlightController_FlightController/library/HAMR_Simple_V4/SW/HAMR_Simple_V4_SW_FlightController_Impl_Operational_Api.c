#include <all.h>

// HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api

B HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api__eq(HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api this, HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->FlightPlan_Id, other->FlightPlan_Id)) return F;
  if (Z__ne(this->Alert_Id, other->Alert_Id)) return F;
  return T;
}

B HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api__ne(HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api this, HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api other);

void HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_string_(STACK_FRAME String result, HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "FlightController_Impl_Api.scala", "HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api", "string", 0);
  String_string_(SF result, string("FlightController_Impl_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->FlightPlan_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->Alert_Id);
  String_string_(SF result, string(")"));
}

void HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_cprint(HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("FlightController_Impl_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->FlightPlan_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->Alert_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api__is(STACK_FRAME void* this);
HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api__as(STACK_FRAME void *this);

void HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_apply(STACK_FRAME HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api this, Z id, Z FlightPlan_Id, Z Alert_Id) {
  DeclNewStackFrame(caller, "FlightController_Impl_Api.scala", "HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api", "apply", 0);
  this->id = id;
  this->FlightPlan_Id = FlightPlan_Id;
  this->Alert_Id = Alert_Id;
}

static inline B HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_FlightPlan_extract_40_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api this, IS_C4F575 *_v_40_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!HAMR_Simple_V4_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_40_41 = (IS_C4F575) HAMR_Simple_V4_Base_Types_Bits_Payload_value_(HAMR_Simple_V4_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_FlightPlan_extract_41_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api this, art_DataContent *_v_41_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_41_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_FlightPlan_extract_44_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api this) {
  return T;
}

void HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_FlightPlan_(STACK_FRAME Option_30119F result, HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "FlightController_Impl_Api.scala", "HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api", "get_FlightPlan", 0);

  sfUpdateLoc(39);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_FlightPlan_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_39_47 = F;
  if (!match_39_47) {
    IS_C4F575 v_40_41;
    match_39_47 = HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_FlightPlan_extract_40_12_8E9F45(SF t_0, this, &v_40_41);
    if (match_39_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_40_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_39_47) {
    art_DataContent v_41_17;
    match_39_47 = HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_FlightPlan_extract_41_12_8E9F45(SF t_0, this, &v_41_17);
    if (match_39_47) {

      sfUpdateLoc(42);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port FlightPlan.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_41_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_39_47) {
    match_39_47 = HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_FlightPlan_extract_44_12_8E9F45(SF t_0, this);
    if (match_39_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_39_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_Alert_extract_51_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api this) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!art_Empty__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  return T;
}

static inline B HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_Alert_extract_52_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api this, art_DataContent *_v_52_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_52_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_Alert_extract_55_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api this) {
  return T;
}

void HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_Alert_(STACK_FRAME Option_C622DB result, HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "FlightController_Impl_Api.scala", "HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api", "get_Alert", 0);

  sfUpdateLoc(50);
  Option_C622DB value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_Alert_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_50_41 = F;
  if (!match_50_41) {
    match_50_41 = HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_Alert_extract_51_12_8E9F45(SF t_0, this);
    if (match_50_41) {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      DeclNewSome_4782C6(t_2);
      Some_4782C6_apply(SF &t_2, (art_Empty) (&t_3));
      value = (Option_C622DB) (&t_2);
    }
  }
  if (!match_50_41) {
    art_DataContent v_52_17;
    match_50_41 = HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_Alert_extract_52_12_8E9F45(SF t_0, this, &v_52_17);
    if (match_50_41) {

      sfUpdateLoc(53);
      {
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Unexpected payload on port Alert.  Expecting 'Empty' but received "));
        art_DataContent_string_(SF (String) &t_4, v_52_17);
        String_string_(SF (String) &t_4, string(""));
        art_Art_logError(SF HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_id_(this), (String) ((String) &t_4));
      }
      DeclNewNone_ED72E1(t_5);
      None_ED72E1_apply(SF &t_5);
      value = (Option_C622DB) (&t_5);
    }
  }
  if (!match_50_41) {
    match_50_41 = HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_Alert_extract_55_12_8E9F45(SF t_0, this);
    if (match_50_41) {
      DeclNewNone_ED72E1(t_6);
      None_ED72E1_apply(SF &t_6);
      value = (Option_C622DB) (&t_6);
    }
  }
  sfAssert(match_50_41, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_C622DB));
  return;
}