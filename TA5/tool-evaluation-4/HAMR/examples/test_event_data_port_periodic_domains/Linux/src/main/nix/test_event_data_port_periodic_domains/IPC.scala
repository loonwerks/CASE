// #Sireum

package test_event_data_port_periodic_domains

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object IPCPorts {
  val emitter_t_impl_src_process_src_thread_App: Art.PortId = 2
  val consumer_t_impl_dst_process_dst_thread_App: Art.PortId = 3
  val Main: Art.PortId = 4

  def emptyReceiveOut: MBox2[Art.PortId, DataContent] = {
    return MBox2(-1, art.Empty())
  }

  def emptyReceiveAsyncOut: MBox2[Art.PortId, Option[DataContent]] = {
    return MBox2(-1, None())
  }
}
