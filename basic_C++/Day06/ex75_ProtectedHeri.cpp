#include <iostream>
using std::cout;
using std::endl;

class Base
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;

	Base() : num1(1), num2(2), num3(3) {}
};

// class Derived : protected Base {};
class Derived : public Base {};

int main(void)
{
	Derived drv;
	// cout << drv.num3 << endl; // 에러발생
	cout << drv.num3 << endl;

	return 0;
}

