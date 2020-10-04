// #Sireum

package test_event_data_port_periodic_domains

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

@ext object Platform {
  def initialise(seed: Z, portOpt: Option[Art.PortId]): Unit = $
  def receive(portOpt: Option[Art.PortId],  out: MBox2[Art.PortId, DataContent]): Unit = $
  def send(app: Art.PortId, port: Art.PortId, data: DataContent): Unit = $
  def sendAsync(app: Art.PortId, port: Art.PortId, data: DataContent): B = $
  def receiveAsync(portOpt: Option[Art.PortId], out: MBox2[Art.PortId, Option[DataContent]]): Unit = $
  def finalise(): Unit = $
}
