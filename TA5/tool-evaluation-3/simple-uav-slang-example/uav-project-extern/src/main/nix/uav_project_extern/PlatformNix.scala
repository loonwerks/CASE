// #Sireum
package uav_project_extern

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

  def receive(portOpt: Option[Art.PortId]): (Art.PortId, DataContent) = {
    portOpt match {
      case Some(port) =>
        val d = SharedMemory.receive(seed + port)
        return (port, d)
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

  def receiveAsync(portOpt: Option[Art.PortId]): Option[(Art.PortId, DataContent)] = {
    portOpt match {
      case Some(port) =>
        val dOpt = SharedMemory.receiveAsync(seed + port)
        dOpt match {
          case Some(d) => return Some((port, d))
          case _ => return None()
        }
      case _ => halt("Unsupported receive operation without port.")
    }
  }

  def finalise(): Unit = {
    for (id <- ids) {
      SharedMemory.remove(id)
    }
  }
}
