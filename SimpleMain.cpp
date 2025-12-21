// Just a small personal project for understanding some aspects of gcc,
// assembly code, and machine code.

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


// `gcc -S SimpleMain.cpp`
// Generates SimpleMain.s
	// SimpleMain.s contains SimpleMain.cpp's assembly code.

// Simple c++ program.
int main() {
	return 0;
}