#include <all.h>

// hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api

B hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api__eq(hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->observed_Id, other->observed_Id)) return F;
  if (Z__ne(this->reference_1_Id, other->reference_1_Id)) return F;
  return T;
}

B hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api__ne(hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api other);

void hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_string_(STACK_FRAME String result, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api", "string", 0);
  String_string_(SF result, string("CASE_Monitor_Req_thr_Impl_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->observed_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->reference_1_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_cprint(hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("CASE_Monitor_Req_thr_Impl_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->observed_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->reference_1_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api__is(STACK_FRAME void* this);
hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api__as(STACK_FRAME void *this);

void hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_apply(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this, Z id, Z observed_Id, Z reference_1_Id) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api", "apply", 0);
  this->id = id;
  this->observed_Id = observed_Id;
  this->reference_1_Id = reference_1_Id;
}

static inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_observed_extract_40_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this, IS_C4F575 *_v_40_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_40_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_observed_extract_41_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this, art_DataContent *_v_41_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_41_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_observed_extract_44_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_observed_(STACK_FRAME Option_30119F result, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api", "get_observed", 0);

  sfUpdateLoc(39);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_observed_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_39_47 = F;
  if (!match_39_47) {
    IS_C4F575 v_40_41;
    match_39_47 = hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_observed_extract_40_12_8E9F45(SF t_0, this, &v_40_41);
    if (match_39_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_40_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_39_47) {
    art_DataContent v_41_17;
    match_39_47 = hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_observed_extract_41_12_8E9F45(SF t_0, this, &v_41_17);
    if (match_39_47) {

      sfUpdateLoc(42);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port observed.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_41_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_39_47) {
    match_39_47 = hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_observed_extract_44_12_8E9F45(SF t_0, this);
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

static inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_reference_1_extract_51_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this, IS_C4F575 *_v_51_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_51_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_reference_1_extract_52_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this, art_DataContent *_v_52_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_52_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_reference_1_extract_55_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_reference_1_(STACK_FRAME Option_30119F result, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api", "get_reference_1", 0);

  sfUpdateLoc(50);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_reference_1_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_50_47 = F;
  if (!match_50_47) {
    IS_C4F575 v_51_41;
    match_50_47 = hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_reference_1_extract_51_12_8E9F45(SF t_0, this, &v_51_41);
    if (match_50_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_51_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_50_47) {
    art_DataContent v_52_17;
    match_50_47 = hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_reference_1_extract_52_12_8E9F45(SF t_0, this, &v_52_17);
    if (match_50_47) {

      sfUpdateLoc(53);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port reference_1.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_52_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_50_47) {
    match_50_47 = hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_reference_1_extract_55_12_8E9F45(SF t_0, this);
    if (match_50_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_50_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}