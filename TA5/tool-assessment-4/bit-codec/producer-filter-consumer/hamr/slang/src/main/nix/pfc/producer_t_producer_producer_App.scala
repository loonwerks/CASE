// #Sireum

package pfc

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object producer_t_producer_producer_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.PFC_Sys_Impl_Instance_producer_producer.entryPoints
  val appPortId: Art.PortId = IPCPorts.producer_t_producer_producer_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {

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

    println("producer_t_producer_producer_App starting ...")

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

      pfc.PFC.producer_t_producer_producer_Bridge.c_initialization_api.get.logInfo("")
      pfc.PFC.producer_t_producer_producer_Bridge.c_initialization_api.get.logDebug("")
      pfc.PFC.producer_t_producer_producer_Bridge.c_initialization_api.get.logError("")
      pfc.PFC.producer_t_producer_producer_Bridge.c_operational_api.get.logInfo("")
      pfc.PFC.producer_t_producer_producer_Bridge.c_operational_api.get.logDebug("")
      pfc.PFC.producer_t_producer_producer_Bridge.c_operational_api.get.logError("")
      pfc.PFC.producer_t_producer_producer_Bridge.c_initialization_api.get.put_to_filter(Base_Types.Bits_example())
      pfc.PFC.producer_t_producer_producer_Bridge.c_operational_api.get.put_to_filter(Base_Types.Bits_example())
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