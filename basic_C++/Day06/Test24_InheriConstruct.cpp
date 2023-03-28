#include <iostream>
using std::cout;
using std::endl;

class Super
{
public:
	Super() {cout << "Super()" << endl;}
	~Super() {cout << "~Super()" << endl;}
};

class Sub : public Super
{
public:
	Sub() {cout << "Sub()" << endl;}
	~Sub() {cout << "~Sub()" << endl;}
};

int main(void)
{
	cout << "Start" << endl;
	Sub obj;
	/* Sub 클래스로 호출 -> Super클래스로 가서 생성자 호출-실행 -> Sub클래스 생성자 실행 */
	cout << "Stop" << endl;

	return 0; // 소멸자 (생성과 반대, Sub클래스 먼저 실행)
}