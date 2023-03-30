#include <iostream>
using std::cout;
using std::endl;

class First
{
public:
	void FirstFunc()
	{
		cout << "First Func" << endl;
	}
	virtual void SimpleFunc()
	{
		cout << "First's Simple Func" << endl;
	}
};

class Second : public First
{
public:
	void SecondFunc()
	{
		cout << "Secon Func" << endl;
	}
	virtual void SimpleFunc()
	{
		cout << "Second's Simple Func" << endl;
	}
};

class Third : public Second
{
public:
	void ThirdFunc()
	{
		cout << "Third Func" << endl;
	}
	virtual void SimpleFunc()
	{
		cout << "Third's Simple Func" << endl;
	}
};

int main(void)
{
	Third obj;
	obj.FirstFunc();
	obj.SecondFunc();
	obj.ThirdFunc();
	obj.SimpleFunc();
	cout << "----------" << endl;

	Second& sref = obj;
	sref.FirstFunc();
	sref.SecondFunc();
	sref.SimpleFunc();
	cout << "----------" << endl;


	First& fref = obj;
	obj.FirstFunc();
	obj.SimpleFunc();

	return 0;
}