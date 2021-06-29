#include <all.h>

// hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api

B hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api__eq(hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->keep_in_zones_Id, other->keep_in_zones_Id)) return F;
  if (Z__ne(this->keep_out_zones_Id, other->keep_out_zones_Id)) return F;
  if (Z__ne(this->observed_Id, other->observed_Id)) return F;
  if (Z__ne(this->output_Id, other->output_Id)) return F;
  if (Z__ne(this->alert_Id, other->alert_Id)) return F;
  return T;
}

B hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api__ne(hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api other);

void hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_string_(STACK_FRAME String result, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api", "string", 0);
  String_string_(SF result, string("CASE_Monitor_Geo_thr_Impl_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->keep_in_zones_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->keep_out_zones_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->observed_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->output_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->alert_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_cprint(hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("CASE_Monitor_Geo_thr_Impl_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->keep_in_zones_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->keep_out_zones_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->observed_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->output_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->alert_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api__is(STACK_FRAME void* this);
hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api__as(STACK_FRAME void *this);

void hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_apply(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this, Z id, Z keep_in_zones_Id, Z keep_out_zones_Id, Z observed_Id, Z output_Id, Z alert_Id) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api", "apply", 0);
  this->id = id;
  this->keep_in_zones_Id = keep_in_zones_Id;
  this->keep_out_zones_Id = keep_out_zones_Id;
  this->observed_Id = observed_Id;
  this->output_Id = output_Id;
  this->alert_Id = alert_Id;
}

static inline B hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_in_zones_extract_56_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this, IS_C4F575 *_v_56_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_56_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_in_zones_extract_57_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this, art_DataContent *_v_57_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_57_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_in_zones_extract_60_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_in_zones_(STACK_FRAME Option_30119F result, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api", "get_keep_in_zones", 0);

  sfUpdateLoc(55);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_keep_in_zones_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_55_47 = F;
  if (!match_55_47) {
    IS_C4F575 v_56_41;
    match_55_47 = hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_in_zones_extract_56_12_8E9F45(SF t_0, this, &v_56_41);
    if (match_55_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_56_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_55_47) {
    art_DataContent v_57_17;
    match_55_47 = hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_in_zones_extract_57_12_8E9F45(SF t_0, this, &v_57_17);
    if (match_55_47) {

      sfUpdateLoc(58);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port keep_in_zones.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_57_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_55_47) {
    match_55_47 = hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_in_zones_extract_60_12_8E9F45(SF t_0, this);
    if (match_55_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_55_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_out_zones_extract_67_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this, IS_C4F575 *_v_67_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_67_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_out_zones_extract_68_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this, art_DataContent *_v_68_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_68_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_out_zones_extract_71_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_out_zones_(STACK_FRAME Option_30119F result, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api", "get_keep_out_zones", 0);

  sfUpdateLoc(66);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_keep_out_zones_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_66_47 = F;
  if (!match_66_47) {
    IS_C4F575 v_67_41;
    match_66_47 = hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_out_zones_extract_67_12_8E9F45(SF t_0, this, &v_67_41);
    if (match_66_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_67_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_66_47) {
    art_DataContent v_68_17;
    match_66_47 = hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_out_zones_extract_68_12_8E9F45(SF t_0, this, &v_68_17);
    if (match_66_47) {

      sfUpdateLoc(69);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port keep_out_zones.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_68_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_66_47) {
    match_66_47 = hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_out_zones_extract_71_12_8E9F45(SF t_0, this);
    if (match_66_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_66_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_observed_extract_78_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this, IS_C4F575 *_v_78_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_78_41 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_observed_extract_79_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this, art_DataContent *_v_79_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_79_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_observed_extract_82_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this) {
  return T;
}

void hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_observed_(STACK_FRAME Option_30119F result, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api", "get_observed", 0);

  sfUpdateLoc(77);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_observed_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_77_47 = F;
  if (!match_77_47) {
    IS_C4F575 v_78_41;
    match_77_47 = hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_observed_extract_78_12_8E9F45(SF t_0, this, &v_78_41);
    if (match_77_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_78_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_77_47) {
    art_DataContent v_79_17;
    match_77_47 = hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_observed_extract_79_12_8E9F45(SF t_0, this, &v_79_17);
    if (match_77_47) {

      sfUpdateLoc(80);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port observed.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_79_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_77_47) {
    match_77_47 = hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_observed_extract_82_12_8E9F45(SF t_0, this);
    if (match_77_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_77_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}