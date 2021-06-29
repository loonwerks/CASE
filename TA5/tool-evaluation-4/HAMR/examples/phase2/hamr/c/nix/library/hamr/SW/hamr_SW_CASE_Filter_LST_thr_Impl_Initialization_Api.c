#include <all.h>

// hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api

B hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api__eq(hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api this, hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->filter_in_Id, other->filter_in_Id)) return F;
  if (Z__ne(this->filter_out_Id, other->filter_out_Id)) return F;
  return T;
}

B hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api__ne(hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api this, hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api other);

void hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_string_(STACK_FRAME String result, hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Api.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api", "string", 0);
  String_string_(SF result, string("CASE_Filter_LST_thr_Impl_Initialization_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->filter_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->filter_out_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_cprint(hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("CASE_Filter_LST_thr_Impl_Initialization_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->filter_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->filter_out_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api__is(STACK_FRAME void* this);
hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api__as(STACK_FRAME void *this);

void hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_apply(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api this, Z id, Z filter_in_Id, Z filter_out_Id) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Api.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api", "apply", 0);
  this->id = id;
  this->filter_in_Id = filter_in_Id;
  this->filter_out_Id = filter_out_Id;
}