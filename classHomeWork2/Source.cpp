#include"classfraction.h"
enum choose
{
	mult = 1,
	minusNum,
	plusNum,
	divNum
};

int main() {
	fraction fr1;
	double NUM, DEN;
	double nuM, deN;

	double number;
	int answer;
	int di_or_fr;

	cout << "For Multiplate enter - 1\nFor minus enter - 2\nFor plus enter - 3\nFor Division enter - 4\nEnter: ";
	cin >> answer;


	switch (answer)
	{
	case mult:
		cout << "Enter numerator: ";
		cin >> NUM;
		cout << "Enter denominator: ";
		cin >> DEN;

		fr1.setden(DEN);
		fr1.setnum(NUM);

		cout << "if you want integer enter - 1 \nIf you want fraction enter - 2";
		cin >> di_or_fr;

		switch (di_or_fr)
		{
		case 1:
			cout << "Enter the number to multiplate with: ";
			cin >> number;

			cout << NUM << "/" << DEN << " * " << number << " = " << fr1.multiplate(number);
			break;

		case 2:
			fraction fr2;

			cout << "Enter numerator: ";
			cin >> nuM;
			cout << "Enter denominator: ";
			cin >> deN;

			fr2.setden(deN);
			fr2.setnum(nuM);
			cout << NUM << "/" << DEN << "  *  " << nuM << "/" << deN << " = " << fr1.multiplate(fr2);
			break;

		default:
			break;
		}


		break;

	case minusNum:
		cout << "Enter numerator: ";
		cin >> NUM;
		cout << "Enter denominator: ";
		cin >> DEN;

		fr1.setden(DEN);
		fr1.setnum(NUM);

		cout << "if you want integer enter - 1 \nIf you want fraction enter - 2";
		cin >> di_or_fr;
		switch (di_or_fr)
		{
		case 1:
			cout << "Enter the number for minus: ";
			cin >> number;
			cout << NUM << "/" << DEN << " - " << number << " = " << fr1.minus(number);
			break;

		case 2:
			fraction fr2;


			cout << "Enter numerator: ";
			cin >> nuM;
			cout << "Enter denominator: ";
			cin >> deN;

			fr2.setden(deN);
			fr2.setnum(nuM);
			cout << NUM << "/" << DEN << " - " << nuM << "/" << deN << " = " << fr1.minus(fr2);
			break;

		default:
			break;
		}

		break;


	case plusNum:
		cout << "Enter numerator: ";
		cin >> NUM;
		cout << "Enter denominator: ";
		cin >> DEN;

		fr1.setden(DEN);
		fr1.setnum(NUM);


		cout << "if you want integer enter - 1 \nIf you want fraction enter - 2";
		cin >> di_or_fr;
		switch (di_or_fr)
		{
		case 1:
			cout << "Enter the number for plus: ";
			cin >> number;

			cout << NUM << "/" << DEN << " + " << number << " = " << fr1.plus(number);
			break;

		case 2:
			fraction fr2;

			cout << "Enter numerator: ";
			cin >> nuM;
			cout << "Enter denominator: ";
			cin >> deN;

			fr2.setden(deN);
			fr2.setnum(nuM);

			cout << NUM << "/" << DEN << " + " << nuM << "/" << deN << " = " << fr1.plus(fr2);
			break;

		default:
			break;
		}

		break;

	case divNum:
		cout << "Enter numerator: ";
		cin >> NUM;
		cout << "Enter denominator: ";
		cin >> DEN;

		fr1.setden(DEN);
		fr1.setnum(NUM);

		cout << "if you want integer enter - 1 \nIf you want fraction enter - 2";
		cin >> di_or_fr;
		switch (di_or_fr)
		{
		case 1:
			cout << "Enter the number to divide by: ";
			cin >> number;

			cout << NUM << "/" << DEN << " / " << number << " = " << fr1.division(number);
			break;

		case 2:
			fraction fr2;

			cout << "Enter numerator: ";
			cin >> nuM;
			cout << "Enter denominator: ";
			cin >> deN;

			fr2.setden(deN);
			fr2.setnum(nuM);

			cout << NUM << "/" << DEN << " / " << nuM << "/" << deN << " = " << fr1.division(fr2);
			break;

		default:
			break;
		}

		break;

	default:
		break;
	}

	return 0;
}