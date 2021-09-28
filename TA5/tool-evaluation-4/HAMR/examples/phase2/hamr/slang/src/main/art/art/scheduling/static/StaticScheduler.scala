// #Sireum
package art.scheduling.static

import org.sireum._
import art.scheduling.Scheduler
import art.scheduling.static.Schedule.DScheduleSpec


@record class StaticScheduler(bridges: ISZ[art.Bridge],
                              staticSchedule: DScheduleSpec) extends Scheduler {

  override def initialize(): Unit = {
    Schedule.dScheduleSpec = staticSchedule
  }

  override def initializationPhase(): Unit = {
    for (bridge <- bridges) {
      bridge.entryPoints.initialise()
      art.Art.logInfo(bridge.id, s"Initialized bridge: ${bridge.name}")
    }
  }

  override def computePhase(): Unit = {
    Explorer.runSystem()
  }

  override def finalizePhase(): Unit = {
    for (bridge <- bridges) {
      bridge.entryPoints.finalise()
      art.Art.logInfo(bridge.id, s"Finalized bridge: ${bridge.name}")
    }
  }
}
