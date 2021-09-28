package hamr

import org.sireum._
import art.scheduling.static.Schedule.DScheduleSpec

// This file was auto-generated.  Do not edit

object ScheduleProvider {

  def getRoundRobinOrder(): ISZ[art.Bridge] = {
    return Schedulers.roundRobinSchedule
  }

  def getStaticSchedule(): DScheduleSpec = {
    return Schedulers.staticSchedule
  }
}
