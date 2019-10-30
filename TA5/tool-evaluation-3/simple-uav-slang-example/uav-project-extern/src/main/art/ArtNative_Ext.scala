package art

import org.sireum._

import scala.collection.mutable.{Map => MMap, Set => MSet}

object ArtNative_Ext {
  val noTime: Art.Time = 0

  val slowdown: Z = 1

  val lastSporadic: MMap[Art.BridgeId, Art.Time] = concMap()
  val eventPortVariables: MMap[Art.PortId, DataContent] = concMap()
  val dataPortVariables: MMap[Art.PortId, DataContent] = concMap()
  val receivedPortValues: MMap[Art.PortId, DataContent] = concMap()
  val sentPortValues: MMap[Art.PortId, DataContent] = concMap()

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    val portIds = ISZ[Art.PortId](Art.bridge(bridgeId).ports.eventIns.elements.map(_.id).filter(eventPortVariables.get(_).nonEmpty): _*)
    if (portIds.isEmpty) TimeTriggered() else EventTriggered(portIds)
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    for (portId <- eventPortIds) {
      receivedPortValues -= portId // remove stale events from previous dispatch
      eventPortVariables.get(portId) match {
        case scala.Some(data) =>
          eventPortVariables -= portId
          receivedPortValues(portId) = data
        case _ =>
      }
    }
    for (portId <- dataPortIds) {
      dataPortVariables.get(portId) match {
        case scala.Some(data) =>
          receivedPortValues(portId) = data
        case _ =>
      }
    }
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    sentPortValues(portId) = data
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    val data = receivedPortValues.get(portId) match {
      case scala.Some(v) => org.sireum.Some(v)
      case _ => org.sireum.None[DataContent]()
    }
    return data
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = { // SEND_OUTPUT
    for (srcPortId <- eventPortIds ++ dataPortIds) {
      sentPortValues.get(srcPortId) match {
        case scala.Some(data) =>
          ArtDebug_Ext.portListenerCallback(srcPortId, data)
          for(dstPortId <- Art.connections(srcPortId).elements) {
            Art.port(dstPortId).mode match {
              case PortMode.DataIn | PortMode.DataOut =>
                dataPortVariables(dstPortId) = data
              case PortMode.EventIn | PortMode.EventOut =>
                eventPortVariables(dstPortId) = data
            }
            ArtDebug_Ext.portListenerCallback(dstPortId, data)
          }
          sentPortValues -= srcPortId
        case _ =>
      }
    }
  }

  def logInfo(title: String, msg: String): Unit = log("info", title, msg)

  def logError(title: String, msg: String): Unit = log("error", title, msg)

  def logDebug(title: String, msg: String): Unit = log("debug", title, msg)

  def time(): Art.Time = toZ(System.currentTimeMillis())

  def shouldDispatch(bridgeId: Art.BridgeId): B = {
    val b = Art.bridge(bridgeId)
    b.dispatchProtocol match {
      case DispatchPropertyProtocol.Periodic(_) => return T
      case DispatchPropertyProtocol.Sporadic(minRate) =>
        val ls = lastSporadic.getOrElse(bridgeId, noTime)
        if (time() - ls < minRate) {
          return F
        } else {
          return b.ports.eventIns.elements.exists(port => eventPortVariables.contains(port.id))
        }
    }
  }

  def run(): Unit = {
    //require(Art.bridges.elements.forall(_.nonEmpty))

    val bridges = {
      var r = Vector[Bridge]()
      for (e <- Art.bridges.elements) e match {
        case MSome(b) => r :+= b
        case _ =>
      }
      r
    }

    for (bridge <- bridges) {
      bridge.entryPoints.initialise()
      logInfo(Art.logTitle, s"Initialized bridge: ${bridge.name}")
    }

    var terminated = false
    var numTerminated = 0

    for (bridge <- bridges) {
      val rate = bridge.dispatchProtocol match {
        case DispatchPropertyProtocol.Periodic(period) => period
        case DispatchPropertyProtocol.Sporadic(min) => min
      }

      new Thread(() => {
        logInfo(Art.logTitle, s"Thread for ${bridge.name} instantiated.")
        ArtNative_Ext.synchronized {
          ArtNative_Ext.wait()
        }
        while (!terminated) {
          Thread.sleep((rate * slowdown).toMP.toLong)
          if (shouldDispatch(bridge.id))
            try {
              bridge.synchronized {
                bridge.entryPoints.compute()
              }
            }
            catch {
              case x : Throwable =>
                x.printStackTrace()
                terminated = true
            }
        }
        ArtNative_Ext.synchronized {
          numTerminated += 1
        }
      }).start()
    }

    Thread.sleep(1000)

    logInfo(Art.logTitle, s"Start execution (press Enter twice to terminate) ...")

    ArtNative_Ext.synchronized {
      ArtNative_Ext.notifyAll()
    }

    Console.in.readLine()
    terminated = true

    while (numTerminated != bridges.size) {
      Thread.sleep(1000)
    }
    logInfo(Art.logTitle, s"End execution...")

    for (bridge <- bridges) {
      bridge.entryPoints.finalise()
      logInfo(Art.logTitle, s"Finalized bridge: ${bridge.name}")
    }

    ArtTimer_Ext.finalise()
  }

  def log(kind: String, title: String, msg: String): Unit = {
    Console.out.println(s"""{ "log" : "$kind", "title" : ${escape(title)}, "msg" : ${escape(msg)}, "time" : "${time()}" }""")
    Console.out.flush()
  }

  def escape(raw: String): String = {
    import scala.reflect.runtime.universe._
    Literal(Constant(raw.value)).toString
  }

  def toZ(value: Long): Z = Z(value)

  def concMap[K, V](): MMap[K, V] = {
    import scala.collection.JavaConverters._
    new java.util.concurrent.ConcurrentHashMap[K, V].asScala
  }
}
