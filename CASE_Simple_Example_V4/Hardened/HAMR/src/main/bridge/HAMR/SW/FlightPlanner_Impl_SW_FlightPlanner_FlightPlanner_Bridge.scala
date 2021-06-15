// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._
import HAMR.SW.{FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner => component}

// This file was auto-generated.  Do not edit

@datatype class FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  MissionCommand: Port[Base_Types.Bits],
  FlightPlan: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(MissionCommand,
              FlightPlan),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(MissionCommand),

    eventOuts = ISZ(FlightPlan)
  )

  val initialization_api : FlightPlanner_Impl_Initialization_Api = {
    val api = FlightPlanner_Impl_Initialization_Api(
      id,
      MissionCommand.id,
      FlightPlan.id
    )
    FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : FlightPlanner_Impl_Operational_Api = {
    val api = FlightPlanner_Impl_Operational_Api(
      id,
      MissionCommand.id,
      FlightPlan.id
    )
    FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.EntryPoints(
      id,

      MissionCommand.id,
      FlightPlan.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge {

  var c_initialization_api: Option[FlightPlanner_Impl_Initialization_Api] = None()
  var c_operational_api: Option[FlightPlanner_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_BridgeId : Art.BridgeId,

    MissionCommand_Id : Art.PortId,
    FlightPlan_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: FlightPlanner_Impl_Initialization_Api,
    operational_api: FlightPlanner_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(MissionCommand_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(FlightPlan_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: FlightPlanner_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: FlightPlanner_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: FlightPlanner_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: FlightPlanner_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: FlightPlanner_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: FlightPlanner_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: FlightPlanner_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}