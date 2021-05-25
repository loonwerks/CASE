#ifndef MONITOR_IMPL_SW_MONITOR_MONITOR_H
#define MONITOR_IMPL_SW_MONITOR_MONITOR_H

#include <all.h>

Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_initialise_(STACK_FRAME_ONLY);

Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_finalise_(STACK_FRAME_ONLY);

Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_handle_FlightPlan_in_(
  STACK_FRAME
  IS_C4F575 value);

#endif
