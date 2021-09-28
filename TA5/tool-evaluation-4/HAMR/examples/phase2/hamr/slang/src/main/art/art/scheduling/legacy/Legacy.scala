// #Sireum

package art.scheduling.legacy

import org.sireum._
import art.Art
import art.scheduling.Scheduler

@record class Legacy(bridges: ISZ[art.Bridge]) extends Scheduler {

  override def initialize(): Unit = { }

  override def initializationPhase(): Unit = {
    for (bridge <- bridges) {
      bridge.entryPoints.initialise()
      Art.logInfo(bridge.id, s"Initialized bridge: ${bridge.name}")
    }
  }

  override def computePhase(): Unit = {
    LegacyInterface.computePhase(bridges)
  }

  override def finalizePhase(): Unit = {
    for (bridge <- bridges) {
      bridge.entryPoints.finalise()
      Art.logInfo(bridge.id, s"Finalized bridge: ${bridge.name}")
    }
  }
}

@ext object LegacyInterface {
  def computePhase(bridges: ISZ[art.Bridge]): Unit = $
}
