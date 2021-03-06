#ifndef SIREUM_H_hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase
#define SIREUM_H_hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_initialise(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api api);

Unit hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_timeTriggered(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api api);

Unit hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_finalise(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api api);

#ifdef __cplusplus
}
#endif

#endif