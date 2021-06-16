#ifndef SIREUM_H_HAMR_SW_Monitor_Impl_SW_Monitor_Monitor
#define SIREUM_H_HAMR_SW_Monitor_Impl_SW_Monitor_Monitor

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_initialise(STACK_FRAME HAMR_SW_Monitor_Impl_Initialization_Api api);

Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_timeTriggered(STACK_FRAME HAMR_SW_Monitor_Impl_Operational_Api api);

Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_finalise(STACK_FRAME HAMR_SW_Monitor_Impl_Operational_Api api);

#ifdef __cplusplus
}
#endif

#endif