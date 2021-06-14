// #Sireum

package CASE_MONITOR_TEST.VPM

import org.sireum._
import art._
import CASE_MONITOR_TEST._
import CASE_MONITOR_TEST.VPM.{CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor => component}

// This file was auto-generated.  Do not edit

@datatype class CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  Observed: Port[Base_Types.Bits],
  Suspect_Traffic_Out: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(Observed,
              Suspect_Traffic_Out),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(Observed),

    eventOuts = ISZ(Suspect_Traffic_Out)
  )

  val initialization_api : CASE_Monitor1_Impl_Initialization_Api = {
    val api = CASE_Monitor1_Impl_Initialization_Api(
      id,
      Observed.id,
      Suspect_Traffic_Out.id
    )
    CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : CASE_Monitor1_Impl_Operational_Api = {
    val api = CASE_Monitor1_Impl_Operational_Api(
      id,
      Observed.id,
      Suspect_Traffic_Out.id
    )
    CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.EntryPoints(
      id,

      Observed.id,
      Suspect_Traffic_Out.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge {

  var c_initialization_api: Option[CASE_Monitor1_Impl_Initialization_Api] = None()
  var c_operational_api: Option[CASE_Monitor1_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_BridgeId : Art.BridgeId,

    Observed_Id : Art.PortId,
    Suspect_Traffic_Out_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: CASE_Monitor1_Impl_Initialization_Api,
    operational_api: CASE_Monitor1_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(Observed_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(Suspect_Traffic_Out_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: CASE_Monitor1_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: CASE_Monitor1_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: CASE_Monitor1_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: CASE_Monitor1_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: CASE_Monitor1_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: CASE_Monitor1_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: CASE_Monitor1_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}