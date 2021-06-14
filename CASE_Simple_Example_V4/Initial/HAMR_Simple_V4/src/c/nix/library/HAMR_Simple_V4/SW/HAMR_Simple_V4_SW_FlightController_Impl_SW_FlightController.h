#ifndef SIREUM_H_HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController
#define SIREUM_H_HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_initialise(STACK_FRAME HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api api);

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_handle_FlightPlan(STACK_FRAME HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api api, IS_C4F575 value);

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_handle_Alert(STACK_FRAME HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api api);

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_finalise(STACK_FRAME HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api api);

#ifdef __cplusplus
}
#endif

#endif