/* ����ڷκ��� �� 5���� ������ �Է¹޾Ƽ�, �� ���� ����ϴ� ���α׷� - ��� */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int val;
	int result = 0;

	for (int i = 1; i <= 5; i++)
	{
		cout << i << " ��° ���� �Է� : ";
		cin >> val;
		result += val;
	}

	cout << "�հ� : "<< result << endl;
	return 0;
}