#include <iostream>
using std::cout;
using std::endl;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n) {}
	SoSimple& Adder(int n)
	{
		num += n;
		return *this;
	}
	void SimpleFunc()
	{
		cout << "SimpleFunc : " << num << endl;
	}
	void SimpleFunc() const
	{
		cout << "const SimpleFunc : " << num << endl;
	}
};

void YourFunc(const SoSimple&obj) // 객체를 매개변수(참조형태)
{								  // 복사생성자 호출
	obj.SimpleFunc();
}

int main(void)
{
	SoSimple obj1(2);
	const SoSimple obj2(7);

	obj1.SimpleFunc();
	obj2.SimpleFunc();

	YourFunc(obj1);
	YourFunc(obj2);
	return 0;

}