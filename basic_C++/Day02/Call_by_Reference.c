#include <stdio.h>

// 3. 포인터로 구현 : call-by-reference
void swap(int* pn1, int* pn2)
{
	int temp;
	temp = *pn1; // temp = 10
	*pn1 = *pn2;   // n1 = 20
	*pn2 = temp; // n2 = 10
	
}

int main(void)
{
	int n1 = 10;
	int n2 = 20;
	printf("호출후 n1: %d\t n2: %d\n", n1, n2);
	
	int* a1 = &n1;
	int* a2 = &n2;
	swap(a1, a2);
	printf("호출후 n1: %d\t n2: %d\n", n1, n2);

	return 0;
}