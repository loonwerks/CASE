package base

import art.{ArchitectureDescription, Bridge, DataContent, UPort}
import org.reactivestreams.Publisher
import org.sireum.hamr.inspector.common.{Filter, Injection, InspectionBlueprint, Msg, Rule}
import org.sireum.hamr.inspector.capabilities.InspectorCapabilitiesLauncher
import org.sireum.hamr.inspector.gui.InspectorGUILauncher
import org.sireum.hamr.inspector.stream.Flux

object InspectorDemo extends App {

  {
    InspectorCapabilitiesLauncher.run(Blueprint)

    val filters: Set[Filter] = Set(NoFilter, EvensOnly)
    val rules: Set[Rule] = Set(Require100OrMore)
    val injections: Set[Injection] = Set()

    InspectorGUILauncher.run(Blueprint, filters, rules, injections, args)
  }

  object Blueprint extends InspectionBlueprint {
    override def ad(): ArchitectureDescription = Arch.ad
    override def serializer(): DataContent => String = JSON.from_artDataContent(_, true).value
    override def deserializer(): String => DataContent = JSON.to_artDataContent(_).left
  }

  object NoFilter extends Filter {
    override def filter(in: Flux[Msg]): Publisher[Msg] = in
  }

  object EvensOnly extends Filter {
    override def filter(in: Flux[Msg]): Publisher[Msg] = in.filter(_.sequence % 2 == 0)
  }

  object Require100OrMore extends Rule {
    override def rule(in: Flux[Msg]): Publisher[_] = in.skip(99).next().single()
  }
}