/* ���ڸ� �ϳ� �Է� �޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷� */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int num;
	int result = 0;

	cout << "������ �ϳ� �Է��ϼ��� : ";
	cin >> num;
	cout << "--������ ���� ���--" << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << num << "x" << i << " = " << num * i << endl;
	}

	return 0;
}