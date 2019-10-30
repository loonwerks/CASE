#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api
#include <types.h>

// ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.Api

#define ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api_id_(this) ((this)->id)
#define ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api_recv_map_inn_Id_(this) ((this)->recv_map_inn_Id)
#define ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api_recv_map_out_Id_(this) ((this)->recv_map_out_Id)
#define ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api_send_status_inn_Id_(this) ((this)->send_status_inn_Id)
#define ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api_send_status_out_Id_(this) ((this)->send_status_out_Id)

B ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api__eq(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api other);
static inline B ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api__ne(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api other) {
  return !ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api__eq(this, other);
};
void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api_cprint(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api this, B isOut);
void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api this);

static inline B ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api__is(STACK_FRAME void* this) {
  return ((ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api) this)->type == TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api;
}

static inline ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api__as(STACK_FRAME void *this) {
  if (ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api__is(CALLER this)) return (ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api) this;
  fprintf(stderr, "Invalid case from %s to ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.Api.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api this, Z id, Z recv_map_inn_Id, Z recv_map_out_Id, Z send_status_inn_Id, Z send_status_out_Id);

#endif