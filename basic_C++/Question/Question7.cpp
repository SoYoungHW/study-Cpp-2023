/* �����ڸ� �̿��ؼ� ���� �䱸������ �����ϴ� �Լ� ����
1. ���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ�
2. ���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ�*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void func1(int &num)
{
	num++;
}

void func2(int& num)
{
	num *= -1;
}

int main(void)
{
	int val = 10;
	func1(val);
	cout << val << endl;

	func2(val);
	cout << val << endl;

	return 0;
}