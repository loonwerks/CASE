package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object Platform_Ext {
  def initialise(seed: Z, portOpt: Option[Art.PortId]): Unit = halt("stub")
  def receive(portOpt: Option[Art.PortId], out: MBox2[Art.PortId, DataContent]) = halt("stub")
  def send(app: Art.PortId, port: Art.PortId, data: DataContent): Unit = halt("stub")
  def sendAsync(app: Art.PortId, port: Art.PortId, data: DataContent): B = halt("stub")
  def receiveAsync(portOpt: Option[Art.PortId], out: MBox2[Art.PortId, Option[DataContent]]): Unit = halt("stub")
  def finalise(): Unit = halt("stub")
}
