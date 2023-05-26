#include"classFraction.h"

void fraction::setnum(double Num) {
	num = Num;
}

void fraction::setden(double Den) {
	den = Den;
}

double fraction::multiplate(double number) {
	double cNum{}, cDen{};
	double returnNumber{};
	cNum = num * number;
	cDen = den * 1 ;
	returnNumber = cNum / cDen;
	return returnNumber;
}
double fraction::minus(double number) {
	double cNum{}, cDen{};
	double returnNumber{};
	cNum = (num * 1) - (number * den);
	cDen = den * 1;
	returnNumber = cNum / cDen;
	return returnNumber;
}

double fraction::plus(double number) {
	double cNum{}, cDen{};
	double returnNumber{};
	cNum = (num * 1) + (number * den);
	cDen = den * 1;
	returnNumber = cNum / cDen;
	return returnNumber;
}

double fraction::division(double number) {
	double cNum{}, cDen{};
	double returnNumber{};
	cNum = num * 1;
	cDen = den * number;
	returnNumber = cNum / cDen;
	return returnNumber;
}

//===================================================
double fraction::multiplate(fraction fr) {
	double cNum{}, cDen{};
	double number{};
	cNum = num * fr.num;
	cDen = den * fr.den;
	number = cNum / cDen;
	return number;
}

double fraction::minus(fraction fr) {
	double cNum{}, cDen{};
	double number{};
	cNum = (num * fr.den) - (fr.num * den);
	cDen = den * fr.den;
	number = cNum / cDen;
	return number;
}

double fraction::plus(fraction fr) {
	double cNum{}, cDen{};
	double number{};
	cNum = (num*fr.den) + (fr.num*den);
	cDen = den * fr.den;
	number = cNum / cDen;
	return number;
}

double fraction::division(fraction fr) {
	double cNum{}, cDen{};
	double number{};
	cNum = num * fr.den;
	cDen = den * fr.num;
	number = cNum/cDen;
	return number;
}
