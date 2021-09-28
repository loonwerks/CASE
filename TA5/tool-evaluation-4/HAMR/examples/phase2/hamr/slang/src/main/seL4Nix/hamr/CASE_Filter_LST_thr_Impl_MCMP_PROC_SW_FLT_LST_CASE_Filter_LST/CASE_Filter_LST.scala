// #Sireum

// This file was auto-generated.  Do not edit

package hamr.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_seL4Nix

object CASE_Filter_LST extends App {

  val CASE_Filter_LSTBridge : hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge = {
    val filter_in = Port[Base_Types.Bits] (id = 0, name = "UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_filter_in", mode = EventIn)
    val filter_out = Port[Base_Types.Bits] (id = 1, name = "UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_filter_out", mode = EventOut)

    hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge(
      id = 0,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      filter_in = filter_in,
      filter_out = filter_out
    )
  }

  val entryPoints: Bridge.EntryPoints = CASE_Filter_LSTBridge.entryPoints
  val noData: Option[DataContent] = None()

  // filter_in: In EventDataPort Base_Types.Bits
  val filter_in_id: Art.PortId = CASE_Filter_LSTBridge.filter_in.id
  var filter_in_port: Option[DataContent] = noData

  // filter_out: Out EventDataPort Base_Types.Bits
  val filter_out_id: Art.PortId = CASE_Filter_LSTBridge.filter_out.id
  var filter_out_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == filter_in_id) {
      return filter_in_port
    } else {
      halt(s"Unexpected: CASE_Filter_LST.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    filter_in_port = CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_seL4Nix.filter_in_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == filter_out_id) {
      filter_out_port = Some(data)
    } else {
      halt(s"Unexpected: CASE_Filter_LST.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(filter_out_port.nonEmpty) {
      CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_seL4Nix.filter_out_Send(filter_out_port.get)
      filter_out_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    // nothing to do - CAmkES is responsible for initialization
  }

  def initialiseEntryPoint(): Unit = { entryPoints.initialise() }

  def computeEntryPoint(): Unit = { entryPoints.compute() }

  def finaliseEntryPoint(): Unit = { entryPoints.finalise() }

  def main(args: ISZ[String]): Z = {

    // need to touch the following for transpiler
    initialiseArchitecture()
    initialiseEntryPoint()
    computeEntryPoint()
    finaliseEntryPoint()

    touch()

    return 0
  }

  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(0, Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(0, None())

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_initialization_api.get.logInfo("")
      hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_initialization_api.get.logDebug("")
      hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_initialization_api.get.logError("")
      hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_operational_api.get.logInfo("")
      hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_operational_api.get.logDebug("")
      hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_operational_api.get.logError("")
      val apiUsage_filter_in: Option[Base_Types.Bits] = hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_operational_api.get.get_filter_in()
      hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_initialization_api.get.put_filter_out(Base_Types.Bits_example())
      hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_operational_api.get.put_filter_out(Base_Types.Bits_example())
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(CASE_Filter_LSTBridge.name)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(CASE_Filter_LSTBridge.name)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(CASE_Filter_LSTBridge.name)
    print(": ")
    println(msg)
  }

  def run(): Unit = {}

}
