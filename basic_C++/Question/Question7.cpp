/* 참조자를 이용해서 다음 요구사항을 부합하는 함수 구현
1. 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
2. 인자로 전달된 int형 변수의 부호를 바꾸는 함수*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void func1(int &num)
{
	num++;
}

void func2(int& num)
{
	num *= -1;
}

int main(void)
{
	int val = 10;
	func1(val);
	cout << val << endl;

	func2(val);
	cout << val << endl;

	return 0;
}