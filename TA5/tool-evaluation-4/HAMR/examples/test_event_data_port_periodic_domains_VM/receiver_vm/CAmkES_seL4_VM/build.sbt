// Example sbt build definitions -- the contents of this file will not be overwritten
//
// To open the following project in Sireum IVE select 'File > Open ...' and then
// navigate to the directory containing this file then click 'OK'.  To install
// Sireum IVE see https://github.com/sireum/kekinian#installing

lazy val top_impl_Instance = slangEmbeddedTestProject("top_impl_Instance", ".")


val scalaVer = "2.12.11"

val sireumScalacVersion = "4.20200423.382fffa" // https://github.com/sireum/scalac-plugin/tree/4.20200423.382fffa

val runtimeVersion = "59f0e47" // https://github.com/sireum/runtime/tree/59f0e47

val scalaTestVersion = "3.1.1"


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
    "org.sireum.runtime" %% "library" % runtimeVersion withSources() withJavadoc()
  )
)

val slangEmbeddedSettings = Seq(
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/art",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/architecture",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/bridge",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/component",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/data",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/nix",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/seL4Nix" 
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
