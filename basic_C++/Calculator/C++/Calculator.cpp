// author Ȳ�ҿ� 
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

double Calculator::Calculate(double x, char cper, double y) // ��� ����Լ� ����
{
	num1 = x;
	oper = cper;
	num2 = y;

	if (oper == '+') // ���� ����
		return (num1 + num2);

	else if (oper == '-') // ���� ����
		return (num1 - num2);

	else if (oper == '*') // ���� ����
		return (num1 * num2);

	else if (oper == '/') // ������ ����
		return (num1 / num2);

	else
	{
		cin.clear();
		cin.ignore(100, '\n');
	}
}

void Calculator::ShowCalculate() // ������ ����Լ� ����
{
	cout << endl << "-----Result-----" << endl;
	cout << " (" << num1 << ") " << oper << " (" << num2 << ") " << " = ";
	cout << Calculate(num1, oper, num2) << endl << endl;
}

Calculator::~Calculator() {}