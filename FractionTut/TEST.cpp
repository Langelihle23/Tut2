#include "FRACTION.h"
#include<iostream> 

//Test if the code in the methods is giving expected results
int main()
{
	Fraction first(2, 3);           //First fraction
	Fraction second(1, 7);          //Second fraction
	Fraction answer = first - second;   //Test all four math operators by changing the sign after expected results appear. Addition=17/23, Subtraction=11/22,
	answer.print();                     //Multiplication=2/21, Division= 4 and 2/3
	system("\npause\n");
	return 0;
}