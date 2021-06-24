#include <all.h>

// HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api

B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api__eq(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api this, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->MissionCommand_Id, other->MissionCommand_Id)) return F;
  if (Z__ne(this->AttestationRequest_Id, other->AttestationRequest_Id)) return F;
  if (Z__ne(this->AttestationResponse_Id, other->AttestationResponse_Id)) return F;
  if (Z__ne(this->AttestationTesterResponse_Id, other->AttestationTesterResponse_Id)) return F;
  if (Z__ne(this->AttestationTesterRequest_Id, other->AttestationTesterRequest_Id)) return F;
  return T;
}

B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api__ne(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api this, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api other);

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_string_(STACK_FRAME String result, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api", "string", 0);
  String_string_(SF result, string("RadioDriver_Attestation_Impl_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->MissionCommand_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AttestationRequest_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AttestationResponse_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AttestationTesterResponse_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AttestationTesterRequest_Id);
  String_string_(SF result, string(")"));
}

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_cprint(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("RadioDriver_Attestation_Impl_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->MissionCommand_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AttestationRequest_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AttestationResponse_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AttestationTesterResponse_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AttestationTesterRequest_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api__is(STACK_FRAME void* this);
HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api__as(STACK_FRAME void *this);

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_apply(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api this, Z id, Z MissionCommand_Id, Z AttestationRequest_Id, Z AttestationResponse_Id, Z AttestationTesterResponse_Id, Z AttestationTesterRequest_Id) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api", "apply", 0);
  this->id = id;
  this->MissionCommand_Id = MissionCommand_Id;
  this->AttestationRequest_Id = AttestationRequest_Id;
  this->AttestationResponse_Id = AttestationResponse_Id;
  this->AttestationTesterResponse_Id = AttestationTesterResponse_Id;
  this->AttestationTesterRequest_Id = AttestationTesterRequest_Id;
}

static inline B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationRequest_extract_60_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api this, IS_C4F575 *_v_60_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!HAMR_Simple_V4_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_60_41 = (IS_C4F575) HAMR_Simple_V4_Base_Types_Bits_Payload_value_(HAMR_Simple_V4_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationRequest_extract_61_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api this, art_DataContent *_v_61_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_61_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationRequest_extract_64_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api this) {
  return T;
}

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationRequest_(STACK_FRAME Option_30119F result, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api", "get_AttestationRequest", 0);

  sfUpdateLoc(59);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_AttestationRequest_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_59_47 = F;
  if (!match_59_47) {
    IS_C4F575 v_60_41;
    match_59_47 = HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationRequest_extract_60_12_8E9F45(SF t_0, this, &v_60_41);
    if (match_59_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_60_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_59_47) {
    art_DataContent v_61_17;
    match_59_47 = HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationRequest_extract_61_12_8E9F45(SF t_0, this, &v_61_17);
    if (match_59_47) {

      sfUpdateLoc(62);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AttestationRequest.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_61_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_59_47) {
    match_59_47 = HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationRequest_extract_64_12_8E9F45(SF t_0, this);
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

static inline B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationTesterResponse_extract_71_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api this, IS_C4F575 *_v_71_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!HAMR_Simple_V4_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_71_41 = (IS_C4F575) HAMR_Simple_V4_Base_Types_Bits_Payload_value_(HAMR_Simple_V4_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationTesterResponse_extract_72_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api this, art_DataContent *_v_72_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_72_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationTesterResponse_extract_75_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api this) {
  return T;
}

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationTesterResponse_(STACK_FRAME Option_30119F result, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api", "get_AttestationTesterResponse", 0);

  sfUpdateLoc(70);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_AttestationTesterResponse_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_70_47 = F;
  if (!match_70_47) {
    IS_C4F575 v_71_41;
    match_70_47 = HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationTesterResponse_extract_71_12_8E9F45(SF t_0, this, &v_71_41);
    if (match_70_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_71_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_70_47) {
    art_DataContent v_72_17;
    match_70_47 = HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationTesterResponse_extract_72_12_8E9F45(SF t_0, this, &v_72_17);
    if (match_70_47) {

      sfUpdateLoc(73);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AttestationTesterResponse.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_72_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_70_47) {
    match_70_47 = HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationTesterResponse_extract_75_12_8E9F45(SF t_0, this);
    if (match_70_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_70_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}