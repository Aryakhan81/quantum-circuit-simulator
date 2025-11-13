/*
 * Complex.h
 *
 *  Created on: Nov 12, 2025
 *      Author: aryagharib
 */

#ifndef HELPER_COMPLEX_H_
#define HELPER_COMPLEX_H_

class Complex {
public:
	// Constructor/destructor
	Complex();
	Complex(double re, double im);
	virtual ~Complex();
	Complex(const Complex &other);

	// Operators
	Complex operator+(const Complex &c) const;
	Complex operator-(const Complex &c) const;
	//Complex operator*(const Complex &c);
	//Complex operator/(const Complex &c);

	// Other methods
	double getRe() const;
	double getIm() const;
	double mag() const;
	void display() const;

private:
	double re;
	double im;
};

#endif /* HELPER_COMPLEX_H_ */
