#include <iostream>
using std::cout;
using std::endl;

class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl;
	}
	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA& ref; // 객체참조
	const int& num; // 상수형태의 참조자

public:
	BBB(AAA&r, const int&n) : ref(r), num(n) {}
	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num " << num << endl;
	}
};

int main(void)
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();

	return 0;
}