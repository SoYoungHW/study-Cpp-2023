/* ���� ����� Calculator Ŭ���� ����
1. ����, ����, ����, ������ ���
2. ������ �� ������ ��� ������ �� �� �����ߴ��� ��� */

#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;

class Calculator
{
private:
	double num1;
	double num2;

public:
	double Add(double x, double y);
	double Sub() { return num1 - num2; }
	double Mul() { return num1 * num2; }
	double Div() { return num1 / num2; }
};

Calculator::Add(double x, double y)
{
	
}

int main(void)
{
	Calculator cal;
	
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;

	return 0;
}