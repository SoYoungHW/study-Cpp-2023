#include <iostream>
using std::cout;
using std::endl;

class MyClass
{
private:
	int num1, num2;
	const char* name;
public:
	MyClass(int n1=0, int n2=0, const char* xname=NULL) // 디폴트 초기화
		: num1(n1), num2(n2), name(xname) {}
	void ShowData()
	{
		cout << num1 << ", " << num2 << ", " << name << endl;
	}
};

int main(void)
{
	MyClass m(1, 2, "hong");
	m.ShowData();

	MyClass cm(m); // cm = m
	cm.ShowData();

	MyClass cm1;
	cm1 = cm; // 객체끼리 대입연산가능
	cm1.ShowData();


	return 0;
}