#include <all.h>

// hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api

B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api__eq(hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->AutomationResponse_Id, other->AutomationResponse_Id)) return F;
  if (Z__ne(this->AirVehicleState_Id, other->AirVehicleState_Id)) return F;
  if (Z__ne(this->MissionCommand_Id, other->MissionCommand_Id)) return F;
  if (Z__ne(this->ReturnHome_Id, other->ReturnHome_Id)) return F;
  return T;
}

B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api__ne(hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api other);

void hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_string_(STACK_FRAME String result, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Api.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api", "string", 0);
  String_string_(SF result, string("WaypointPlanManagerService_thr_Impl_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationResponse_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AirVehicleState_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->MissionCommand_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->ReturnHome_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_cprint(hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("WaypointPlanManagerService_thr_Impl_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationResponse_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AirVehicleState_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->MissionCommand_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->ReturnHome_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api__is(STACK_FRAME void* this);
hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api__as(STACK_FRAME void *this);

void hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_apply(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, Z id, Z AutomationResponse_Id, Z AirVehicleState_Id, Z MissionCommand_Id, Z ReturnHome_Id) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Api.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api", "apply", 0);
  this->id = id;
  this->AutomationResponse_Id = AutomationResponse_Id;
  this->AirVehicleState_Id = AirVehicleState_Id;
  this->MissionCommand_Id = MissionCommand_Id;
  this->ReturnHome_Id = ReturnHome_Id;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AutomationResponse_extract_49_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, IS_C4F575 *_v_49_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_49_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AutomationResponse_extract_50_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, art_DataContent *_v_50_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_50_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AutomationResponse_extract_53_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AutomationResponse_(STACK_FRAME Option_30119F result, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Api.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api", "get_AutomationResponse", 0);

  sfUpdateLoc(48);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_AutomationResponse_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_48_47 = F;
  if (!match_48_47) {
    IS_C4F575 v_49_41;
    match_48_47 = hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AutomationResponse_extract_49_12_8E9F45(SF t_0, this, &v_49_41);
    if (match_48_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_49_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_48_47) {
    art_DataContent v_50_17;
    match_48_47 = hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AutomationResponse_extract_50_12_8E9F45(SF t_0, this, &v_50_17);
    if (match_48_47) {

      sfUpdateLoc(51);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AutomationResponse.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_50_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_48_47) {
    match_48_47 = hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AutomationResponse_extract_53_12_8E9F45(SF t_0, this);
    if (match_48_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_48_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AirVehicleState_extract_60_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, IS_C4F575 *_v_60_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_60_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AirVehicleState_extract_61_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, art_DataContent *_v_61_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_61_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AirVehicleState_extract_64_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AirVehicleState_(STACK_FRAME Option_30119F result, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Api.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api", "get_AirVehicleState", 0);

  sfUpdateLoc(59);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_AirVehicleState_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_59_47 = F;
  if (!match_59_47) {
    IS_C4F575 v_60_41;
    match_59_47 = hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AirVehicleState_extract_60_12_8E9F45(SF t_0, this, &v_60_41);
    if (match_59_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_60_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_59_47) {
    art_DataContent v_61_17;
    match_59_47 = hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AirVehicleState_extract_61_12_8E9F45(SF t_0, this, &v_61_17);
    if (match_59_47) {

      sfUpdateLoc(62);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AirVehicleState.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_61_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_59_47) {
    match_59_47 = hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AirVehicleState_extract_64_12_8E9F45(SF t_0, this);
    if (match_59_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_59_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_ReturnHome_extract_71_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!art_Empty__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  return T;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_ReturnHome_extract_72_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, art_DataContent *_v_72_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_72_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_ReturnHome_extract_75_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_ReturnHome_(STACK_FRAME Option_C622DB result, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Api.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api", "get_ReturnHome", 0);

  sfUpdateLoc(70);
  Option_C622DB value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_ReturnHome_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_70_41 = F;
  if (!match_70_41) {
    match_70_41 = hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_ReturnHome_extract_71_12_8E9F45(SF t_0, this);
    if (match_70_41) {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      DeclNewSome_4782C6(t_2);
      Some_4782C6_apply(SF &t_2, (art_Empty) (&t_3));
      value = (Option_C622DB) (&t_2);
    }
  }
  if (!match_70_41) {
    art_DataContent v_72_17;
    match_70_41 = hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_ReturnHome_extract_72_12_8E9F45(SF t_0, this, &v_72_17);
    if (match_70_41) {

      sfUpdateLoc(73);
      {
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Unexpected payload on port ReturnHome.  Expecting 'Empty' but received "));
        art_DataContent_string_(SF (String) &t_4, v_72_17);
        String_string_(SF (String) &t_4, string(""));
        art_Art_logError(SF hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_4));
      }
      DeclNewNone_ED72E1(t_5);
      None_ED72E1_apply(SF &t_5);
      value = (Option_C622DB) (&t_5);
    }
  }
  if (!match_70_41) {
    match_70_41 = hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_ReturnHome_extract_75_12_8E9F45(SF t_0, this);
    if (match_70_41) {
      DeclNewNone_ED72E1(t_6);
      None_ED72E1_apply(SF &t_6);
      value = (Option_C622DB) (&t_6);
    }
  }
  sfAssert(match_70_41, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_C622DB));
  return;
}