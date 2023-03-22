#include <stdio.h>

int main(void)
{
	int ary[5] = { 1, 2, 3, 4, 5 }; // 총 20바이트
	printf("ary 전체크기 : %d\n", sizeof(ary));
	int* pary = ary; // 배열이름=주소

	printf("ary 주소 : %p\n", ary);
	printf("ary[0] 주소 : %p\n", &ary[0]); // 주소연산자 필요(첫번째 방은 배열주소와 동일) 
	printf("ary + 1 : %p\n", ary + 1); // 4바이트 증가(배열의 두번째 방주소)
	printf("art[1] 주소 : %p\n", &ary[1]);

	printf("pary 주소 : %p\n", &pary);
	printf("pary 값 : %p\n", pary);
	printf("pary[0] 주소 : %p\n", &pary[0]);
	printf("pary[0] 값 : %d\n", pary[0]);
	printf("pary[0] 값 : %d\n", *pary);
	printf("pary[1] 값 : %d\n", *pary+1);

	return 0;
}