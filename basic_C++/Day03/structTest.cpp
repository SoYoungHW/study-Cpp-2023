/* ����� ���� �ڷ����� ����ü(CŸ��) */
#include <iostream>
using std::cout;
using std::endl;

struct Human {
	char name[20];
	int age;
}; // ��������� ����������

int main(void)
{
	struct Human h = {"ȫ�浿", 23};	// ����ü ��������(struct Human Ÿ���� h��������)
										// ���� �ʱ�ȭ(����ü �ٱ�����)

	printf("�̸� : %s\n", h.name);
	printf("���� : %d\n", h.age);

	return 0;
}