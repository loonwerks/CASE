import mill._
import scalalib._
import ammonite.ops._

// Example mill build -- the contents of this file will not be overwritten.
//
// mill can be obtained following instructions at https://github.com/sireum/kekinian#slang-app-example-mill-project
//
// To run the demo from the command line:
//   $SIREUM_HOME/bin/mill HAMR_Simple_V4.run
//
// To run the example unit tests:
//   $SIREUM_HOME/bin/mill HAMR_Simple_V4.tests
//
// Sireum IVE:
//   First cd to the directory containing this file and execute the following:
//
//     $SIREUM_HOME/bin/sireum tools ivegen -f -m mill -n HAMR_Simple_V4 ../
//
//   Then in IVE select 'File > Open ...' and navigate to the directory
//   containing this file then click 'OK'.  To have the codebase and its
//   test suites recompiled upon changes, run:
//
//     $SIREUM_HOME/bin/mill -w HAMR_Simple_V4.tests.compile
//
// Visual Studio Code:
//   Follow Sireum Kekinian's instructions for setting up a development
//   environment using Scala Metals: https://github.com/sireum/kekinian#scala-metals
//   Then open the folder containing this file in VS Code and import the
//   mill build when asked.


object `HAMR_Simple_V4` extends slangEmbeddedProject

trait SlangEmbeddedModule extends ScalaModule {

  // refer to https://github.com/sireum/kekinian/blob/master/versions.properties
  // to get the most recent versions of the following dependencies

  // versions.properties key: org.scala-lang%scala-library%
  val scalaVer = "2.13.6"

  // versions.properties key: org.scalatest%%scalatest%%
  val scalaTestVersion = "3.2.9"

  // versions.properties key: org.sireum%%scalac-plugin%
  // https://github.com/sireum/scalac-plugin/tree/4.20210605.5d93825
  val sireumScalacVersion = "4.20210605.5d93825"


  // refer to https://github.com/sireum/kekinian/releases to get the latest
  // Sireum Kekinian release: https://github.com/sireum/kekinian/tree/4.20210607.d204053
  val kekinianVersion = "4.20210607.d204053"


  val inspectorVersion = "0.6-SNAPSHOT"

  val formsRtVersion = "7.0.3"


  def scalaVersion = scalaVer

  override def javacOptions = T { Seq("-source", "1.8", "-target", "1.8", "-encoding", "utf8") }

  override def scalacOptions = T { Seq(
    "-target:jvm-1.8",
    "-deprecation",
    "-Yrangepos",
    "-Ydelambdafy:method",
    "-feature",
    "-unchecked",
    "-Xfatal-warnings",
    "-language:postfixOps"
  ) }

  override def ivyDeps = Agg(
    ivy"org.sireum.kekinian::library::${kekinianVersion}",

    // Jetbrains UI Designer
    ivy"com.intellij:forms_rt:${formsRtVersion}"
  )

  override def scalacPluginIvyDeps = Agg(ivy"org.sireum::scalac-plugin::${sireumScalacVersion}")

  override def repositories = super.repositories :+ coursier.Repositories.jitpack

  override def mainClass = T { Some("HAMR_Simple_V4.Demo") }

  implicit def osPath2PathRef(p: os.Path): PathRef = PathRef(p)
}

trait slangEmbeddedProject extends SlangEmbeddedModule {

  def contributedSources: Seq[PathRef] = Seq(
    millSourcePath / os.up / "src" / "main" / "architecture",
    millSourcePath / os.up / "src" / "main" / "art",
    millSourcePath / os.up / "src" / "main" / "bridge",
    millSourcePath / os.up / "src" / "main" / "component",
    millSourcePath / os.up / "src" / "main" / "data",
    millSourcePath / os.up / "src" / "main" / "nix",
    millSourcePath / os.up / "src" / "main" / "seL4Nix"
  )

  override def sources = T.sources(contributedSources)

  object tests extends Tests {

    final override def millSourcePath = super.millSourcePath / os.up / os.up / "src" / "test"

    override def sources = T.sources( millSourcePath / "bridge",
                                      millSourcePath / "util" )

    override def ivyDeps = Agg(ivy"org.scalatest::scalatest::${scalaTestVersion}")

    override def testFrameworks = T { Seq("org.scalatest.tools.Framework") }
  }
}

trait slangEmbeddedInspectorProject extends slangEmbeddedProject {

  override def mainClass = T { Some("HAMR_Simple_V4.InspectorDemo") }

  override def contributedSources =
    super.contributedSources :+ millSourcePath / os.up / "src" / "main" / "inspector"

  // FIXME: 2021.01.04 - the following doesn't work due to javafx/mill resolution issue
  //        -- refer to https://github.com/lihaoyi/mill/issues/767
  // override def ivyDeps = Agg(
  //   ivy"org.sireum::inspector-capabilities::${inspectorVersion}",
  //   ivy"org.sireum::inspector-gui::${inspectorVersion}",
  //   ivy"org.sireum::inspector-services-jvm::${inspectorVersion}"

  // workaround to #767 -- refer to https://github.com/lihaoyi/mill/issues/767#issuecomment-652799588
  override def unmanagedClasspath = T {
    import coursier._

    val files = Fetch().addDependencies(
      dep"org.sireum:inspector-capabilities:0.6-SNAPSHOT",
      dep"org.sireum:inspector-gui:0.6-SNAPSHOT",
      dep"org.sireum:inspector-services-jvm:0.6-SNAPSHOT"
    ).addRepositories(
      Repositories.sonatype("releases"),
      Repositories.jitpack
    ).run()
    val pathRefs = files.map(f => PathRef(Path(f)))
    Agg(pathRefs : _*)
  }
}
