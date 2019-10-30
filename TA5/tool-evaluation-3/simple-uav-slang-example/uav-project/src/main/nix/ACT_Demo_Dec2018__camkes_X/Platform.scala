// #Sireum

package ACT_Demo_Dec2018__camkes_X

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

@ext object Platform {
  def initialise(seed: Z, portOpt: Option[Art.PortId]): Unit = $
  def receive(portOpt: Option[Art.PortId]): (Art.PortId, DataContent) = $
  def send(app: Art.PortId, port: Art.PortId, data: DataContent): Unit = $
  def sendAsync(app: Art.PortId, port: Art.PortId, data: DataContent): B = $
  def receiveAsync(portOpt: Option[Art.PortId]): Option[(Art.PortId, DataContent)] = $
  def finalise(): Unit = $
}
