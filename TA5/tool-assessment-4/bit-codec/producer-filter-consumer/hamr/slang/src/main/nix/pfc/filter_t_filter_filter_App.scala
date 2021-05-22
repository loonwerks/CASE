// #Sireum

package pfc

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object filter_t_filter_filter_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.PFC_Sys_Impl_Instance_filter_filter.entryPoints
  val appPortId: Art.PortId = IPCPorts.filter_t_filter_filter_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val from_producerPortId: Art.PortId = Arch.PFC_Sys_Impl_Instance_filter_filter.from_producer.id
  val from_producerPortIdOpt: Option[Art.PortId] = Some(from_producerPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, from_producerPortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {

    {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(from_producerPortIdOpt, out)
      out.value2 match {
        case Some(v: Base_Types.Bits_Payload) => ArtNix.updateData(from_producerPortId, v)
        case Some(v) => halt(s"Unexpected payload on port from_producer.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
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

    println("filter_t_filter_filter_App starting ...")

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

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      pfc.PFC.filter_t_filter_filter_Bridge.c_initialization_api.get.logInfo("")
      pfc.PFC.filter_t_filter_filter_Bridge.c_initialization_api.get.logDebug("")
      pfc.PFC.filter_t_filter_filter_Bridge.c_initialization_api.get.logError("")
      pfc.PFC.filter_t_filter_filter_Bridge.c_operational_api.get.logInfo("")
      pfc.PFC.filter_t_filter_filter_Bridge.c_operational_api.get.logDebug("")
      pfc.PFC.filter_t_filter_filter_Bridge.c_operational_api.get.logError("")
      val apiUsage_from_producer: Option[Base_Types.Bits] = pfc.PFC.filter_t_filter_filter_Bridge.c_operational_api.get.get_from_producer()
      pfc.PFC.filter_t_filter_filter_Bridge.c_initialization_api.get.put_to_consumer(Base_Types.Bits_example())
      pfc.PFC.filter_t_filter_filter_Bridge.c_operational_api.get.put_to_consumer(Base_Types.Bits_example())
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