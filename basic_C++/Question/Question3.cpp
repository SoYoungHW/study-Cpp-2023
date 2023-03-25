/* 숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int num;
	int result = 0;

	cout << "정수를 하나 입력하세요 : ";
	cin >> num;
	cout << "--구구단 정보 출력--" << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << num << "x" << i << " = " << num * i << endl;
	}

	return 0;
}