/*
 * WeightedKet.h
 *
 *  Created on: Nov 12, 2025
 *      Author: aryagharib
 */



#ifndef WEIGHTEDKET_H_
#define WEIGHTEDKET_H_

#include "Complex.h"

class WeightedKet {
public:
	WeightedKet();
	WeightedKet(int size, Complex amplitude, unsigned long long int ket);
	virtual ~WeightedKet();
	WeightedKet(const WeightedKet &other);

	// For sorting the kets before aggregation
	static bool compareKets(const WeightedKet &ket1, const WeightedKet &ket2);

	// Getters
	int getSize() const;
	Complex getAmplitude() const;
	unsigned long long int getKet() const;

	// Setters
	void setAmplitude(Complex amplitude);
	void setKet(unsigned long long int ket);

private:
	int size;
	Complex amplitude;
	unsigned long long int ket;
};

#endif /* WEIGHTEDKET_H_ */
