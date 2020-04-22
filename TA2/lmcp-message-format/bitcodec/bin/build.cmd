::#! 2> /dev/null                                             #
@ 2>/dev/null # 2>nul & echo off & goto BOF                   #
if [ -z ${SIREUM_HOME} ]; then                                #
  echo "Please set SIREUM_HOME env var"                       #
  exit -1                                                     #
fi                                                            #
if [ -f "$0.com" ] && [ "$0.com" -nt "$0" ]; then             #
  exec "$0.com" "$@"                                          #
else                                                          #
  rm -fR "$0.com"                                             #
  exec "${SIREUM_HOME}/bin/sireum" slang run -s "$0" "$@"  #
fi                                                            #
:BOF
setlocal
set NEWER=False
if exist %~dpnx0.com for /f %%i in ('powershell -noprofile -executionpolicy bypass -command "(Get-Item %~dpnx0.com).LastWriteTime -gt (Get-Item %~dpnx0).LastWriteTime"') do @set NEWER=%%i
if "%NEWER%" == "True" goto native
del "%~dpnx0.com" > nul 2>&1
if not defined SIREUM_HOME (
  echo Please set SIREUM_HOME env var
  exit /B -1
)
%SIREUM_HOME%\bin\sireum.bat slang run -s -n "%0" %*
exit /B %errorlevel%
:native
%~dpnx0.com %*
exit /B %errorlevel%
::!#
// #Sireum
import org.sireum._

val homeBin = Os.slashDir
val home = homeBin.up
val homeSrc = home / "src"
val sireumHome = Os.path(Os.env("SIREUM_HOME").get)
val sireum: Os.Path = sireumHome / "bin" / (if (Os.isWin) "sireum.bat" else "sireum")

val specSuffix: String = "-spec.sc"
val genSuffix: String = "-gen"
val genBigSuffix: String = s"-be$genSuffix"
val genLittleSuffix: String = s"-le$genSuffix"
var fEndName: String = "-spec.sc"

object Spec {
  @memoize def specs: ISZ[Os.Path] = {
    return for (spec <- Os.Path.walk(homeSrc, F, F, p => ops.StringOps(p.name).endsWith(fEndName))) yield spec
  }

  @memoize def specGensMap: HashSMap[Os.Path, ISZ[Os.Path]] = {
    var r = HashSMap.empty[Os.Path, ISZ[Os.Path]]
    for (spec <- specs) {
      val name = ops.StringOps(spec.name).substring(0, spec.name.size - specSuffix.size)
      val gen = spec.up / s"$name$genSuffix"
      if (gen.exists) {
        r = r + spec ~> ISZ(gen)
      } else {
        val big = spec.up / "big" / s"$name$genBigSuffix"
        val little = spec.up / "little" / s"$name$genLittleSuffix"
        if ((big.up / s"${big.name}.sc").exists && (little.up / s"${little.name}.sc").exists) {
          r = r + spec ~> ISZ(big, little)
        } else {
          r = r + spec ~> ISZ(gen)
        }
      }
    }
    return r
  }
}

import Spec._

def json(): Unit = {
  for (specGens <- specGensMap.entries) {
    val (spec, gens) = specGens

    val name = ops.StringOps(spec.name).substring(0, spec.name.size - 3)
    println(s"Generating bcgen's JSON spec from $spec ...")
    Os.proc(ISZ(sireum.string, "tools", "bcgen", "--mode", "json", "--name", name,
      "--output-dir", spec.up.string, spec.string)).echo.console.runCheck()

    println()
  }
}

def dot(): Unit = {
  for (specGens <- specGensMap.entries) {
    val (spec, _) = specGens

    val name = ops.StringOps(spec.name).substring(0, spec.name.size - 3)
    println(s"Generating Graphviz .dot from $spec ...")
    Os.proc(ISZ(sireum.string, "tools", "bcgen", "--mode", "dot", "--name", name,
      "--output-dir", spec.up.string, spec.string)).echo.console.runCheck()

    val r = Os.proc(ISZ("dot", "-V")).run()
    if (r.exitCode == 0) {
      val sops = ops.StringOps(spec.name)
      val dotFile = spec.up / s"${sops.substring(0, sops.lastIndexOf('.'))}.dot"
      Os.proc(ISZ("dot", "-O", "-Tsvg", dotFile.string)).echo.console.runCheck()
    }
    println()
  }
}

def gen(): Unit = {
  for (specGens <- specGensMap.entries) {
    val (spec, gens) = specGens

    println(s"Generating bitcodec from $spec ...")
    val big = gens(0)
    Os.proc(ISZ(sireum.string, "tools", "bcgen", "--mode", "script", "--name", big.name,
      "--output-dir", big.up.string, spec.string)).echo.console.runCheck()

    if (gens.size == 2) {
      val little = gens(1)
      Os.proc(ISZ(sireum.string, "tools", "bcgen", "--little", "--mode", "script", "--name", little.name,
        "--output-dir", little.up.string, spec.string)).echo.console.runCheck()
    }
    println()
  }
}

def run(gen: Os.Path): Unit = {
  val genPath = s"$gen.sc"
  println(s"Running $genPath ...")
  Os.proc(ISZ(sireum.string, "slang", "run", "--no-server", genPath)).echo.console.runCheck()
  println()
}

def runNative(gen: Os.Path): Unit = {
  val genPath = s"$gen.sc"

  val c = gen.up / "c"
  val out = gen.up / "out"
  val x = out / (if (Os.isWin) s"${gen.name}.exe" else gen.name)

  c.removeAll()
  out.removeAll()
  out.mkdirAll()

  println(s"Compiling $genPath to C ...")
  var seqSizes = "MSZ[B]=63848"
  if (gen.name == "lmcp-gen") {
    seqSizes = s"${seqSizes};MSZ[S32]=8"    // band
    seqSizes = s"${seqSizes};MSZ[S64]=32"   // taskId, entityId, entity
    seqSizes = s"${seqSizes};MSZ[U64]=1"    // id
    seqSizes = s"${seqSizes};MSZ[U8]=65535" // c
    seqSizes = s"${seqSizes};MSZ[BitCodec.MObjectAutomationResponseInfo]=8"
    seqSizes = s"${seqSizes};MSZ[BitCodec.MObjectAutomationResponseVehicleCommand]=64"
    seqSizes = s"${seqSizes};MSZ[BitCodec.MObjectEntityStateInfo]=32"
    seqSizes = s"${seqSizes};MSZ[BitCodec.MObjectMissionCommand]=16"
    seqSizes = s"${seqSizes};MSZ[BitCodec.MObjectPayloadState]=8"
    seqSizes = s"${seqSizes};MSZ[BitCodec.MObjectPoint]=1024"
    seqSizes = s"${seqSizes};MSZ[BitCodec.MObjectViewAngle]=16"
    seqSizes = s"${seqSizes};MSZ[BitCodec.MObjectWaypointVehicleAction]=8"
    seqSizes = s"${seqSizes};MSZ[BitCodec.MObjectWaypoint]=1024"
    seqSizes = s"${seqSizes};MSZ[BitCodec.MObjectPayloadStateParameter]=8"
    seqSizes = s"${seqSizes};MSZ[BitCodec.MObjectTaskParameter]=8"
  }

  Os.proc(ISZ(sireum.string, "slang", "transpilers", "c", "--string-size", "2048", "--stack-size", "1024*1024*1024",
    "--sequence", seqSizes, "--output-dir", c.string, "--name", gen.name, genPath)).echo.console.runCheck()
  println()

  println(s"Compiling executable $x ...")
  Os.proc(ISZ("cmake", "-DCMAKE_BUILD_TYPE=Release", s"..${Os.fileSep}c")).at(out).echo.console.runCheck()
  println()

  Os.proc(ISZ("make", "-j", "4")).at(out).echo.console.runCheck()
  println()

  println(s"Running $x ...")
  Os.proc(ISZ(x.string)).console.runCheck()
  println()
  println()
}

def all(): Unit = {
  for (specGens <- specGensMap.entries) {
    val (spec, gens) = specGens

    println(s"Generating bitcodec from $spec ...")
    val big = gens(0)
    Os.proc(ISZ(sireum.string, "tools", "bcgen", "--mode", "script", "--name", big.name,
      "--output-dir", big.up.string, spec.string)).echo.console.runCheck()

    if (gens.size == 2) {
      val little = gens(1)
      Os.proc(ISZ(sireum.string, "tools", "bcgen", "--little", "--mode", "script", "--name", little.name,
        "--output-dir", little.up.string, spec.string)).echo.console.runCheck()
    }
    println()

    println(s"Generating JSON, and Graphviz .dot from $spec ...")
    val name = ops.StringOps(spec.name).substring(0, spec.name.size - 3)
    Os.proc(ISZ(sireum.string, "tools", "bcgen", "--mode", "json,dot", "--name", name,
      "--output-dir", spec.up.string, spec.string)).echo.console.runCheck()
    println()
    val sops = ops.StringOps(spec.name)
    val dotFile = spec.up / s"${sops.substring(0, sops.lastIndexOf('.'))}.dot"
    Os.proc(ISZ("dot", "-O", "-Tsvg", dotFile.string)).echo.console.runCheck()
    println()

    for (gen <- gens) {
      run(gen)
      runNative(gen)
    }
  }
}

def usage(): Unit = {
  println("Usage: ( gen | json | dot | run | run-native | all | <name>-spec.sc )+")
}

if (Os.cliArgs.size > 0) {
  for (arg <- Os.cliArgs) {
    if (ops.StringOps(arg).endsWith(".sc")) {
      fEndName = arg
    }    
  }
  if (ops.ISZOps(Os.cliArgs).exists((arg: String) => arg == "all")) {
    all()
  } else {
    for (arg <- Os.cliArgs) {
      arg match {
        case string"gen" => gen()
        case string"json" => json()
        case string"dot" => dot()
        case string"run" =>
          for (specGens <- specGensMap.entries) {
            for (gen <- specGens._2) {
              run(gen)
            }
          }
        case string"run-native" =>
          for (specGens <- specGensMap.entries) {
            for (gen <- specGens._2) {
              runNative(gen)
            }
          }
        case _ =>
          if (!ops.StringOps(arg).endsWith("-spec.sc")) {
            usage()
            eprintln(s"Unrecognized argument: $arg")
            Os.exit(-1)
          }
      }
    }
  }
} else {
  usage()
}
