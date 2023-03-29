#include <iostream>
using std::cout;
using std::endl;

class First
{
public:
	virtual void MyFunc() { cout << "FirstFunc" << endl; }
	// 부모클래스에 virtual 붙이면 자식클래스는 자동으로 가상함수가 됨
};

class Second : public First
{
public:
	void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second
{
public:
	void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main(void)
{
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();

	delete tptr;
	return 0;
}