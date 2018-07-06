package agreeToJson;

import java.util.ArrayList;

import org.eclipse.emf.common.util.EList;
import org.osate.aadl2.AnnexSubclause;
import org.osate.aadl2.Comment;
import org.osate.aadl2.ComponentClassifier;
import org.osate.aadl2.NamedElement;
import org.osate.annexsupport.AnnexUtil;

import com.rockwellcollins.atc.agree.agree.AgreeContractSubclause;
import com.rockwellcollins.atc.agree.agree.AgreePackage;
import com.rockwellcollins.atc.agree.agree.Contract;
import com.rockwellcollins.atc.agree.agree.Expr;
import com.rockwellcollins.atc.agree.agree.NestedDotID;
import com.rockwellcollins.atc.agree.agree.SpecStatement;
import com.rockwellcollins.atc.agree.agree.impl.AADLEnumeratorImpl;
import com.rockwellcollins.atc.agree.agree.impl.AgreeContractImpl;
import com.rockwellcollins.atc.agree.agree.impl.AssertStatementImpl;
import com.rockwellcollins.atc.agree.agree.impl.AssignStatementImpl;
import com.rockwellcollins.atc.agree.agree.impl.AssumeStatementImpl;
import com.rockwellcollins.atc.agree.agree.impl.BinaryExprImpl;
import com.rockwellcollins.atc.agree.agree.impl.EqStatementImpl;
import com.rockwellcollins.atc.agree.agree.impl.GuaranteeStatementImpl;
import com.rockwellcollins.atc.agree.agree.impl.IntLitExprImpl;
import com.rockwellcollins.atc.agree.agree.impl.NestedDotIDImpl;

import agreeToJson.json.ArrayValue;
import agreeToJson.json.ObjectValue;
import agreeToJson.json.Pair;
import agreeToJson.json.StringValue;
import agreeToJson.json.Value;

public class AgreeTranslate {

	private Value genNamedElement(NamedElement ne) {
		return StringValue.build(ne == null ? "null" : ne.getName());
	}

	private Value genBinaryExprImpl(BinaryExprImpl expr) {
		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build("kind", "binary"));
		pairList.add(Pair.build("left", genExpr(expr.getLeft())));
		pairList.add(Pair.build("op", (expr.getOp())));
		pairList.add(Pair.build("right", genExpr(expr.getRight())));
		return ObjectValue.build(pairList);
	}

	private Value genIntLitExprImpl(IntLitExprImpl expr) {
		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build("kind", "intLit"));
		pairList.add(Pair.build("value", StringValue.build(expr.getVal())));
		return ObjectValue.build(pairList);
	}

	private Value genNestedDotIDImpl(NestedDotIDImpl expr) {
		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build("kind", "nestedDotId"));
		String id = expr.getBase().getName();
		NestedDotID sub = expr.getSub();

		while (sub != null) {
			if (sub instanceof NestedDotIDImpl) {
				id += "." + sub.getBase().getName();
				sub = sub.getSub();
			}
		}


		if (expr.getTag() != null) {
			id += "." + expr.getTag();
		}

		pairList.add(Pair.build("name", id));
		return ObjectValue.build(pairList);
	}


	private Value genExpr(Expr expr) {

		if (expr instanceof IntLitExprImpl) {
			return genIntLitExprImpl((IntLitExprImpl) expr);
		} else if (expr instanceof BinaryExprImpl) {
			return genBinaryExprImpl((BinaryExprImpl) expr);
		} else if (expr instanceof NestedDotIDImpl) {
			return genNestedDotIDImpl((NestedDotIDImpl) expr);
		} else if (expr instanceof AADLEnumeratorImpl) {
			return genAADLEnumeratorImpl((AADLEnumeratorImpl) expr);
		} else {
			return StringValue.build(expr == null ? "null" : expr.toString());
		}
	}

	private Value genAADLEnumeratorImpl(AADLEnumeratorImpl expr) {
		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build("kind", "aadlEnum"));
		pairList.add(Pair.build("type", genExpr(expr.getEnumType())));
		pairList.add(Pair.build("value", expr.getValue()));
		return ObjectValue.build(pairList);
	}

	private Value genAssertStatementImpl(AssertStatementImpl stmt) {
		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build("kind", "assert"));
		pairList.add(Pair.build("label", stmt.getStr()));
		pairList.add(Pair.build("expr", genExpr(stmt.getExpr())));
		return ObjectValue.build(pairList);
	}


	private Value genAssumeStatementImpl(AssumeStatementImpl stmt) {
		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build("kind", "assume"));
		pairList.add(Pair.build("label", stmt.getStr()));
		pairList.add(Pair.build("expr", genExpr(stmt.getExpr())));
		return ObjectValue.build(pairList);
	}

	private Value genEqStatementImpl(EqStatementImpl stmt) {
		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build("kind", "eq"));
		pairList.add(Pair.build("expr", genExpr(stmt.getExpr())));
		return ObjectValue.build(pairList);
	}

	private Value genGuaranteeStatementImpl(GuaranteeStatementImpl stmt) {
		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build("kind", "gurantee"));
		pairList.add(Pair.build("label", stmt.getStr()));
		pairList.add(Pair.build("expr", genExpr(stmt.getExpr())));
		return ObjectValue.build(pairList);
	}

	private Value genAssignStatementImpl(AssignStatementImpl stmt) {
		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build("kind", "assign"));
		pairList.add(Pair.build("expr", genExpr(stmt.getExpr())));
		return ObjectValue.build(pairList);
	}

	public Value genSpecStatement(SpecStatement stmt) {

		if (stmt instanceof AssertStatementImpl) {
			return genAssertStatementImpl((AssertStatementImpl) stmt);
		} else if (stmt instanceof AssumeStatementImpl) {
			return genAssumeStatementImpl((AssumeStatementImpl) stmt);
		} else if (stmt instanceof EqStatementImpl) {
			return genEqStatementImpl((EqStatementImpl) stmt);
		} else if (stmt instanceof GuaranteeStatementImpl) {
			return genGuaranteeStatementImpl((GuaranteeStatementImpl) stmt);
		} else if (stmt instanceof AssignStatementImpl) {
			return genAssignStatementImpl((AssignStatementImpl) stmt);
		} else {
			return StringValue.build(stmt.toString());
		}

	}


	public ObjectValue genContract(Contract contr) {
		ArrayList<Pair> pairList = new ArrayList<Pair>();

		if (contr instanceof AgreeContractImpl) {
			EList<SpecStatement> stmts = ((AgreeContractImpl) contr).getSpecs();

			ArrayList<Value> stmtJsonList = new ArrayList<Value>();
			for (SpecStatement stmt : stmts) {
				stmtJsonList.add(genSpecStatement(stmt));
			}
			pairList.add(Pair.build("statements", ArrayValue.build(stmtJsonList)));

			ArrayList<Value> comJsonList = new ArrayList<Value>();
			for (Comment com : contr.getOwnedComments()) {
				comJsonList.add(StringValue.build(com.getBody()));
			}
			pairList.add(Pair.build("comments", ArrayValue.build(comJsonList)));
		}

		return ObjectValue.build(pairList);
	}

	public Value genComponentClassifier(ComponentClassifier cc) {

		ArrayList<Value> components = new ArrayList<Value>();

		EList<AnnexSubclause> annexSubClauses = AnnexUtil.getAllAnnexSubclauses(cc,
				AgreePackage.eINSTANCE.getAgreeContractSubclause());

		for (AnnexSubclause anx : annexSubClauses) {
			if (anx instanceof AgreeContractSubclause) {
				AgreeContractImpl contr = (AgreeContractImpl) ((AgreeContractSubclause) anx).getContract();
				components.add(genContract(contr));
			}
		}


		return ArrayValue.build(components);
	}

}