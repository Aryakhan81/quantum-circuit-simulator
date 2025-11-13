/*
 * Complex.cpp
 *
 *  Created on: Nov 12, 2025
 *      Author: aryagharib
 */

#include "Complex.h"
#include <cmath>
#include <iostream>

Complex::Complex() {
	this->re = 0;
	this->im = 0;

}

Complex::Complex(double re, double im) {
	this->re = re;
	this->im = im;
}

Complex::~Complex() { }

Complex::Complex(const Complex &c) {
	this->re = c.getRe();
	this->im = c.getIm();

}

Complex Complex::operator+(const Complex &c) const {
	double newRe = this->re + c.getRe();
	double newIm = this->im + c.getIm();
	return Complex(newRe, newIm);
}

Complex Complex::operator-(const Complex &c) const {
	double newRe = this->re - c.getRe();
	double newIm = this->im - c.getIm();
	return Complex(newRe, newIm);
}

double Complex::getRe() const {
	return this->re;
}

double Complex::getIm() const {
	return this->im;
}

double Complex::mag() const {
	double reSq = this->re * this->re;
	double imSq = this->im * this->im;
	return sqrt(reSq + imSq);
}

void Complex::display() const {
	if (this->im >= 0) {
		std::cout << this->re << " + " << this->im << "i" << std::endl;
	} else {
		std::cout << this->re << " - " << -1 * this->im << "i" << std::endl;
	}
}


