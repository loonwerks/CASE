// Example sbt build definitions -- the contents of this file will not be overwritten
//
// sbt can be obtained from https://www.scala-sbt.org/download.html
//
// To run the demo from the command line:
//   sbt run
//
// To run the example unit tests from the command line:
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
// Sireum IVE:
//   In IVE select 'File > Open ...' and navigate to the directory containing
//   this file then click 'OK'.  To install Sireum IVE see https://github.com/sireum/kekinian#installing
//
//   To run the demo from within Sireum IVE:
//     Right click src/main/architecture/pfc/Demo.scala and choose "Run 'Demo'"
//
//   To run the unit test cases from within Sireum IVE:
//     Right click the src/test/bridge directory and choose "Run ScalaTests in bridge"
//
//   NOTE: A ClassNotFoundException may be raised the first time you try to
//         run the demo or unit tests.  If this occurs simply delete the directory
//         named 'target' and retry


lazy val PFC_Sys_Impl_Instance = slangEmbeddedProject("PFC_Sys_Impl_Instance", ".")

// refer to https://github.com/sireum/kekinian/blob/master/versions.properties
// to get the most recent versions of the following dependencies

// versions.properties key: org.scala-lang%scala-library%
val scalaVer = "2.13.6"

// versions.properties key: org.scalatest%%scalatest%%
val scalaTestVersion = "3.2.9"

// versions.properties key: org.sireum%%scalac-plugin%
// https://github.com/sireum/scalac-plugin/tree/4.20210518.efc9ab1
val sireumScalacVersion = "4.20210518.efc9ab1"


// refer to https://github.com/sireum/kekinian/releases to get the latest
// Sireum Kekinian release: https://github.com/sireum/kekinian/tree/4.20210512.a968fb3
val kekinianVersion = "4.20210512.a968fb3"


val inspectorVersion = "0.6-SNAPSHOT"

val formsRtVersion = "7.0.3"



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

  Compile / unmanagedSourceDirectories in Test += baseDirectory.value / "src/test/bridge",
  Compile / unmanagedSourceDirectories in Test += baseDirectory.value / "src/test/util",

  libraryDependencies += "org.scalatest" %% "scalatest" % scalaTestVersion % "test",

  // Jetbrains UI Designer
  libraryDependencies += "com.intellij" % "forms_rt" % formsRtVersion,

  mainClass in (Compile, run) := Some("pfc.Demo"),

  mainClass in assembly := Some("pfc.Demo"),
  assemblyJarName in assembly := "PFC_Sys_Impl_Instance.jar",
  assemblyOption in assembly := (assemblyOption in assembly).value.copy(prependShellScript = Some(defaultUniversalScript(shebang = false))),

  assemblyMergeStrategy in assembly := {
    case PathList("META-INF", xs @ _*) => MergeStrategy.discard
    case x => MergeStrategy.first
  }
)

val slangEmbeddedInspectorSettings = Seq(
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/inspector",

  libraryDependencies += "org.sireum" % "inspector-capabilities" % inspectorVersion withSources(),
  libraryDependencies += "org.sireum" % "inspector-gui" % inspectorVersion withSources(),
  libraryDependencies += "org.sireum" % "inspector-services-jvm" % inspectorVersion withSources(),

  mainClass in (Compile, run) := Some("pfc.InspectorDemo"),
)

def slangEmbeddedProject(projId: String, projectDirectory: String) =
  Project(id = projId, base = file(projectDirectory)).
    settings(commonSettings ++ slangEmbeddedSettings)

def slangEmbeddedInspectorProject(projId: String, projectDirectory: String) = {
  Project(id = projId, base = file(projectDirectory)).
    settings(commonSettings ++ slangEmbeddedSettings ++ slangEmbeddedInspectorSettings)
}
