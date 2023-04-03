// author È²¼Ò¿µ 
#include <iostream>
#include "Calculator.h"
using std::cin;
using std::cout;
using std::endl;

Calculator::Calculator()
{
	double num1 = 0;
	char oper = NULL;
	double num2 = 0;
}

double Calculator::Calculate(double x, char cper, double y) // °è»ê ¸â¹öÇÔ¼ö Á¤ÀÇ
{
	num1 = x;
	oper = cper;
	num2 = y;

	if (oper == '+') // µ¡¼À ¿¬»ê
		return (num1 + num2);

	else if (oper == '-') // »¬¼À ¿¬»ê
		return (num1 - num2);

	else if (oper == '*') // °ö¼À ¿¬»ê
		return (num1 * num2);

	else if (oper == '/') // ³ª´°¼À ¿¬»ê
		return (num1 / num2);

	else
	{
		cin.clear();
		cin.ignore(100, '\n');
	}
}

void Calculator::ShowCalculate() // °á°úÃâ·Â ¸â¹öÇÔ¼ö Á¤ÀÇ
{
	cout << endl << "-----Result-----" << endl;
	cout << " (" << num1 << ") " << oper << " (" << num2 << ") " << " = ";
	cout << Calculate(num1, oper, num2) << endl << endl;
}

Calculator::~Calculator() {}