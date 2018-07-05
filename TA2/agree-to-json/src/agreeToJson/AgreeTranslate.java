package agreeToJson;

import java.util.ArrayList;

import org.osate.aadl2.Comment;
import org.osate.aadl2.PropertyAssociation;

import com.rockwellcollins.atc.agree.agree.AgreeSubclause;
import com.rockwellcollins.atc.agree.agree.util.AgreeSwitch;

import agreeToJson.json.ArrayValue;
import agreeToJson.json.ObjectValue;
import agreeToJson.json.Pair;
import agreeToJson.json.StringValue;
import agreeToJson.json.Value;

public class AgreeTranslate extends AgreeSwitch<Value> {

	@Override
	public Value caseAgreeSubclause(AgreeSubclause asc) {

		ArrayList<Pair> pairList = new ArrayList<Pair>();
		pairList.add(Pair.build("name", asc.getName()));

		ArrayList<Value> comments = new ArrayList<Value>();
		for (Comment comment : asc.getOwnedComments()) {
			comments.add(StringValue.build(comment.getBody()));
		}
		pairList.add(Pair.build("comments", asc.getOwnedComments().size() + ""));

		ArrayList<Value> pas = new ArrayList<Value>();
		for (PropertyAssociation pa : asc.getOwnedPropertyAssociations()) {
			pas.add(doSwitch(pa));
			pas.add(StringValue.build(pa.getOwnedValues().toString()));
		}
		pairList.add(Pair.build("pas", ArrayValue.build(pas)));

		return ObjectValue.build(pairList);

	}


}