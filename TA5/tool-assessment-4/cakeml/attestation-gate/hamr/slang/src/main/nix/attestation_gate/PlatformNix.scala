// #Sireum
package attestation_gate

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object PlatformNix {

  var seed: Z = 0
  var ids: ISZ[Z] = ISZ()

  def initialise(seed: Z, portOpt: Option[Art.PortId]): Unit = {
    PlatformNix.seed = seed
    portOpt match {
      case Some(port) =>
        val id = seed + port
        SharedMemory.create(id)
        ids = ids :+ id
      case _ =>
    }
  }

  def receive(portOpt: Option[Art.PortId], out: MBox2[Art.PortId, DataContent]): Unit = {
    portOpt match {
      case Some(port) =>
        out.value1 = port
        SharedMemory.receive(seed + port, out)
      case _ => halt("Unsupported receive operation without port.")
    }
  }

  def send(app: Art.PortId, port: Art.PortId, data: DataContent): Unit = {
    SharedMemory.send(port, seed + port, data)
  }

  def sendAsync(app: Art.PortId, port: Art.PortId, data: DataContent): B = {
    val r = SharedMemory.sendAsync(port, seed + port, data)
    return r
  }

  def receiveAsync(portOpt: Option[Art.PortId], out: MBox2[Art.PortId, Option[DataContent]]): Unit = {
    portOpt match {
      case Some(port) => SharedMemory.receiveAsync(seed + port, out)
      case _ => halt("Unsupported receive operation without port.")
    }
  }

  def finalise(): Unit = {
    for (id <- ids) {
      SharedMemory.remove(id)
    }
  }
}
