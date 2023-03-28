#include <iostream>
using std::cout;
using std::endl;

class SoSimple
{
private:
	int num1;
	mutable int num2; // const 무력화

public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2) {}
	void ShowSimpleData() const
	{
		cout << num1 << ", " << num2 << endl;
	}
	void CopyToNum2() const // mutable로 값변경 가능해짐
	{
		num2 = num1;
	}
};

int main(void)
{
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();

	return 0;
}