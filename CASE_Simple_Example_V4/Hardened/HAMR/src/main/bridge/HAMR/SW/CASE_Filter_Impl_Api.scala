// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait CASE_Filter_Impl_Api {
  def id: Art.BridgeId
  def Input_Id : Art.PortId
  def Output_Id : Art.PortId

  def put_Output(value : SW.RF_Msg_Impl) : Unit = {
    Art.putValue(Output_Id, SW.RF_Msg_Impl_Payload(value))
  }

  def logInfo(msg: String): Unit = {
    Art.logInfo(id, msg)
  }

  def logDebug(msg: String): Unit = {
    Art.logDebug(id, msg)
  }

  def logError(msg: String): Unit = {
    Art.logError(id, msg)
  }
}

@datatype class CASE_Filter_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val Input_Id : Art.PortId,
  val Output_Id : Art.PortId) extends CASE_Filter_Impl_Api

@datatype class CASE_Filter_Impl_Operational_Api (
  val id: Art.BridgeId,
  val Input_Id : Art.PortId,
  val Output_Id : Art.PortId) extends CASE_Filter_Impl_Api {

  def get_Input() : Option[SW.RF_Msg_Impl] = {
    val value : Option[SW.RF_Msg_Impl] = Art.getValue(Input_Id) match {
      case Some(SW.RF_Msg_Impl_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port Input.  Expecting 'SW.RF_Msg_Impl_Payload' but received ${v}")
        None[SW.RF_Msg_Impl]()
      case _ => None[SW.RF_Msg_Impl]()
    }
    return value
  }
}
