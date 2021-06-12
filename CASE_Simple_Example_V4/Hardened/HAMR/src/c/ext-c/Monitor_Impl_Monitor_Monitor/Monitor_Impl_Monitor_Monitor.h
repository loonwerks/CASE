#ifndef MONITOR_IMPL_MONITOR_MONITOR_H
#define MONITOR_IMPL_MONITOR_MONITOR_H

#include <all.h>

Unit HAMR_SW_Monitor_Impl_Monitor_Monitor_initialise_(STACK_FRAME_ONLY);

Unit HAMR_SW_Monitor_Impl_Monitor_Monitor_finalise_(STACK_FRAME_ONLY);

Unit HAMR_SW_Monitor_Impl_Monitor_Monitor_handle_FlightPlan_in_(
  STACK_FRAME
  HAMR_SW_Mission value);

#endif
