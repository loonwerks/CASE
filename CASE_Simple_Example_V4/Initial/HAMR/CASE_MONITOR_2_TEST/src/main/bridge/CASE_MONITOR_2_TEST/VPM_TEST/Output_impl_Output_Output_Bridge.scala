// #Sireum

package CASE_MONITOR_2_TEST.VPM_TEST

import org.sireum._
import art._
import CASE_MONITOR_2_TEST._
import CASE_MONITOR_2_TEST.VPM_TEST.{Output_impl_Output_Output => component}

// This file was auto-generated.  Do not edit

@datatype class Output_impl_Output_Output_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  Suspect_Traffic_Out: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(Suspect_Traffic_Out),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(Suspect_Traffic_Out),

    eventOuts = ISZ()
  )

  val initialization_api : Output_impl_Initialization_Api = {
    val api = Output_impl_Initialization_Api(
      id,
      Suspect_Traffic_Out.id
    )
    Output_impl_Output_Output_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : Output_impl_Operational_Api = {
    val api = Output_impl_Operational_Api(
      id,
      Suspect_Traffic_Out.id
    )
    Output_impl_Output_Output_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    Output_impl_Output_Output_Bridge.EntryPoints(
      id,

      Suspect_Traffic_Out.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object Output_impl_Output_Output_Bridge {

  var c_initialization_api: Option[Output_impl_Initialization_Api] = None()
  var c_operational_api: Option[Output_impl_Operational_Api] = None()

  @datatype class EntryPoints(
    Output_impl_Output_Output_BridgeId : Art.BridgeId,

    Suspect_Traffic_Out_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: Output_impl_Initialization_Api,
    operational_api: Output_impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(Suspect_Traffic_Out_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: Output_impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: Output_impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: Output_impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: Output_impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: Output_impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: Output_impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: Output_impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}