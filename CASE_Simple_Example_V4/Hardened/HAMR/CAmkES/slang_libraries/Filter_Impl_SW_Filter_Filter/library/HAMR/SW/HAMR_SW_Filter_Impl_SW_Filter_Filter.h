#ifndef SIREUM_H_HAMR_SW_Filter_Impl_SW_Filter_Filter
#define SIREUM_H_HAMR_SW_Filter_Impl_SW_Filter_Filter

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit HAMR_SW_Filter_Impl_SW_Filter_Filter_initialise(STACK_FRAME HAMR_SW_Filter_Impl_Initialization_Api api);

Unit HAMR_SW_Filter_Impl_SW_Filter_Filter_timeTriggered(STACK_FRAME HAMR_SW_Filter_Impl_Operational_Api api);

Unit HAMR_SW_Filter_Impl_SW_Filter_Filter_finalise(STACK_FRAME HAMR_SW_Filter_Impl_Operational_Api api);

#ifdef __cplusplus
}
#endif

#endif