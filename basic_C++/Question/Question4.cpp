/* �Ǹ޿����� �޿� ��� ���α׷�
- �Ǹſ����� �Ŵ� 50������ �⺻�ް� ��ǰ�ǸŰ����� 12%�� �ش��ϴ� ���� ����
- �̷��� �޿��� ����� -1�� �ɶ����� ��� */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int CalSales(int sales);

int main(void)
{
	int sales;

	while (true)
	{
	cout << "�Ǹ� �ݾ��� ���������� �Է� : ";
	cin >> sales;
	cout << "�̹� �� �޿� : " << CalSales(sales) << " ����" << endl;

	if (sales == -1)
		break;
	}

	cout << "���α׷��� �����մϴ�." << endl;

	return 0;
}

int CalSales(int sales)
{
	return 50 + (sales * 0.12);
}