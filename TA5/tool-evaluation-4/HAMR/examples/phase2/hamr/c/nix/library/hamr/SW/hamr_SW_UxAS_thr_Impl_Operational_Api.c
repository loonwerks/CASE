#include <all.h>

// hamr.SW.UxAS_thr_Impl_Operational_Api

B hamr_SW_UxAS_thr_Impl_Operational_Api__eq(hamr_SW_UxAS_thr_Impl_Operational_Api this, hamr_SW_UxAS_thr_Impl_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->AutomationRequest_Id, other->AutomationRequest_Id)) return F;
  if (Z__ne(this->AirVehicleState_Id, other->AirVehicleState_Id)) return F;
  if (Z__ne(this->OperatingRegion_Id, other->OperatingRegion_Id)) return F;
  if (Z__ne(this->LineSearchTask_Id, other->LineSearchTask_Id)) return F;
  if (Z__ne(this->AutomationResponse_MON_GEO_Id, other->AutomationResponse_MON_GEO_Id)) return F;
  if (Z__ne(this->AutomationResponse_MON_REQ_Id, other->AutomationResponse_MON_REQ_Id)) return F;
  return T;
}

B hamr_SW_UxAS_thr_Impl_Operational_Api__ne(hamr_SW_UxAS_thr_Impl_Operational_Api this, hamr_SW_UxAS_thr_Impl_Operational_Api other);

void hamr_SW_UxAS_thr_Impl_Operational_Api_string_(STACK_FRAME String result, hamr_SW_UxAS_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Operational_Api", "string", 0);
  String_string_(SF result, string("UxAS_thr_Impl_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AirVehicleState_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationResponse_MON_GEO_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationResponse_MON_REQ_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_UxAS_thr_Impl_Operational_Api_cprint(hamr_SW_UxAS_thr_Impl_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("UxAS_thr_Impl_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AirVehicleState_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationResponse_MON_GEO_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationResponse_MON_REQ_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_UxAS_thr_Impl_Operational_Api__is(STACK_FRAME void* this);
hamr_SW_UxAS_thr_Impl_Operational_Api hamr_SW_UxAS_thr_Impl_Operational_Api__as(STACK_FRAME void *this);

void hamr_SW_UxAS_thr_Impl_Operational_Api_apply(STACK_FRAME hamr_SW_UxAS_thr_Impl_Operational_Api this, Z id, Z AutomationRequest_Id, Z AirVehicleState_Id, Z OperatingRegion_Id, Z LineSearchTask_Id, Z AutomationResponse_MON_GEO_Id, Z AutomationResponse_MON_REQ_Id) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Operational_Api", "apply", 0);
  this->id = id;
  this->AutomationRequest_Id = AutomationRequest_Id;
  this->AirVehicleState_Id = AirVehicleState_Id;
  this->OperatingRegion_Id = OperatingRegion_Id;
  this->LineSearchTask_Id = LineSearchTask_Id;
  this->AutomationResponse_MON_GEO_Id = AutomationResponse_MON_GEO_Id;
  this->AutomationResponse_MON_REQ_Id = AutomationResponse_MON_REQ_Id;
}

static inline B hamr_SW_UxAS_thr_Impl_Operational_Api_get_AutomationRequest_extract_59_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Operational_Api this, IS_C4F575 *_v_59_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_59_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Operational_Api_get_AutomationRequest_extract_60_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Operational_Api this, art_DataContent *_v_60_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_60_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Operational_Api_get_AutomationRequest_extract_63_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_UxAS_thr_Impl_Operational_Api_get_AutomationRequest_(STACK_FRAME Option_30119F result, hamr_SW_UxAS_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Operational_Api", "get_AutomationRequest", 0);

  sfUpdateLoc(58);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_UxAS_thr_Impl_Operational_Api_AutomationRequest_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_58_47 = F;
  if (!match_58_47) {
    IS_C4F575 v_59_41;
    match_58_47 = hamr_SW_UxAS_thr_Impl_Operational_Api_get_AutomationRequest_extract_59_12_8E9F45(SF t_0, this, &v_59_41);
    if (match_58_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_59_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_58_47) {
    art_DataContent v_60_17;
    match_58_47 = hamr_SW_UxAS_thr_Impl_Operational_Api_get_AutomationRequest_extract_60_12_8E9F45(SF t_0, this, &v_60_17);
    if (match_58_47) {

      sfUpdateLoc(61);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AutomationRequest.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_60_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_UxAS_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_58_47) {
    match_58_47 = hamr_SW_UxAS_thr_Impl_Operational_Api_get_AutomationRequest_extract_63_12_8E9F45(SF t_0, this);
    if (match_58_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_58_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_UxAS_thr_Impl_Operational_Api_get_AirVehicleState_extract_70_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Operational_Api this, IS_C4F575 *_v_70_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_70_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Operational_Api_get_AirVehicleState_extract_71_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Operational_Api this, art_DataContent *_v_71_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_71_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Operational_Api_get_AirVehicleState_extract_74_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_UxAS_thr_Impl_Operational_Api_get_AirVehicleState_(STACK_FRAME Option_30119F result, hamr_SW_UxAS_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Operational_Api", "get_AirVehicleState", 0);

  sfUpdateLoc(69);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_UxAS_thr_Impl_Operational_Api_AirVehicleState_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_69_47 = F;
  if (!match_69_47) {
    IS_C4F575 v_70_41;
    match_69_47 = hamr_SW_UxAS_thr_Impl_Operational_Api_get_AirVehicleState_extract_70_12_8E9F45(SF t_0, this, &v_70_41);
    if (match_69_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_70_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_69_47) {
    art_DataContent v_71_17;
    match_69_47 = hamr_SW_UxAS_thr_Impl_Operational_Api_get_AirVehicleState_extract_71_12_8E9F45(SF t_0, this, &v_71_17);
    if (match_69_47) {

      sfUpdateLoc(72);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AirVehicleState.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_71_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_UxAS_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_69_47) {
    match_69_47 = hamr_SW_UxAS_thr_Impl_Operational_Api_get_AirVehicleState_extract_74_12_8E9F45(SF t_0, this);
    if (match_69_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_69_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_UxAS_thr_Impl_Operational_Api_get_OperatingRegion_extract_81_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Operational_Api this, IS_C4F575 *_v_81_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_81_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Operational_Api_get_OperatingRegion_extract_82_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Operational_Api this, art_DataContent *_v_82_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_82_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Operational_Api_get_OperatingRegion_extract_85_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_UxAS_thr_Impl_Operational_Api_get_OperatingRegion_(STACK_FRAME Option_30119F result, hamr_SW_UxAS_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Operational_Api", "get_OperatingRegion", 0);

  sfUpdateLoc(80);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_UxAS_thr_Impl_Operational_Api_OperatingRegion_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_80_47 = F;
  if (!match_80_47) {
    IS_C4F575 v_81_41;
    match_80_47 = hamr_SW_UxAS_thr_Impl_Operational_Api_get_OperatingRegion_extract_81_12_8E9F45(SF t_0, this, &v_81_41);
    if (match_80_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_81_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_80_47) {
    art_DataContent v_82_17;
    match_80_47 = hamr_SW_UxAS_thr_Impl_Operational_Api_get_OperatingRegion_extract_82_12_8E9F45(SF t_0, this, &v_82_17);
    if (match_80_47) {

      sfUpdateLoc(83);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port OperatingRegion.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_82_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_UxAS_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_80_47) {
    match_80_47 = hamr_SW_UxAS_thr_Impl_Operational_Api_get_OperatingRegion_extract_85_12_8E9F45(SF t_0, this);
    if (match_80_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_80_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_UxAS_thr_Impl_Operational_Api_get_LineSearchTask_extract_92_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Operational_Api this, IS_C4F575 *_v_92_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_92_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Operational_Api_get_LineSearchTask_extract_93_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Operational_Api this, art_DataContent *_v_93_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_93_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Operational_Api_get_LineSearchTask_extract_96_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_UxAS_thr_Impl_Operational_Api_get_LineSearchTask_(STACK_FRAME Option_30119F result, hamr_SW_UxAS_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Operational_Api", "get_LineSearchTask", 0);

  sfUpdateLoc(91);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_UxAS_thr_Impl_Operational_Api_LineSearchTask_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_91_47 = F;
  if (!match_91_47) {
    IS_C4F575 v_92_41;
    match_91_47 = hamr_SW_UxAS_thr_Impl_Operational_Api_get_LineSearchTask_extract_92_12_8E9F45(SF t_0, this, &v_92_41);
    if (match_91_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_92_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_91_47) {
    art_DataContent v_93_17;
    match_91_47 = hamr_SW_UxAS_thr_Impl_Operational_Api_get_LineSearchTask_extract_93_12_8E9F45(SF t_0, this, &v_93_17);
    if (match_91_47) {

      sfUpdateLoc(94);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port LineSearchTask.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_93_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_UxAS_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_91_47) {
    match_91_47 = hamr_SW_UxAS_thr_Impl_Operational_Api_get_LineSearchTask_extract_96_12_8E9F45(SF t_0, this);
    if (match_91_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_91_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}