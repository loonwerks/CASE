lazy val uavProject = slangEmbeddedProject("uav-project")

lazy val uavProjectExtern = slangEmbeddedProject("uav-project-extern")

val scalaVer = "2.12.9"

val sireumScalacVersion = "4.20190806.50272f6"

val runtimeVersion = "51ee010f73"

val commonSettings = Seq(
  organization := "org.sireum",
  incOptions := incOptions.value.withLogRecompileOnMacro(false),
  scalaVersion := scalaVer,
  scalacOptions := Seq("-target:jvm-1.8", "-deprecation",
    "-Ydelambdafy:method", "-feature", "-unchecked", "-Xfatal-warnings"),
  Test / parallelExecution := true,
  resolvers ++= Seq(Resolver.sonatypeRepo("public"), "jitpack" at "https://jitpack.io"),
  addCompilerPlugin("org.sireum" %% "scalac-plugin" % sireumScalacVersion),
  libraryDependencies += "org.sireum.runtime" %% "library" % runtimeVersion
)

val slangEmbeddedSettings = Seq(
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/architecture",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/art",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/bridge",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/component",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/data",
  Compile / unmanagedSourceDirectories += baseDirectory.value / "src/main/nix"
)

def slangEmbeddedProject(projId: String) =
  Project(id = projId, base = file(projId)).settings(commonSettings ++ slangEmbeddedSettings).settings(
    mainClass in assembly := Some("uav_project_extern.Demo")
  )