// #Sireum

package pfc

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object IPCPorts {
  val producer_t_producer_producer_App: Art.PortId = 4
  val filter_t_filter_filter_App: Art.PortId = 5
  val consumer_t_consumer_consumer_App: Art.PortId = 6
  val Main: Art.PortId = 7

  def emptyReceiveOut: MBox2[Art.PortId, DataContent] = {
    return MBox2(-1, art.Empty())
  }

  def emptyReceiveAsyncOut: MBox2[Art.PortId, Option[DataContent]] = {
    return MBox2(-1, None())
  }
}
