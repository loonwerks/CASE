// #Sireum

package art.scheduling

import org.sireum._

// msig to allow schedulers to have mutable state
@msig trait Scheduler {

  def initialize(): Unit

  def initializationPhase(): Unit

  def computePhase(): Unit

  def finalizePhase(): Unit
}
