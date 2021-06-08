::#! 2> /dev/null                                             #
@ 2>/dev/null # 2>nul & echo off & goto BOF                   #
if [ -f "$0.com" ] && [ "$0.com" -nt "$0" ]; then             #
  exec "$0.com" "$@"                                          #
fi                                                            #
rm -f "$0.com"                                                #
if [ -z ${SIREUM_HOME} ]; then                                #
  echo "Please set SIREUM_HOME env var"                       #
  exit -1                                                     #
fi                                                            #
exec ${SIREUM_HOME}/bin/sireum slang run -n "$0" "$@"      #
:BOF
if not defined SIREUM_HOME (
  echo Please set SIREUM_HOME env var
  exit /B -1
)
%SIREUM_HOME%\bin\sireum.bat slang run -n "%0" %*
exit /B %errorlevel%
::!#
// #Sireum

import org.sireum._

@datatype class container(cakemlDir: Os.Path,
                          destDir: Os.Path,
                          destFilePrefix: String)

val home: Os.Path = Os.slashDir
val cakemlDir: Os.Path = home


val attestation_gate = container(
  cakemlDir = cakemlDir / "CASE_AttestationGate_thr_Impl", 
  destDir = cakemlDir / "CASE_AttestationGate_thr_Impl",
  destFilePrefix = "CASE_AttestationGate_thr_Impl")

val stripped = ops.ISZOps(Os.cliArgs).contains("--stripped") // cakeml doesn't care if '--stripped' is passed in

for(c <- ISZ(attestation_gate)){
  assert(c.cakemlDir.exists, c.cakemlDir.value)
  assert(c.destDir.exists, c.destDir.value)
  
  val fileContents = ISZ[String]("_api", "_client", "_control").map((s: String) => {
    if(stripped && (c.cakemlDir / s"${c.cakemlDir.name}${s}_stripped.cml").exists) {
      println(s"Using stripped version of ${c.cakemlDir.name}${s}")
      (c.cakemlDir / s"${c.cakemlDir.name}${s}_stripped.cml").read
    } else {
      (c.cakemlDir / s"${c.cakemlDir.name}${s}.cml").read
    }})
  
  var combine: ST = st"${(fileContents, "\n")}"

  val dest = c.destDir / s"${c.destFilePrefix}.cml"
  dest.writeOver(combine.render)
  println(s"Wrote: ${dest}")

  val destS = c.destDir / s"${c.destFilePrefix}.S"

  val cakeOptions = ops.ISZOps(Os.cliArgs).foldLeft[String]((a, b) => s"$a $b", "")
  
  val results = Os.proc(ISZ("bash", "-c", s"cake ${cakeOptions} --heap_size=4 --stack_size=4 < ${dest.canon}")).runCheck()

  //val contents = ops.StringOps(results.out).replaceAllLiterally("main", "run")
  destS.writeOver(results.out)
  Os.procs(s"sed -i s/cdecl(main)/cdecl(run)/ ${destS.canon}").runCheck()
  println(s"Wrote: ${destS}")

  println()
}
