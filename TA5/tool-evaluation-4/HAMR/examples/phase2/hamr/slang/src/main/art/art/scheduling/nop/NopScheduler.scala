// #Sireum

package art.scheduling.nop

import org.sireum._
import art.scheduling.Scheduler

@record class NopScheduler extends Scheduler {

  override def initialize(): Unit = { }

  override def initializationPhase(): Unit = { }

  override def computePhase(): Unit = { }

  override def finalizePhase(): Unit = { }
}
