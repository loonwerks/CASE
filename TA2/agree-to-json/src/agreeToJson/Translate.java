package agreeToJson;

import java.util.ArrayList;
import java.util.List;

import org.eclipse.emf.ecore.EObject;
import org.eclipse.xtext.EcoreUtil2;
import org.osate.aadl2.AadlPackage;
import org.osate.aadl2.BooleanLiteral;
import org.osate.aadl2.BusAccess;
import org.osate.aadl2.Classifier;
import org.osate.aadl2.ComponentImplementation;
import org.osate.aadl2.ComponentType;
import org.osate.aadl2.ConnectedElement;
import org.osate.aadl2.Connection;
import org.osate.aadl2.DataPort;
import org.osate.aadl2.EventDataPort;
import org.osate.aadl2.EventPort;
import org.osate.aadl2.Feature;
import org.osate.aadl2.ModalPropertyValue;
import org.osate.aadl2.Property;
import org.osate.aadl2.PropertyAssociation;
import org.osate.aadl2.PropertySet;
import org.osate.aadl2.util.Aadl2Switch;

import agreeToJson.json.ArrayValue;
import agreeToJson.json.ObjectValue;
import agreeToJson.json.Pair;
import agreeToJson.json.StringValue;
import agreeToJson.json.Value;

public class Translate extends Aadl2Switch<Value> {

	@Override
	public ObjectValue caseAadlPackage(AadlPackage pkg) {
		ArrayList<Pair> pkgBuilder = new ArrayList<Pair>();
		pkgBuilder.add(Pair.build("package", pkg.getName()));

		ArrayList<Value> components = new ArrayList<Value>();
		for (Classifier classifier : EcoreUtil2.getAllContentsOfType(pkg, Classifier.class)) {
			components.add(doSwitch(classifier));
		}

		pkgBuilder.add(Pair.build("components", ArrayValue.build(components)));
		return ObjectValue.build(pkgBuilder);
	}

	@Override
	public Value caseComponentType(ComponentType ty) {
		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build("name", ty.getName()));
		pairList.add(Pair.build("type", getType(ty)));

		ArrayList<Value> features = new ArrayList<Value>();
		for (Feature feature : ty.getOwnedFeatures()) {
			features.add(doSwitch(feature));
		}
		pairList.add(Pair.build("features", ArrayValue.build(features)));

		ArrayList<Value> properties = new ArrayList<Value>();
		for (PropertyAssociation pa : ty.getOwnedPropertyAssociations()) {
			Property p = pa.getProperty();
			PropertySet set = EcoreUtil2.getContainerOfType(p, PropertySet.class);
			if (set.getName().equals("CASETA1")) {
				properties.add(doSwitch(pa));
			}
		}
		pairList.add(Pair.build("properties", ArrayValue.build(properties)));
		return ObjectValue.build(pairList);
	}

	@Override
	public Value caseComponentImplementation(ComponentImplementation ci) {
		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build(ci.getTypeName(), ci.getName()));

		ArrayList<Value> connections = new ArrayList<Value>();
		for (Connection c : ci.getAllConnections()) {
			connections.add(doSwitch(c));
		}
		pairList.add(Pair.build("connections", ArrayValue.build(connections)));
		return ObjectValue.build(pairList);
	}

	@Override
	public Value caseConnection(Connection c) {
		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build("name", c.getName()));
		pairList.add(Pair.build("source", getName(c.getSource())));
		pairList.add(Pair.build("destination", getName(c.getDestination())));
		return ObjectValue.build(pairList);
	}

	/* Begin: Features */

	@Override
	public Value caseDataPort(DataPort port) {
		return buildPort(port.getName(), "data", port.isIn(), port.isOut());
	}

	@Override
	public Value caseEventDataPort(EventDataPort port) {
		return buildPort(port.getName(), "event data", port.isIn(), port.isOut());
	}

	@Override
	public Value caseEventPort(EventPort port) {
		return buildPort(port.getName(), "event", port.isIn(), port.isOut());
	}

	@Override
	public Value caseBusAccess(BusAccess access) {
		ArrayList<Pair> portJson = new ArrayList<Pair>();
		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build("name", access.getName()));
		pairList.add(Pair.build("type", "bus"));
		portJson.add(Pair.build("access", ObjectValue.build(pairList)));
		return ObjectValue.build(portJson);
	}

	private Value buildPort(String name, String type, boolean in, boolean out) {
		ArrayList<Pair> portJson = new ArrayList<Pair>();
		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build("name", name));
		pairList.add(Pair.build("type", type));
		pairList.add(Pair.build("flow", getInOutString(in, out)));
		portJson.add(Pair.build("port", ObjectValue.build(pairList)));
		return ObjectValue.build(portJson);
	}

	private String getInOutString(boolean in, boolean out) {
		if (in && out) {
			return "inout";
		}

		if (in) {
			return "in";
		}

		if (out) {
			return "out";
		}

		return null;
	}

	/* End Features */

	/* Begin Properties */

	// this is *ONLY* going to support boolean properties for now.
	@Override
	public Value casePropertyAssociation(PropertyAssociation pa) {
		ArrayList<Pair> property = new ArrayList<Pair>();
		Property p = pa.getProperty();

		List<ModalPropertyValue> values = new ArrayList<>(pa.getOwnedValues());
		//expect just one, because it's boolean
		ModalPropertyValue x = values.get(0);
		if (x.getOwnedValue() instanceof BooleanLiteral) {
			BooleanLiteral bv = (BooleanLiteral) x.getOwnedValue();
			if (bv.getValue()) {
				property.add(Pair.build("property", p.getName()));
			}
		}

		return ObjectValue.build(property);
	}

	private static String getName(ConnectedElement ce) {
		String prefix = "";
		if (ce.getContext() != null) {
			prefix = ce.getContext().getName() + ".";
		}
		return prefix + ce.getConnectionEnd().getName();
	}

	private static String getType(ComponentType ct) {
		return ct.getCategory().getName();
	}

	@Override
	public Value defaultCase(EObject eo) {
		System.out.println(eo.toString());
		return StringValue.build("UNKNOWN");
	}
}
