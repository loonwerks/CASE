#ifndef SIREUM_H_hamr_Drivers_UARTDriver_Impl_Operational_Api
#define SIREUM_H_hamr_Drivers_UARTDriver_Impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// hamr.Drivers.UARTDriver_Impl_Operational_Api

#define hamr_Drivers_UARTDriver_Impl_Operational_Api_id_(this) ((this)->id)
#define hamr_Drivers_UARTDriver_Impl_Operational_Api_recv_data_Id_(this) ((this)->recv_data_Id)
#define hamr_Drivers_UARTDriver_Impl_Operational_Api_MissionCommand_Id_(this) ((this)->MissionCommand_Id)
#define hamr_Drivers_UARTDriver_Impl_Operational_Api_send_data_Id_(this) ((this)->send_data_Id)
#define hamr_Drivers_UARTDriver_Impl_Operational_Api_AirVehicleState_WPM_Id_(this) ((this)->AirVehicleState_WPM_Id)
#define hamr_Drivers_UARTDriver_Impl_Operational_Api_AirVehicleState_UXAS_Id_(this) ((this)->AirVehicleState_UXAS_Id)

B hamr_Drivers_UARTDriver_Impl_Operational_Api__eq(hamr_Drivers_UARTDriver_Impl_Operational_Api this, hamr_Drivers_UARTDriver_Impl_Operational_Api other);
inline B hamr_Drivers_UARTDriver_Impl_Operational_Api__ne(hamr_Drivers_UARTDriver_Impl_Operational_Api this, hamr_Drivers_UARTDriver_Impl_Operational_Api other) {
  return !hamr_Drivers_UARTDriver_Impl_Operational_Api__eq(this, other);
};
void hamr_Drivers_UARTDriver_Impl_Operational_Api_string_(STACK_FRAME String result, hamr_Drivers_UARTDriver_Impl_Operational_Api this);
void hamr_Drivers_UARTDriver_Impl_Operational_Api_cprint(hamr_Drivers_UARTDriver_Impl_Operational_Api this, B isOut);

inline B hamr_Drivers_UARTDriver_Impl_Operational_Api__is(STACK_FRAME void* this) {
  return ((hamr_Drivers_UARTDriver_Impl_Operational_Api) this)->type == Thamr_Drivers_UARTDriver_Impl_Operational_Api;
}

inline hamr_Drivers_UARTDriver_Impl_Operational_Api hamr_Drivers_UARTDriver_Impl_Operational_Api__as(STACK_FRAME void *this) {
  if (hamr_Drivers_UARTDriver_Impl_Operational_Api__is(CALLER this)) return (hamr_Drivers_UARTDriver_Impl_Operational_Api) this;
  sfAbortImpl(CALLER "Invalid cast to hamr.Drivers.UARTDriver_Impl_Operational_Api.");
  abort();
}

void hamr_Drivers_UARTDriver_Impl_Operational_Api_apply(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Operational_Api this, Z id, Z recv_data_Id, Z MissionCommand_Id, Z send_data_Id, Z AirVehicleState_WPM_Id, Z AirVehicleState_UXAS_Id);

void hamr_Drivers_UARTDriver_Impl_Operational_Api_get_recv_data_(STACK_FRAME Option_30119F result, hamr_Drivers_UARTDriver_Impl_Operational_Api this);

void hamr_Drivers_UARTDriver_Impl_Operational_Api_get_MissionCommand_(STACK_FRAME Option_30119F result, hamr_Drivers_UARTDriver_Impl_Operational_Api this);

#ifdef __cplusplus
}
#endif

#endif