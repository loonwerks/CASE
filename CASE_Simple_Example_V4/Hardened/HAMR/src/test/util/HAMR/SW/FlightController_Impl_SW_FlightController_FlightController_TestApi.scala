package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class FlightController_Impl_SW_FlightController_FlightController_TestApi extends BridgeTestSuite[FlightController_Impl_SW_FlightController_FlightController_Bridge](Arch.MissionComputer_Impl_Instance_SW_FlightController_FlightController) {

  /** helper function to set the values of all input ports.
   * @param FlightPlan payloads for event data port FlightPlan.
   *   ART currently supports single element event data queues so
   *   only the last element of FlightPlan will be used
   * @param Alert the number of events to place in the Alert event port queue.
   *   ART currently supports single element event queues so at most
   *   one event will be placed in the queue.
   */
  def put_concrete_inputs(FlightPlan : ISZ[Base_Types.Bits],
                          Alert : Z): Unit = {
    for(v <- FlightPlan){
      put_FlightPlan(v)
    }
    for(i <- 0 until Alert) {
      put_Alert()
    }
  }


  // setter for in EventDataPort
  def put_FlightPlan(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.FlightPlan_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventPort
  def put_Alert(): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.Alert_Id, Empty())
  }

}
