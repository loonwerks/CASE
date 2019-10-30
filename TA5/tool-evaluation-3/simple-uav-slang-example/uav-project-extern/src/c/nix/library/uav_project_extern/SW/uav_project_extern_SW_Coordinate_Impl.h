#ifndef SIREUM_H_uav_project_extern_SW_Coordinate_Impl
#define SIREUM_H_uav_project_extern_SW_Coordinate_Impl
#include <types.h>

// uav_project_extern.SW.Coordinate_Impl

#define uav_project_extern_SW_Coordinate_Impl_lat_(this) ((this)->lat)
#define uav_project_extern_SW_Coordinate_Impl_longitude_(this) ((this)->longitude)
#define uav_project_extern_SW_Coordinate_Impl_alt_(this) ((this)->alt)

B uav_project_extern_SW_Coordinate_Impl__eq(uav_project_extern_SW_Coordinate_Impl this, uav_project_extern_SW_Coordinate_Impl other);
inline B uav_project_extern_SW_Coordinate_Impl__ne(uav_project_extern_SW_Coordinate_Impl this, uav_project_extern_SW_Coordinate_Impl other) {
  return !uav_project_extern_SW_Coordinate_Impl__eq(this, other);
};
void uav_project_extern_SW_Coordinate_Impl_string_(STACK_FRAME String result, uav_project_extern_SW_Coordinate_Impl this);
void uav_project_extern_SW_Coordinate_Impl_cprint(uav_project_extern_SW_Coordinate_Impl this, B isOut);

inline B uav_project_extern_SW_Coordinate_Impl__is(STACK_FRAME void* this) {
  return ((uav_project_extern_SW_Coordinate_Impl) this)->type == Tuav_project_extern_SW_Coordinate_Impl;
}

inline uav_project_extern_SW_Coordinate_Impl uav_project_extern_SW_Coordinate_Impl__as(STACK_FRAME void *this) {
  if (uav_project_extern_SW_Coordinate_Impl__is(CALLER this)) return (uav_project_extern_SW_Coordinate_Impl) this;
  fprintf(stderr, "Invalid case from %s to uav_project_extern.SW.Coordinate_Impl.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void uav_project_extern_SW_Coordinate_Impl_apply(STACK_FRAME uav_project_extern_SW_Coordinate_Impl this, S32 lat, S32 longitude, S32 alt);

#endif