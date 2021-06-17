#include <all.h>

// hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api

B hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api__eq(hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->recv_data_Id, other->recv_data_Id)) return F;
  if (Z__ne(this->send_data_Id, other->send_data_Id)) return F;
  if (Z__ne(this->trusted_ids_Id, other->trusted_ids_Id)) return F;
  if (Z__ne(this->AutomationRequest_Id, other->AutomationRequest_Id)) return F;
  if (Z__ne(this->OperatingRegion_Id, other->OperatingRegion_Id)) return F;
  if (Z__ne(this->LineSearchTask_Id, other->LineSearchTask_Id)) return F;
  return T;
}

B hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api__ne(hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api other);

void hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_string_(STACK_FRAME String result, hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api", "string", 0);
  String_string_(SF result, string("RadioDriver_Attestation_thr_Impl_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->recv_data_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->send_data_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->trusted_ids_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_cprint(hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("RadioDriver_Attestation_thr_Impl_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_data_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->send_data_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->trusted_ids_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api__is(STACK_FRAME void* this);
hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api__as(STACK_FRAME void *this);

void hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_apply(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, Z id, Z recv_data_Id, Z send_data_Id, Z trusted_ids_Id, Z AutomationRequest_Id, Z OperatingRegion_Id, Z LineSearchTask_Id) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api", "apply", 0);
  this->id = id;
  this->recv_data_Id = recv_data_Id;
  this->send_data_Id = send_data_Id;
  this->trusted_ids_Id = trusted_ids_Id;
  this->AutomationRequest_Id = AutomationRequest_Id;
  this->OperatingRegion_Id = OperatingRegion_Id;
  this->LineSearchTask_Id = LineSearchTask_Id;
}

static inline B hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_get_recv_data_extract_71_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, IS_C4F575 *_v_71_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_71_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_get_recv_data_extract_72_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, art_DataContent *_v_72_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_72_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_get_recv_data_extract_75_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_get_recv_data_(STACK_FRAME Option_30119F result, hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api", "get_recv_data", 0);

  sfUpdateLoc(70);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_recv_data_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_70_47 = F;
  if (!match_70_47) {
    IS_C4F575 v_71_41;
    match_70_47 = hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_get_recv_data_extract_71_12_8E9F45(SF t_0, this, &v_71_41);
    if (match_70_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_71_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_70_47) {
    art_DataContent v_72_17;
    match_70_47 = hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_get_recv_data_extract_72_12_8E9F45(SF t_0, this, &v_72_17);
    if (match_70_47) {

      sfUpdateLoc(73);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port recv_data.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_72_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_70_47) {
    match_70_47 = hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_get_recv_data_extract_75_12_8E9F45(SF t_0, this);
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