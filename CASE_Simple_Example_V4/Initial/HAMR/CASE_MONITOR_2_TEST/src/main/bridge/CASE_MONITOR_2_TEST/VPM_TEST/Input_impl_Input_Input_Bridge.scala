// #Sireum

package CASE_MONITOR_2_TEST.VPM_TEST

import org.sireum._
import art._
import CASE_MONITOR_2_TEST._
import CASE_MONITOR_2_TEST.VPM_TEST.{Input_impl_Input_Input => component}

// This file was auto-generated.  Do not edit

@datatype class Input_impl_Input_Input_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  Observed: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(Observed),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(),

    eventOuts = ISZ(Observed)
  )

  val initialization_api : Input_impl_Initialization_Api = {
    val api = Input_impl_Initialization_Api(
      id,
      Observed.id
    )
    Input_impl_Input_Input_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : Input_impl_Operational_Api = {
    val api = Input_impl_Operational_Api(
      id,
      Observed.id
    )
    Input_impl_Input_Input_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    Input_impl_Input_Input_Bridge.EntryPoints(
      id,

      Observed.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object Input_impl_Input_Input_Bridge {

  var c_initialization_api: Option[Input_impl_Initialization_Api] = None()
  var c_operational_api: Option[Input_impl_Operational_Api] = None()

  @datatype class EntryPoints(
    Input_impl_Input_Input_BridgeId : Art.BridgeId,

    Observed_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: Input_impl_Initialization_Api,
    operational_api: Input_impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(Observed_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: Input_impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: Input_impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: Input_impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: Input_impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: Input_impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: Input_impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: Input_impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}