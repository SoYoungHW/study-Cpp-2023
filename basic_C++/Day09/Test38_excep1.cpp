#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int a, b, c, d;
	cout << "���� �Է��ϼ��� > ";
	cin >> a;
	cout << "���� ���� �Է��ϼ��� > ";
	cin >> b;

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
	
	return 0;
}