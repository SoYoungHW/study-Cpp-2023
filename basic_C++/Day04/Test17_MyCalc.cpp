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
	// ������ �ʱ�ȭ
	MyCalc(int x, int y) : num1(x), num2(y) {}
	// �ݷ��ʱ�ȭ(�̴ϼȶ�����) == �ʱ�ȭ����Ʈ, ����� ���ÿ� �ʱ�ȭ
	int add();
	int sub();
	int mul();
	int div();
};

int MyCalc::add()
{
	cout << "�� ���� ���� : ";
	return num1 + num2;
}

int MyCalc::sub()
{
	cout << "�� ���� ���� : ";
	return num1 - num2;
}

int MyCalc::mul()
{
	cout << "�� ���� ���� : ";
	return num1 * num2;
}

int MyCalc::div()
{
	cout << "�� ���� ������ : ";
	return num1 / num2;
}

int main(void)
{
	int val1, val2;
	cout << "�� ���� ������ �Է��ϼ��� > ";
	cin >> val1;
	cin >> val2; // ���������� ����
	cout << endl;

	MyCalc calculator(val1, val2);

	cout << calculator.add() << endl;
	cout << calculator.sub() << endl;
	cout << calculator.mul() << endl;
	cout << calculator.div() << endl;

	return 0;
}
