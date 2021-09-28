#include <all.h>

// This file will not be overwritten so is safe to edit

// Transpiled signature of the Slang variable hamr.Schedulers.staticSchedule
// in architecture/hamr/Schedulers.scala.  This weak function declaration allows
// hamr_ScheduleProviderI_getStaticSchedule to detect whether the Slang variable was deleted
__attribute__((weak)) art_scheduling_static_Schedule_DScheduleSpec hamr_Schedulers_staticSchedule(STACK_FRAME_ONLY);

// helper method
void fillInSlot(IS_5AA467 slotSequence, int index, Z bridgeId, int length);

/*!
 * Example C implementation of the Slang extension method hamr.ScheduleProviderI.getStaticSchedule()
 * defined in architecture/hamr/Schedulers.scala
 *
 * @param result an empty schedule. Add slots in the order you want components to be dispatched.
 */
void hamr_ScheduleProviderI_getStaticSchedule(STACK_FRAME art_scheduling_static_Schedule_DScheduleSpec result){
  DeclNewStackFrame(caller, "static_scheduler.c", "", "hamr_ScheduleProviderI_getStaticSchedule", 0);

  if(hamr_Schedulers_staticSchedule) {
    printf("Using the static schedule provided in architecture/hamr/Schedulers.scala. Edit method \n");
    printf("  hamr_ScheduleProviderI_getStaticSchedule located in static_scheduler.c\n");
    printf("to supply your own\n");

    art_scheduling_static_Schedule_DScheduleSpec schedule = hamr_Schedulers_staticSchedule(SF_LAST);
    result->hyperPeriod = schedule->hyperPeriod;
    result->maxDomain = schedule->maxDomain;
    memcpy(&result->schedule, &schedule->schedule, sizeof(struct art_scheduling_static_Schedule_DSchedule));

  } else {
    printf("Transpiled Slang variable hamr.Schedulers.staticSchedule not found.  Using an example schedule from method");
    printf("  hamr_ScheduleProviderI_getStaticSchedule located in static_scheduler.c\n");

    // IS_5AA467=IS[Z, art.scheduling.static.Schedule.Slot], i.e. an immutable sequence of art.scheduling.static.Schedule.Slot
    DeclNewIS_5AA467(slotSequence);

    Z length = 1000 / 9;

    int i = 0;
    fillInSlot(&slotSequence, i++, hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(SF_LAST)->id, length);
    fillInSlot(&slotSequence, i++, hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF_LAST)->id, length);
    fillInSlot(&slotSequence, i++, hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF_LAST)->id, length);
    fillInSlot(&slotSequence, i++, hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST)->id, length);
    fillInSlot(&slotSequence, i++, hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF_LAST)->id, length);
    fillInSlot(&slotSequence, i++, hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST)->id, length);
    fillInSlot(&slotSequence, i++, hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(SF_LAST)->id, length);
    fillInSlot(&slotSequence, i++, hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF_LAST)->id, length);
    fillInSlot(&slotSequence, i++, hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST)->id, length);
    slotSequence.size = i;

    DeclNewart_scheduling_static_Schedule_DSchedule(dschedule);
    art_scheduling_static_Schedule_DSchedule_apply(SF &dschedule, &slotSequence);

    Z maxDomain = 100;
    Z hyperPeriod = 1000;

    art_scheduling_static_Schedule_DScheduleSpec_apply(SF result, maxDomain, hyperPeriod, &dschedule);
  }
}

void fillInSlot(IS_5AA467 slotSequence, int index, Z bridgeId, int length) {
  slotSequence->value[index].bridgeId = bridgeId;
  slotSequence->value[index].length = length;
}
