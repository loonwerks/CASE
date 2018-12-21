package com.collins.atc.agree.command;

import org.osate.xtext.aadl2.parsing.AnnexParserAgent;

public class AgreeCommandRuntimeModule extends org.osate.xtext.aadl2.Aadl2RuntimeModule {

	@Override
	public Class<? extends org.eclipse.xtext.linking.ILinker> bindILinker() {
		return AnnexParserAgent.class;
	}
}