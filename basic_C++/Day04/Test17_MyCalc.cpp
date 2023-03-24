#include <iostream>

using::std::cin;
using::std::cout;
using::std::endl;

class MyCalc
{
private:
	int num1;
	int num2;

public:
	// 생성자 초기화
	MyCalc(int x, int y) : num1(x), num2(y) {}
	// 콜론초기화(이니셜라이저) == 초기화리스트, 선언과 동시에 초기화
	int add();
	int sub();
	int mul();
	int div();
};

int MyCalc::add()
{
	cout << "두 수의 덧셈 : ";
	return num1 + num2;
}

int MyCalc::sub()
{
	cout << "두 수의 뺄셈 : ";
	return num1 - num2;
}

int MyCalc::mul()
{
	cout << "두 수의 곱셈 : ";
	return num1 * num2;
}

int MyCalc::div()
{
	cout << "두 수의 나눗셈 : ";
	return num1 / num2;
}

int main(void)
{
	int val1, val2;
	cout << "두 개의 정수를 입력하세요 > ";
	cin >> val1;
	cin >> val2; // 같이적으면 오류
	cout << endl;

	MyCalc calculator(val1, val2);

	cout << calculator.add() << endl;
	cout << calculator.sub() << endl;
	cout << calculator.mul() << endl;
	cout << calculator.div() << endl;

	return 0;
}
