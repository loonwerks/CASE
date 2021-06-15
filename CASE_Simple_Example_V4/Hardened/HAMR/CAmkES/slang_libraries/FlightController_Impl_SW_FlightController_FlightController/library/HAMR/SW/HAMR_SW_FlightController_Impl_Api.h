#ifndef SIREUM_H_HAMR_SW_FlightController_Impl_Api
#define SIREUM_H_HAMR_SW_FlightController_Impl_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit HAMR_SW_FlightController_Impl_Initialization_Api_logInfo_(STACK_FRAME HAMR_SW_FlightController_Impl_Initialization_Api this, String msg);

Unit HAMR_SW_FlightController_Impl_Initialization_Api_logDebug_(STACK_FRAME HAMR_SW_FlightController_Impl_Initialization_Api this, String msg);

Unit HAMR_SW_FlightController_Impl_Initialization_Api_logError_(STACK_FRAME HAMR_SW_FlightController_Impl_Initialization_Api this, String msg);

Unit HAMR_SW_FlightController_Impl_Operational_Api_logInfo_(STACK_FRAME HAMR_SW_FlightController_Impl_Operational_Api this, String msg);

Unit HAMR_SW_FlightController_Impl_Operational_Api_logDebug_(STACK_FRAME HAMR_SW_FlightController_Impl_Operational_Api this, String msg);

Unit HAMR_SW_FlightController_Impl_Operational_Api_logError_(STACK_FRAME HAMR_SW_FlightController_Impl_Operational_Api this, String msg);

#ifdef __cplusplus
}
#endif

#endif