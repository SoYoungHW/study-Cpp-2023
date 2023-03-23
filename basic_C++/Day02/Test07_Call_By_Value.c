#include <stdio.h>

/* 1.
int main(void)
{
	int n1 = 10;
	int n2 = 20;
	printf("변경전 n1: %d\t n2: %d\n", n1, n2);

	int temp = n1;
	n1 = 20;
	n2 = temp;
	printf("변경후 n1: %d\t n2: %d\n", n1, n2);
	
	return 0;
}
*/

// 2. 함수로 구현 : call - by - value
void swap(int n1, int n2)
{
	int temp;
	temp = n1; // temp = 10
	n1 = n2;   // n1 = 20
	n2 = temp; // n2 = 10
	printf("변경후 n1: %d\t n2: %d\n", n1, n2);
}

/* 두 함수의 n1과 n2는 다른것(값만 복사해옴) */

int main(void)
{
	int n1 = 10, n2 = 20;
	printf("호출전 n1: %d\t n2: %d\n", n1, n2);

	swap(n1, n2);
	printf("호출후 n1: %d\t n2: %d\n", n1, n2);

	return 0;
}

