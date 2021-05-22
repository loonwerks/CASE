package hamr.RadioDriver

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// the contents of this file will not be overwritten
class top_Impl_Instance_radio_RadioDriver_Test extends BridgeTestSuite[RadioDriver_thr_Impl_Bridge](Arch.top_Impl_Instance_radio_RadioDriver) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // getter for out DataPort
  def get_trusted_ids_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_trusted_ids_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port trusted_ids_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}") 
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out DataPort
  def get_trusted_ids_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.trusted_ids_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_automation_request_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_automation_request_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port automation_request_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}") 
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_automation_request_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.automation_request_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_operating_region_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_operating_region_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port operating_region_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}") 
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_operating_region_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.operating_region_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_line_search_task_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_line_search_task_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port line_search_task_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}") 
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_line_search_task_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.line_search_task_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  def getComponent(): RadioDriver_thr_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[RadioDriver_thr_Impl_Bridge.EntryPoints].component
  }
}
