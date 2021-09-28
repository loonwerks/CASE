// #Sireum

package hamr

import org.sireum._
import art.scheduling.Scheduler

// This file will not be overwritten so is safe to edit

object Demo extends App {

  /** @return the scheduler to use for JVM based simulation as well as the 'default' scheduler
    *         that will be used when taking this program down to C/Linux.  Refer to
    *         'bin/run.sh -h' if you want to use a specific scheduler for C.  If the scheduler
    *         accepts a schedule and you want to provide that in C then just pass None()
    *
    *         If you want to use the legacy scheduler for C then you must use
    *           bin/transpile.cmd --legacy
    *           bin/compile.cmd
    *           bin/run.sh --legacy
    */
  def defaultScheduler(): Scheduler = {
    return Schedulers.getRoundRobinScheduler(None())
  }

  def main(args: ISZ[String]): Z = {
    Cli(' ').parseRun(args, 0) match {
      case Some(o: Cli.RunOption) =>
        val scheduler: Scheduler = o.scheduler match {
          case Cli.RunChoice.Default => defaultScheduler()
          case Cli.RunChoice.RoundRobin => Schedulers.getRoundRobinScheduler(None())
          case Cli.RunChoice.Static => Schedulers.getStaticScheduler(None())
          case Cli.RunChoice.Legacy => Schedulers.getLegacyScheduler()
        }
        art.Art.run(Arch.ad, scheduler)
      case Some(o: Cli.HelpOption) =>
      case _ => return 1
    }
    return 0
  }
}

object Cli {

  @datatype trait RunTopOption

  @datatype class HelpOption extends RunTopOption

  @enum object RunChoice {
    'Default
    'RoundRobin
    'Static
    'Legacy
  }

  @datatype class RunOption(
                             val help: String,
                             val args: ISZ[String],
                             val scheduler: RunChoice.Type
                           ) extends RunTopOption
}

import Cli._

@record class Cli(val pathSep: C) {

  def parseRunChoiceH(arg: String): Option[RunChoice.Type] = {
    arg match {
      case "default" => return Some(RunChoice.Default)
      case "roundRobin" => return Some(RunChoice.RoundRobin)
      case "static" => return Some(RunChoice.Static)
      case "legacy" => return Some(RunChoice.Legacy)
      case s =>
        eprintln(s"Expecting one of the following: { default, roundRobin, static, legacy }, but found '$s'.")
        return None()
    }
  }

  def parseRunChoice(args: ISZ[String], i: Z): Option[RunChoice.Type] = {
    if (i >= args.size) {
      eprintln("Expecting one of the following: { default, roundRobin, static, legacy }, but none found.")
      return None()
    }
    val r = parseRunChoiceH(args(i))
    return r
  }

  def parseRun(args: ISZ[String], i: Z): Option[RunTopOption] = {

    def help(): Unit = {
      println("Run Slang Embedded Program")
      println()
      println("Usage: <option>*")
      println()
      println("Available Options:")
      println("-s, --scheduler          The scheduler to use.  See Demo.scala for information")
      println("                           on 'default' (expects one of { default, roundRobin,")
      println("                           static, legacy }; default: default)")
      println("-h, --help               Display this information")
    }

    var scheduler: RunChoice.Type = RunChoice.Default
    var j = i
    var isOption = T
    while (j < args.size && isOption) {
      var arg = args(j)
      if (arg == "-h" || arg == "--help") {
        help()
        return Some(HelpOption())
      } else if (arg == "-s" || arg == "--scheduler") {
        val o: Option[RunChoice.Type] = parseRunChoice(args, j + 1)
        o match {
          case Some(v) => scheduler = v
          case _ => return None()
        }
      } else {
        eprintln(s"Unrecognized option '$arg'.")
        return None()
      }
      j = j + 2
    }

    return Some(RunOption("", args, scheduler))
  }
}
