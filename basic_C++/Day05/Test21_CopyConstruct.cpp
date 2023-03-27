#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class MyClass
{
private :
	int num;
public:
	MyClass(int n) : num(n)
	{
		cout << "������ ȣ��" << endl;
	}
	MyClass(const MyClass &other)	// ������, ���� ���� ����
	{
		cout << "��������� ȣ��" << endl;
		num = other.num;
	}
	void getData()
	{
		cout << num << endl;
	}
};

int main(void)
{
	MyClass m1(10);
	MyClass m2 = m1;
	MyClass m3(m2);

	m1.getData();
	m2.getData(); // ��������� ȣ��, int num2 = num1, CŸ��
	m3.getData(); // ��������� ȣ��, C++Ÿ�� 
				  // ���� ����

	return 0;
}

/*	1. ����������� �Ű������� ������(��üŸ���� ���� ���ѷ����� ����)
	2. �ڵ����� �������(����Ʈ ���������) - �������� �޸𸮸� �Ҵ���� ��(new) ������ ���� 
		- ���� ���� */

