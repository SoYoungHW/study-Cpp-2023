#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void divide(int a, int b)
{
	int c, d;
	try
	{
		if (b == 0) throw b; // ���ܰ� �߻��Ǹ�
		else
		{
			c = a / b;
			cout << "�� : " << c << endl;
			d = a % b;
			cout << "������ :" << d << endl;
		}
	}
	catch (int ex)
	{
		cout << ex << "�� ���� �� �����ϴ�. *���ܹ߻�*" << endl;
		cout << "���ܰ� �߻��Ǿ ��������" << endl;
	}
}

int main(void)
{
	divide(10, 3);
	divide(100, 5);
	divide(3, 0);
	divide(100, 20); // ����

	return 0;
}