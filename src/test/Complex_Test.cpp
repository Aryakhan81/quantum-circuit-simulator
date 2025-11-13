/*
 * Complext_Test.cpp
 *
 *  Created on: Nov 12, 2025
 *      Author: aryagharib
 */


#include "../helper/Complex.h"
#include "Test.h"

int test_add() {
	int failures = 0;

	Complex c1(1.3, 0.5);
	Complex c2;
	Complex res = c1 + c2;
	failures += test("Add complex number with zero", res.getRe() == 1.3 && res.getIm() == 0.5);

	c2 = Complex(-1.3, -0.5);
	res = c1 + c2;
	failures += test("Add complex number to zero", res.getRe() == 0 && res.getIm() == 0);

	c2 = Complex(-5.3, -2.5);
	res = c1 + c2;
	failures += test("Add complex number to negative", res.getRe() == -4 && res.getIm() == -2);

	return failures;
}

int test_sub() {
	int failures = 0;

	Complex c1(1.3, 0.5);
	Complex c2;
	Complex res = c1 - c2;
	failures += test("Sub complex number with zero", res.getRe() == 1.3 && res.getIm() == 0.5);

	c2 = Complex(1.3, 0.5);
	res = c1 - c2;
	failures += test("Sub complex number to zero", res.getRe() == 0 && res.getIm() == 0);

	c2 = Complex(5.3, 2.5);
	res = c1 - c2;
	failures += test("Sub complex number to negative", res.getRe() == -4 && res.getIm() == -2);

	return failures;
}

int test_mag() {
	int failures = 0;

	Complex c1(1.2, 0.5);
	failures += test("Complex number positive components magnitude", c1.mag() == 1.3);

	c1 = Complex(-1.2, -0.5);
	failures += test("Complex number negative components magnitude", c1.mag() == 1.3);

	c1 = Complex();
	failures += test("Complex number zero magnitude", c1.mag() == 0);

	return failures;
}

int complex_test_main() {
	int failures = 0;

	failures += test_add();
	failures += test_sub();
	failures += test_mag();

	return failures;
}


