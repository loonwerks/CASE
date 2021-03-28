package art

import org.sireum._

import java.util.concurrent.CountDownLatch
import java.util.concurrent.atomic.AtomicBoolean


import scala.collection.mutable.{Map => MMap, Set => MSet}

object ArtMessage {
  val UNSET: Z = -1
}

case class ArtMessage (data: DataContent,

                       var srcPortId: Art.PortId = ArtMessage.UNSET,
                       var dstPortId: Art.PortId = ArtMessage.UNSET,

                       // when putValue was called by producer
                       var putValueTimestamp: Z = ArtMessage.UNSET,

                       // when sendOutput transferred message from out port var of producer 
                       var sendOutputTimestamp: Z = ArtMessage.UNSET,

                       // when message arrived via transport layer
                       var dstArrivalTimestamp: Z = ArtMessage.UNSET,

                       // when receiveInput transferred message to in port vars of consumer
                       var receiveInputTimestamp: Z = ArtMessage.UNSET
                      )

object ArtNative_Ext {
  val noTime: Art.Time = 0

  val slowdown: Z = 1

  val lastSporadic: MMap[Art.BridgeId, Art.Time] = concMap()
  val eventPortVariables: MMap[Art.PortId, ArtMessage] = concMap()
  val dataPortVariables: MMap[Art.PortId, ArtMessage] = concMap()
  val receivedPortValues: MMap[Art.PortId, ArtMessage] = concMap()
  val sentPortValues: MMap[Art.PortId, ArtMessage] = concMap()

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    val portIds = ISZ[Art.PortId](Art.bridge(bridgeId).ports.eventIns.elements.map(_.id).filter(eventPortVariables.get(_).nonEmpty): _*)
    if (portIds.isEmpty) {
      TimeTriggered()
    } else {
      val urgentFifo = ops.ISZOps(portIds.map(Art.port(_))).sortWith { // reverse sort
        case (p1: UrgentPort[_], p2: UrgentPort[_]) =>
          if(p1.urgency < p2.urgency) F
          else if(p1.urgency > p2.urgency) T
          else eventPortVariables(p1.id).dstArrivalTimestamp < eventPortVariables(p2.id).dstArrivalTimestamp
        case (_: UrgentPort[_], _: Port[_]) => T // urgent ports take precedence
        case (_: Port[_], _: UrgentPort[_]) => F // urgent ports take precedence
        case (p1: Port[_], p2: Port[_]) =>
          eventPortVariables(p1.id).dstArrivalTimestamp < eventPortVariables(p2.id).dstArrivalTimestamp
      }.map(_.id)
      EventTriggered(urgentFifo)
    }
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
    sentPortValues(portId) = ArtMessage(data = data, srcPortId = portId, putValueTimestamp = Art.time())
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    val data = receivedPortValues.get(portId) match {
      case scala.Some(v) => org.sireum.Some(v.data)
      case _ => org.sireum.None[DataContent]()
    }
    return data
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = { // SEND_OUTPUT
    for (srcPortId <- eventPortIds ++ dataPortIds) {
      sentPortValues.get(srcPortId) match {
        case scala.Some(msg) =>
          // todo send on emission as well as receive
          for(dstPortId <- Art.connections(srcPortId).elements) {

            // simulate sending msg via transport middleware

            val _msg = msg.copy(dstPortId = dstPortId, sendOutputTimestamp = Art.time())

            Art.port(dstPortId).mode match {
              case PortMode.DataIn | PortMode.DataOut =>
                dataPortVariables(dstPortId) = _msg
              case PortMode.EventIn | PortMode.EventOut =>
                eventPortVariables(dstPortId) = _msg
            }

            _msg.dstArrivalTimestamp = Art.time()

            ArtDebug_Ext.outputCallback(srcPortId, dstPortId, _msg.data, _msg.dstArrivalTimestamp)
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

    ArtDebug_Ext.start()

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

    val terminated = new AtomicBoolean()
    val numTerminated = new CountDownLatch(bridges.size)

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
        while (!terminated.get()) {
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
                terminated.set(true)
            }
        }
        numTerminated.countDown()
      }).start()
    }

    Thread.sleep(1000)

    logInfo(Art.logTitle, s"Start execution (press Enter twice to terminate) ...")

    ArtNative_Ext.synchronized {
      ArtNative_Ext.notifyAll()
    }

    Console.in.readLine()
    terminated.set(true)
    numTerminated.await()
    logInfo(Art.logTitle, s"End execution...")

    for (bridge <- bridges) {
      bridge.entryPoints.finalise()
      logInfo(Art.logTitle, s"Finalized bridge: ${bridge.name}")
    }

    ArtTimer_Ext.finalise()
    ArtDebug_Ext.stop()
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
    import org.sireum.$internal.CollectionCompat.Converters._
    new java.util.concurrent.ConcurrentHashMap[K, V].asInstanceOf[java.util.Map[K, V]].asScala
  }




  /////////////
  // TESTING //
  /////////////

  /**
   * Calls the initialize entry points on all registered bridges AND resets all inputs and outputs for all ports.
   * Testers should NOT call this method because BridgeTestSuite will automatically call this method before each test.
   *
   * (note: BridgeTestSuite exists only in the test scope)
   */
  def initTest(bridge: Bridge): Unit = {
    // note that all ports and bridges were deleted by Art's initTest

    // delete ALL port values as well as lastSporadic tracker
    lastSporadic.clear()
    eventPortVariables.clear()
    dataPortVariables.clear()
    receivedPortValues.clear()
    sentPortValues.clear()

    // clear pending ArtTimer events (also done after a test completes)
    ArtTimer_Ext.m.keys.foreach(ArtTimer_Ext.clearTimeout)

    bridge.entryPoints.initialise()
    logInfo(Art.logTitle, s"Initialized bridge: ${bridge.name}")
  }

  /**
   * Precondition: executeInit() has been called prior.
   *
   * Executes the testCompute() method one time for each registered bridge.
   *
   * Unlike [[Art.run()]], this method does NOT wrap compute calls in a try-catch block.
   * This is to ensure no exceptions are overlooked during testing.
   */
  def executeTest(bridge: Bridge): Unit = {
    bridge.entryPoints.testCompute()
  }

  /**
   * Calls the finalize entry points on all registered bridges.
   * Testers should NOT call this method because BridgeTestSuite will automatically call this method after each test.
   *
   * (note: BridgeTestSuite exists only in the test scope)
   */
  def finalizeTest(bridge: Bridge): Unit = {
    bridge.entryPoints.finalise()
    logInfo(Art.logTitle, s"Finalized bridge: ${bridge.name}")

    // clear pending ArtTimer events (also done before a test begins)
    ArtTimer_Ext.m.keys.foreach(ArtTimer_Ext.clearTimeout)
  }

  /**
   * A method that replaces bridge.compute()'s calls to [[Art.sendOutput()]] in its equivalent testCompute() method.
   *
   * This method is currently a NO-OP, but may gain functionality later.
   *
   * @param eventPortIds the event ports to be "copied and cleared" (but currently nothing happens)
   * @param dataPortIds the data ports to be "copied and cleared" (but currently nothing happens)
   */
  def releaseOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = { // testing SEND_OUTPUT
    // note: sendOutput is usually accessed via: Art.sendOutput -> ArtNative.sendOutput -> ArtNative_Ext.sendOutput
    // NO OP
  }

  /**
   * Because a bridge's testCompute() doesn't clear outputs, this method can be used by users to manually
   * clear the output if desired. This is useful for tests involving multiple dispatches.
   */
  def manuallyClearOutput(): Unit = {
    sentPortValues.clear()
  }

  /**
   * Inserts a value into an "infrastructure in" port. For testing only, normally this is handled by Art.
   *
   * @param dstPortId the portId to place the passed [[DataContent]] into
   * @param data the [[DataContent]] which will be placed in the dstPort
   */
  def insertInPortValue(dstPortId: Art.PortId, data: DataContent): Unit = {
    // note: that could would be changed when we refactor to support event queues of size > 1
    val artMessage = ArtMessage(data = data, dstPortId = dstPortId, dstArrivalTimestamp = Art.time())
    Art.port(dstPortId).mode match {
      case PortMode.DataIn | PortMode.DataOut =>
        dataPortVariables(dstPortId) = artMessage
      case PortMode.EventIn | PortMode.EventOut =>
        eventPortVariables(dstPortId) = artMessage
    }
  }

  /**
   * Returns the value of an out port.
   *
   * @param portId the id of the OUTPUT port to return a value from
   * @return If the port is non-empty, a [[Some]] of [[DataContent]]. Otherwise [[None]].
   */
  def observeOutPortValue(portId: Art.PortId): Option[DataContent] = {
    // note: that could would be changed when we refactor to support event queues of size > 1
    sentPortValues.get(portId) match {
      case scala.Some(value: ArtMessage) => org.sireum.Some[DataContent](value.data)
      case scala.None => org.sireum.None[DataContent]()
    }
  }
}
