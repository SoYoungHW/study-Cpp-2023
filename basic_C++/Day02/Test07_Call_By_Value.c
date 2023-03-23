#include <stdio.h>

/* 1.
int main(void)
{
	int n1 = 10;
	int n2 = 20;
	printf("������ n1: %d\t n2: %d\n", n1, n2);

	int temp = n1;
	n1 = 20;
	n2 = temp;
	printf("������ n1: %d\t n2: %d\n", n1, n2);
	
	return 0;
}
*/

// 2. �Լ��� ���� : call - by - value
void swap(int n1, int n2)
{
	int temp;
	temp = n1; // temp = 10
	n1 = n2;   // n1 = 20
	n2 = temp; // n2 = 10
	printf("������ n1: %d\t n2: %d\n", n1, n2);
}

/* �� �Լ��� n1�� n2�� �ٸ���(���� �����ؿ�) */

int main(void)
{
	int n1 = 10, n2 = 20;
	printf("ȣ���� n1: %d\t n2: %d\n", n1, n2);

	swap(n1, n2);
	printf("ȣ���� n1: %d\t n2: %d\n", n1, n2);

	return 0;
}

