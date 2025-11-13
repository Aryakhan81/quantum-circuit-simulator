/*
 * WeightedKet_Test.cpp
 *
 *  Created on: Nov 12, 2025
 *      Author: aryagharib
 */

#include "../helper/WeightedKet.h"
#include "../helper/Complex.h"
#include "Test.h"

int test_getset() {
	int failures = 0;

	WeightedKet k1;
	failures += test("Weighted ket blank constructor gets 0s", k1.getSize() == 0 && k1.getAmplitude().mag() == 0 && k1.getKet() == 0);

	k1 = WeightedKet(10, Complex(0, -1), 2);
	failures += test("Weighted ket nonblank constructor gets vals", k1.getSize() == 10 && k1.getAmplitude().mag() == 1 && k1.getKet() == 2);

	k1.setAmplitude(Complex(2, 0));
	k1.setKet(4);
	failures += test("Weighted ket set", k1.getSize() == 10 && k1.getAmplitude().mag() == 2 && k1.getKet() == 4);

	WeightedKet k2 = k1;
	failures += test("Weighted ket copy constructor", &k1 != &k2 && k1.getSize() == k2.getSize() && k1.getKet() == k2.getKet());

	return failures;
}

int test_compare() {
	int failures = 0;

	WeightedKet k1 = WeightedKet(10, Complex(0, -1), 2);
	WeightedKet k2 = WeightedKet(10, Complex(0.44, -9.4), 3);
	failures += test("Kets are ordered ascendingly by ket number", WeightedKet::compareKets(k1, k2));

	return failures;
}

int weightedket_test_main() {
	int failures = 0;

	failures += test_getset();
	failures += test_compare();

	return failures;
}




