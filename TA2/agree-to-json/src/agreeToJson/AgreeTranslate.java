package agreeToJson;

import com.rockwellcollins.atc.agree.agree.AgreeSubclause;
import com.rockwellcollins.atc.agree.agree.util.AgreeSwitch;

import agreeToJson.json.StringValue;
import agreeToJson.json.Value;

public class AgreeTranslate extends AgreeSwitch<Value> {

	@Override
	public Value caseAgreeSubclause(AgreeSubclause asc) {
		return StringValue.build(asc.toString());
	}
}