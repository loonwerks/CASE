#include <all.h>

// HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api

B HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api__eq(HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api this, HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->AttestationRequest_Id, other->AttestationRequest_Id)) return F;
  if (Z__ne(this->AttestationResponse_Id, other->AttestationResponse_Id)) return F;
  return T;
}

B HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api__ne(HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api this, HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api other);

void HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_string_(STACK_FRAME String result, HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_Api.scala", "HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api", "string", 0);
  String_string_(SF result, string("AttestationTester_Impl_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AttestationRequest_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AttestationResponse_Id);
  String_string_(SF result, string(")"));
}

void HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_cprint(HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("AttestationTester_Impl_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AttestationRequest_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AttestationResponse_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api__is(STACK_FRAME void* this);
HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api__as(STACK_FRAME void *this);

void HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_apply(STACK_FRAME HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api this, Z id, Z AttestationRequest_Id, Z AttestationResponse_Id) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_Api.scala", "HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api", "apply", 0);
  this->id = id;
  this->AttestationRequest_Id = AttestationRequest_Id;
  this->AttestationResponse_Id = AttestationResponse_Id;
}

static inline B HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_get_AttestationRequest_extract_43_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api this, IS_C4F575 *_v_43_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!HAMR_Simple_V4_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_43_41 = (IS_C4F575) HAMR_Simple_V4_Base_Types_Bits_Payload_value_(HAMR_Simple_V4_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_get_AttestationRequest_extract_44_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api this, art_DataContent *_v_44_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_44_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_get_AttestationRequest_extract_47_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api this) {
  return T;
}

void HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_get_AttestationRequest_(STACK_FRAME Option_30119F result, HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_Api.scala", "HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api", "get_AttestationRequest", 0);

  sfUpdateLoc(42);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_AttestationRequest_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_42_47 = F;
  if (!match_42_47) {
    IS_C4F575 v_43_41;
    match_42_47 = HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_get_AttestationRequest_extract_43_12_8E9F45(SF t_0, this, &v_43_41);
    if (match_42_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_43_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_42_47) {
    art_DataContent v_44_17;
    match_42_47 = HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_get_AttestationRequest_extract_44_12_8E9F45(SF t_0, this, &v_44_17);
    if (match_42_47) {

      sfUpdateLoc(45);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AttestationRequest.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_44_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_42_47) {
    match_42_47 = HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_get_AttestationRequest_extract_47_12_8E9F45(SF t_0, this);
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