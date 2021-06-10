// #Sireum

package hamr.Drivers

import org.sireum._
import art._
import hamr._
import hamr.Drivers.{UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver => component}

// This file was auto-generated.  Do not edit

@datatype class UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  recv_data: Port[Base_Types.Bits],
  MissionCommand: Port[Base_Types.Bits],
  send_data: Port[Base_Types.Bits],
  AirVehicleState_WPM: Port[Base_Types.Bits],
  AirVehicleState_UXAS: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(recv_data,
              MissionCommand,
              send_data,
              AirVehicleState_WPM,
              AirVehicleState_UXAS),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(recv_data,
                   MissionCommand),

    eventOuts = ISZ(send_data,
                    AirVehicleState_WPM,
                    AirVehicleState_UXAS)
  )

  val initialization_api : UARTDriver_Impl_Initialization_Api = {
    val api = UARTDriver_Impl_Initialization_Api(
      id,
      recv_data.id,
      MissionCommand.id,
      send_data.id,
      AirVehicleState_WPM.id,
      AirVehicleState_UXAS.id
    )
    UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : UARTDriver_Impl_Operational_Api = {
    val api = UARTDriver_Impl_Operational_Api(
      id,
      recv_data.id,
      MissionCommand.id,
      send_data.id,
      AirVehicleState_WPM.id,
      AirVehicleState_UXAS.id
    )
    UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.EntryPoints(
      id,

      recv_data.id,
      MissionCommand.id,
      send_data.id,
      AirVehicleState_WPM.id,
      AirVehicleState_UXAS.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge {

  var c_initialization_api: Option[UARTDriver_Impl_Initialization_Api] = None()
  var c_operational_api: Option[UARTDriver_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_BridgeId : Art.BridgeId,

    recv_data_Id : Art.PortId,
    MissionCommand_Id : Art.PortId,
    send_data_Id : Art.PortId,
    AirVehicleState_WPM_Id : Art.PortId,
    AirVehicleState_UXAS_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: UARTDriver_Impl_Initialization_Api,
    operational_api: UARTDriver_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(recv_data_Id,
                                              MissionCommand_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(send_data_Id,
                                               AirVehicleState_WPM_Id,
                                               AirVehicleState_UXAS_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: UARTDriver_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: UARTDriver_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: UARTDriver_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: UARTDriver_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: UARTDriver_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: UARTDriver_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: UARTDriver_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}