::#! 2> /dev/null                                   #
@ 2>/dev/null # 2>nul & echo off & goto BOF         #
if [ -z ${SIREUM_HOME} ]; then                      #
  echo "Please set SIREUM_HOME env var"             #
  exit -1                                           #
fi                                                  #
exec ${SIREUM_HOME}/bin/sireum slang run "$0" "$@"  #
:BOF
setlocal
if not defined SIREUM_HOME (
  echo Please set SIREUM_HOME env var
  exit /B -1
)
%SIREUM_HOME%\\bin\\sireum.bat slang run "%0" %*
exit /B %errorlevel%
::!#
// #Sireum

import org.sireum._

// This file was auto-generated.  Do not edit

val home = Os.slashDir

Cli(Os.pathSepChar).parseCompile(Os.cliArgs, 0) match {
  case Some(o: Cli.CompileOption) if o.args.size == 0 =>
    val nixDir = home / "/../nix" / "slang-build"
    if(!nixDir.up.exists){
      eprintln(s"Directory does not exist, have your run the transpiler? ${nixDir.up}")
      Os.exit(-1)
    }
    nixDir.mkdir()

    if((nixDir / "CMakeCache.txt").exists) {
      // remove cached transpiler variables
      proc"cmake -U BOUND_CHECK -U NO_PRINT -U RANGE_CHECK -U WITH_LOC ..".at(nixDir).console.run()
    }

    var cmake: ISZ[String] = ISZ("cmake")
    if(o.boundCheck) { cmake = cmake :+ "-D" :+ "BOUND_CHECK=ON" }
    if(o.noPrint) { cmake = cmake :+ "-D" :+ "NO_PRINT=ON" }
    if(o.rangeCheck) { cmake = cmake :+ "-D" :+ "RANGE_CHECK=ON" }
    if(o.withLoc) { cmake = cmake :+ "-D" :+ "WITH_LOC=ON" }
    cmake = (cmake :+ "-D" :+ "CMAKE_BUILD_TYPE=Release") :+ ".."

    if(Os.proc(cmake).at(nixDir).console.run().ok) {
      val MAKE_ARGS: String = Os.env("MAKE_ARGS") match {
        case Some(o) => o
        case _ => ""
      }
      if(proc"make --jobs ${o.jobs} ${MAKE_ARGS}".at(nixDir).console.run().ok) {
        val binDir = home / "slang-build"
        binDir.removeAll()
        binDir.mkdir()

        if(Os.isWin) {
          nixDir.list.filter(p => p.ext == "exe").foreach((f: Os.Path) => f.moveTo(binDir / f.name))
        } else {
          nixDir.list.filter(p => ops.StringOps(p.name).endsWith("_App")).foreach((f: Os.Path) => f.moveTo(binDir / f.name))
          val candidates: ISZ[Os.Path] = ISZ[String]("Demo", "LegacyDemo").map((m: String) => nixDir / m)
          val main: ISZ[Os.Path] = candidates.filter((p: Os.Path) => p.exists)
          if(main.isEmpty || main.size > 1) {
            eprintln(s"Found ${main.size} possible main programs.  There should be only one of the following: ${candidates}")
            Os.exit(1)
          }
          main(0).moveTo(binDir / main(0).name)
        }
        Os.exit(0)
      }
    }
  case Some(o: Cli.CompileOption) =>
    println(o.help)
    Os.exit(0)
  case Some(o: Cli.HelpOption) => Os.exit(0)
  case _ =>
    eprintln("Could not recognize arguments")
}

Os.exit(-1)

import org.sireum._

object Cli {

  @datatype trait CompileTopOption

  @datatype class HelpOption extends CompileTopOption

  @datatype class CompileOption(
    val help: String,
    val args: ISZ[String],
    val boundCheck: B,
    val noPrint: B,
    val rangeCheck: B,
    val withLoc: B,
    val jobs: Z
  ) extends CompileTopOption
}

import Cli._

@record class Cli(val pathSep: C) {

  def parseCompile(args: ISZ[String], i: Z): Option[CompileTopOption] = {
    val help =
      st"""Compile Slang Embedded Programs
          |
          |Usage: <option>*
          |
          |Available Options:
          |-b, --bound-check        Build the program with sequence bound checking
          |-p, --no-print           Build the program without console output
          |-r, --range-check        Build the program with range checking
          |-l, --with-loc           Build the program with Slang location info
          |-j, --jobs               Number of make jobs to run in parallel (expects an
          |                           integer; default is 4)
          |-h, --help               Display this information""".render

    var boundCheck: B = false
    var noPrint: B = false
    var rangeCheck: B = false
    var withLoc: B = false
    var jobs: Z = 4
    var j = i
    var isOption = T
    while (j < args.size && isOption) {
      val arg = args(j)
      if (ops.StringOps(arg).first == '-') {
        if (args(j) == "-h" || args(j) == "--help") {
          println(help)
          return Some(HelpOption())
        } else if (arg == "-b" || arg == "--bound-check") {
           val o: Option[B] = { j = j - 1; Some(!boundCheck) }
           o match {
             case Some(v) => boundCheck = v
             case _ => return None()
           }
         } else if (arg == "-p" || arg == "--no-print") {
           val o: Option[B] = { j = j - 1; Some(!noPrint) }
           o match {
             case Some(v) => noPrint = v
             case _ => return None()
           }
         } else if (arg == "-r" || arg == "--range-check") {
           val o: Option[B] = { j = j - 1; Some(!rangeCheck) }
           o match {
             case Some(v) => rangeCheck = v
             case _ => return None()
           }
         } else if (arg == "-l" || arg == "--with-loc") {
           val o: Option[B] = { j = j - 1; Some(!withLoc) }
           o match {
             case Some(v) => withLoc = v
             case _ => return None()
           }
         } else if (arg == "-j" || arg == "--jobs") {
           val o: Option[Z] = parseNum(args, j + 1, Some(1), None())
           o match {
             case Some(v) => jobs = v
             case _ => return None()
           }
         } else {
          eprintln(s"Unrecognized option '$arg'.")
          return None()
        }
        j = j + 2
      } else {
        isOption = F
      }
    }
    return Some(CompileOption(help, parseArguments(args, j), boundCheck, noPrint, rangeCheck, withLoc, jobs))
  }

  def parseArguments(args: ISZ[String], i: Z): ISZ[String] = {
    var r = ISZ[String]()
    var j = i
    while (j < args.size) {
      r = r :+ args(j)
      j = j + 1
    }
    return r
  }

  def parsePaths(args: ISZ[String], i: Z): Option[ISZ[String]] = {
    return tokenize(args, i, "path", pathSep, F)
  }

  def parsePath(args: ISZ[String], i: Z): Option[Option[String]] = {
    if (i >= args.size) {
      eprintln("Expecting a path, but none found.")
    }
    return Some(Some(args(i)))
  }

  def parseStrings(args: ISZ[String], i: Z, sep: C): Option[ISZ[String]] = {
    tokenize(args, i, "string", sep, F) match {
      case r@Some(_) => return r
      case _ => return None()
    }
  }

  def parseString(args: ISZ[String], i: Z): Option[Option[String]] = {
    if (i >= args.size) {
      eprintln("Expecting a string, but none found.")
      return None()
    }
    return Some(Some(args(i)))
  }

  def parseNums(args: ISZ[String], i: Z, sep: C, minOpt: Option[Z], maxOpt: Option[Z]): Option[ISZ[Z]] = {
    tokenize(args, i, "integer", sep, T) match {
      case Some(sargs) =>
        var r = ISZ[Z]()
        for (arg <- sargs) {
          parseNumH(arg, minOpt, maxOpt) match {
            case Some(n) => r = r :+ n
            case _ => return None()
          }
        }
        return Some(r)
      case _ => return None()
    }
  }

  def tokenize(args: ISZ[String], i: Z, tpe: String, sep: C, removeWhitespace: B): Option[ISZ[String]] = {
    if (i >= args.size) {
      eprintln(s"Expecting a sequence of $tpe separated by '$sep', but none found.")
      return None()
    }
    val arg = args(i)
    return Some(tokenizeH(arg, sep, removeWhitespace))
  }

  def tokenizeH(arg: String, sep: C, removeWhitespace: B): ISZ[String] = {
    val argCis = conversions.String.toCis(arg)
    var r = ISZ[String]()
    var cis = ISZ[C]()
    var j = 0
    while (j < argCis.size) {
      val c = argCis(j)
      if (c == sep) {
        r = r :+ conversions.String.fromCis(cis)
        cis = ISZ[C]()
      } else {
        val allowed: B = c match {
          case c"\n" => !removeWhitespace
          case c" " => !removeWhitespace
          case c"\r" => !removeWhitespace
          case c"\t" => !removeWhitespace
          case _ => T
        }
        if (allowed) {
          cis = cis :+ c
        }
      }
      j = j + 1
    }
    if (cis.size > 0) {
      r = r :+ conversions.String.fromCis(cis)
    }
    return r
  }

  def parseNumChoice(args: ISZ[String], i: Z, choices: ISZ[Z]): Option[Z] = {
    val set = HashSet.empty[Z] ++ choices
    parseNum(args, i, None(), None()) match {
      case r@Some(n) =>
        if (set.contains(n)) {
          return r
        } else {
          eprintln(s"Expecting one of the following: $set, but found $n.")
          return None()
        }
      case r => return r
    }
  }

  def parseNum(args: ISZ[String], i: Z, minOpt: Option[Z], maxOpt: Option[Z]): Option[Z] = {
    if (i >= args.size) {
      eprintln(s"Expecting an integer, but none found.")
      return None()
    }
    return parseNumH(args(i), minOpt, maxOpt)
  }

  def parseNumH(arg: String, minOpt: Option[Z], maxOpt: Option[Z]): Option[Z] = {
    Z(arg) match {
      case Some(n) =>
        minOpt match {
          case Some(min) =>
            if (n < min) {
              eprintln(s"Expecting an integer at least $min, but found $n.")
              return None()
            }
          case _ =>
        }
        maxOpt match {
          case Some(max) =>
            if (n > max) {
              eprintln(s"Expecting an integer at most $max, but found $n.")
              return None()
            }
            return Some(n)
          case _ =>
        }
        return Some(n)
      case _ =>
        eprintln(s"Expecting an integer, but found '$arg'.")
        return None()
    }
  }

  def select(mode: String, args: ISZ[String], i: Z, choices: ISZ[String]): Option[String] = {
    val arg = args(i)
    var cs = ISZ[String]()
    for (c <- choices) {
      if (ops.StringOps(c).startsWith(arg)) {
        cs = cs :+ c
      }
    }
    cs.size match {
      case z"0" =>
        eprintln(s"$arg is not a mode of $mode.")
        return None()
      case z"1" => return Some(cs(0))
      case _ =>
        eprintln(
          st"""Which one of the following modes did you mean by '$arg'?
              |${(cs, "\n")}""".render)
        return None()
    }
  }
}
// @formatter:on

// BEGIN USER CODE

// END USER CODE

