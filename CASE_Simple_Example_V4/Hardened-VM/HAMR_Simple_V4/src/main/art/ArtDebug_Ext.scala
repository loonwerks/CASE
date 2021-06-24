package art

import org.sireum._
import art.Art.Time
import scala.collection.mutable.{Map => MMap, Set => MSet}

object ArtDebug_Ext {
  private val debugObjects: MMap[String, Any] = ArtNative_Ext.concMap()
  private val listeners: MSet[ArtListener] = concSet()

  protected[art] def start(): Unit = {
    val time = Art.time()
    listeners.foreach((listener: ArtListener) => listener.start(time))
  }

  protected[art] def stop(): Unit = {
    val time = Art.time()
    listeners.foreach((listener: ArtListener) => listener.stop(time))
  }

  protected[art] def outputCallback(src: Art.PortId, dst: Art.PortId, data: DataContent, time: Time): Unit = {
    listeners.foreach((listener: ArtListener) => listener.output(src, dst, data, time))
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
        ArtNative_Ext.dataPortVariables(port) = ArtMessage(data)
      } else {
        ArtNative_Ext.eventPortVariables(port) = ArtMessage(data)
      }
    }
  }

  def registerListener(listener: ArtListener): Unit = {
    listeners.add(listener)
  }

  def concSet[K](): MSet[K] = {
    import org.sireum.$internal.CollectionCompat.Converters._
    val m: java.util.Set[K] = java.util.concurrent.ConcurrentHashMap.newKeySet()
    m.asScala
  }
}