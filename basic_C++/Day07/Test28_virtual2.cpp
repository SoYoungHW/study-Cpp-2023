#include <iostream>
using std::cout;
using std::endl;

class Super
{
public:
	virtual void func1() { cout << "Super::func1()" << endl; }
	virtual void func2() { cout << "Super::func2()" << endl; }
	void func3() { cout << "Super::func3()" << endl; }
};

class Sub : public Super
{
public:
	void func1() { cout << "Sub::func1()" << endl; }
	void func2() { cout << "Sub::func2()" << endl; }
	void func3() { cout << "Sub::func3()" << endl; }
	void func4() { cout << "Sub::func4()" << endl; }
};

int main(void)
{
	Super super;
	Sub sub;
	Super* sptr = new Sub;
	sptr->func1();
	sptr->func2();
	sptr->func3();

	delete sptr;

	return 0;
}