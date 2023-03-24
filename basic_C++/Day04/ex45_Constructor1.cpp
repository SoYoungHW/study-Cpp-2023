#include <iostream>
using std::cout;
using std::endl;

class SimpleClass
{
private:
	int num1;
	int num2;

public:
	/* ������ �����ε� */
	SimpleClass() // ����Ʈ ������
	{
		cout << "����Ʈ ������" << endl;
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n) // �μ��ϳ��� ���� ������
	{
		cout << "�μ��ϳ� ������" << endl;
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2) // �μ��ΰ��� ���� ������
	{
		cout << "�μ��ΰ� ������" << endl;
		num1 = n1;
		num2 = n2;
	}

	/* SimpleClass(int n1=0, int n2=0) ����Ʈ�� ����
	{
		num1 = n1;
		num2 = n2;
	} �����ϸ� ����Ʈ ������ ��� */

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1;
	sc1.ShowData();

	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();

	return 0;
}