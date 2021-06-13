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

  def put_MissionCommand_out(value : Base_Types.Bits) : Unit = {
    Art.putValue(MissionCommand_out_Id, Base_Types.Bits_Payload(value))
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

  def get_MissionCommand_in() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(MissionCommand_in_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port MissionCommand_in.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  def get_TrustedIds() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(TrustedIds_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port TrustedIds.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}
