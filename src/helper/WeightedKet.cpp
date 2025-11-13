/*
 * WeightedKet.cpp
 *
 *  Created on: Nov 12, 2025
 *      Author: aryagharib
 */

#include "WeightedKet.h"

WeightedKet::WeightedKet() {
	this->size = 0;
	this->amplitude = Complex();
	this->ket = 0;
}

WeightedKet::WeightedKet(int size, Complex amplitude, Ket ket) {
	this->size = size;
	this->amplitude = amplitude;
	this->ket = ket;
}

WeightedKet::~WeightedKet() { }

WeightedKet::WeightedKet(const WeightedKet &other) {
	this->size = other.getSize();
	this->amplitude = other.getAmplitude();
	this->ket = other.getKet();
}

bool WeightedKet::compareKets(const WeightedKet &ket1, const WeightedKet &ket2) {
	return ket1.getKet() < ket2.getKet();
}

int WeightedKet::getSize() const {
	return this->size;
}

Complex WeightedKet::getAmplitude() const {
	return this->amplitude;
}

Ket WeightedKet::getKet() const {
	return this->ket;
}

void WeightedKet::setAmplitude(Complex amplitude) {
	this->amplitude = amplitude;
}

void WeightedKet::setKet(Ket ket) {
	this->ket = ket;
}
