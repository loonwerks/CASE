// #Sireum

package base

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object IPCPorts {
  val producer_t_i_producer_producer_App: Art.PortId = 2
  val consumer_t_i_consumer_consumer_App: Art.PortId = 3
  val Main: Art.PortId = 4

  def emptyReceiveOut: MBox2[Art.PortId, DataContent] = {
    return MBox2(-1, art.Empty())
  }

  def emptyReceiveAsyncOut: MBox2[Art.PortId, Option[DataContent]] = {
    return MBox2(-1, None())
  }
}
