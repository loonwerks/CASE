#include <all.h>

// hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api

B hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api__eq(hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api this, hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->keep_in_zones_Id, other->keep_in_zones_Id)) return F;
  if (Z__ne(this->keep_out_zones_Id, other->keep_out_zones_Id)) return F;
  if (Z__ne(this->observed_Id, other->observed_Id)) return F;
  if (Z__ne(this->output_Id, other->output_Id)) return F;
  if (Z__ne(this->alert_Id, other->alert_Id)) return F;
  return T;
}

B hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api__ne(hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api this, hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api other);

void hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_string_(STACK_FRAME String result, hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api", "string", 0);
  String_string_(SF result, string("CASE_Monitor_Geo_thr_Impl_Initialization_Api("));
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

void hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_cprint(hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("CASE_Monitor_Geo_thr_Impl_Initialization_Api("), isOut);
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

B hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api__is(STACK_FRAME void* this);
hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api__as(STACK_FRAME void *this);

void hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_apply(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api this, Z id, Z keep_in_zones_Id, Z keep_out_zones_Id, Z observed_Id, Z output_Id, Z alert_Id) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api", "apply", 0);
  this->id = id;
  this->keep_in_zones_Id = keep_in_zones_Id;
  this->keep_out_zones_Id = keep_out_zones_Id;
  this->observed_Id = observed_Id;
  this->output_Id = output_Id;
  this->alert_Id = alert_Id;
}