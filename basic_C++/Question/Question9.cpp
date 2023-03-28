/* 포인터 선언 / 참조자 선언 이용해서 저장된 값 출력 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main(void)
{
	const int num = 12;
	const int* ptr = &num;
	const int &ref = *ptr;
	cout << ptr << endl;
	cout << ref << endl;
}