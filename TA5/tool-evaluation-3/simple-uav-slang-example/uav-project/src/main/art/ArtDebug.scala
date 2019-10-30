// #Sireum

package art

import org.sireum._

@ext object ArtDebug {

  def injectPort(bridgeId: Art.BridgeId, port: Art.PortId, data: DataContent): Unit = $


  def registerPortListener(id: Art.PortId, listener: PortListener): Unit = $

  def registerBridgeListener(id:Art.BridgeId, listener: BridgeListener): Unit = $

  def registerProjectListener(listener: Listener): Unit = $


  def setDebugObject[T](key: String, o: T): Unit = $

  def getDebugObject[T](key: String): Option[T] = $
}


@msig trait Listener {
  def callback(bridge: Bridge, port : UPort, data: DataContent) : Unit
}

// listen to a specific port
@msig trait PortListener extends Listener

// listen to all incoming and outgoing ports of a bridge
@msig trait BridgeListener extends Listener

// mix both of these in to listen to all incoming ports of a bridge
@msig trait BridgeInDataListener extends BridgeListener
@msig trait BridgeInEventListener extends BridgeListener

// mix both of these in to listen to all outgoing ports of a bridge
@msig trait BridgeOutDataListener extends BridgeListener
@msig trait BridgeOutEventListener extends BridgeListener
