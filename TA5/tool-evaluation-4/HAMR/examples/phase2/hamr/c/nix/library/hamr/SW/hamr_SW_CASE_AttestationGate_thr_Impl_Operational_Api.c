#include <all.h>

// hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api

B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api__eq(hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->trusted_ids_Id, other->trusted_ids_Id)) return F;
  if (Z__ne(this->AutomationRequest_in_Id, other->AutomationRequest_in_Id)) return F;
  if (Z__ne(this->AutomationRequest_out_UXAS_Id, other->AutomationRequest_out_UXAS_Id)) return F;
  if (Z__ne(this->AutomationRequest_out_MON_REQ_Id, other->AutomationRequest_out_MON_REQ_Id)) return F;
  if (Z__ne(this->OperatingRegion_in_Id, other->OperatingRegion_in_Id)) return F;
  if (Z__ne(this->OperatingRegion_out_Id, other->OperatingRegion_out_Id)) return F;
  if (Z__ne(this->LineSearchTask_in_Id, other->LineSearchTask_in_Id)) return F;
  if (Z__ne(this->LineSearchTask_out_Id, other->LineSearchTask_out_Id)) return F;
  return T;
}

B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api__ne(hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api other);

void hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_string_(STACK_FRAME String result, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Api.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api", "string", 0);
  String_string_(SF result, string("CASE_AttestationGate_thr_Impl_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->trusted_ids_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_out_UXAS_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_out_MON_REQ_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_out_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_out_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_cprint(hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("CASE_AttestationGate_thr_Impl_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->trusted_ids_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_out_UXAS_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_out_MON_REQ_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_out_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_out_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api__is(STACK_FRAME void* this);
hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api__as(STACK_FRAME void *this);

void hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_apply(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, Z id, Z trusted_ids_Id, Z AutomationRequest_in_Id, Z AutomationRequest_out_UXAS_Id, Z AutomationRequest_out_MON_REQ_Id, Z OperatingRegion_in_Id, Z OperatingRegion_out_Id, Z LineSearchTask_in_Id, Z LineSearchTask_out_Id) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Api.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api", "apply", 0);
  this->id = id;
  this->trusted_ids_Id = trusted_ids_Id;
  this->AutomationRequest_in_Id = AutomationRequest_in_Id;
  this->AutomationRequest_out_UXAS_Id = AutomationRequest_out_UXAS_Id;
  this->AutomationRequest_out_MON_REQ_Id = AutomationRequest_out_MON_REQ_Id;
  this->OperatingRegion_in_Id = OperatingRegion_in_Id;
  this->OperatingRegion_out_Id = OperatingRegion_out_Id;
  this->LineSearchTask_in_Id = LineSearchTask_in_Id;
  this->LineSearchTask_out_Id = LineSearchTask_out_Id;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_trusted_ids_extract_73_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, IS_C4F575 *_v_73_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_73_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_trusted_ids_extract_74_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, art_DataContent *_v_74_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_74_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_trusted_ids_extract_77_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_trusted_ids_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Api.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api", "get_trusted_ids", 0);

  sfUpdateLoc(72);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_trusted_ids_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_72_47 = F;
  if (!match_72_47) {
    IS_C4F575 v_73_41;
    match_72_47 = hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_trusted_ids_extract_73_12_8E9F45(SF t_0, this, &v_73_41);
    if (match_72_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_73_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_72_47) {
    art_DataContent v_74_17;
    match_72_47 = hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_trusted_ids_extract_74_12_8E9F45(SF t_0, this, &v_74_17);
    if (match_72_47) {

      sfUpdateLoc(75);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port trusted_ids.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_74_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_72_47) {
    match_72_47 = hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_trusted_ids_extract_77_12_8E9F45(SF t_0, this);
    if (match_72_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_72_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_AutomationRequest_in_extract_84_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, IS_C4F575 *_v_84_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_84_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_AutomationRequest_in_extract_85_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, art_DataContent *_v_85_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_85_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_AutomationRequest_in_extract_88_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_AutomationRequest_in_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Api.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api", "get_AutomationRequest_in", 0);

  sfUpdateLoc(83);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_AutomationRequest_in_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_83_47 = F;
  if (!match_83_47) {
    IS_C4F575 v_84_41;
    match_83_47 = hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_AutomationRequest_in_extract_84_12_8E9F45(SF t_0, this, &v_84_41);
    if (match_83_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_84_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_83_47) {
    art_DataContent v_85_17;
    match_83_47 = hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_AutomationRequest_in_extract_85_12_8E9F45(SF t_0, this, &v_85_17);
    if (match_83_47) {

      sfUpdateLoc(86);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AutomationRequest_in.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_85_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_83_47) {
    match_83_47 = hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_AutomationRequest_in_extract_88_12_8E9F45(SF t_0, this);
    if (match_83_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_83_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_OperatingRegion_in_extract_95_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, IS_C4F575 *_v_95_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_95_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_OperatingRegion_in_extract_96_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, art_DataContent *_v_96_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_96_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_OperatingRegion_in_extract_99_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_OperatingRegion_in_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Api.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api", "get_OperatingRegion_in", 0);

  sfUpdateLoc(94);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_OperatingRegion_in_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_94_47 = F;
  if (!match_94_47) {
    IS_C4F575 v_95_41;
    match_94_47 = hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_OperatingRegion_in_extract_95_12_8E9F45(SF t_0, this, &v_95_41);
    if (match_94_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_95_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_94_47) {
    art_DataContent v_96_17;
    match_94_47 = hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_OperatingRegion_in_extract_96_12_8E9F45(SF t_0, this, &v_96_17);
    if (match_94_47) {

      sfUpdateLoc(97);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port OperatingRegion_in.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_96_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_94_47) {
    match_94_47 = hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_OperatingRegion_in_extract_99_12_8E9F45(SF t_0, this);
    if (match_94_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_94_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_LineSearchTask_in_extract_106_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, IS_C4F575 *_v_106_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_106_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_LineSearchTask_in_extract_107_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, art_DataContent *_v_107_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_107_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_LineSearchTask_in_extract_110_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_LineSearchTask_in_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Api.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api", "get_LineSearchTask_in", 0);

  sfUpdateLoc(105);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_LineSearchTask_in_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_105_47 = F;
  if (!match_105_47) {
    IS_C4F575 v_106_41;
    match_105_47 = hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_LineSearchTask_in_extract_106_12_8E9F45(SF t_0, this, &v_106_41);
    if (match_105_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_106_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_105_47) {
    art_DataContent v_107_17;
    match_105_47 = hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_LineSearchTask_in_extract_107_12_8E9F45(SF t_0, this, &v_107_17);
    if (match_105_47) {

      sfUpdateLoc(108);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port LineSearchTask_in.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_107_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_105_47) {
    match_105_47 = hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_LineSearchTask_in_extract_110_12_8E9F45(SF t_0, this);
    if (match_105_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_105_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}