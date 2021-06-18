#ifndef SIREUM_TYPE_H_hamr_Drivers_UARTDriver_Impl_Initialization_Api
#define SIREUM_TYPE_H_hamr_Drivers_UARTDriver_Impl_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.Drivers.UARTDriver_Impl_Initialization_Api

typedef struct hamr_Drivers_UARTDriver_Impl_Initialization_Api *hamr_Drivers_UARTDriver_Impl_Initialization_Api;
struct hamr_Drivers_UARTDriver_Impl_Initialization_Api {
  TYPE type;
  Z id;
  Z recv_data_Id;
  Z MissionCommand_Id;
  Z send_data_Id;
  Z AirVehicleState_WPM_Id;
  Z AirVehicleState_UXAS_Id;
};

#define DeclNewhamr_Drivers_UARTDriver_Impl_Initialization_Api(x) struct hamr_Drivers_UARTDriver_Impl_Initialization_Api x = { .type = Thamr_Drivers_UARTDriver_Impl_Initialization_Api }

#ifdef __cplusplus
}
#endif

#endif