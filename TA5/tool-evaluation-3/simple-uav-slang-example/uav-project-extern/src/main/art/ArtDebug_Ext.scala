package art

import org.sireum._
import scala.collection.mutable.{Map => MMap, Set => MSet}
import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent.Future
import scala.util.Failure

object ArtDebug_Ext {
  private val debugObjects: MMap[String, Any] = ArtNative_Ext.concMap()
  private val listeners: MMap[Art.PortId, (Bridge, UPort, MSet[Listener])] = ArtNative_Ext.concMap()

  /**
    * Set to false to disable futures on listenerCallbacks. If false then avoid blocking the thread.
    */
  var forkListenerCallbacks: Boolean = true

  protected[art] def portListenerCallback(p: Art.PortId, d: DataContent): Unit = {
    if (forkListenerCallbacks) {
      listeners.get(p).map(e => e._3.foreach( c =>
        Future ( c.callback(e._1, e._2, d) ) onComplete {
          case Failure(e) => throw e
          case _ =>
        }
      ))
    } else {
      listeners.get(p).map(e => e._3.foreach(_.callback(e._1, e._2, d)))
    }
  }

  def setDebugObject[T](key: String, o: T): Unit = {
    ArtNative.logDebug(Art.logTitle, s"Set debug object for $key")
    debugObjects(key) = o
  }

  def getDebugObject[T](key: String): Option[T] = {
    debugObjects.get(key) match {
      case scala.Some(o) => Some(o.asInstanceOf[T])
      case _ => None[T]()
    }
  }

  def injectPort(bridgeId: Art.BridgeId, port: Art.PortId, data: DataContent): Unit = {
    assert(z"0" <= bridgeId && bridgeId < Art.maxComponents && Art.bridges(bridgeId).nonEmpty)

    val bridge = Art.bridges(bridgeId).get
    assert(bridge.ports.all.elements.map(_.id).contains(port))

    if(bridge.ports.dataOuts.elements.map(_.id).contains(port) ||
      bridge.ports.eventOuts.elements.map(_.id).contains(port)) {

      ArtNative.logDebug(Art.logTitle, s"Injecting from port ${Art.ports(port).get.name}")

      ArtNative.putValue(port, data)
      ArtNative.sendOutput(bridge.ports.eventOuts.map(_.id), bridge.ports.dataOuts.map(_.id))
    } else {
      ArtNative.logDebug(Art.logTitle, s"Injecting to port ${Art.ports(port).get.name}")

      if(bridge.ports.dataIns.elements.map(_.id).contains(port)) {
        ArtNative_Ext.dataPortVariables(port) = data
      } else {
        ArtNative_Ext.eventPortVariables(port) = data
      }
    }
  }

  def registerPortListener(portId: Art.PortId, listener: PortListener): Unit = {
    val bridge = Art.bridges.elements.filter(_.nonEmpty).map(_.get).filter(b => b.ports.all.elements.map(_.id).contains(portId)).head
    registerListener(bridge, Seq(Art.port(portId)), listener)
  }

  def registerBridgeListener(bridgeId:Art.BridgeId, listener: BridgeListener): Unit = {
    val bridge = Art.bridge(bridgeId)
    val ports = concSet[UPort]()

    if(listener.isInstanceOf[BridgeInDataListener])
      ports ++= bridge.ports.dataIns.elements
    if(listener.isInstanceOf[BridgeInEventListener])
      ports ++= bridge.ports.eventIns.elements

    if(listener.isInstanceOf[BridgeOutDataListener])
      ports ++= bridge.ports.dataOuts.elements
    if(listener.isInstanceOf[BridgeOutEventListener])
      ports ++= bridge.ports.eventOuts.elements

    if(!(listener.isInstanceOf[BridgeInDataListener] || listener.isInstanceOf[BridgeInEventListener] ||
        listener.isInstanceOf[BridgeOutDataListener] || listener.isInstanceOf[BridgeOutEventListener])) {
      ports ++= bridge.ports.all.elements
    }
    registerListener(bridge, ports.toSeq, listener)
  }

  def registerProjectListener(listener: Listener): Unit = {
    art.Art.bridges.elements.filter(_.nonEmpty).foreach(b => registerListener(b.get, b.get.ports.all.elements, listener))
  }

  private def registerListener(bridge: Bridge, ports: Seq[UPort], listener: Listener): Unit = {
    for (port <- ports) {
      val c = if (port.mode == PortMode.DataIn || port.mode == PortMode.EventIn) "receives" else "sends"
      val t = if (port.mode == PortMode.DataIn || port.mode == PortMode.DataOut) "data" else "event"
      ArtNative.logDebug(Art.logTitle, s"Registered callback.  Triggered when port ${port.name} $c $t")
      listeners.getOrElseUpdate(port.id, (bridge, port, concSet()))._3.add(listener)
    }
  }

  def concSet[K](): MSet[K] = {
    import scala.collection.JavaConverters._
    val m: java.util.Set[K] = java.util.concurrent.ConcurrentHashMap.newKeySet()
    m.asScala
  }
}