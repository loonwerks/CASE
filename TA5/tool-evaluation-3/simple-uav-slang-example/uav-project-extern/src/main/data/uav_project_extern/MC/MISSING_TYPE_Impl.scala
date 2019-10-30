// #Sireum

package uav_project_extern.MC

import org.sireum._
import uav_project_extern._

// This file was auto-generated.  Do not edit

object MISSING_TYPE_Impl {
  def empty(): MC.MISSING_TYPE_Impl = {
    return MC.MISSING_TYPE_Impl(Base_Types.Integer_32_empty())
  }
}

@datatype class MISSING_TYPE_Impl(
  MISSING : Base_Types.Integer_32) {
}

object MISSING_TYPE_Impl_Payload {
  def empty(): MISSING_TYPE_Impl_Payload = {
    return MISSING_TYPE_Impl_Payload(MC.MISSING_TYPE_Impl.empty())
  }
}

@datatype class MISSING_TYPE_Impl_Payload(value: MC.MISSING_TYPE_Impl) extends art.DataContent
