#include <stdio.h>

int main(void)
{
	int ary[5] = { 1, 2, 3, 4, 5 }; // �� 20����Ʈ
	printf("ary ��üũ�� : %d\n", sizeof(ary));
	int* pary = ary; // �迭�̸�=�ּ�

	printf("ary �ּ� : %p\n", ary);
	printf("ary[0] �ּ� : %p\n", &ary[0]); // �ּҿ����� �ʿ�(ù��° ���� �迭�ּҿ� ����) 
	printf("ary + 1 : %p\n", ary + 1); // 4����Ʈ ����(�迭�� �ι�° ���ּ�)
	printf("art[1] �ּ� : %p\n", &ary[1]);

	printf("pary �ּ� : %p\n", &pary);
	printf("pary �� : %p\n", pary);
	printf("pary[0] �ּ� : %p\n", &pary[0]);
	printf("pary[0] �� : %d\n", pary[0]);
	printf("pary[0] �� : %d\n", *pary);
	printf("pary[1] �� : %d\n", *pary+1);

	return 0;
}