#include <stdio.h>
/* ���� : �޸� ������ �Ҵ��Ͽ� �� ���� ���� ��ȭ���� */

int main(void)
{
	int num = 10; // �ʱ�ȭ
	int num1; // ����
	num = 20; // ����
	num = 30;
	printf("intũ�� : %d\n", sizeof(num)); // ����Ÿ��(4����Ʈ)

	char ch; // ����Ÿ��(1����Ʈ)
	printf("charũ�� : %d\n", sizeof(char));

	double d = 3.14; // �Ǽ�Ÿ��(8����Ʈ)
	printf("doubleũ�� : %d\n", sizeof(double));

	char cha = 0x7f; // 0xǥ�� 16���� 0~9abcdef(4��Ʈ)
					 // 2���� 0111 1111(8��Ʈ) - 8 4 2 1, ���Ͽ��� �ֻ�����Ʈ=��ȣ��Ʈ
							   // ��ȣ��Ʈ�� ���� ���� 0=��� 1=����
	unsigned char cha1 = 0x7f; // ��ȣ��Ʈ�� �Ϲݺ�Ʈ�� ���
	
	printf("cha : %x\t cha : %d\n", cha, cha);
	printf("cha1 : %x\t cha1 : %d\n", cha1, cha1);

	char ch2 = 0x9f; // ������ ��밡��, -128 ~ 0 ~ +127  ffffff(��ȣ��Ʈ�ǰ�)9f
	unsigned char uch2 = 0x9f; // unsigned��ȣ����(�����Ǿ��), 0~255(1����Ʈ�� 256���� ����� �� ����)
	printf("ch2 : %x\t ch2 : %d\n", ch2, ch2);
	printf("uch2 : %x\t uch2 : %d\n", uch2, uch2);
					  // 1001 1111 << 1 : 0011 1110, �ǿ����� ���� �����
	uch2 = uch2 << 1; // << ��Ʈ������, uch2�� �������� 1��Ʈ��ŭ �̵�
	printf("uch2 << 1 : %x\n", uch2);

	ch2 = ch2 << 1;
	printf("ch2 << 1 : %x\n", ch2);

	ch2 = 0x9f;
	uch2 = 0x9f;
	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("ch2 >> 1 : %x\t uch2 >> 1 : %x\n", ch2, uch2);

	return 0;
}