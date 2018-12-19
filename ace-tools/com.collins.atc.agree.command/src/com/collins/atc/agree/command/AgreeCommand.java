package com.collins.atc.agree.command;

import java.io.File;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.stream.Stream;

import org.apache.commons.cli.CommandLine;
import org.apache.commons.cli.CommandLineParser;
import org.apache.commons.cli.DefaultParser;
import org.apache.commons.cli.HelpFormatter;
import org.apache.commons.cli.Option;
import org.apache.commons.cli.Options;
import org.apache.commons.cli.ParseException;

public class AgreeCommand {

	public static void main(String[] args) throws Exception {

		String basisFlag = "basis";
		String componentFlag = "component";

		Options options = new Options();


		Option basisOption = new Option("b", basisFlag, false, "basis file");
		options.addOption(basisOption);

		Option componentOption = new Option("c", basisFlag, false, "component file");
		options.addOption(componentOption);

		CommandLineParser parser = new DefaultParser();
		HelpFormatter formatter = new HelpFormatter();
		CommandLine cli = null;

		try {
			cli = parser.parse(options, args);
		} catch (ParseException e) {
			System.out.println(e.getMessage());
			formatter.printHelp("utility-name", options);

			System.exit(1);
		}

		if (cli.getArgList().size() != 1) {
			System.out.println("Wrong number of arguments.");
			formatter.printHelp("utility-name", options);

			System.exit(1);
		}

		if (cli.hasOption(basisFlag)) {

			File basisFile = new File(cli.getArgList().get(0));
			String path = basisFile.getAbsolutePath();
			Stream<String> stream = Files.lines(Paths.get(path));
            stream.forEach((line) -> {
				line = line.replaceFirst("^~", System.getProperty("user.home"));
				File aadlFile = new File(line);
				String aadlPath = "";
				if (aadlFile.isAbsolute()) {
					aadlPath = aadlFile.getAbsolutePath();
				} else {
					aadlPath = basisFile.getParentFile().getAbsolutePath() + File.separator + aadlFile.getPath();
				}

				System.out.println("* aadl path (basis): " + aadlPath);

            });


		} else {

			File aadlFile = new File(cli.getArgList().get(0));
			String aadlPath = aadlFile.getAbsolutePath();
			System.out.println("* aadl path: " + aadlPath);

		}

	}

}
