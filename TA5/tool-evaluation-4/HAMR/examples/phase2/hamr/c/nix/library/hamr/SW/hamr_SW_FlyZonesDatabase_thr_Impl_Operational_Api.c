#include <all.h>

// hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api

B hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api__eq(hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api this, hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->keep_in_zones_Id, other->keep_in_zones_Id)) return F;
  if (Z__ne(this->keep_out_zones_Id, other->keep_out_zones_Id)) return F;
  return T;
}

B hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api__ne(hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api this, hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api other);

void hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api_string_(STACK_FRAME String result, hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Api.scala", "hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api", "string", 0);
  String_string_(SF result, string("FlyZonesDatabase_thr_Impl_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->keep_in_zones_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->keep_out_zones_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api_cprint(hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("FlyZonesDatabase_thr_Impl_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->keep_in_zones_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->keep_out_zones_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api__is(STACK_FRAME void* this);
hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api__as(STACK_FRAME void *this);

void hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api_apply(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api this, Z id, Z keep_in_zones_Id, Z keep_out_zones_Id) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Api.scala", "hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api", "apply", 0);
  this->id = id;
  this->keep_in_zones_Id = keep_in_zones_Id;
  this->keep_out_zones_Id = keep_out_zones_Id;
}