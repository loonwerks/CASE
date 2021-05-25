// #Sireum

package base

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object consumer_t_i_consumer_consumer_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.top_impl_Instance_consumer_consumer.entryPoints
  val appPortId: Art.PortId = IPCPorts.consumer_t_i_consumer_consumer_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val consumePortId: Art.PortId = Arch.top_impl_Instance_consumer_consumer.consume.id
  val consumePortIdOpt: Option[Art.PortId] = Some(consumePortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, consumePortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {

    {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(consumePortIdOpt, out)
      out.value2 match {
        case Some(v: art.Empty) => ArtNix.updateData(consumePortId, v)
        case Some(v) => halt(s"Unexpected payload on port consume.  Expecting something of type art.Empty but received ${v}")
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

    println("consumer_t_i_consumer_consumer_App starting ...")

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

      printDataContent(art.Empty())

      base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge.c_initialization_api.get.logInfo("")
      base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge.c_initialization_api.get.logDebug("")
      base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge.c_initialization_api.get.logError("")
      base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge.c_operational_api.get.logInfo("")
      base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge.c_operational_api.get.logDebug("")
      base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge.c_operational_api.get.logError("")
      val apiUsage_consume: Option[art.Empty] = base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge.c_operational_api.get.get_consume()
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