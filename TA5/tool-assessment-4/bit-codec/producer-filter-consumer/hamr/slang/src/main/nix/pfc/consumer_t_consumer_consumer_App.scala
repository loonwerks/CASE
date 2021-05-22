// #Sireum

package pfc

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object consumer_t_consumer_consumer_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.PFC_Sys_Impl_Instance_consumer_consumer.entryPoints
  val appPortId: Art.PortId = IPCPorts.consumer_t_consumer_consumer_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val from_filterPortId: Art.PortId = Arch.PFC_Sys_Impl_Instance_consumer_consumer.from_filter.id
  val from_filterPortIdOpt: Option[Art.PortId] = Some(from_filterPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, from_filterPortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {

    {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(from_filterPortIdOpt, out)
      out.value2 match {
        case Some(v: Base_Types.Bits_Payload) => ArtNix.updateData(from_filterPortId, v)
        case Some(v) => halt(s"Unexpected payload on port from_filter.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
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

    println("consumer_t_consumer_consumer_App starting ...")

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

      pfc.PFC.consumer_t_consumer_consumer_Bridge.c_initialization_api.get.logInfo("")
      pfc.PFC.consumer_t_consumer_consumer_Bridge.c_initialization_api.get.logDebug("")
      pfc.PFC.consumer_t_consumer_consumer_Bridge.c_initialization_api.get.logError("")
      pfc.PFC.consumer_t_consumer_consumer_Bridge.c_operational_api.get.logInfo("")
      pfc.PFC.consumer_t_consumer_consumer_Bridge.c_operational_api.get.logDebug("")
      pfc.PFC.consumer_t_consumer_consumer_Bridge.c_operational_api.get.logError("")
      val apiUsage_from_filter: Option[Base_Types.Bits] = pfc.PFC.consumer_t_consumer_consumer_Bridge.c_operational_api.get.get_from_filter()
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