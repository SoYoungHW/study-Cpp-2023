#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 1020;
	int &num2 = num1; // �������� ����, ����� ���ÿ� �ʱ�ȭ�ʿ�

	num2 = 3047;
	cout << "VAL : " << num1 << endl;
	cout << "REF : " << num2 << endl;

	cout << "VAL : " << &num1 << endl;
	cout << "REF : " << &num2 << endl;

	return 0;
}