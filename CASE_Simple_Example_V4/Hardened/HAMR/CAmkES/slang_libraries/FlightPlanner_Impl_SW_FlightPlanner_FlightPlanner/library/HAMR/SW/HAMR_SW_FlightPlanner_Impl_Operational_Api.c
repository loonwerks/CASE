#include <all.h>

// HAMR.SW.FlightPlanner_Impl_Operational_Api

B HAMR_SW_FlightPlanner_Impl_Operational_Api__eq(HAMR_SW_FlightPlanner_Impl_Operational_Api this, HAMR_SW_FlightPlanner_Impl_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->MissionCommand_Id, other->MissionCommand_Id)) return F;
  if (Z__ne(this->FlightPlan_Id, other->FlightPlan_Id)) return F;
  return T;
}

B HAMR_SW_FlightPlanner_Impl_Operational_Api__ne(HAMR_SW_FlightPlanner_Impl_Operational_Api this, HAMR_SW_FlightPlanner_Impl_Operational_Api other);

void HAMR_SW_FlightPlanner_Impl_Operational_Api_string_(STACK_FRAME String result, HAMR_SW_FlightPlanner_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Api.scala", "HAMR.SW.FlightPlanner_Impl_Operational_Api", "string", 0);
  String_string_(SF result, string("FlightPlanner_Impl_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->MissionCommand_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->FlightPlan_Id);
  String_string_(SF result, string(")"));
}

void HAMR_SW_FlightPlanner_Impl_Operational_Api_cprint(HAMR_SW_FlightPlanner_Impl_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("FlightPlanner_Impl_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->MissionCommand_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->FlightPlan_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_SW_FlightPlanner_Impl_Operational_Api__is(STACK_FRAME void* this);
HAMR_SW_FlightPlanner_Impl_Operational_Api HAMR_SW_FlightPlanner_Impl_Operational_Api__as(STACK_FRAME void *this);

void HAMR_SW_FlightPlanner_Impl_Operational_Api_apply(STACK_FRAME HAMR_SW_FlightPlanner_Impl_Operational_Api this, Z id, Z MissionCommand_Id, Z FlightPlan_Id) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Api.scala", "HAMR.SW.FlightPlanner_Impl_Operational_Api", "apply", 0);
  this->id = id;
  this->MissionCommand_Id = MissionCommand_Id;
  this->FlightPlan_Id = FlightPlan_Id;
}

static inline B HAMR_SW_FlightPlanner_Impl_Operational_Api_get_MissionCommand_extract_43_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_SW_FlightPlanner_Impl_Operational_Api this, IS_C4F575 *_v_43_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!HAMR_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_43_41 = (IS_C4F575) HAMR_Base_Types_Bits_Payload_value_(HAMR_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B HAMR_SW_FlightPlanner_Impl_Operational_Api_get_MissionCommand_extract_44_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_SW_FlightPlanner_Impl_Operational_Api this, art_DataContent *_v_44_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_44_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B HAMR_SW_FlightPlanner_Impl_Operational_Api_get_MissionCommand_extract_47_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_SW_FlightPlanner_Impl_Operational_Api this) {
  return T;
}

void HAMR_SW_FlightPlanner_Impl_Operational_Api_get_MissionCommand_(STACK_FRAME Option_30119F result, HAMR_SW_FlightPlanner_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Api.scala", "HAMR.SW.FlightPlanner_Impl_Operational_Api", "get_MissionCommand", 0);

  sfUpdateLoc(42);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, HAMR_SW_FlightPlanner_Impl_Operational_Api_MissionCommand_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_42_47 = F;
  if (!match_42_47) {
    IS_C4F575 v_43_41;
    match_42_47 = HAMR_SW_FlightPlanner_Impl_Operational_Api_get_MissionCommand_extract_43_12_8E9F45(SF t_0, this, &v_43_41);
    if (match_42_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_43_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_42_47) {
    art_DataContent v_44_17;
    match_42_47 = HAMR_SW_FlightPlanner_Impl_Operational_Api_get_MissionCommand_extract_44_12_8E9F45(SF t_0, this, &v_44_17);
    if (match_42_47) {

      sfUpdateLoc(45);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port MissionCommand.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_44_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF HAMR_SW_FlightPlanner_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_42_47) {
    match_42_47 = HAMR_SW_FlightPlanner_Impl_Operational_Api_get_MissionCommand_extract_47_12_8E9F45(SF t_0, this);
    if (match_42_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_42_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}