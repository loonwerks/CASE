#ifndef SIREUM_H_org_sireum_IS_83A978
#define SIREUM_H_org_sireum_IS_83A978
#include <types.h>

// IS[Z, uav_project_extern.SW.Coordinate_Impl]

inline uav_project_extern_SW_Coordinate_Impl IS_83A978_at(IS_83A978 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return (uav_project_extern_SW_Coordinate_Impl) &(this->value[(int8_t) idx]);
}

inline void IS_83A978_up(IS_83A978 this, Z i, uav_project_extern_SW_Coordinate_Impl e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(struct uav_project_extern_SW_Coordinate_Impl));
}

inline Z IS_83A978_size(STACK_FRAME IS_83A978 this) {
   return (Z) (this)->size;
}

inline Z IS_83A978_zize(STACK_FRAME IS_83A978 this) {
   return (Z) (this)->size;
}

inline B IS_83A978_isEmpty(STACK_FRAME IS_83A978 this) {
   return (this)->size == 0;
}

inline B IS_83A978_nonEmpty(STACK_FRAME IS_83A978 this) {
   return (this)->size != 0;
}

B IS_83A978__eq(IS_83A978 this, IS_83A978 other);
void IS_83A978_create(STACK_FRAME IS_83A978 result, Z size, uav_project_extern_SW_Coordinate_Impl dflt);
void IS_83A978_zreate(STACK_FRAME IS_83A978 result, Z size, uav_project_extern_SW_Coordinate_Impl dflt);
void IS_83A978__append(STACK_FRAME IS_83A978 result, IS_83A978 this, uav_project_extern_SW_Coordinate_Impl value);
void IS_83A978__prepend(STACK_FRAME IS_83A978 result, IS_83A978 this, uav_project_extern_SW_Coordinate_Impl value);
void IS_83A978__appendAll(STACK_FRAME IS_83A978 result, IS_83A978 this, IS_83A978 other);
void IS_83A978__sub(STACK_FRAME IS_83A978 result, IS_83A978 this, uav_project_extern_SW_Coordinate_Impl value);
void IS_83A978__removeAll(STACK_FRAME IS_83A978 result, IS_83A978 this, IS_83A978 other);
void IS_83A978_cprint(IS_83A978 this, B isOut);
void IS_83A978_string_(STACK_FRAME String result, IS_83A978 this);

inline B IS_83A978__ne(IS_83A978 this, IS_83A978 other) {
  return !IS_83A978__eq(this, other);
}


#endif