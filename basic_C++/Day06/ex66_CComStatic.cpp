#include <iostream>
using std::cout;
using std::endl;

void Static_Counter()
{
	static int cnt; // ������ ������ �Ҵ�(���α׷��� ������ �����)
	cnt++;
	cout << "Current Static cnt : " << cnt << endl;
} // �Լ��� ������ cnt �����������

void Counter()
{
	int cnt = 0;
	cnt++;
	cout << "Current cnt : " << cnt << endl << endl;
} // �Լ� ������ ���ÿ� �����

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		Static_Counter(); // �����Ϳ����� ����� cnt�� �ҷ���
		Counter(); // cnt �Ź� ���� ������
	}
	return 0;
}