package HAMR

import art.{Art, Bridge}
import org.scalatest.{BeforeAndAfterEach, OneInstancePerTest}
import org.scalatest.funsuite.AnyFunSuite

/**
 * A test suite that provides the following functionality for unit tests:
 *  - Clears all registers bridges and ports before each test
 *  - Initializes the selected bridge and ports before each test
 *  - Finalizes the bridge after each test
 *  - Creates a new instance of the test suite class for each test
 *    -> NOTE: this is NOT the same as having a separate JVM per-test (or suite), but is useful for test-local variables
 *
 *  If automatic calls to initTest() or finalizeTest() are not desired, simply override beforeEach() or afterEach()
 *  methods to change the desired behavior.
 *
 * @param bridge the bridge being tested, see [[HAMR.Arch]] for potential values.
 * @tparam T the type of the bridge being tested
 */

// This file was auto-generated.  Do no edit

class BridgeTestSuite[+T <: Bridge](val bridge: T) extends AnyFunSuite with OneInstancePerTest with BeforeAndAfterEach {

  /**
   * Automatically called before each test. Currently calls Art.initTest for the given bridge. Override as needed.
   */
  override protected def beforeEach(): Unit = {
    Art.initTest(bridge)
  }

  /**
   * Automatically called after each test. Currently calls Art.finalizeTest for the given bridge. Override as needed.
   */
  override protected def afterEach(): Unit = {
    Art.finalizeTest(bridge)
  }

  /**
   * Invokes testCompute() once per registered bridge.
   *
   * IMPORTANT: This method also clears all bridge output BEFORE each call. This will have no effect the first time it's
   * invoked (because all output will be empty), but it does ensure that output doesn't "leak" across multiple
   * invocations.
   *
   */
  def executeTest(): Unit = {
    Art.manuallyClearOutput()
    Art.executeTest(bridge)
  }
}