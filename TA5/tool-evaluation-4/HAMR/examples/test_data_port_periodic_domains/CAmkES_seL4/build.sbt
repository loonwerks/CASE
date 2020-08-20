// Example sbt build definitions -- the contents of this file will not be overwritten
//
// To open the following project in Sireum IVE select 'File > Open ...' and
// navigate to the directory containing this file then click 'OK'.  To install
// Sireum IVE see https://github.com/sireum/kekinian#installing
//
// To run the demo from the command line:
//   sbt run
//
// To run the example unit tests:
//   sbt test
//
// To build a runnable/executable jar:
//   sbt assembly
//
// To skip running the unit tests while building the executable jar:
//   sbt 'set test in assembly := {}' assembly
// on Linux/Mac, or
//   sbt "set test in assembly := {}" assembly
// on Windows
//
// sbt can be obtained from https://www.scala-sbt.org/download.html

lazy val top_impl_Instance = slangEmbeddedTestProject("top_impl_Instance", ".")


val scalaVer = "2.12.12"

val sireumScalacVersion = "4.20200713.0b7fce8" // https://github.com/sireum/scalac-plugin/tree/4.20200713.0b7fce8

// kekinian commit corresponding to runtime https://github.com/sireum/runtime/tree/b6cb950ab7
val kekinianVersion = "fd1ad35555" // https://github.com/sireum/kekinian/tree/fd1ad35555

val scalaTestVersion = "3.2.0"


val commonSettings = Seq(
  organization := "org.sireum",
  incOptions := incOptions.value.withLogRecompileOnMacro(false),
  scalaVersion := scalaVer,
  scalacOptions := Seq("-target:jvm-1.8", "-deprecation",
    "-Ydelambdafy:method", "-feature", "-unchecked", "-Xfatal-warnings"),
  Test / parallelExecution := true,
  resolvers ++= Seq(Resolver.sonatypeRepo("public"), "jitpack" at "https://jitpack.io"),
  addCompilerPlugin("org.sireum" %% "scalac-plugin" % sireumScalacVersion),
  libraryDependencies ++= Seq(
    "org.sireum.kekinian" %% "library" % kekinianVersion withSources() withJavadoc()
  )
)

import sbtassembly.AssemblyPlugin.defaultUniversalScript
val slangEmbeddedSettings = Seq(
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/art",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/architecture",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/bridge",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/component",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/data",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/nix",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/seL4Nix",

  mainClass in (Compile, run) := Some("test_data_port_periodic_domains.Demo"),

  mainClass in assembly := Some("test_data_port_periodic_domains.Demo"),
  assemblyJarName in assembly := "top_impl_Instance.jar",
  assemblyOption in assembly := (assemblyOption in assembly).value.copy(prependShellScript = Some(defaultUniversalScript(shebang = false))),

  assemblyMergeStrategy in assembly := {
    case PathList("META-INF", xs @ _*) => MergeStrategy.discard
    case x => MergeStrategy.first
  }
)

def standardProject(projId: String, projectDirectory: String) =
  Project(id = projId, base = file(projectDirectory)).settings(commonSettings)

def slangEmbeddedProject(projId: String, projectDirectory: String) =
  Project(id = projId, base = file(projectDirectory)).
    settings(commonSettings ++ slangEmbeddedSettings)

def slangEmbeddedTestProject(projId: String, projectDirectory: String) =
  Project(id = projId, base = file(projectDirectory)).
    settings(commonSettings ++ slangEmbeddedSettings ++
      Seq(
        Compile / unmanagedSourceDirectories in Test += baseDirectory.value / "src/test/bridge",
        libraryDependencies += "org.scalatest" %% "scalatest" % scalaTestVersion % "test")
    )
