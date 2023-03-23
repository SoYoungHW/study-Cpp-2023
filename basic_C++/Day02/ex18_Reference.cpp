#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 1020;
	int &num2 = num1; // 선언형태 주의, 선언과 동시에 초기화필요

	num2 = 3047;
	cout << "VAL : " << num1 << endl;
	cout << "REF : " << num2 << endl;

	cout << "VAL : " << &num1 << endl;
	cout << "REF : " << &num2 << endl;

	return 0;
}