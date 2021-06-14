// #Sireum

package art

import org.sireum._

object Art {
  type PortId = Z
  type BridgeId = Z
  type Time = Z

  val z16max: PortId = org.sireum.conversions.Z16.toZ(Z16.Max) // 32,767

  val maxComponents: BridgeId = 3
  val maxPorts: PortId = 8

  val logTitle: String = "Art"
  val bridges: MS[BridgeId, Option[Bridge]] = MS.create[BridgeId, Option[Bridge]](maxComponents, None[Bridge]())
  val connections: MS[PortId, ISZ[PortId]] = MS.create[PortId, ISZ[PortId]](maxPorts, ISZ())
  val ports: MS[PortId, Option[UPort]] = MS.create[PortId, Option[UPort]](maxPorts, None[UPort]())

  def bridge(bridgeId: BridgeId): Bridge = {
    val Some(r) = bridges(bridgeId)
    return r
  }

  def port(p: PortId) : UPort = {
    val Some(r) = ports(p)
    return r
  }

  def register(bridge: Bridge): Unit = {
    bridges(bridge.id) = Some(bridge)
    bridge.dispatchProtocol match {
      case DispatchPropertyProtocol.Periodic(period) =>
        ArtNative.logInfo(logTitle, s"Registered component: ${bridge.name} (periodic: $period)")
      case DispatchPropertyProtocol.Sporadic(min) =>
        ArtNative.logInfo(logTitle, s"Registered component: ${bridge.name} (sporadic: $min)")
    }
    for (port <- bridge.ports.all) {
      ports(port.id) = Some(port)
      port.mode match {
        case PortMode.DataIn => ArtNative.logInfo(logTitle, s"- Registered port: ${port.name} (data in)")
        case PortMode.DataOut => ArtNative.logInfo(logTitle, s"- Registered port: ${port.name} (data out)")
        case PortMode.EventIn => ArtNative.logInfo(logTitle, s"- Registered port: ${port.name} (event in)")
        case PortMode.EventOut => ArtNative.logInfo(logTitle, s"- Registered port: ${port.name} (event out)")
      }
    }
  }

  // can't find definition in the standard ??
  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = { // DISPATCH_STATUS
    return ArtNative.dispatchStatus(bridgeId)
  }

  def receiveInput(eventPortIds: ISZ[PortId], dataPortIds: ISZ[PortId]): Unit = { // RECEIVE_INPUT
    ArtNative.receiveInput(eventPortIds, dataPortIds)
  }

  def putValue(portId: PortId, data: DataContent): Unit = { // PUT_VALUE
    ArtNative.putValue(portId, data)
  }

  def getValue(portId: PortId): Option[DataContent] = { // GET_VALUE
    return ArtNative.getValue(portId)
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = { // SEND_OUTPUT
    ArtNative.sendOutput(eventPortIds, dataPortIds)
  }

  def logInfo(bridgeId: Art.BridgeId, msg: String): Unit = {
    ArtNative.logInfo(bridge(bridgeId).name, msg)
  }

  def logError(bridgeId: Art.BridgeId, msg: String): Unit = {
    ArtNative.logError(bridge(bridgeId).name, msg)
  }

  def logDebug(bridgeId: Art.BridgeId, msg: String): Unit = {
    ArtNative.logDebug(bridge(bridgeId).name, msg)
  }

  def connect(from: UPort, to: UPort): Unit = {
    connections(from.id) = connections(from.id) :+ to.id
    ArtNative.logInfo(logTitle, s"Connected ports: ${from.name} -> ${to.name}")
  }

  def run(system: ArchitectureDescription): Unit = {

    for (component <- system.components) {
      register(component)
    }

    for (connection <- system.connections) {
      connect(connection.from, connection.to)
    }

    ArtNative.run()
  }

  def time(): Time = {
    return ArtNative.time()
  }

  /////////////
  // TESTING //
  /////////////

  /**
   * Clears any existing ports and bridges, then sets up ports/bridges for the next test.
   *
   * Automatically called by BridgeTestSuite before each test.
   */
  def initTest(bridge: Bridge): Unit = {
    // remove all bridges
    for (i <- bridges.indices) {
      bridges(i) = None()
    }

    // remove all ports
    for (i <- ports.indices) {
      ports(i) = None()
    }

    // register bridge passed to this method
    register(bridge)

    // let ArtNative reset itself as well
    ArtNative.initTest(bridge)
  }

  def executeTest(bridge: Bridge): Unit = {
    ArtNative.executeTest(bridge)
  }

  def finalizeTest(bridge: Bridge): Unit = {
    ArtNative.finalizeTest(bridge)
  }

  def releaseOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    ArtNative.releaseOutput(eventPortIds, dataPortIds)
  }

  def manuallyClearOutput(): Unit = {
    ArtNative.manuallyClearOutput()
  }

  def insertInPortValue(dstPortId: Art.PortId, data: DataContent): Unit = {
    ArtNative.insertInPortValue(dstPortId, data)
  }

  def observeOutPortValue(portId: Art.PortId): Option[DataContent] = {
    ArtNative.observeOutPortValue(portId)
  }
}
