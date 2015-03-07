#include "FRACTION.h"
#include <iostream>

using namespace std;

Fraction::Fraction(int numer, int denom)  //Define the constructor
{
	numerator = numer;
	denominator = denom;
}
Fraction::~Fraction()                    //Define the destructor
{

}

int Fraction::getNumerator()
{
	return numerator;
}

int Fraction::getDenominator()
{
	return denominator;
}

void Fraction::setNumerator(int num)
{
	numerator = num;
}

void Fraction::setDenominator(int den)
{
	denominator = den;
}

//Define the operations that need to be done by each of the memeber methods
//

Fraction Fraction::add(Fraction number)
{
	return Fraction(numerator*number.denominator + numerator*number.denominator, denominator*number.denominator);
}

Fraction Fraction::subtract(Fraction number)
{
	return Fraction(numerator*number.denominator - numerator*number.denominator, denominator*number.denominator);
}

Fraction Fraction::multiply(Fraction number)
{
	return Fraction(numerator*number.numerator, denominator*number.denominator);
}

Fraction Fraction::divide(Fraction number)
{
	return Fraction(numerator*number.denominator, denominator*number.numerator);
}

//Memeber method for printing results

void Fraction::print()
{
	int x, y;
	if (numerator == 0)
	{
		cout << "The answer is 0";
	}
	else if (denominator == 1)
	{
		cout << "The  answer is" << numerator;
	}
	else if (numerator > denominator)    //If the numerator is greater than the denominator, then change to a mixed number
	{
		x = numerator / denominator;    
		y = numerator % denominator;
		cout << "The mixed number fraction is" << x << "and" << y << "/" << denominator << endl;
	}
	else
		cout << "The result is" << numerator << "/" << denominator << endl;
}


//Operator Overloading which implements addition, subtraction, multiplication and division as memeber functions
Fraction Fraction::operator+(Fraction number)
{
	return Fraction(numerator*number.denominator + numerator*number.denominator, denominator*number.denominator);
}

Fraction Fraction::operator-(Fraction number)
{
	return Fraction(numerator*number.denominator - numerator*number.denominator, denominator*number.denominator);
}

Fraction Fraction::operator*(Fraction number)
{
	return Fraction(numerator*number.numerator, denominator*number.denominator);
}

Fraction Fraction::operator/(Fraction number)
{
	return Fraction(numerator*number.denominator, denominator*number.numerator);
}
