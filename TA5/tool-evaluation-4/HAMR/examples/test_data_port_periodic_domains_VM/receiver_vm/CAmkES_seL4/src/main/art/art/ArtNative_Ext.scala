package art

import org.sireum._
import art.DispatchPropertyProtocol.{Periodic, Sporadic}
import art.scheduling.Scheduler
import org.sireum.S64._
import scala.collection.mutable.{Map => MMap}

object ArtMessage {
  val UNSET_PORT: Art.PortId = -1
  val UNSET_TIME: Art.Time = s64"-1"
}

case class ArtMessage (data: DataContent,

                       var srcPortId: Art.PortId = ArtMessage.UNSET_PORT,
                       var dstPortId: Art.PortId = ArtMessage.UNSET_PORT,

                       // when putValue was called by producer
                       var putValueTimestamp: Art.Time = ArtMessage.UNSET_TIME,

                       // when sendOutput transferred message from out port var of producer
                       var sendOutputTimestamp: Art.Time = ArtMessage.UNSET_TIME,

                       // when message arrived via transport layer
                       var dstArrivalTimestamp: Art.Time = ArtMessage.UNSET_TIME,

                       // when receiveInput transferred message to in port vars of consumer
                       var receiveInputTimestamp: Art.Time = ArtMessage.UNSET_TIME
                      )

object ArtNative_Ext {
  val noTime: Art.Time = s64"0"

  val slowdown: Z = 1

  //================================================================
  //   A r c h i t e c t u r e     D e s c r i p t i o n
  //================================================================

  // Architecture description includes any data structures built from Arch information
  // to support system execution (i.e., by making certain types of lookup of Arch
  // information easier).   This information persists across runs, i.e., it doesn't
  // need to be changed between different runs of the system as long as the architecture
  // has not changed.

  // JH: Refactored - moved out of legacy run method to enable separate
  // init/compute/finalize phase methods.
  //    This structure is essentially a helper for accessing the Arch description.
  //    We should study the Arch description to assess (more systematically)
  //    what types of helpers are needed and where they would go.
  /*
  var activeBridges: ISZ[Art.BridgeId] = ISZ()
  def setUpArchitecture() : Unit = {
    for(e <- Art.bridges.elements if(e.nonEmpty)) {
      activeBridges = activeBridges :+ e.get.id
    }
  }
  def tearDownArchitecture() : Unit = {
    activeBridges = ISZ()
  }
  */

  //================================================================
  //   P l a t f o r m     S t a t e
  //================================================================

  // Architecture description includes any infrastructure necessary to
  // support the platform including communication instrastructure and
  // other resources that may exist across multiple executions

  /*
  def setUpPlatform() : Unit = {
  }
  def tearDownPlatform() : Unit = {
  }
  */

  //================================================================
  //   S y s t e m     S t a t e
  //================================================================

  val inInfrastructurePorts: MMap[Art.PortId, ArtMessage] = concMap()
  val outInfrastructurePorts: MMap[Art.PortId, ArtMessage] = concMap()
  val inPortVariables: MMap[Art.PortId, ArtMessage] = concMap()
  val outPortVariables: MMap[Art.PortId, ArtMessage] = concMap()


  // Initializes system state in preparation for execution of initialize, compute, and finalize phases
  // System state includes any state associated with system execution, e.g., things that would need to be
  // set up and cleared between runs, but does not include things related to system architecture or platform
  // infrastructure that could persist between runs.

  def setUpSystemState(): Unit = {
    inInfrastructurePorts.clear()
    inPortVariables.clear()
    outPortVariables.clear()
    outInfrastructurePorts.clear()

    // clear pending ArtTimer events (also done after a test completes)
    ArtTimer_Ext.m.keys.foreach(ArtTimer_Ext.clearTimeout)

    //scheduler.initialize()
  }

  def tearDownSystemState(): Unit = {
    inInfrastructurePorts.clear()
    inPortVariables.clear()
    outPortVariables.clear()
    outInfrastructurePorts.clear()

    // clear pending ArtTimer events (also done after a test completes)
    ArtTimer_Ext.m.keys.foreach(ArtTimer_Ext.clearTimeout)
  }


  //===============================================================================
  //  Port-related AADL run-time services
  //===============================================================================

  // JH: Refactored -- renamed port data structures
  // TODO -- Consider whether changing the value from ArtMessage to Art.DataContent should happen here (instead of in getValue)
  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    for (portId <- eventPortIds) {
      inInfrastructurePorts.get(portId) match {
        case scala.Some(data) =>
          inInfrastructurePorts -= portId // dequeue from infrastructure port
          inPortVariables(portId) = data // when we shift to queue size greater than 1, we would enqueue here
        case _ =>
      }
    }
    for (portId <- dataPortIds) {
      inInfrastructurePorts.get(portId) match {
        case scala.Some(data) =>
          // for data ports, we don't dequeue from infrastastructure ports
          inPortVariables(portId) = data
        case _ =>
      }
    }
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    // wrap the Art.DataContent value into an ArtMessage with time stamps
    outPortVariables(portId) = ArtMessage(data = data, srcPortId = portId, putValueTimestamp = Art.time())
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    // To return the value of the port to the application code, project
    // out the actual payload value (v.data) from ArtMessage (which includes timestamps, etc.)
    // to Art.DataContent (the "top"/union data type supported by Art.
    // The projecting preserves the option of structure of ArtMessage value.
    val data = inPortVariables.get(portId) match {
      case scala.Some(v) => org.sireum.Some(v.data)
      case _ => org.sireum.None[DataContent]()
    }
    return data
  }

  // JH: Refactored
  //      - change names of port data structures
  //      - introduce a distinction between output port variables and output infrastructure ports
  // ToDo: Introduce the concept of a distinct transfer method.
  //  The way that implementation treats outPortVariables and outInfrastructurePorts is almost nonsensical
  //  until that refactoring is made.
  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = { // SEND_OUTPUT
    for (srcPortId <- eventPortIds ++ dataPortIds) {
      outPortVariables.get(srcPortId) match {
        case scala.Some(msg) =>
          // move payload from out port port variables to the out infrastructure ports
          outInfrastructurePorts(srcPortId) = outPortVariables(srcPortId)
          outPortVariables -= srcPortId

          // simulate sending msg via transport middleware
          for(dstPortId <- Art.connections(srcPortId).elements) {

            val _msg = msg.copy(dstPortId = dstPortId, sendOutputTimestamp = Art.time())

            Art.port(dstPortId).mode match {
              // right now, there is no difference in the logic between data and event ports,
              // but keep the code separate for future refactorings
              case PortMode.DataIn | PortMode.DataOut =>
                inInfrastructurePorts(dstPortId) = _msg
              case PortMode.EventIn | PortMode.EventOut =>
                inInfrastructurePorts(dstPortId) = _msg
            }

            _msg.dstArrivalTimestamp = Art.time()

            ArtDebug_Ext.outputCallback(srcPortId, dstPortId, _msg.data, _msg.dstArrivalTimestamp)
          }

          // payload delivered so remove it from out infrastructure port
          outInfrastructurePorts -= srcPortId
        case _ =>
      }
    }
  }

  // JH: Refactor
  // Manually added by JH to support debugging framework
  //  -- to support being able to see inputs and outputs of a a thread (before/after compute),
  //     clearing of output ports is removed from send_output.
  //  This function is called by scheduler, before calling compute to initialize the
  //  component port state
  def clearPortVariables(bridgeId: Art.BridgeId): Unit = {
    // val b = Art.bridge(bridgeId) -- refactor
    // ToDo: the computation of input/output port ids should be helper functions in Bridge
    // compute inPortIds
    val inPortIds = Art.bridges(bridgeId).get.ports.eventIns.elements.map(_.id) ++ Art.bridges(bridgeId).get.ports.dataIns.elements.map(_.id)
    // iterate through inPortIds and clear the value of each corresponding port variable
    for (portId <- inPortIds) {
      inPortVariables -= portId;
    }
    // compute outPortIds
    val outPortIds = Art.bridges(bridgeId).get.ports.eventOuts.elements.map(_.id) ++ Art.bridges(bridgeId).get.ports.dataOuts.elements.map(_.id)
    // iterate through outPortIds and clear the value of each corresponding port variable
    for (portId <- outPortIds) {
      outPortVariables -= portId;
    }
  }

  //===============================================================================
  //  HAMR Library Services
  //===============================================================================

  def logInfo(title: String, msg: String): Unit = log("info", title, msg)

  def logError(title: String, msg: String): Unit = log("error", title, msg)

  def logDebug(title: String, msg: String): Unit = log("debug", title, msg)

  def time(): Art.Time = toS64(System.currentTimeMillis())

  //===============================================================================
  //  AADL Thread/Scheduling services
  //===============================================================================

  // JH: Refactor to match logic in semantics, group with dispatch status
  def shouldDispatch(bridgeId: Art.BridgeId): B = {
    assert(Art.bridges(bridgeId).nonEmpty, s"Bridge ${bridgeId} does not exist")

    Art.bridges(bridgeId).get.dispatchProtocol match {
      case DispatchPropertyProtocol.Periodic(_) => return T
      case DispatchPropertyProtocol.Sporadic(minRate) =>
        return Art.bridges(bridgeId).get.ports.eventIns.elements.exists(
          port => inInfrastructurePorts.contains(port.id))
    }
  }

  // JH: Refactored -- renamed port data structures
  //     ToDo: add comments justifying various sections of the logic by reference to standard clauses
  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    val ret: DispatchStatus = Art.bridges(bridgeId).get.dispatchProtocol match {
      case Periodic(_) => TimeTriggered()
      case Sporadic(_) =>
        // get ids for non-empty input event ports
        val portIds = ISZ[Art.PortId](Art.bridges(bridgeId).get.ports.eventIns.elements.map(_.id).filter(inInfrastructurePorts.get(_).nonEmpty): _*)
        val urgentFifo = ops.ISZOps(portIds.map(Art.port(_))).sortWith { // reverse sort
          // sorting function to make prioritized sequence of event port ids
          //   compare p1 to p2  (p1 represents the port to process earlier, i.e., should have priority)
          case (p1: UrgentPort[_], p2: UrgentPort[_]) =>
            // if p1 has a strictly less urgency it comes after p2
            if (p1.urgency < p2.urgency) F
            // if p1 has a strictly greater urgency, it comes before p2
            else if (p1.urgency > p2.urgency) T
            // if p1 and p2 have the same urgency, the ordering is determined by arrival timestamps
            else inInfrastructurePorts(p1.id).dstArrivalTimestamp < inInfrastructurePorts(p2.id).dstArrivalTimestamp
          case (_: UrgentPort[_], _: Port[_]) => T // urgent ports take precedence
          case (_: Port[_], _: UrgentPort[_]) => F // urgent ports take precedence
          case (p1: Port[_], p2: Port[_]) =>
            inInfrastructurePorts(p1.id).dstArrivalTimestamp < inInfrastructurePorts(p2.id).dstArrivalTimestamp
        }.map(_.id)
        EventTriggered(urgentFifo)
    }
    return ret
  }

  //===============================================================================
  //  AADL Execution Phases
  //
  //   Note: this could be synchronized a bit more with thread states / hybrid automata
  //   in AADL standard
  //===============================================================================

  def initializePhase(): Unit = {
    logInfo(Art.logTitle, s"Initializing component...")
  }

  def computePhase(): Unit = {
    logInfo(Art.logTitle, s"Begin execution...")
  }

  def finalizePhase(): Unit = {
    logInfo(Art.logTitle, s"End execution...")

    ArtTimer_Ext.finalise()
  }

  def log(kind: String, title: String, msg: String): Unit = {
    Console.out.println(st"""{ "log" : "$kind", "title" : ${Json.Printer.printString(title)}, "msg" : ${Json.Printer.printString(msg)}, "time" : "${time()}" }""".render)
    Console.out.flush()
  }

  def toS64(value: Long): S64 = S64(value)

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

    // delete ALL port values
    inInfrastructurePorts.clear()
    inPortVariables.clear()
    outPortVariables.clear()
    outInfrastructurePorts.clear()

    // clear pending ArtTimer events (also done after a test completes)
    ArtTimer_Ext.m.keys.foreach(ArtTimer_Ext.clearTimeout)

    bridge.entryPoints.testInitialise()
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

  // JH: Refactored
  //   add system test capability
  def initSystemTest(scheduler: Scheduler): Unit = {
    Art.setUpArchitecture()
    Art.setUpPlatform()
    Art.setUpSystemState(scheduler)
    logInfo(Art.logTitle, s"Initialized system for system test")
  }

  //  def executeSystemTest(): Unit = $

  // JH: Refactored
  //   add system test capability
  def finalizeSystemTest(): Unit = {
    Art.tearDownSystemState()
    Art.tearDownPlatform()
    Art.tearDownArchitecture()
  }

  // JH: Refactor
  //  Add code to address the fact that out port variables are now distinct from
  //  out infrastructure ports,  i.e., we must copy from out port variables to
  //  out infrastructure ports
  /**
   * A method that replaces bridge.compute()'s calls to [[Art.sendOutput()]] in
   * its equivalent testCompute() method.
   *
   * This method is currently a NO-OP, but may gain functionality later.
   *
   * @param eventPortIds the event ports to be "copied and cleared" (but currently nothing happens)
   * @param dataPortIds the data ports to be "copied and cleared" (but currently nothing happens)
   */
  def releaseOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = { // testing SEND_OUTPUT
    // note: sendOutput is usually accessed via:
    //   Art.sendOutput -> ArtNative.sendOutput -> ArtNative_Ext.sendOutput
    //JH added:
    for (srcPortId <- eventPortIds ++ dataPortIds) {
      outPortVariables.get(srcPortId) match {
        case scala.Some(msg) =>
          outInfrastructurePorts(srcPortId) = outPortVariables(srcPortId)
        case _ =>
      }
    }
  }

  /**
   * Because a bridge's testCompute() doesn't clear outputs, this method can be
   * used by users to manually clear the output if desired. This is useful for
   * tests involving multiple dispatches.
   */
  def manuallyClearOutput(): Unit = {
    outPortVariables.clear()
  }

  // JH: Refactor
  // ToDo: Rename the functions below to align with the variable names inInfrastructurePort, etc.
  /**
   * Inserts a value into an "infrastructure in" port. For testing only, normally
   * this is handled by Art.
   *
   * @param dstPortId the portId to place the passed [[DataContent]] into
   * @param data the [[DataContent]] which will be placed in the dstPort
   */
  def insertInPortValue(dstPortId: Art.PortId, data: DataContent): Unit = {
    // note: that could would be changed when we refactor to support event queues of size > 1
    val artMessage = ArtMessage(data = data, dstPortId = dstPortId, dstArrivalTimestamp = Art.time())
    // note: right now, there is no difference in the logic between data and event ports, but keep the
    // logic separate for future refactoring
    Art.port(dstPortId).mode match {
      case PortMode.DataIn | PortMode.DataOut =>
        inInfrastructurePorts(dstPortId) = artMessage
      case PortMode.EventIn | PortMode.EventOut =>
        inInfrastructurePorts(dstPortId) = artMessage
    }
  }

  /**
   * Returns the value of an out port.
   *
   * @param portId the id of the OUTPUT port to return a value from
   * @return If the port is non-empty, a [[Some]] of [[DataContent]]. Otherwise [[None]].
   */
  def observeOutPortValue(portId: Art.PortId): Option[DataContent] = {
    // note: would be changed when we refactor to support event queues of size > 1
    outPortVariables.get(portId) match {
      case scala.Some(value: ArtMessage) => org.sireum.Some[DataContent](value.data)
      case scala.None => org.sireum.None[DataContent]()
    }
  }

  // Manually added method to support debugging framework
  /**
   * Returns the value of an out port.
   *
   * @param portId the id of the INPUT port to return a value from
   * @return If the port is non-empty, a [[Some]] of [[DataContent]]. Otherwise [[None]].
   */
  def observeInPortValue(portId: Art.PortId): Option[DataContent] = {
    // right now, with event data port queues limited to size one, there is no difference in the logic
    // between how data ports are treated, and how event/event data ports are treated.
    Art.port(portId).mode match {
      case PortMode.DataIn =>
        inInfrastructurePorts.get(portId) match {
          case scala.Some(value: ArtMessage) => org.sireum.Some[DataContent](value.data)
          case scala.None => org.sireum.None[DataContent]()
        }
      case PortMode.EventIn =>
        inInfrastructurePorts.get(portId) match {
          case scala.Some(value: ArtMessage) => org.sireum.Some[DataContent](value.data)
          case scala.None => org.sireum.None[DataContent]()
        }
      case _ => {
        assert(false, "expecting in port")
        org.sireum.None[DataContent]()
      }
    }
  }

  def observeInPortVariable(portId: Art.PortId): Option[DataContent] = {
    // right now, with event data port queues limited to size one, there is no difference in the logic
    // between how data ports are treated, and how event/event data ports are treated.
    Art.port(portId).mode match {
      case PortMode.DataIn =>
        inPortVariables.get(portId) match {
          case scala.Some(value: ArtMessage) => org.sireum.Some[DataContent](value.data)
          case scala.None => org.sireum.None[DataContent]()
        }
      case PortMode.EventIn =>
        inPortVariables.get(portId) match {
          case scala.Some(value: ArtMessage) => org.sireum.Some[DataContent](value.data)
          case scala.None => org.sireum.None[DataContent]()
        }
      case _ => {
        assert(false, "expecting in port")
        org.sireum.None[DataContent]()
      }
    }
  }

  def observeOutPortVariable(portId: Art.PortId): Option[DataContent] = {
    // note: that could would be changed when we refactor to support event queues of size > 1
    outPortVariables.get(portId) match {
      case scala.Some(value: ArtMessage) => org.sireum.Some[DataContent](value.data)
      case scala.None => org.sireum.None[DataContent]()
    }
  }
}