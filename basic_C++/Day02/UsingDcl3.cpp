#include <iostream>

using namespace std; // std 의 모든 것을 사용
// 개별적 선언도 가능함 Using 예제 2번

int main(void)
{
	int num = 20;
	cout << "Hello World" << endl;
	cout << "Hello " << "World" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}