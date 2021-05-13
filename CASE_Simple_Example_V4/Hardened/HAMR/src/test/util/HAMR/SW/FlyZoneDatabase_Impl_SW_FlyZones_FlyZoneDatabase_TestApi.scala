package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_TestApi extends BridgeTestSuite[FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge](Arch.MissionComputer_Impl_Instance_SW_FlyZones_FlyZoneDatabase) {

  /** helper function to check FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param FlyZones method that will be called with the value of the outgoing data
   *        port 'FlyZones'.
   */
  def check_concrete_output(FlyZones: SW.MapArray => B = FlyZonesParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    val FlyZonesValue: SW.MapArray = get_FlyZones().get
    if(!FlyZones(FlyZonesValue)) {
      testFailures = testFailures :+ st"'FlyZones' did not match expected: value of the outgoing data port is ${FlyZonesValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // getter for out DataPort
  def get_FlyZones(): Option[SW.MapArray] = {
    val value: Option[SW.MapArray] = get_FlyZones_payload() match {
      case Some(SW.MapArray_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port FlyZones.  Expecting 'SW.MapArray_Payload' but received ${v}")
      case _ => None[SW.MapArray]()
    }
    return value
  }

  // payload getter for out DataPort
  def get_FlyZones_payload(): Option[SW.MapArray_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.FlyZones_Id).asInstanceOf[Option[SW.MapArray_Payload]]
  }

}
