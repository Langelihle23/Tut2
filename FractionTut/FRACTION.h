#ifndef FRACTION_H
#define FRACTION_H


class Fraction
{
private:
	int numerator;
	int denominator;

public:
	Fraction(int numer = 0, int denom = 1);
	~Fraction();
	int getNumerator();
	int getDenominator();
	void setNumerator(int numerator);
	void setDenominator(int denominator);
	Fraction add(Fraction number);
	Fraction subtract(Fraction number);
	Fraction multiply(Fraction number);
	Fraction divide(Fraction number);
	void print();

	Fraction operator+(Fraction number);
	Fraction operator-(Fraction number);
	Fraction operator*(Fraction number);
	Fraction operator/(Fraction number);

};
#endif