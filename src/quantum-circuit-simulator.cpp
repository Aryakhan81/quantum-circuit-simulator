//============================================================================
// Name        : quantum-circuit-simulator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "test/Complex_Test.h"
#include "test/WeightedKet_Test.h"

using namespace std;

int program_main() {
	cout << "Test main function again" << endl; // prints !!!Hello World!!!
	return 0;
}

int main(int argc, char **argv) {
	if (argc == 1) {
		return program_main();
	} else {
		int test_type = atoi(argv[1]);
		switch (test_type) {
		case 0:
			return complex_test_main();
		case 1:
			return weightedket_test_main();
		default:
			cout << "Unrecognized configuration" << endl;
			return 1;
		}
	}
}
