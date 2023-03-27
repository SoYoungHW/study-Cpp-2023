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
	cout << "��ü����" << endl;
	}
	SelfRef& Adder(int n) // ��ü�ڽ��� ��ȯ�� �� �ִ� ����
	{
		num += n;
		return *this; // ��ü�ڽ��� ��ȯ(������X)
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