// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._
import HAMR.SW.{FlightController_Impl_SW_FlightController_FlightController => component}

// This file was auto-generated.  Do not edit

@datatype class FlightController_Impl_SW_FlightController_FlightController_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  FlightPlan: Port[Base_Types.Bits],
  Alert: Port[art.Empty]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(FlightPlan,
              Alert),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(FlightPlan,
                   Alert),

    eventOuts = ISZ()
  )

  val initialization_api : FlightController_Impl_Initialization_Api = {
    val api = FlightController_Impl_Initialization_Api(
      id,
      FlightPlan.id,
      Alert.id
    )
    FlightController_Impl_SW_FlightController_FlightController_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : FlightController_Impl_Operational_Api = {
    val api = FlightController_Impl_Operational_Api(
      id,
      FlightPlan.id,
      Alert.id
    )
    FlightController_Impl_SW_FlightController_FlightController_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    FlightController_Impl_SW_FlightController_FlightController_Bridge.EntryPoints(
      id,

      FlightPlan.id,
      Alert.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object FlightController_Impl_SW_FlightController_FlightController_Bridge {

  var c_initialization_api: Option[FlightController_Impl_Initialization_Api] = None()
  var c_operational_api: Option[FlightController_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    FlightController_Impl_SW_FlightController_FlightController_BridgeId : Art.BridgeId,

    FlightPlan_Id : Art.PortId,
    Alert_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: FlightController_Impl_Initialization_Api,
    operational_api: FlightController_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(FlightPlan_Id,
                                              Alert_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: FlightController_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: FlightController_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: FlightController_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: FlightController_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: FlightController_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: FlightController_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: FlightController_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}