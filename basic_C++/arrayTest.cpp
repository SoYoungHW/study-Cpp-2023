#include <iostream>
int main(void)
{
	char ch[6] = "hwang";	// �迭����(�����Ҷ� ���� �ʱ�ȭ�ϴ°� ����
	/* ���� �ٸ� */			// ���ڿ�(�������� null���� ���⿡ +1�� ũ��� ��������)
	ch[0] = 'h';
	ch[1] = 'w';
	ch[2] = 'a';
	ch[3] = 'n';
	ch[4] = 'g'; // �����ϳ��� ���� (�������� null�� �ʿ����)
	for (int i = 0; i < 6; i++) {
		printf("%c", ch[i]);
	}

	printf("\nchar ũ��: %d\n", sizeof(char));
	printf("%s\n", ch);
	printf("ch[5] : %c\n", ch[5]);
	printf("cha[5] : %s\n", ch[5]);
	printf("�迭�̸� ch : %p\n", ch);
	printf("�迭�ּ� ch : %p\n", &ch);


	/* ch[0] = 'a'; �����Ŀ��� �ε��� �����ڸ� ���ؼ� �ϳ��� �־�� */
	/* ���ڿ� - ""���, �ǳ����� null�� */

	return 0;
}