// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait AttestationGate_Impl_Api {
  def id: Art.BridgeId
  def MissionCommand_in_Id : Art.PortId
  def MissionCommand_out_Id : Art.PortId
  def TrustedIds_Id : Art.PortId

  def put_MissionCommand_out(value : SW.RF_Msg_Impl) : Unit = {
    Art.putValue(MissionCommand_out_Id, SW.RF_Msg_Impl_Payload(value))
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

@datatype class AttestationGate_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val MissionCommand_in_Id : Art.PortId,
  val MissionCommand_out_Id : Art.PortId,
  val TrustedIds_Id : Art.PortId) extends AttestationGate_Impl_Api

@datatype class AttestationGate_Impl_Operational_Api (
  val id: Art.BridgeId,
  val MissionCommand_in_Id : Art.PortId,
  val MissionCommand_out_Id : Art.PortId,
  val TrustedIds_Id : Art.PortId) extends AttestationGate_Impl_Api {

  def get_MissionCommand_in() : Option[SW.RF_Msg_Impl] = {
    val value : Option[SW.RF_Msg_Impl] = Art.getValue(MissionCommand_in_Id) match {
      case Some(SW.RF_Msg_Impl_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port MissionCommand_in.  Expecting 'SW.RF_Msg_Impl_Payload' but received ${v}")
        None[SW.RF_Msg_Impl]()
      case _ => None[SW.RF_Msg_Impl]()
    }
    return value
  }

  def get_TrustedIds() : Option[SW.AllowList_Impl] = {
    val value : Option[SW.AllowList_Impl] = Art.getValue(TrustedIds_Id) match {
      case Some(SW.AllowList_Impl_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port TrustedIds.  Expecting 'SW.AllowList_Impl_Payload' but received ${v}")
        None[SW.AllowList_Impl]()
      case _ => None[SW.AllowList_Impl]()
    }
    return value
  }
}
