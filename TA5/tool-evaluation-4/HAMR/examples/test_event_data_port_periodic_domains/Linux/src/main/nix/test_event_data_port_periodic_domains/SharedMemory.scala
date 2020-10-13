// #Sireum

package test_event_data_port_periodic_domains

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

@ext object SharedMemory {
  def create(id: Z): Z = $
  def get(id: Z): Z = $
  def send(id: Z, port: Art.PortId, d: DataContent): Unit = $
  def receive(port: Art.PortId, out: MBox2[Art.PortId, DataContent]): Unit = $
  def sendAsync(id: Z, port: Art.PortId, d: DataContent): B = $
  def receiveAsync(port: Art.PortId, out: MBox2[Art.PortId, Option[DataContent]]): Unit = $
  def remove(id: Z): Unit = $
}