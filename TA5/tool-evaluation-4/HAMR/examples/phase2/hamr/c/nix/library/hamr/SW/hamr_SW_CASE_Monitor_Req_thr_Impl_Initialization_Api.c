#include <all.h>

// hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api

B hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api__eq(hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api this, hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->observed_Id, other->observed_Id)) return F;
  if (Z__ne(this->reference_1_Id, other->reference_1_Id)) return F;
  return T;
}

B hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api__ne(hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api this, hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api other);

void hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api_string_(STACK_FRAME String result, hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api", "string", 0);
  String_string_(SF result, string("CASE_Monitor_Req_thr_Impl_Initialization_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->observed_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->reference_1_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api_cprint(hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("CASE_Monitor_Req_thr_Impl_Initialization_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->observed_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->reference_1_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api__is(STACK_FRAME void* this);
hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api__as(STACK_FRAME void *this);

void hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api_apply(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api this, Z id, Z observed_Id, Z reference_1_Id) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api", "apply", 0);
  this->id = id;
  this->observed_Id = observed_Id;
  this->reference_1_Id = reference_1_Id;
}