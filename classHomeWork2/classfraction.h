#pragma once
#include<iostream>

using namespace std;

class fraction
{
private:
	double num;
	double den;

public:
	void setnum(double Num);
	void setden(double Den);

	double multiplate(double number);
	double minus(double number);
	double plus(double number);
	double division(double number);

	double multiplate(fraction fr);
	double minus(fraction fr);
	double plus(fraction fr);
	double division(fraction fr);

	fraction()
	    :num{0},
		den{1} 
	{}
};


