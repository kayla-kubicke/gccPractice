// Just a small personal project for understanding some aspects of gcc,
// assembly code, and machine code.


//
// START: Debug command(s)
// Mac:
	// `gcc -g SimpleMain.cpp`
	// Generates a.out.dSYM folder (and a.out)
		// Debug SYMbol directory

// Raw Linux:
	// Specify output file, called `Debug` in example.
	// `gcc -g SimpleMain.cpp -o Debug`

	// Run debug file with gdb.
	// `gdb ./Debug`

	// If needed:
	// `set disable-randomization off`

	// 12/21: Ran into gdb privilege issue in Docker container.
	// Not going to worry too much about this for now.
	// Maybe will play with gdb in WSL later to elimate the Docker variable.
// END: Debug
//


//
// START: Preprocessed source code command(s) (preprocessing step)
	// `gcc -E SimpleMain.cpp > SimpleMain.ii`
// END: Preprocessed source code command(s) (preprocessing step)
//


//
// START: Assembly source code command(s) (compilation step)
// man: "The output is in the form of an assembler code file for each
// non-assembler input file specified."
// `-S` flag does not actually assemble, thus no executable is generated.
// According to man, all gcc flags (except -o) specify which stage of compilation you'd like to end at.
// man: "If you only want some of the stages of compilation, you can use -x (or filename suffixes)
// to tell gcc where to start, and one of the options -c, -S, or -E to say where gcc is to stop."

	// `gcc -S SimpleMain.cpp`
// Generates SimpleMain.s
	// SimpleMain.s contains SimpleMain.cpp's assembly code.
// END: Assembly source code command(s) (compilation step)
//


//
// START: Machine code command(s) (assembly step)
	// `gcc -c SimpleMain.cpp`
		// Generates object file, SimpleMain.o
	// One could also use the GNU assembler, `as`, directly.
// END: Machine code command(s) (assembly step)
//

//
// START: Compilation (all steps)
	// Deletes all intermediate files.
	// `gcc SimpleMain.cpp`

	// Saves all intermediate files.
	// `gcc -save-temps SimpleMain.cpp`
	// NOTE: Generates a .bc (LLVM bitcode) file in addition
	// to the others created during compilation.

	// For clarity, the intermediate file extention types
	// saved are .bc, .ii, .o, and .s.
// END: Compilation (all steps)
//

// Simple c++ program.
int main() {
	return 0;
}