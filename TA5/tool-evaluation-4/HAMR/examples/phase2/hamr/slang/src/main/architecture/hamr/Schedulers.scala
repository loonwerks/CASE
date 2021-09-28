// #Sireum
package hamr

import org.sireum._
import art.Art
import art.scheduling.legacy.Legacy
import art.scheduling.roundrobin.RoundRobin
import art.scheduling.static.Schedule.{DSchedule, DScheduleSpec, Slot}
import art.scheduling.static.StaticScheduler

// This file was auto-generated.  Do not edit

@datatype class ProcessorTimingProperties(val clockPeriod: Option[Z],
                                          val framePeriod: Option[Z],
                                          val maxDomain: Option[Z],
                                          val slotTime: Option[Z])

@datatype class ThreadTimingProperties(val domain: Option[Z],
                                       val computeExecutionTime: Option[(Z, Z)])

object Schedulers {

  val UAV_Impl_Instance_MCMP_PROC_HW_timingProperties: ProcessorTimingProperties = ProcessorTimingProperties(
    clockPeriod = Some(2),
    framePeriod = Some(1000),
    maxDomain = Some(15),
    slotTime = None())

  val UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((6, 6)),
    domain = Some(9))

  val UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((2, 2)),
    domain = Some(2))

  val UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((2, 2)),
    domain = Some(4))

  val UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((2, 2)),
    domain = Some(6))

  val UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((2, 2)),
    domain = Some(8))

  val UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((2, 2)),
    domain = Some(3))

  val UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((2, 2)),
    domain = Some(5))

  val UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((2, 2)),
    domain = Some(10))

  val UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((2, 2)),
    domain = Some(7))

  // roundRobinSchedule represents the component dispatch order
  val roundRobinSchedule: ISZ[art.Bridge] = Arch.ad.components

  val framePeriod: Z = 1000
  val numComponents: Z = Arch.ad.components.size
  val maxExecutionTime: Z = numComponents / framePeriod

  // staticSchedule represents the component dispatch order
  val staticSchedule: DScheduleSpec = DScheduleSpec(0, 0, DSchedule(ISZ(
    Slot(Arch.UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver.id, maxExecutionTime),
    Slot(Arch.UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.id, maxExecutionTime),
    Slot(Arch.UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.id, maxExecutionTime),
    Slot(Arch.UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS.id, maxExecutionTime),
    Slot(Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService.id, maxExecutionTime),
    Slot(Arch.UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.id, maxExecutionTime),
    Slot(Arch.UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.id, maxExecutionTime),
    Slot(Arch.UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.id, maxExecutionTime),
    Slot(Arch.UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.id, maxExecutionTime)
  )))


  def getRoundRobinScheduler(schedule: Option[ISZ[art.Bridge]]): RoundRobin = {
    if(roundRobinSchedule.isEmpty) {} // line needed for transpiler; do not remove
    schedule match {
      case Some(s) => return RoundRobin(s)
      case _ => return RoundRobin(ScheduleProviderI.getRoundRobinOrder())
    }
  }

  def getStaticScheduler(schedule: Option[DScheduleSpec]): StaticScheduler = {
    if(staticSchedule.schedule.slots.isEmpty) {} // line needed for transpiler; do not remove
    schedule match {
      case Some(s) => return StaticScheduler(Arch.ad.components, s)
      case _ => return StaticScheduler(Arch.ad.components, ScheduleProviderI.getStaticSchedule())
    }
  }

  def getLegacyScheduler(): Legacy = {
    return Legacy(Arch.ad.components)
  }
}

@ext(name = "ScheduleProvider") object ScheduleProviderI {
  def getRoundRobinOrder(): ISZ[art.Bridge] = $
  def getStaticSchedule(): DScheduleSpec = $
}