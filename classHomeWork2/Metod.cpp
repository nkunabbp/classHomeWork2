#include"classfraction.h"

void fraction::setnum(double Num) {
	num = Num;
}

void fraction::setden(double Den) {
	den = Den;
}

double fraction::multiplate(double number) {
	double c{};
	c = num / den;
	c *= number;
	return c;
}
double fraction::minus(double number) {
	double c{};
	c = num / den;
	c -= number;
	return c;
}

double fraction::plus(double number){
	double c{};
	c = num / den;
	c += number;
	return c;
}

double fraction::division(double number) {
	double c{};
	c = num / den;
	c /= number;
	return c;
}


double fraction::multiplate(fraction fr) {
	double c{};
	double number{};

	number = fr.num / fr.den;
	c = num / den;
	c *= number;
	return c;
}

double fraction::minus(fraction fr) {
	double c{};
	double number{};

	number = fr.num / fr.den;
	c = num / den;
	c -= number;
	return c;
}

double fraction::plus(fraction fr) {
	double c{};
	double number{};

	number = fr.num / fr.den;
	c = num / den;
	c += number;
	return c;
}

double fraction::division(fraction fr) {
	double c{};
	double number{};

	number = fr.num / fr.den;
	c = num / den;
	c /= number;
	return c;
}