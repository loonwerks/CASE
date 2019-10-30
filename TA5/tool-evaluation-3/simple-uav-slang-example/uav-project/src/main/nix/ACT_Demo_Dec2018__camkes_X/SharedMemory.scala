// #Sireum

package ACT_Demo_Dec2018__camkes_X

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

@ext object SharedMemory {
  def create(id: Z): Z = $
  def get(id: Z): Z = $
  def send(id: Z, port: Art.PortId, d: DataContent): Unit = $
  def receive(port: Art.PortId): DataContent = $
  def sendAsync(id: Z, port: Art.PortId, d: DataContent): B = $
  def receiveAsync(port: Art.PortId): Option[DataContent] = $
  def remove(id: Z): Unit = $
}