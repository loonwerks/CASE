package pfc

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object SharedMemory_Ext {
  def create(id: Z): Z = halt("stub")
  def get(id: Z): Z = halt("stub")
  def send(id: Z, port: Art.PortId, d: DataContent): Unit = halt("stub")
  def receive(port: Art.PortId, out: MBox2[Art.PortId, DataContent]): Unit = halt("stub")
  def sendAsync(id: Z, port: Art.PortId, d: DataContent): B = halt("stub")
  def receiveAsync(port: Art.PortId, out: MBox2[Art.PortId, Option[DataContent]]): Unit = halt("stub")
  def remove(id: Z): Unit = halt("stub")
}