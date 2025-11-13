/*
 * Test.cpp
 *
 *  Created on: Nov 12, 2025
 *      Author: aryagharib
 */

#include <string>
#include <iostream>

using namespace std;

int test(string name, bool exp) {
	if (exp) {
		cout << name << " PASSED ✅" << endl;
		return 0;
	} else {
		cout << name << " FAILED ❌" << endl;
		return 1;
	}
}


