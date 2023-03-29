/* 계산기 기능의 Calculator 클래스 정의
1. 덧셈, 뺄셈, 곱셈, 나눗셈 기능
2. 연산을 할 때마다 어떠한 연산을 몇 번 수행했는지 기록 */

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