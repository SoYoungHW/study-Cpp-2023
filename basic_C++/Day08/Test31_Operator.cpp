#include <iostream>
using std::cout;
using std::endl;

class MyClass
{
private:
	int num1, num2;
	const char* name;
public:
	MyClass(int n1=0, int n2=0, const char* xname=NULL) // ����Ʈ �ʱ�ȭ
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
	cm1 = cm; // ��ü���� ���Կ��갡��
	cm1.ShowData();


	return 0;
}