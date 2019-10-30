#include <all.h>

// uav_project_extern.SW.Coordinate_Impl

B uav_project_extern_SW_Coordinate_Impl__eq(uav_project_extern_SW_Coordinate_Impl this, uav_project_extern_SW_Coordinate_Impl other) {
  if (S32__ne(this->lat, other->lat)) return F;
  if (S32__ne(this->longitude, other->longitude)) return F;
  if (S32__ne(this->alt, other->alt)) return F;
  return T;
}

B uav_project_extern_SW_Coordinate_Impl__ne(uav_project_extern_SW_Coordinate_Impl this, uav_project_extern_SW_Coordinate_Impl other);

void uav_project_extern_SW_Coordinate_Impl_string_(STACK_FRAME String result, uav_project_extern_SW_Coordinate_Impl this) {
  DeclNewStackFrame(caller, "Coordinate_Impl.scala", "uav_project_extern.SW.Coordinate_Impl", "string", 0);
  String_string_(SF result, string("Coordinate_Impl("));
  String sep = string(", ");
  S32_string_(SF result, this->lat);
  String_string_(SF result, sep);
  S32_string_(SF result, this->longitude);
  String_string_(SF result, sep);
  S32_string_(SF result, this->alt);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_Coordinate_Impl_cprint(uav_project_extern_SW_Coordinate_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Coordinate_Impl("), isOut);
  String sep = string(", ");
  S32_cprint(this->lat, isOut);
  String_cprint(sep, isOut);
  S32_cprint(this->longitude, isOut);
  String_cprint(sep, isOut);
  S32_cprint(this->alt, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_Coordinate_Impl__is(STACK_FRAME void* this);
uav_project_extern_SW_Coordinate_Impl uav_project_extern_SW_Coordinate_Impl__as(STACK_FRAME void *this);

void uav_project_extern_SW_Coordinate_Impl_apply(STACK_FRAME uav_project_extern_SW_Coordinate_Impl this, S32 lat, S32 longitude, S32 alt) {
  DeclNewStackFrame(caller, "Coordinate_Impl.scala", "uav_project_extern.SW.Coordinate_Impl", "apply", 0);
  this->lat = lat;
  this->longitude = longitude;
  this->alt = alt;
}