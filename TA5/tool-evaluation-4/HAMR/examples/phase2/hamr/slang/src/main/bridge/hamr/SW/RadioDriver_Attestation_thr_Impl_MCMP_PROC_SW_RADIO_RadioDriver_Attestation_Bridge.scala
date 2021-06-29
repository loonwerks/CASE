// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._
import hamr.SW.{RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation => component}

// This file was auto-generated.  Do not edit

@datatype class RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  recv_data: Port[Base_Types.Bits],
  send_data: Port[Base_Types.Bits],
  trusted_ids: Port[Base_Types.Bits],
  AutomationRequest: Port[Base_Types.Bits],
  OperatingRegion: Port[Base_Types.Bits],
  LineSearchTask: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(recv_data,
              send_data,
              trusted_ids,
              AutomationRequest,
              OperatingRegion,
              LineSearchTask),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(recv_data),

    eventOuts = ISZ(send_data,
                    trusted_ids,
                    AutomationRequest,
                    OperatingRegion,
                    LineSearchTask)
  )

  val initialization_api : RadioDriver_Attestation_thr_Impl_Initialization_Api = {
    val api = RadioDriver_Attestation_thr_Impl_Initialization_Api(
      id,
      recv_data.id,
      send_data.id,
      trusted_ids.id,
      AutomationRequest.id,
      OperatingRegion.id,
      LineSearchTask.id
    )
    RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : RadioDriver_Attestation_thr_Impl_Operational_Api = {
    val api = RadioDriver_Attestation_thr_Impl_Operational_Api(
      id,
      recv_data.id,
      send_data.id,
      trusted_ids.id,
      AutomationRequest.id,
      OperatingRegion.id,
      LineSearchTask.id
    )
    RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.EntryPoints(
      id,

      recv_data.id,
      send_data.id,
      trusted_ids.id,
      AutomationRequest.id,
      OperatingRegion.id,
      LineSearchTask.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge {

  var c_initialization_api: Option[RadioDriver_Attestation_thr_Impl_Initialization_Api] = None()
  var c_operational_api: Option[RadioDriver_Attestation_thr_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_BridgeId : Art.BridgeId,

    recv_data_Id : Art.PortId,
    send_data_Id : Art.PortId,
    trusted_ids_Id : Art.PortId,
    AutomationRequest_Id : Art.PortId,
    OperatingRegion_Id : Art.PortId,
    LineSearchTask_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: RadioDriver_Attestation_thr_Impl_Initialization_Api,
    operational_api: RadioDriver_Attestation_thr_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(recv_data_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(send_data_Id,
                                               trusted_ids_Id,
                                               AutomationRequest_Id,
                                               OperatingRegion_Id,
                                               LineSearchTask_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: RadioDriver_Attestation_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: RadioDriver_Attestation_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: RadioDriver_Attestation_thr_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: RadioDriver_Attestation_thr_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: RadioDriver_Attestation_thr_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: RadioDriver_Attestation_thr_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: RadioDriver_Attestation_thr_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}