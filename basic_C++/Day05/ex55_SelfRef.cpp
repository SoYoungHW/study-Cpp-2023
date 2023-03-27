#include <iostream>
using std::sin;
using std::cout;
using std::endl;

class SelfRef
{
private:
	int num;

public:
	SelfRef(int n) : num(n) 
	{
	cout << "객체생성" << endl;
	}
	SelfRef& Adder(int n) // 객체자신을 반환할 수 있는 참조
	{
		num += n;
		return *this; // 객체자신을 반환(포인터X)
	}
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};

int main(void)
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}