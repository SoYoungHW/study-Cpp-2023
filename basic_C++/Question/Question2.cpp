/* ���α׷� ����ڷκ��� �̸��� ��ȭ��ȣ�� ���ڿ��� ���·� �Է¹޾Ƽ�,
�Է¹��� �����͸� �״�� ����ϴ� ���α׷� */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	char Name[10];
	char phoneNum[15];

	cout << "�̸��� �Է��ϼ��� : ";
	cin >> Name;
	cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
	cin >> phoneNum;

	cout << "�̸� : " << Name << endl;
	cout << "��ȭ��ȣ : " << phoneNum << endl;

	return 0;
}