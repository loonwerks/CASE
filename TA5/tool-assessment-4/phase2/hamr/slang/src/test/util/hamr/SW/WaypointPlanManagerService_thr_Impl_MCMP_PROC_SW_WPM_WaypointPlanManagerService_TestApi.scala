package hamr.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import hamr._

// This file was auto-generated.  Do not edit
abstract class WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_TestApi extends BridgeTestSuite[WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge](Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService) {

  /** helper function to set the values of all input ports.
   * @param AutomationResponse payloads for event data port AutomationResponse.
   *   ART currently supports single element event data queues so
   *   only the last element of AutomationResponse will be used
   * @param AirVehicleState payloads for event data port AirVehicleState.
   *   ART currently supports single element event data queues so
   *   only the last element of AirVehicleState will be used
   * @param ReturnHome the number of events to place in the ReturnHome event port queue.
   *   ART currently supports single element event queues so at most
   *   one event will be placed in the queue.
   */
  def put_concrete_inputs(AutomationResponse : ISZ[Base_Types.Bits],
                          AirVehicleState : ISZ[Base_Types.Bits],
                          ReturnHome : Z): Unit = {
    for(v <- AutomationResponse){
      put_AutomationResponse(v)
    }
    for(v <- AirVehicleState){
      put_AirVehicleState(v)
    }
    for(i <- 0 until ReturnHome) {
      put_ReturnHome()
    }
  }


  /** helper function to check WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param MissionCommand method that will be called with the payloads to be sent
   *        on the outgoing event data port 'MissionCommand'.
   */
  def check_concrete_output(MissionCommand: ISZ[Base_Types.Bits] => B = MissionCommandParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var MissionCommandValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_MissionCommand().nonEmpty) MissionCommandValue = MissionCommandValue :+ get_MissionCommand().get
    if(!MissionCommand(MissionCommandValue)) {
      testFailures = testFailures :+ st"'MissionCommand' did not match expected: received ${MissionCommandValue.size} events with the following payloads ${MissionCommandValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_AutomationResponse(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AutomationResponse_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_AirVehicleState(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AirVehicleState_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventPort
  def put_ReturnHome(): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.ReturnHome_Id, Empty())
  }

  // getter for out EventDataPort
  def get_MissionCommand(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_MissionCommand_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port MissionCommand.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_MissionCommand_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.MissionCommand_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
