#include <iostream>

/* int main(void) 0. �⺻
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;

	return 0;
} */

/* ��� - �Լ��̸� (�Է�) */

/* void func(void) // 1. ������� ���� �Լ�
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;
}
int main()
{
	func(); // �Լ�ȣ��
	return 0;
} */

// 2. �Է¸� �ִ� �Լ�(�Ӹ����� : ��� �Լ��̸�(�Է�)
/* void func(int a, int b) // �Է¸���¹� : (�Ű�)������ ����
{
	int res = a + b;
	std::cout << res << std::endl;
}
int main()
{
	int a = 10; // ȣ���� �� �Է°��� ���������
	int b = 20;
	func(a, b); // �Է����� �������ִ� ���μ�(a, b)
} */

// 3. ������� �Ѵ� �ִ� �Լ�
int func(int a, int b);	// �Լ�����

int main() // main�Լ� ���� ���� �Ű澵��
{
	int a = 10;
	int b = 20;

	int res = func(a, b); // ��������� func�� res ��(���ϵǴ°�)�� �����ؼ� ���
	std::cout << res << std::endl;
	std::cout << func(a, b) << std::endl; // ��� ����(�ӽ� ��ü�� �����Ǿ� ������)
}

int func(int a, int b)  // �Լ�����
{
	int res = a + b;
	return res; // ����� return������ �ۼ�
}
/* func �Լ��� main���� �ؿ� ������ ����
: ������ ���� ������ func ��� �Լ��� ã�� �� ���� ������
: �׷��� main �Լ� �ؿ� ������ ���� �Լ� ���� main �Լ� ���� ����ش�*/