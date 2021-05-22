package hamr.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import hamr._

// This file was auto-generated.  Do not edit
abstract class FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_TestApi extends BridgeTestSuite[FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge](Arch.UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase) {

  /** helper function to check FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param keep_in_zones method that will be called with the value of the outgoing data
   *        port 'keep_in_zones'.
   * @param keep_out_zones method that will be called with the value of the outgoing data
   *        port 'keep_out_zones'.
   */
  def check_concrete_output(keep_in_zones: Base_Types.Bits => B = keep_in_zonesParam => {T},
                            keep_out_zones: Base_Types.Bits => B = keep_out_zonesParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    val keep_in_zonesValue: Base_Types.Bits = get_keep_in_zones().get
    if(!keep_in_zones(keep_in_zonesValue)) {
      testFailures = testFailures :+ st"'keep_in_zones' did not match expected: value of the outgoing data port is ${keep_in_zonesValue}"
    }
    val keep_out_zonesValue: Base_Types.Bits = get_keep_out_zones().get
    if(!keep_out_zones(keep_out_zonesValue)) {
      testFailures = testFailures :+ st"'keep_out_zones' did not match expected: value of the outgoing data port is ${keep_out_zonesValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // getter for out DataPort
  def get_keep_in_zones(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_keep_in_zones_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port keep_in_zones.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out DataPort
  def get_keep_in_zones_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.keep_in_zones_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out DataPort
  def get_keep_out_zones(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_keep_out_zones_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port keep_out_zones.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out DataPort
  def get_keep_out_zones_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.keep_out_zones_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
