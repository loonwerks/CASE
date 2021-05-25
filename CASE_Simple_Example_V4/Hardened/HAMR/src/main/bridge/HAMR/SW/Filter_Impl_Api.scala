// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait Filter_Impl_Api {
  def id: Art.BridgeId
  def Input_Id : Art.PortId
  def Output_Id : Art.PortId

  def put_Output(value : Base_Types.Bits) : Unit = {
    Art.putValue(Output_Id, Base_Types.Bits_Payload(value))
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

@datatype class Filter_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val Input_Id : Art.PortId,
  val Output_Id : Art.PortId) extends Filter_Impl_Api

@datatype class Filter_Impl_Operational_Api (
  val id: Art.BridgeId,
  val Input_Id : Art.PortId,
  val Output_Id : Art.PortId) extends Filter_Impl_Api {

  def get_Input() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(Input_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port Input.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}
