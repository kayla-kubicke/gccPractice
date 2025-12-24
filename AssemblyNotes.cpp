// Using class for notes; don't want to use markdown.
// Reading: Introduction to Computer Organization, Plantz
// and The Secret Life of Programs, Steinhart

// "Assembly language uses a short mnemonic for each machine language instruction."
// assembler program - translates assembly language into machine language instructions

// Compiling Steps
	//
	// START: Preprocessing Notes
	// Preprocessing Step
		// Preprocessing "resolves compiler directives".
		// compiler directives ("directive" or "pragma") - specifies how a
		// compiler should process input.
		// Directives add code so the compiler can read the "enitre" program
		// at once.

		// Examples for clarity:
			// #include - Adds contents of specified file

			// #define - Creates symbolic name to define an object**
			// so it can be subbed in throughout the code; the preprocessor
			// replaces defined name with the full definition.
			// ** Technically, it may not be a traditional object,
			// but for simplicity...

			// #if ("conditional compilation") - Changes what code is
			// compiled based on params provided (typically?)
	// END: Preprocessing Notes
	//


	//
	//START: Compilation Notes
	// Compilation Step
		// Translates the source code generated during preprocessing into
		// assembly language.
	//END: Compilation Notes
	//


	//
	// START: Assembly Notes
	// Assembly Step
		// Translates the assembly language into machine code.

		// As a side note, gcc uses the GNU assembler, gas. gas is separate
		// from gcc; it is part of GNU Binutils.
		// gcc is a compiler driver; it manages the entire
		// compilation process. The assembler and linker used by gcc to
		// complete the compilation sequence are separate packages.

		// One can run the GNU assembler independently with the `as` command.
		// Also, `as` can be passed the processor architecture type if desired,
		// but I'm unsure if it only supports the native processor and non-natives
		// need to be manually added to the assembler.
			// `as -arch arm64 SimpleMain.s -o SimpleMain.o`
	// END: Assembly Notes
	//


	//
	// START: Linking Notes
	// Linking
			// ADD: ld notes
	// END: Linking Notes
	//