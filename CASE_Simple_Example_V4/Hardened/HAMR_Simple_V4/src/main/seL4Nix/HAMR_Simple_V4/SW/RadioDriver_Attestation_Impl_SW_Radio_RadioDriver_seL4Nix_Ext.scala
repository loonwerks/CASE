package HAMR_Simple_V4.SW

import org.sireum._
import art._

object RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_seL4Nix_Ext {
  def MissionCommand_Send(d: DataContent): Unit = halt("stub")

  def AttestationRequest_IsEmpty(): B = halt("stub")

  def AttestationRequest_Receive(): Option[DataContent] = halt("stub")

  def AttestationResponse_Send(d: DataContent): Unit = halt("stub")

  def AttestationTesterResponse_IsEmpty(): B = halt("stub")

  def AttestationTesterResponse_Receive(): Option[DataContent] = halt("stub")

  def AttestationTesterRequest_Send(d: DataContent): Unit = halt("stub")
}
