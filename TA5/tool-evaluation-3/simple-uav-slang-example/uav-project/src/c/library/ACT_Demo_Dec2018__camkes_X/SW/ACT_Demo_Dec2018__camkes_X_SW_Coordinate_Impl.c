#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl

B ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl__eq(ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl this, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl other) {
  if (Z32__ne(this->lat, other->lat)) return F;
  if (Z32__ne(this->longitude, other->longitude)) return F;
  if (Z32__ne(this->alt, other->alt)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl this) {
  DeclNewStackFrame(caller, "Coordinate_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl", "string", 0);
  String_string(SF result, string("Coordinate_Impl("));
  String sep = string(", ");
  Z32_string(SF result, this->lat);
  String_string(SF result, sep);
  Z32_string(SF result, this->longitude);
  String_string(SF result, sep);
  Z32_string(SF result, this->alt);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_cprint(ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Coordinate_Impl("), isOut);
  String sep = string(", ");
  Z32_cprint(this->lat, isOut);
  String_cprint(sep, isOut);
  Z32_cprint(this->longitude, isOut);
  String_cprint(sep, isOut);
  Z32_cprint(this->alt, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl this, Z32 lat, Z32 longitude, Z32 alt) {
  DeclNewStackFrame(caller, "Coordinate_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl", "apply", 0);
  this->lat = lat;
  this->longitude = longitude;
  this->alt = alt;
}