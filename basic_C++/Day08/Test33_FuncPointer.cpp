/* �Լ�������(fp)
- ������ Ÿ��(����)�� ���� �Լ��� �����Ǿ������� ���� ���� */
#include <iostream>

int add(int n1, int n2)
{
	return n1 + n2;
}

int sub(int n1, int n2)
{
	return n1 - n2;
}

int main(void)
{
	int res;
	int (*fp) (int, int); // �Լ������� ����

	fp = add;
	res = fp(10, 20);
	std::cout << res << std::endl;

	fp = sub;
	res = fp(10, 10);
	printf("%d\n", res);

	printf("%p\n", add); // add�Լ��� �ּҰ�

	return 0;
}