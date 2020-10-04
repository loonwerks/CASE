// #Sireum

package test_event_data_port_periodic_domains

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object consumer_t_impl_dst_process_dst_thread_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.top_impl_Instance_dst_process_dst_thread.entryPoints
  val appPortId: Art.PortId = IPCPorts.consumer_t_impl_dst_process_dst_thread_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val read_portPortId: Art.PortId = Arch.top_impl_Instance_dst_process_dst_thread.read_port.id
  val read_portPortIdOpt: Option[Art.PortId] = Some(read_portPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, read_portPortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {

    {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(read_portPortIdOpt, out)
      out.value2 match {
        case Some(v: Base_Types.Integer_8_Payload) => ArtNix.updateData(read_portPortId, v)
        case Some(v) => halt(s"Unexpected payload on port read_port.  Expecting something of type Base_Types.Integer_8_Payload but received ${v}")
        case None() => // do nothing
      }
    }
    entryPoints.compute()
    Process.sleep(1000)
  }

  def finalise(): Unit = {
    entryPoints.finalise()
  }

  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    initialiseArchitecture(seed)

    Platform.receive(appPortIdOpt, IPCPorts.emptyReceiveOut) // pause after setting up component

    initialise()

    Platform.receive(appPortIdOpt, IPCPorts.emptyReceiveOut) // pause after component init

    println("consumer_t_impl_dst_process_dst_thread_App starting ...")

    ArtNix.timeDispatch()

    var terminated = F
    while (!terminated) {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(appPortIdOpt, out)
      if (out.value2.isEmpty) {
        compute()
      } else {
        terminated = T
      }
    }
    exit()

    touch()

    return 0
  }

  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Integer_8_Payload(Base_Types.Integer_8_empty()))
      printDataContent(art.Empty())

      test_event_data_port_periodic_domains.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_initialization_api.get.logInfo("")
      test_event_data_port_periodic_domains.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_initialization_api.get.logDebug("")
      test_event_data_port_periodic_domains.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_initialization_api.get.logError("")
      test_event_data_port_periodic_domains.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_operational_api.get.logInfo("")
      test_event_data_port_periodic_domains.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_operational_api.get.logDebug("")
      test_event_data_port_periodic_domains.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_operational_api.get.logError("")
    }
  }

  def exit(): Unit = {
    finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}