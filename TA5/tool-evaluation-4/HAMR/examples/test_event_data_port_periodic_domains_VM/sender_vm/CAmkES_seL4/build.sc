import mill._
import scalalib._

// Example Mill build -- the contents of this file will not be overwritten
//
// To open the following project in VSCode, first follow Sireum Kekinian's
// instructions for setting up a development environment using Scala Metals:
//
//   https://github.com/sireum/kekinian#scala-metals
//
// Then open the folder containing this file in VSCode and import the
// mill build when asked.
//
// To run the demo from the command line:
//   mill sender_vm.run
//
// To run the example unit tests:
//   mill sender_vm.test

trait SlangEmbeddedModule extends ScalaModule {
  val scalaVer = "2.13.3"

  val sireumScalacVersion = "4.20200915.f4b7b0e" // https://github.com/sireum/scalac-plugin/tree/4.20200915.f4b7b0e

  val kekinianVersion = "4.20200915.72510af" // https://github.com/sireum/kekinian/tree/4.20200915.72510af

  val scalaTestVersion = "3.2.2"


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

  override def ivyDeps = Agg(ivy"org.sireum.kekinian::library::${kekinianVersion}")

  override def scalacPluginIvyDeps = Agg(ivy"org.sireum::scalac-plugin::${sireumScalacVersion}")

  override def repositories = super.repositories ++ Seq(
    coursier.maven.MavenRepository("https://jitpack.io/"),
  )
}

trait AadlModule extends SlangEmbeddedModule {
  override def sources = T.sources (
    millSourcePath / os.up / "src" / "main" / "architecture",
    millSourcePath / os.up / "src" / "main" / "art",
    millSourcePath / os.up / "src" / "main" / "bridge",
    millSourcePath / os.up / "src" / "main" / "component",
    millSourcePath / os.up / "src" / "main" / "data",
    millSourcePath / os.up / "src" / "main" / "nix",
    millSourcePath / os.up / "src" / "main" / "seL4Nix"
  )
}

trait AadlTestModule extends AadlModule {
  object test extends Tests {

    final override def millSourcePath =
      super.millSourcePath / os.up / os.up / "src" / "test"

    override def sources = T.sources(millSourcePath / "bridge")

    override def ivyDeps = Agg(ivy"org.scalatest::scalatest::${scalaTestVersion}")

    override def testFrameworks = T { Seq("org.scalatest.tools.Framework") }
  }
}

object `sender_vm` extends AadlTestModule {
  override def mainClass = T { Some("sender_vm.Demo") }
}
