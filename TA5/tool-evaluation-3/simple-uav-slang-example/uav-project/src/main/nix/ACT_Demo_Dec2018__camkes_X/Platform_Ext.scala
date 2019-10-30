package ACT_Demo_Dec2018__camkes_X

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object Platform_Ext {
  def initialise(seed: Z, portOpt: Option[Art.PortId]): Unit = halt("stub")
  def receive(portOpt: Option[Art.PortId]): (Art.PortId, DataContent) = halt("stub")
  def send(app: Art.PortId, port: Art.PortId, data: DataContent): Unit = halt("stub")
  def sendAsync(app: Art.PortId, port: Art.PortId, data: DataContent): B = halt("stub")
  def receiveAsync(portOpt: Option[Art.PortId]): Option[(Art.PortId, DataContent)] = halt("stub")
  def finalise(): Unit = halt("stub")
}
