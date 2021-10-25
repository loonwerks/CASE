package art.scheduling.roundrobin

import art.{Art, ArtNative}
import org.sireum.B
import java.util.concurrent.atomic.AtomicBoolean

object RoundRobinExtensions_Ext {
  var terminated = new AtomicBoolean(false)

  def init(): Unit = {
    ArtNative.logInfo(Art.logTitle, s"Start execution (press Enter twice to terminate) ...")

    new Thread(() => {
      Console.in.readLine()
      terminated.set(true)
    }).start()
  }

  def shouldStop(): B = {
    return terminated.get()
  }
}
