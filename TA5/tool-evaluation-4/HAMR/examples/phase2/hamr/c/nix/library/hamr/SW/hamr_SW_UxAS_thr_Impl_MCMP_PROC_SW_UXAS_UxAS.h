#ifndef SIREUM_H_hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS
#define SIREUM_H_hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_initialise(STACK_FRAME hamr_SW_UxAS_thr_Impl_Initialization_Api api);

Unit hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_timeTriggered(STACK_FRAME hamr_SW_UxAS_thr_Impl_Operational_Api api);

Unit hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_finalise(STACK_FRAME hamr_SW_UxAS_thr_Impl_Operational_Api api);

#ifdef __cplusplus
}
#endif

#endif