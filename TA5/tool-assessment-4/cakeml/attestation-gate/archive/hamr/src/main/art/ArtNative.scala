// #Sireum

package art

import org.sireum._

@ext object ArtNative {

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = $

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = $

  def putValue(portId: Art.PortId, data: DataContent): Unit = $

  def getValue(portId: Art.PortId): Option[DataContent] = $

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = $

  def logInfo(title: String, msg: String): Unit = $

  def logError(title: String, msg: String): Unit = $

  def logDebug(title: String, msg: String): Unit = $

  def run(): Unit = $

  def time(): Art.Time = $

  /////////////
  // TESTING //
  /////////////

  /**
   * Calls the initialize entry points on all registered bridges.
   * Testers should NOT call this method because BridgeTestSuite will automatically call this method before each test.
   *
   * (note: BridgeTestSuite exists only in the test scope)
   */
  def initTest(bridge: Bridge): Unit = $

  /**
   * Precondition: executeInit() has been called prior.
   *
   * Executes the testCompute() method one time for each registered bridge.
   *
   * Unlike [[Art.run()]], this method does NOT wrap compute calls in a try-catch block.
   * This is to ensure no exceptions are overlooked during testing.
   */
  def executeTest(bridge: Bridge): Unit = $

  /**
   * Calls the finalize entry points on all registered bridges.
   * Testers should NOT call this method because BridgeTestSuite will automatically call this method after each test.
   *
   * (note: BridgeTestSuite exists only in the test scope)
   */
  def finalizeTest(bridge: Bridge): Unit = $

  /**
   * A method that replaces bridge.compute()'s calls to [[Art.sendOutput()]] in its equivalent testCompute() method.
   *
   * This method is currently a NO-OP, but may gain functionality later.
   *
   * @param eventPortIds the event ports to be "copied and cleared" (but currently nothing happens)
   * @param dataPortIds the data ports to be "copied and cleared" (but currently nothing happens)
   */
  def releaseOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = $

  /**
   * Because a bridge's testCompute() doesn't clear outputs, this method can be used by users to manually
   * clear the output if desired. This is useful for tests involving multiple dispatches.
   */
  def manuallyClearOutput(): Unit = $

  /**
   * Inserts a value into an "infrastructure in" port. For testing only, normally this is handled by Art.
   *
   * @param dstPortId the portId to place the passed [[DataContent]] into
   * @param data the [[DataContent]] which will be placed in the dstPort
   */
  def insertInPortValue(dstPortId: Art.PortId, data: DataContent): Unit = $

  /**
   * Returns the value of an out port.
   *
   * @param portId the id of the OUTPUT port to return a value from
   * @return If the port is non-empty, a [[Some]] of [[DataContent]]. Otherwise [[None]].
   */
  def observeOutPortValue(portId: Art.PortId): Option[DataContent] = $

}
