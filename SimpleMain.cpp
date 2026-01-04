// Just a small personal project for understanding some aspects of gcc,
// assembly code, and machine code. A touch of clang and LLVM too.

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

	// Set desired breakpoints.
		// Types of breakpoints:
			// Breakpoints: Pauses execution at requested point(s).
			// Set with line number or function.
			// `break 2` or `break main`

			// Watchpoints: Pauses execution when an object, expression, variable,
			// or memory address(es)* changes.
			// *This is more nuanced than I initially thought; rewrite required.
			// UPDATE: `-l` flag has as something to do with scoping issues; may need to revisit
			// scoping issues/concerns for breakpoints in general. Maybe I do not fully
			// understand relationship yet.

			// Tracepoints: Passively logs information about requested point(s).
			// ADD: Catchpoints: Stop execution at requested point.

	// List all breakpoints set.
	// `info break`

	// Run gdb
	// `run`
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

	// Note: The human-readable version of LLVM bitcode
	// can be output into an .ll (LLVM IR) file.
	// gcc does not natively support LLVM IR, although one can use
	// clang.
	// `clang -S -emit-llvm SimpleMain.cpp -o SimpleMain.ll`

	// For clarity, the intermediate file extention types
	// saved are .bc, .ii, .o, and .s.
// END: Compilation (all steps)
//

//
// START: Optimization Nuances {rename?}
	// Compare binary files Command(s)
		// Mac/Raw Linux:
		// `cmp a.out SimpleMain.o`
		// Prints the first offset and line number location.

		// `cmp -bl a.out SimpleMain.o`
		// man: `-b` flag prints differing bytes.
		// If run without `-l` flag will only output the first differing byte.
		// man: `-l` flag outputs byte numbers and differing byte values.
		// Column organization: Offset, first file's byte value, second file's byte value
		// ADD: Byte offset definition

		// ADD: `-bl` outputs a report; column organization

		// No output indicates files are identical.
// END: Optimization Nuances
//

// Simple c++ program.
int main() {
	return 0;
}