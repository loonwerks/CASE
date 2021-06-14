#ifndef FLIGHTCONTROLLER_IMPL_SW_FLIGHTCONTROLLER_H
#define FLIGHTCONTROLLER_IMPL_SW_FLIGHTCONTROLLER_H

#include <all.h>

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_initialise_(STACK_FRAME_ONLY);

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_finalise_(STACK_FRAME_ONLY);

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_handle_FlightPlan_(
  STACK_FRAME
  IS_C4F575 value);

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_handle_Alert_(STACK_FRAME_ONLY);

#endif
